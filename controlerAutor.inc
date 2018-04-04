<?php
if($opcao==2){
    $autorDAO = new AutorDAO();
    $lista = $autorDAO->getAutores();
    session_start();
    $_SESSION['autores']=$lista;
    header("Location:exibirAutores.php");
    
    }
    
if($opcao==4){
    $id = (int)$_REQUEST['id'];
    $autorDAo = new AutorDAO();
    $autorDAO->excluirAutor($id);    
    header("Location:controlerAutor.php?opcao=2");
    }

