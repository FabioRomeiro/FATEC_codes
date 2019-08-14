SELECT c.cli_id,c.cli_nome, c.cli_cpf
FROM cliente c 
INNER JOIN reserva r
ON r.cli_id = c.cli_id
WHERE r.res_data_in < '2019-05-12';

SELECT f.fun_num_documento, f.fun_data_contratacao 
FROM funcionario f
WHERE f.fun_gestor = 4888185284
AND f.fun_salario < 3000;

SELECT f.fun_num_documento
FROM funcionario
WHERE fun_gestor IN(
	(
		SELECT fu.num_documento 
		FROM funcionario fu
		WHERE fu.fun_cardo = 'G';
	)
);

SELECT c.cli_nome 
FROM cliente c
WHERE c.cli_dataNasc < '05-02-1980';

SELECT a.and_numero, count(*)Quant
FROM andar a
INNER JOIN bts_bates b
ON a.bts_cnpj=b.bts_cnpj
INNER JOIN funcionario f
ON f.bts_cnpj = b.bts_cnpj
INNER JOIN camareira c
ON c.fun_num_documento=f.fun_num_documento
GROUP BY a.and_num,
HAVING COUNT(*) = (
	SELECT MAX(COUNT(a.and_numero)) 
	FROM camerera cam
	WHERE a.and_num IN(cam.cam_andares)
	GROUP BY a.and_numero
);

SELECT c.clo_nome, c.cli_cpf, r.res_data
FROM RESERVA r 
INNER JOIN cliente c 
ON c.cli_cpf = r.res_cli_cpf
WHERE r.res_checkin = '06-04-2019';

select f1.fun_num_documento as documento_gestor, count(1) as num_funcionarios
from funcionario f1 
INNER JOIN funcionario f2
ON f1.fun_num_documento = f2.fun_gestor
GROUP BY f1.fun_num_documento
ORDER BY num_funcionarios DESC;

SELECT q.qua_num, q.qua_tipo, q.qua_andar
FROM QUARTO q
WHERE q.qua_preco < 800;

SELECT *
FROM historico_preco_quarto
WHERE qua_preco = (
    SELECT MAX(qua_preco) 
    FROM historico_preco_quarto
);

SELECT C.CLI_NOME AS NOME_CLIENTE, COUNT(1) AS NUMERO_RESERVAS
FROM CLIENTE C
INNER JOIN RESERVA R 
ON C.CLI_CPF = R.RES_CLI_CPF
GROUP BY NOME_CLIENTE
ORDER BY NUMERO_RESERVAS

SELECT st.SLT_NUMERO
FROM SLT_SALA_DE_TRABALHO st
WHERE st.SLT_SETOR = 125;

SELECT COUNT (*) AS QUANTIA_DE_QUARTOS
FROM BTS_BATES B 
INNER JOIN 
AND_ANDAR A 
ON B.BTS_CNPJ = A.BTS_CNPJ
INNER JOIN 
QUARTO Q 
ON A.AND_NUMERO = Q.QUA_ANDAR