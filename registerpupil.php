<html lang="en">
<head>
    <link rel="stylesheet" type="text/css" href="childlearn.css">
    <script src="register.php"></script>
    <title>register</title>
</head>
<body style="background-color: powderblue;">
<div class="navbar" style="background-color: black;">
    
    <h1 style="text-align:center;">childlearn</h1>
</div>
<center>
    <h2>Register pupil</h2>
    <form class="form" method="POST" action="register.php">
        Usercode:<input type="varchar"   name="usercode"required><br><br>
        Firstname:<input type="text"  name="firstname"required ><br><br>
        Lastname:<input type="text" name="lastname"required ><br><br>
        Phone contact:<input type="varchar"  name="phonecontact"><br><br>
        Password: <input type="password" name="password" required>
        <!-- <input type="button" name="REGISTER" value="REGISTER" class="button"> -->
        <button name="REGISTER">REGISTER</button>
      </form>
    </center>
</body>
</html>
