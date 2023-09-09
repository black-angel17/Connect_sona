<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
<table>
  <tr>
    <th>Company</th>
    <th>Contact</th>
    <th>Country</th>
  </tr>
  <tr>
    <td>Alfreds Futterkiste</td>
    <td>Maria Anders</td>
    <td>Germany</td>
  
  <tr><?php 
    $table = 10;
    for ($i=0; $i<10; $i++){

    ?>
    </tr>
    <td>names</td>
    <td><?=($table*$i) ?></td>
    <td>Mexico</td>
  </tr>
  <?php
  }
  ?>
</table>  
    
    
</body>
</html>