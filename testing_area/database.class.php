
<?php



class Database{

    public static $connection;


public function __construct(){
    print "constructing Datasbase-->";
    Database::make_conn();
   }
   

    public static function make_conn(){
        
   $servername = "127.0.0.1:4400";
   $username = "kali";
   $passwor = "kali";
   $dbname = "php_learn";

  $conn = new mysqli($servername, $username, $passwor, $dbname);
  
    print('connection has been returned');
    Database::$connection = $conn;
    return Database::$connection = $conn;
  
}
   
    
   

    public static function insert_data($email,$pass){

       
        $sql = "INSERT INTO `register` (`email`,`password`)
        VALUES ('$email','$pass');";
        
        if (Database::$connection->query($sql) === TRUE) {
         echo "\n\nNew record created successfully";
         return True;

       } else {
          return "Error: " . $sql . "<br>" . Database::$connection->error;
          
        }
        

    }
    public static function get_data(){
        
        if (Database::$connection->connect_error) {
            die("Connection failed: ". Database::$connection->connect_error);
          } 
          else{
          $sql = "SELECT `id`, `email`, `password` FROM `register`";
          $result = Database::$connection->query($sql);
         
          if ($result->num_rows > 0) {
            // output data of each row
           
            while($row = $result->fetch_assoc()) {
                
              echo "id: " . $row["id"]. " - Name: " . $row["email"]. " password\t\t" . $row["password"]. "<br>";
            }
          } else {
            echo "0 results";
          }
          //Database::$connection->close();
          }


    }


}

$conn = new Database();

Database::get_data();
