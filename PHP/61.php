<?php
$cars=array(
array('Volvo',22,18),
array('BMW',15,13),
array('Land Rover',17,15),
array('Ford',5,2));
for($row=0;$row<4;$row++)
{
	echo "<p><b>Row number $row</b></p>";
	echo "<ul>";
	for($col=0;$col<3;$col++)
	{
		echo "<li>".$cars[$row][$col]."</li>";
	}
	echo "</ul>";
}
?>