Lexical Scope : Data structures that stores variables & functions is called lexical scope
Closure : Binding between function & lexical environment.

<!DOCTYPE html>
<html lang="en">
<head>
     <meta charset="UTF-8">
     <meta name="viewport" content="width=device-width, initial-scale=1.0">
     <title>Document</title>
     <script>
     	function x()
	 {
	   var a=7;
	   function y()
	      {
	      	Console.log(a);
	      }
	      y();
	 }
	 x();
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
     	function x()
	 {
	   var a=7;
	   function y()
	      {
	      	Console.log(a);
	      }
	      return y;
	 }
	 var z=x();
	 Console.log(z);
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
	function z()
	 {
	   var a=100;
	   function x()
	      {
	 	var a=7;
	        function c()
	           {
	 	     var d=20;
	 	     function y()
	 	        {
	      		   Console.log(a,b,d);
	 	        }
	 	        y();
	           }
	           c();
	      }
	      x();
	 }
	 z();
     </script>
</head>
</html>

Output : 7	100	20

--------------------------------------------------------------------------------------------

Uses of Closures:
	1. Memorize
	2. functions
	3. Module design pattern
	4. Maintain state in async world
	5. Currying
	6. Set timeouts
	7. Iterators
