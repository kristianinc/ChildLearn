
<?php
if(isset($_POST['submit'])){

    $usercode = $_POST['usercode'];
    $password = $_POST['password'];
    

    $conn = new mysqli("localhost", "root", "", "childlearn");

    if($conn->connect_error){
        die("Failed to login".$conn->connect_error);
    }else{
        $stmt = $conn->prepare("SELECT * FROM teacher WHERE usercode = ? AND pasword =?");

        $stmt->bind_param("ss",$usercode,$password);
        $stmt->execute();
        $stmt_result = $stmt->get_result();

             if($stmt_result->num_rows > 0){
                
               if($sql ='student'){
                    // session_start();
                    // $_SESSION['school_code'] = $code;
                    header('Location:New.php');
                    exit();
                 }
        
             else{ 
                header('Location: tr_login.php');
                exit(); 
             }

    }
}
?>

<html lang="en">
<head>
    <link rel="stylesheet" type="text/css" href="childlearn.css">
    <title></title>
</head>
<body style="background-color: powderblue;">
<div class="navbar" style="background-color: black;">
    
    <h1 style="text-align:center;" id="pad">childlearn</h1>
</div>
<center>
    <h2>login in here</h2>
    <form class="form"method="post"action="register.php">
        usercode:<input type="varchar" required placeholder="usercode" name="usercode"><br><br>
        Password:<input type="password" required placeholder="enter password"name="password"><br><br>
        <button>LOGIN</button>
      </form>
    </center>
</body>
</html>
