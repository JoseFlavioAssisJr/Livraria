<?php

require './conexao.inc';
require './modeloLivraria.inc';

    class AutorDAO {
        private $con;
        
        function AutorDAO(){
            $c=new Conexao();
            $this->con=$c->getConexao();
        }
        
        public function incluirAutor(Autor $autor){
            $sql=$this->con->prepare("insert into autores (nome,email,dt_nasc) values (:nom,:em,:data)");
            
            $sql->bindValue(':nom',$autor->getNome());
            $sql->bindValue(':em',$autor->getEmail());
            $sql->bindValue(':data',$this->converteDataMysql($autor->getDataNascimento()));
            $sql->execute();
            }
        
            function converteDataMysql ($data){
                return date('Y-m-d', $data);
            }
    }



