JavaScript: It is a loosely type language

<!DOCTYPE html>
<html lang="en">
<head>
     <meta charset="UTF-8">
     <meta name="viewport" content="width=device-width, initial-scale=1.0">
     <title>Document</title>
     <script>
     	var x=7;
     	function getName(){
     	   Console.log("Hello");
     	}
     	Console.log(getName);
     	Console.log(x);
     </script>
</head>
<body>
</body>
</html

--------------------------------------------------------------------------------------------

<!DOCTYPE html>
<html lang="en">
<head>
     <meta charset="UTF-8">
     <meta name="viewport" content="width=device-width, initial-scale=1.0">
     <title>Document</title>
     <script>
     	Console.log(x);
     	Console.log(getName);
     	getName();
     	var x=7;
     	function getName(){
     	   Console.log("Hello");
     	}
     </script>
</head>
<body>
</body>
</html

--------------------------------------------------------------------------------------------

<!DOCTYPE html>
<html lang="en">
<head>
     <meta charset="UTF-8">
     <meta name="viewport" content="width=device-width, initial-scale=1.0">
     <title>Document</title>
     <script>
     	var x=7;
     	var yfunction getName(){
     	   Console.log("Hello");
     	}

     	Console.log(x);
     	Console.log(y);
     	y();
     </script>
</head>
</html>

--------------------------------------------------------------------------------------------

<!DOCTYPE html>
<html lang="en">
<head>
     <meta charset="UTF-8">
     <meta name="viewport" content="width=device-width, initial-scale=1.0">
     <title>Document</title>
     <script>
     	var x=7;
     	var getName=()=>{	//"=>" Arrow() - Arrow function
     	   Console.log("Hello");
     	}

     	Console.log(x);
	getName();
     	Console.log(getName);
     </script>
</head>
</html>

--------------------------------------------------------------------------------------------

<!DOCTYPE html>
<html lang="en">
<head>
     <meta charset="UTF-8">
     <meta name="viewport" content="width=device-width, initial-scale=1.0">
     <title>Document</title>
     <script>
     	var x=1;
	console.log(x);
	a();
	b();
	function a()
	{
	   var x=10;
	   console.log(x);
	}
	function b()
	{
	   var x=100;
	   console.log(x);
	}
     </script>
</head>
</html>

--------------------------------------------------------------------------------------------

<!DOCTYPE html>
<html lang="en">
<head>
     <meta charset="UTF-8">
     <meta name="viewport" content="width=device-width, initial-scale=1.0">
     <title>Document</title>
     <script>
     	var y=1;
	function a()
	{
	   var x=10;
	}
	console.log(window.y);
	console.log(y);
	console.log(a);
     </script>
</head>
</html>


