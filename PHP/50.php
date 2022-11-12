<?php
$str1 = 'abcd';
$str2 = 'wxyz';
$str3 = 'abcd';
echo(strcmp($str1,$str2)); //str1 < str2
echo('<br>'.strcmp($str2,$str1)); //str2 > str1
echo('<br>'.strcmp($str1,$str3)); //str1 = str3
?>