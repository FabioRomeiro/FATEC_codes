/*

+-------------------------------------------------+
|    LABORATÓRIO 3 - Banco de Dados 4º Semestre   |
|                                                 |
|    Autor: Fábio Romeiro                         |
+-------------------------------------------------+

*/

---------------------------------------------------

/*

1. Crie uma procedure capaz de alterar o salário dos empregados de um departamento.
Os parâmetros devem ser o código do departamento e o percentual de reajuste.
Antes de encerrar a procedure imprima as linhas alteradas.

*/
SET SERVEROUTPUT ON
CREATE OR REPLACE PROCEDURE update_salary
  (p_dept_id IN department.department_id%type, p_perc IN NUMBER)
IS
  CURSOR employees_of_id (dept_id department.department_id%type) IS
    SELECT employee_id
      FROM EMPLOYEES
      WHERE department_id = dept_id;

  v_emp_id employee.employee_id%type;
  v_new_salary employee.salary%type;
BEGIN
  OPEN employees_of_id(p_dept_id);

  LOOP
    FETCH employees_of_id INTO v_emp_id;
    EXIT WHEN employees_of_id%NOTFOUND;

    UPDATE EMPLOYEES 
      SET salary = salary * (1 + (p_perc/100)) 
      WHERE CURRENT OF employees_of_id;
  END LOOP;
  CLOSE employees_of_id;
  COMMIT;
END;
---------------------------------------------------

/*

2. Criar uma função capaz de retornar o total de funcionários de um departamento.
Os parâmetros devem ser o nome do departamento.
O retorno é o total de funcionários localizados.

*/
CREATE OR REPLACE FUNCTION total_empl_depart
  (p_dept_name IN department.department_name%type)
  RETURN NUMBER
IS
  CURSOR total (dept_nome department.department_name%type) IS
    SELECT COUNT(e.employee_id) 
      from employees e 
        INNER JOIN department d 
        ON e.department_id = d.department_id
      WHERE d.department_name = dept_nome;
  
  v_total NUMBER;
BEGIN
  OPEN total(p_dept_name);
  FETCH total INTO v_total;
  CLOSE total;
  RETURN v_total;
END;
---------------------------------------------------

/*

6. Criar uma package contendo a procedure e a function criadas, mantendo-as 
de forma pública para serem executadas de maneira externa.

*/

CREATE OR REPLACE PACKAGE proc_n_func IS

  PROCEDURE update_salary
  (p_dept_id IN department.department_id%type, p_perc IN NUMBER);

  FUNCTION total_empl_depart
  (p_dept_name IN department.department_name%type);

END;

CREATE OR REPLACE PACKAGE BODY proc_n_func IS

  PROCEDURE update_salary
    (p_dept_id IN department.department_id%type, p_perc IN NUMBER)
  IS
    CURSOR employees_of_id (dept_id department.department_id%type) IS
      SELECT employee_id
        FROM EMPLOYEES
        WHERE department_id = dept_id;

    v_emp_id employee.employee_id%type;
    v_new_salary employee.salary%type;
  BEGIN
    OPEN employees_of_id(p_dept_id);

    LOOP
      FETCH employees_of_id INTO v_emp_id;
      EXIT WHEN employees_of_id%NOTFOUND;

      UPDATE EMPLOYEES 
        SET salary = salary * (1 + (p_perc/100)) 
        WHERE CURRENT OF employees_of_id;
    END LOOP;
    CLOSE employees_of_id;
    COMMIT;
  END;

  FUNCTION total_empl_depart
    (p_dept_name IN department.department_name%type)
    RETURN NUMBER
  IS
    CURSOR total (dept_nome department.department_name%type) IS
      SELECT COUNT(e.employee_id) 
        from employees e 
          INNER JOIN department d 
          ON e.department_id = d.department_id
        WHERE d.department_name = dept_nome;
    
    v_total NUMBER;
  BEGIN
    OPEN total(p_dept_name);
    FETCH total INTO v_total;
    CLOSE total;
    RETURN v_total;
  END;

END;

---------------------------------------------------

/*

7. Criar um trigger para a tabela hr.employees que verifique:
    Caso o código do departamento do empregado não seja informado 
    no insert ou caso ele não exista na tabela hr.departments, atribuir 
    a ele o valor padrão 20;

*/

CREATE OR REPLACE TRIGGER department_or_20
  BEFORE INSERT ON EMPLOYEES
  FOR EACH ROW
DECLARE
  
  FUNCTION has_department (p_dept_id department.department_id%type)
    RETURN department.department_id%type
  IS 
  BEGIN
    RETURN (
      SELECT department_id FROM DEPARTMENT WHERE department_id = p_dept_id;
    );
  END;

BEGIN
  IF (:NEW.department_id IS NULL OR has_department(:NEW.department_id) IS NULL) THEN
    :NEW.department_id := 20;
  END IF;
END;


DECLARE
  v_department_id := 20;
  v_perc_aumento := 90.50;
BEGIN
  update_salary(p_dept_id => 20, p_perc => 90.50);
END;