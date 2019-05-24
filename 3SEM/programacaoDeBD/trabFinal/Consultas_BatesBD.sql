SELECT c.cli_id,c.cli_nome, c.cli_cpf
FROM cliente c 
INNER JOIN reserva r
ON r.cli_id = c.cli_id
WHERE r.res_data_in < '2019-05-12';

SELECT * FROM funcionario;

SELECT f.fun_num_documento
FROM funcionario
WHERE fun_gestor IN(
	(
		SELECT fu.num_documento 
		FROM funcionario fu
		WHERE fu.fun_cardo = 'G';
	)
);

SELECT res_id, res_checkin, res_checkout FROM RESERVA;

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

SELECT qua_numero, qua_preco FROM QUARTO;

SELECT * FROM SLT_SALA_DE_TRABALHO;

SELECT BTS_CNPJ FROM BTS_BATES;

