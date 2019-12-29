/*

+-------------------------------------------------+
|    LABORATÓRIO 2 - Banco de Dados 4º Semestre   |
|                                                 |
|    Autor: Fábio Romeiro                         |
+-------------------------------------------------+

*/

------------- Explicação -------------
/*
    Os primeiros códigos (indicados a baixo como Parte 1) são feitos pelo terminal utilizando
    o sqlplus, o primeiro comando conecta o usuário como sysdba, para ter privilégios para 
    executar alguns comandos a seguir.
    Feito isso é criado um novo diretório e definido permissão de leitura e escrita como 
    público (não necessariamente qualquer um podera ler e escrever, mas sim aqueles com a
    permissão para isso).
    Em seguida é alterado o usuário hr, de senha fatec, e então ele é desbloqueado.

    Iniciada a Parte 2, a primeira coisa feita foi permitir o uso do package Dbms_Output 
    colocando o serveroutput como on; E então é iniciado o bloco PLSQL com o Declare,
    onde é declarado as variáveis e procedures que serão utilizadas ao longo do bloco.
    É perceptivel a criação de 2 variaveis (v_line e v_handle) e 2 constantes (c_location
    e c_filename), além da declaração da procedure Show_Is_Open, que indica no console 
    se o arquivo atribuido a variavel v_handle está aberto, e a procedure Put_Line, que
    escreve no arquivo atribuido à v_handle o texto 'Hello world'.

    Em sequencia é dado inicio à lógica do bloco PLSQL. Dentro do bloco, a primeira 
    instrução atribui à variável v_handle o arquivo com o nome do valor atribuído à 
    constante c_filename ('test.txt') no endereço atribuído à c_location ('UTL_FILE_TEST')
    em modo de escrita.
    Atribuido o valor, em seguida é chamada as procedures criadas em sequência, 
    exibindo no console se o arquivo está aberto e inserindo no arquivo um 'Hello World'.
    Em seguida é fechado o arquivo e é chamado novamente a procedure que indica no console
    se o arquivo está aberto ou não.

    Por último é feito o tratamento das exceções, tratando primeiramente da chamada 
    Utl_File.Invalid_Maxlinesize, que se disparada, será exibido o erro 
    'Invalid_Maxlinesize trapped'; Em seguida é tratado o segundo erro, Utl_File.Invalid_Filehandle,
    que quando disparado, fecha todos os arquivos abertos e exibe a mensagem de erro 
    'Invalid_Filehandle trapped'.
    
*/

-- Código

-- Parte 1
connect sys/fatec as sysdba;

create directory UTL_FILE_TEST as 'c:\temp';

grant read, write on directory UTL_FILE_TEST to public;

grant execute on utl_file to public;

alter user hr identified by fatec;

alter user hr account unlock;

-- Parte 2
set serveroutput on;
declare
  v_line           varchar2(32767);
  c_location       constant varchar2(80) := 'UTL_FILE_TEST';
  c_filename       constant varchar2(80) := 'test.txt';
  v_handle         Utl_File.File_Type;


  procedure Show_Is_Open is begin
    case Utl_File.Is_Open ( file => v_handle )
      when true then Dbms_Output.Put_Line ( 'open' );
      else           Dbms_Output.Put_Line ( 'closed' );
    end case;

  end Show_Is_Open;

  procedure Put_Line is begin
    Utl_File.Put_Line (
      file     => v_handle,
      buffer   => 'Hello world',
     autoflush => false );

  end Put_Line;

begin

  v_handle := Utl_File.Fopen (
    location    => c_location,
    filename    => c_filename,
    open_mode   => 'w' /* write over any existing file with this name */,
    max_linesize => 32767 );

  Show_Is_Open;
  Put_Line;
  Utl_File.Fclose ( file => v_handle );

  Show_Is_Open;

exception
  when
    -- ORA-29287: invalid maximum line size
    Utl_File.Invalid_Maxlinesize
  then
    -- Fclose_All closes all open files for this session.
    -- It is for cleanup use only. File handles will not be cleared
    -- (Is_Open will still indicate they are valid)

    Utl_File.Fclose_All;
    Raise_Application_Error ( -20000, 'Invalid_Maxlinesize trapped' );

  when
    -- ORA-29282: invalid file ID
    Utl_File.Invalid_Filehandle
  then
    Utl_File.Fclose_All;
    Raise_Application_Error ( -20000, 'Invalid_Filehandle trapped' );
end;
/
