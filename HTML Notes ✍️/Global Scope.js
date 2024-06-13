Global Scope : We can access function from outside OR inside is called Global Scope.

<!DOCTYPE html>
<html lang="en">
<head>
     <meta charset="UTF-8">
     <meta name="viewport" content="width=device-width, initial-scale=1.0">
     <title>Document</title>
     <script>
     	function a()
	 {
	   c();
	   function c()
	      {
	      	Console.log(b);
	      }
	 }
	 var b=10;
	 a();
     </script>
</head>
<body>
</body>
</html>

--------------------------------------------------------------------------------------------

<!DOCTYPE html>
<html lang="en">
<head>
     <meta charset="UTF-8">
     <meta name="viewport" content="width=device-width, initial-scale=1.0">
     <title>Document</title>
     <script>
     	function a()
	 {
	   var b=10;
	   c();
	   function c()
	    {
	       Console.log(b);
	    }
	 }
	 a();
	 Console.log(b);
     </script>
</head>
</html>

Output:
	Not defined
	Memory not allocated

--------------------------------------------------------------------------------------------

<!DOCTYPE html>
<html lang="en">
<head>
     <meta charset="UTF-8">
     <meta name="viewport" content="width=device-width, initial-scale=1.0">
     <title>Document</title>
     <script>
     	var b;
     	b=10;
     	let x;
     	x=6;
     	const z=8;
     	Console.log(x);
     	Console.log(z);
     	Console.log(b);
     </script>
</head>
</html>

Output:
	6
	8
	10

--------------------------------------------------------------------------------------------

-> Variables can be declared number of times with same reference.
-> 1st variable is declared, afterwards we can initialize.
-> In variable we cannot get any type of ERRORS.
-> In "let" we cannot declare same reference type/name.
-> "Let" is declared afterwards we can initialize.
-> We get 2 types of ERRORS:
	1.Syntax Error		2.Reference Error	3.Type Error [re-assign the values]

Temporal Dead Zone: Runtime between declaration & console to produce output.
let -> Is a combination of Syntax Error & Reference Error.
		let = Syntax Error + Reference Error

--------------------------------------------------------------------------------------------

<!DOCTYPE html>
<html lang="en">
<head>
     <meta charset="UTF-8">
     <meta name="viewport" content="width=device-width, initial-scale=1.0">
     <title>Document</title>
     <script>
     	Console.log(x);
     	var b=10;
     	let x=5;
     	const z=8;
     	Console.log(x);
     	Console.log(z);
     </script>
</head>
</html>

Output:
	5
	8

--------------------------------------------------------------------------------------------

Block/Scope : Within the braces {}
	{
	   ---------;
	   ---------;
	}
