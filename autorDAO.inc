<?php

public function excluirAutor($id){
    $sql = $this->con->prepare("delete from autores where autor_id=:id");
    $sql->bindValue();
    
}