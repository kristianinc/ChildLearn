<?php                                  
                                    
                                      
                                    $sql = "SELECT * FROM pupils_details;";
                                    //create a prepared statment
                                    $place = mysqli_place_init($conn);
                                    //if it fails to execute
                                    if (!mysqli_place_prepare($place,$sql)) {
                                        header("location: ./pupil.php?error= stmtfailed1");
                                        exit();
                                    }
                                
                                    //mysqli_place_bind_param($place,"s",$_SESSION["email"]);
                                    //we execute the prepared statment
                                    mysqli_place_execute($place);
                                    $resultData = mysqli_place_get_result($place);                                                                 
   
                                    echo '
                                    <thead>
                                        <tr> 
                                        <th scope="col">usercode</th>                            
                                        <th scope="col">firstname</th>
                                        <th scope="col">Lastname</th>
                                        <th scope="col">phonecontact</th>
                                        <th scope="col">password</th>
                                        <th scope="col">Deactivate pupil</th>
                                        <th scope="col">Activate pupil</th>
                                        
                                        </tr>
                                    </thead>
                                    ';
                                    echo '<tbody>';
                                    while($row = mysqli_fetch_assoc($resultData)){
                                    if($row > 0){
                                        echo '<tr><form action="register1.php" method="POST">
                                        <input type="hidden" name="usercode" value= "'.$row['usercode'].'">
                                        <td>'.$row['firstname'].'</td>
                                        <td>'.$row['lastname'].'</td>
                                        <td>'.$row['phonecontact'].'</td>
                                        <td>'.$row['passsword'].'</td>
                        
                                        <td><button" name="Deactivate">Deactivate</button></td>
                                        <td><button  " name="Activate">Activate</button></form></td>';
                                        echo "</tr>";
                                    }else{
                                        echo "<tr>";
                                        echo "<th class='text-danger text-center' colspan='4'>No student registered yet!!</th>";
                                        echo "</tr>";
                                    } 
                                }
                                
                                ?>