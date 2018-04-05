<?php

public function excluirAutor($id){
    $sql = $this->con->prepare("delete from autores where autor_id=:id");
    $sql->bindValue();
    
}

public function getAutor($id){
    $sql = $this->con->prepare("SELECT * FROM autores where autor_id = :id");
    $sql->bindValue(':id',$id);
    $sql->execute();
    
    return $sql->fetch(PDO::FETCH_OBJ);
}