<!DOCTYPE html>
<html>
<head><title>Class</title></head>
<body>
<?php
class car
{
public $colour;
public $model;

function __construct($model,$colour)
{
$this->colour=$colour;
$this->model=$model;
}
function message()
{
return "My car is a ".$this->colour .' of colour '.$this->model;
echo $this->colour;
}
}
$mycar = new car('Black','Volvo');
echo $mycar->message();
echo "<br>";
$mycar = new car('Red','BMW');
echo $mycar->message();
?>
</body>
</html>