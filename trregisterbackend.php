<?php
//connection to the database
$mysqli = new mysqli("localhost", "root", "", "childlearn");

// Check connection
if($mysqli === false){
    die("ERROR: Could not connect. " . $mysqli->connect_error);
}

// Escape user inputs for security

$usercode = $mysqli->real_escape_string($_REQUEST['usercode']);
$teacherid = $mysqli->real_escape_string($_REQUEST['teacherid']);
$password = $mysqli->real_escape_string($_REQUEST['password']);

// Attempt insert query execution
$sql = "INSERT INTO teacher (teacher_id,usercode,pasword,) VALUES ('$teacherid','$usercode','$password')";
//}
if($mysqli->query($sql) === true){
    echo "you have been registered successfully.";
    header('location:tr_login.html');
} else{
    echo "ERROR: Could not able to execute $sql. " . $mysqli->error;
}

// Close connection
$mysqli->close();
?>
