<?php
//connection to the database
$mysqli = new mysqli("localhost", "root", "", "pupils");

// Check connection
if($mysqli === false){
    die("ERROR: Could not connect. " . $mysqli->connect_error);
}

// Escape user inputs for security

$usercode = $mysqli->real_escape_string($_REQUEST['usercode']);
$firstname = $mysqli->real_escape_string($_REQUEST['firstname']);
$lastname = $mysqli->real_escape_string($_REQUEST['lastname']);
$phonecontact = $mysqli->real_escape_string($_REQUEST['phonecontact']);
$password = $mysqli->real_escape_string($_REQUEST['password']);

// Attempt insert query execution
$sql = "INSERT INTO pupils_details (usercode,firstname,lastname,phonecontact,password) VALUES ('$usercode','$firstname','$lastname','$phonecontact','$password')";
//}
if($mysqli->query($sql) === true){
    echo "you have been registered successfully.";
    header('location:register1.php');
} else{
    echo "ERROR: Could not able to execute $sql. " . $mysqli->error;
}

// Close connection
$mysqli->close();
?>
