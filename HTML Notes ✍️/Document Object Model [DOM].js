Document Object Model [DOM] :
	Document is an object of document class
1.bgcolor{Background color}	2.fgcolor {Foreground color}	3.members
4.Writeln()	5.Write()
6.getElementById()	7.getElementByClass()

-------------------------------------------------------------------------------------

<script>
	document.bgcolor="pink";
	document.fgcolor="red";
	document.Writeln=("javascript");
</script>

-------------------------------------------------------------------------------------

Events in JavaScript:
1.OnClick()	2.OnChange()	3.OnSubmit()	4.OnFocus()	5.OnBlur()

Mouse Events:
1.OnMouseDown()	2.OnMouseUp()	3.OnMouseOut()	4.OnMouseOver()

Key Events:
1.OnKeypress()	2.OnKeyUp()	3.OnKeyDown()

-------------------------------------------------------------------------------------

<script>
	function add()
		{
			var S1=document.getElementById("a").Value;
			var S2=document.getElementById("b").Value;
			var a=parseInt(S1);
			var b=parseInt(S2);
			var c=a+b;
			document.writeln("<h1><center>"+c);
		}\
</script>
</head>
<body bgcolor="red">
	<form>
	     <h1><center>
		  enter a<input type="text" id="a"><br>
		  enter b<input type="text" id="b"><br>
		  <input type="button" value="add" onClick="add()">
	     </center></h1>
	</form>
</body>

-------------------------------------------------------------------------------------

<head>
      <title>Document</title>
      <script>
	  function Validate()
		{
			var S1=document.getElementById("a").Value;
			var S2=document.getElementById("b").Value;
			if(S1!="abc")
			{
				alert("Wrong username");
				return false;
			}
			if(S2!="1234")
			{
				alert("Wrong password");
				return false;
			}
		}
      </script>
</head>
<body bgcolor="red">
	<form action="https://www.google.com" onsubmit="return validate()">
	<h1><center>
		Username<input type="text" id="a"><br>
		Password<input type="text" id="b"><br>
		<input type="submit" value="submit">
	</center></h1>
	</form>
</body>
</html>
