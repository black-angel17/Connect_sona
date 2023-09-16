
<pre>

<?php 
  //include_once '../php/get.php';



print("GET");
print_r($_GET);
print("POST");
print_r($_POST);
print("files");
print_r($_FILES);


session_start();
print("session ");
print_r($_SESSION);
session_status();

if (isset($_SESSION['user'])){
  print "already exitsted \n\n";
 

}
else{
  $_SESSION['user']= "what is this ";
  print "newly creating \n";
 

}

 
$cookie_name = "user";
$cookie_value = "John Doe";
setcookie($cookie_name, $cookie_value, time() + (86400 * 30), "/"); // 86400 = 1 day

print("Cokkie ");

print_r($_COOKIE);

print_r($_SERVER);







?>

<pre>

<?php 


    function insert_element($user, $email, $pass){
        

       
        // Create connection
      


        $servername = "127.0.0.1:4400";
        $username = "kali";
        $passwor = "kali";
        $dbname = "php_learn";



        $conn = new mysqli($servername, $username, $passwor, $dbname);
        // Check connection
        if ($conn->connect_error) {
          die("Connection failed: " . $conn->connect_error);
          print("connection failed");
        }       
        else{
            print("connection success");
            print($conn->connect_error);
            
            
           
        } 

        $sql = "INSERT INTO `register` (`email`,`password`)
        VALUES ('$email','$pass');";
        
        if ($conn->query($sql) === TRUE) {
         echo "\n\nNew record created successfully";
         return True;

       } else {
          return "Error: " . $sql . "<br>" . $conn->error;
          
        }
        
      $conn->close();
    


    }

?>

<?php  
if (empty($_POST['email'])) {
  echo '$var is either 0, empty, or not set at all';
}
else{
   $result = insert_element("",$_POST['email'] ,$_POST['pass']); 
}

?>
