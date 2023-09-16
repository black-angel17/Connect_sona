<?php 
include_once '../php/get.php';

function load_temp($name){

        print( $path = __DIR__.$name .'.php');
        include $path;

}



class fruit{

        public $name;
        public $color;
        public static $varibale1;
        private $price;


public function __construct(){

        print("A new object is intialized\n\n");
}


public function set_name($name){
        $this->name = $name;
}

public function get_name(){
        return $this->name;
}


private function set_color($color){
        $this->color = $color;
        print('\ncolor is setted private thing');
}

public function pub($color){

       return $this->set_color($color);
}

public static function stack(){

        print("this is static funciton");

}




}


$obj1 = new fruit();


$obj1->set_name('vim');

print("this is ".$obj1->get_name());


$obj1->pub('green');

fruit::stack();
print (fruit::$varibale1);

?>