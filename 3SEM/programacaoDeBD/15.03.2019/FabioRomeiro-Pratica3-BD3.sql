-- 1
SELECT p.pes_name 
FROM Pessoa p, Emprestimo e 
WHERE e.pes_cod = p.pes_cod 
AND e.emp_cod = 1;

-- 3
SELECT liv_titulo
FROM Livro
WHERE liv_titulo LIKE 'A%';

-- 5
SELECT COUNT(tel_cod)
FROM Telefone
WHERE tel_ddd = 12;

-- 7
SELECT e.edi_cod, e.edi_descricao, l.liv_cod
FROM Editora e, Livro l
WHERE e.edi_cod = l.edi_cod;

-- 9
SELECT l.liv_titulo, count(l.liv_cod) 
FROM livro l INNER JOIN exemplar 
ON ex.liv_cod=l.liv_cod 
GROUP BY  l.liv_cod,l.liv_titulo 
HAVING count(*)>3;

-- 11 
SELECT liv_titulo
FROM Livro
ORDER BY anopublicacao DESC
OFFSET 1 ROWS;

-- 13 [TODO] 


-- 15
SELECT l.liv_titulo
FROM Livro l, Emprestimo e, Exemplar ex, ITEM_EMPRESTIMO ie, Pessoa p
WHERE p.pes_cod = e.pes_cod
AND e.emp_cod = ie.emp_cod
AND ex.exe_cod = ie.exe_cod
AND ex.liv_cod = l.liv_cod
AND p.pes_cod = 1;