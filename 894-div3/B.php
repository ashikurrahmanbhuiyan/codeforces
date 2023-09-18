<?php
$filename = "input.txt";
$file = fopen($filename, "r");
if ($file) {
    $a[] = fgets($file); // Read an integer from the file
    fclose($file);    // Close the file
    echo $a;           // Print the integer
} else {
    echo "Failed to open the file.";
}
?>