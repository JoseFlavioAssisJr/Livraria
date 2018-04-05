<?php
if($opcao==2){
    $autorDAO = new AutorDAO();
    $lista = $autorDAO->getAutores();
    session_start();
    $_SESSION['autores']=$lista;
    header("Location:exibirAutores.php");
    
    }
    
if($opcao==3){
    $id = (int)$_REQUEST['id'];
    $autorDAO = new AutorDAO();
    $autorDAO->excluirAutor($id);
    session_start();
    $_SESSION['autor']=$autor;

    header("Location:formAutorAtualizar.php");
}
    
if($opcao==4){
    $id = (int)$_REQUEST['id'];
    $autorDAO = new AutorDAO();
    $autorDAO->excluirAutor($id);    
    header("Location:controlerAutor.php?opcao=2");
    }

if($opcao==5){
    $autor = new Autor($_POST['pNome'],$_POST['p|Email'],$_POST['pDataNasc']);
    $autor->setAutor_id($_POST['pId']);
    $autorDAO = new AutorDAO();
    $autorDAO->atualizarAutor($id);    
    header("Location:controlerAutor.php?opcao=2");
}
    
