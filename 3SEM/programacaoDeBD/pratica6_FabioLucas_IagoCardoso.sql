CREATE OR REPLACE TRIGGER altera_salario 
AFTER INSERT OR UPDATE OR DELETE ON Empregado e
FOR EACH ROW
    BEGIN
        IF INSERTING THEN
            UPDATE Departamento d 
            SET d.total_sal = d.total_sal + :NEW.sal
            WHERE d.cod = e.depto;
        END IF;
        IF UPDATE OF e.dept THEN
            UPDATE Departamento d 
            SET d.total_sal = d.total_sal - e.sal
            WHERE :OLD.d.cod = e.depto;
            UPDATE Departamento d 
            SET d.total_sal = d.total_sal + e.sal
            WHERE :NEW.d.cod = e.depto;
        END IF;
        IF UPDATE THEN
            UPDATE Departamento d 
            SET d.total_sal = (d.total_sal - :OLD.sal) + :NEW.sal
            WHERE d.cod = e.depto;
        END IF;
        IF DELETE THEN
            UPDATE Departamento d 
            SET d.total_sal = d.total_sal - :OLD.sal
            WHERE d.cod = e.depto;
        END IF;
    END;
END altera_salario;