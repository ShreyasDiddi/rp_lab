<HTML>
<HEAD>
	<TITLE>php string and string interpollation</TITLE>
</HEAD>
<BODY>
<?php
	$var = "Shreyas";
	echo 'hello $var',"<br>";
	$s=<<<EOD
wdf
wef
wef
EOD;
	echo $s,"<br>";
	$s = "hello word is general<br>";
	echo $s;
	echo "strlen : ",strlen($s),"<br>";
	echo "word count : ",str_word_count($s),"<br>";
	echo "pos of gen : ",strpos($s,"gen"),"<br>";
	echo str_replace("hello","bye",$s);
?>
</BODY>
</HTML>
	