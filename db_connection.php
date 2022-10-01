<?php

$conn=mysqli_connect('localhost','root','','database_name');

if($conn)
{
	echo "connected to database";
}
else
{
	echo "an error occured";
}
	

?>
