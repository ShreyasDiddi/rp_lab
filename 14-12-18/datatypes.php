<HTML>
<HEAD>
	<TITLE>php datatypes and constants</TITLE>
</HEAD>
<BODY>
<?php
	$a = 20;
	echo var_dump($a),"<br>";
	
	$a = 20.56;
	echo var_dump($a),"<br>";
	
	$a = "shreyas";
	echo var_dump($a),"<br>";
	
	$a = true;
	echo var_dump($a),"<br>";
	
	$a = array("hello","world",2,3,34.3,false);
	echo var_dump($a),"<br>";
	echo $a[5],"<br>";
	
	echo "Array Elements are :";
	for ($b = 0;$b < count($a) ;$b++)
		echo "$a[$b] ";
	echo "<br>";
	
	$a = array("red"=>1,"green"=>2,"blue"=>3);
	echo var_dump($a),"<br>";
	echo ($a["green"]),"<br>";
	
	$a = null;
	echo var_dump($a),"<br>";
	
	class A
	{
		Function fun1()
		{
			echo "in class a ,fun1<br>";
		}
	}
	
	$a = new A;
	echo var_dump($a),"<br>";
	
	$a = fopen("datatypes.php","r");
	echo var_dump($a),"<br>";
	
	//constants
	define("cons1",5);
	echo cons1,"<br>";
	
	define("cons2",5,true);
	echo coNs2;
	
	

?>
</BODY>
</HTML>
	