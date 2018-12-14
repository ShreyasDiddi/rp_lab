<HTML>
<HEAD>
	<TITLE>php multiplication table</TITLE>
	<style>
	table, th, td {
  border: 1px solid black;
}
	</style>
</HEAD>
<BODY>
<?php
	$a = 5;
	echo "<table>";
	for ($i = 1 ; $i<100;$i++)
		echo "<tr><td>",$a," x ",$i,"</td><td>",$a*$i,"</tr></td>"
?>
</BODY>
</HTML>
	