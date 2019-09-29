/*

+-------------------------------------------------+
|    LABORATÓRIO 1 - Banco de Dados 4º Semestre   |
|                                                 |
|    Autor: Fábio Romeiro                         |
+-------------------------------------------------+

*/

------------- Explicação cursos_01.sql -------------
/*
    Na primeira linha é dado inicio a declaração do primeiro bloco de código, que está criando 
    (ou substituido, caso ja existente) a especificação de um pacote chamado Employees_Cur_Static_Sql. 
    Dentro deste bloco é declarado o novo tipo Last_Names_Tab_t, que é um Table Type do mesmso 
    tipo e tamanho da coluna last_name da tabela employees.
    Em seguida é declarado uma função (apenas a declaração dela), Fetch_All_Rows, que recebe um 
    parametro, p_department_id, de apenas leitura e com o mesmo tipo e tamanho da columna department_id 
    da tabela employees; E no final esta função retornará um table type, Last_Names_Tab_t, que fora
    criado anteriormente.

    No segundo bloco do código, é criado (ou substituido, caso ja existente) o corpo da package
    declarada anteriormente. Esse é o lugar onde vai a lógica das funções e procedures declaradas
    no bloco anterior.
    Dentro desse body é encontrado a lógica do Fetch_All_Rows, que obrigatoriamente possui o mesmo
    cabeçario (nome, parametros e retorno). Entre o bloco is e o begin, é criado a variavel v_last_names_tab,
    que possui o tipo Last_Names_Tab_t, e o cursor c_employees, que aponta para o resultado de uma busca
    pelo ultimo nome dos funcionarios que se possuem o atributo department_id igual ao p_department_id,
    que fora passado como argumento para a função.
    Começando a lógica da função, é logo carregado o cursor c_employees, e em seguida atribuido à variavel
    v_last_names_tab, o resultado da query. Logo é fechado o cursor c_employees e é retornado o
    valor de v_last_names_tab pela função.
*/

-- Código
create or replace package hr.Employees_Cur_Static_Sql is
  type Last_Names_Tab_t is table of hr.employees.last_name%type
    index by binary_integer;

  function Fetch_All_Rows ( p_department_id in hr.employees.department_id%type )
    return Last_Names_Tab_t;

end Employees_Cur_Static_Sql;
/
Show Errors

create or replace package body hr.Employees_Cur_Static_Sql is

  function Fetch_All_Rows ( p_department_id in hr.employees.department_id%type )
     return Last_Names_Tab_t
  is
    v_last_names_tab Last_Names_Tab_t;
    cursor c_employees is
      select last_name from hr.employees where department_id = p_department_id;

  begin
    open c_employees;
    fetch c_employees bulk collect into v_last_names_tab;
    close c_employees;
    return v_last_names_tab;
  end Fetch_All_Rows;

end Employees_Cur_Static_Sql;
/
Show Errors



------------- Explicação cursos_02.sql -------------
/*
    Na primeira linha é ativado o serveroutput, para que possa ser utilizado 
    o pacote Dbms_Output dentro da procedure.
    
    Em seguida é criada (e se ja existente, substituida) a procedure
    Show_Rows_For_Dept_Static_Sql, que recebe um parametro apenas, p_department_id,
    cujo é apenas para leitura e seu tipo é o mesmo da coluna department_id da tabela
    employees.

    Finalizado o cabeçalho da procedure, é declarada a variavel que será utilizada
    dentro da procedure, v_last_names_tab.

    Iniciado o bloco de execução, ja é atribuido à variável v_last_names_tab, o retorno
    da função Fetch_All_Rows (localizada dentro de Employees_Cur_Static_Sql), que são todas
    as linhas da busca pela tabela Last_Names_Tab_t.

    Após a atribuição de valores da v_last_names_tab, é começado um loop utilizando for,
    onde em cada iteração (da primeira linha de v_last_names_tab até à ultima) é atribuído 
    à variavel j o valor da linha atual, e em cada iteração é exibido no console o último
    nome do funcionário.

    E então é finalizado a procedure.
*/

-- Código
set serveroutput on;

create or replace procedure hr.Show_Rows_For_Dept_Static_Sql (
  p_department_id in hr.employees.department_id%type ) is


  v_last_names_tab hr.Employees_Cur_Static_Sql.Last_Names_Tab_t;

begin
  v_last_names_tab := hr.Employees_Cur_Static_Sql.Fetch_All_Rows ( p_department_id );

  for j in v_last_names_tab.First..v_last_names_tab.Last
  loop
    Dbms_Output.Put_Line ( v_last_names_tab(j) );
  end loop;

end Show_Rows_For_Dept_Static_Sql;
/
Show Errors

