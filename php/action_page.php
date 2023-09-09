<!DOCTYPE html><html>
    <head>
        <title> Testiong</title>
    </head>
        <body>
            <p>hello world <? print ("fuck you"); ?></p>
            <?php
            if ($_SERVER["REQUEST_METHOD"] == "POST") {
                $first_name = $_POST['fname'];
                $last_name = $_POST['lname'];

                // Now you can use $first_name and $last_name for validation or further processing.
                // For example, you can store the data in a database, perform validation checks, or generate a response to send back to the client.
                
            }
            

            ?>
            
        <p>hello world <? print ("fuck you"); ?></p>
        </body>
    
</html>



