CREATE TABLE DEPARTAMENTO (
    DEPA_COD NUMBER(4) CONSTRAINT DEPA_COD PRIMARY KEY,
    DEPA_NOME VARCHAR2(30) NOT NULL,
    DEPA_DATA_INICIAL DATE
);

CREATE TABLE LOCALIZACAO (
    DEPA_COD NUMBER(4),
    LOCA_COD NUMBER(4),
    LOCA_LOCAL VARCHAR2(252),
    PRIMARY KEY(DEPA_COD, LOCA_COD),
    CONSTRAINT DEPA_COD FOREIGN KEY(DEPA_COD) REFERENCES DEPARTAMENTO(DEPA_COD)
);

CREATE TABLE PROJETO (
    DEPA_COD NUMBER(4) CONSTRAINT DEPA_COD FOREIGN KEY(DEPA_COD) REFERENCES DEPARTAMENTO(DEPA_COD), 
    PROJ_COD NUMBER(4) CONSTRAINT PROJ_COD PRIMARY KEY,
    PROJ_TITULO VARCHAR2(150) NOT NULL,
    PROJ_DESCRICAO VARCHAR2(252),
    PROJ_DATA_CAD DATE DEFAULT SYSDATE
);

CREATE TABLE PARTICIPA (
    FUNC_COD NUMBER(4) CONSTRAINT FUNC_COD FOREIGN KEY(FUNC_COD) REFERENCES FUNCIONARIO(FUNC_COD),
    PROJ_COD NUMBER(4) CONSTRAINT PROJ_COD FOREIGN KEY(PROJ_COD) REFERENCES PROJETO(PROJ_COD),
    PART_HORAS VARCHAR2(50),
    PRIMARY KEY(FUNC_COD,PROJ_COD)
);

CREATE TABLE DEPENDENTE (
    FUNC_COD NUMBER(4) CONSTRAINT FUNC_COD FOREIGN KEY(FUNC_COD) REFERENCES FUNCIONARIO(FUNC_COD),
    DEPE_SEQ NUMBER(4),
    DEPE_NOME VARCHAR2(100) NOT NULL,
    DEPE_PARENTESCO VARCHAR2(30) NOT NULL CONSTRAINT DEPE_PARENTESCO CHECK(DEPE_PARENTESCO IN ('PAI', 'MÃE', 'IRMAOS', 'FILHO')),
    DEPE_DATA_NASC DATE,
    PRIMARY KEY(FUNC_COD,DEPE_SEQ)
);

CREATE TABLE FUNCIONARIO (
    FUNC_COD NUMBER(4) CONSTRAINT FUNC_COD PRIMARY KEY,
    FUNC_NAME VARCHAR2(100) NOT NULL,
    FUNC_CPF VARCHAR2(15) UNIQUE,
    FUNC_SALARIO DECIMAL(6,2) CONSTRAINT FUNC_SALARIO CHECK(FUNC_SALARIO >= 1000),
    FUNC_ENDERECO VARCHAR2(252),
    FUNC_SEXO CHAR(1) CONSTRAINT FUNC_SEXO CHECK(FUNC_SEXO IN ('F', 'M')),
    FUNC_SUPER_COD NUMBER(4) CONSTRAINT FUNC_SUPER_COD FOREIGN KEY(FUNC_SUPER_COD) REFERENCES FUNCIONARIO(FUNC_COD),
    DEPA_COD NUMBER(4) CONSTRAINT DEPA_COD FOREIGN KEY(DEPA_COD) REFERENCES DEPARTAMENTO(DEPA_COD)
);