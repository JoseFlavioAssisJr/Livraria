<!DOCTYPE html>

<html>
    <head>
        <meta charset="UTF-8">
        <title>Atualização de Autores</title>
    </head>
    <body>
        <center>
        <?php
        function formatarData($data){
            return date('d/m/Y',$data);
        }
        
        session_start();
        $autor=$_SESSION['autor'];
        ?>
            
            <h2>Alteração de Autores</h2>
            <p>
            <form action="controlerAutor.php?opcao5" method="post">
                ID: <input type="text" size="3" name="pId" value="<?php echo $autor->autor_id ?>"readonly>
                <p>Nome do Autor: <input type="text" size="50" name="pNome" value="<?php echo $autor->nome ?>">
                <p>Email do Autor: <input type="text" size="30" name="pEmail" value="<?php echo $autor->email ?>">
                <p>Data de Nascimento: <input type="text" size="15" name="pDataNasc" value="<?php echo formatarData(strtotime($autor->dt_nasc)) ?>">
                <p><input type="submit" value="Cadastrar"><input type="reset" value="Cancelar">


    </body>
</html>
