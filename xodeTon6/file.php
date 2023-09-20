<?php
	
	for($i = 0;$i<$n;$i++){
		echo $s[$i];
	}
	$kar = [1,2,3];
	$k = 'ashik';
	$f = fopen("/home/ashik/Documents/input.txt","r");
	$s = fread($f, filesize("/home/ashik/Documents/input.txt"));
	$n = filesize("/home/ashik/Documents/input.txt");
?>