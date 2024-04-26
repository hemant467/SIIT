Java Script(Js)
========================================================================
. Java script is a populor scripting langugage developed by Netscape Navigtor in the year 1992.
. First name of java script is "Live script".
. JS is a programming language i.e. we can declare variables and functions
. JS is an interpreted lanuage.
. Interpreter converts high level(JS) language to low level(O's and 1's)
. Java Script is an object based language.
. script language
  ===================
 . scripting is a light weight programming language
 . scripting langs will depend on other language to run the code
. Java script is a case sensitive language.
. file extension should be .html
. <script>
 ===============
   .It is used to insert java script code in html document
   . closing tag is mandatory
. ex-1
==========
<html>
  <head>
   <title>WElcome to JS</title>
  </head>
  <body bgcolor="red">
    <font size=7>
     <script>
		document.writeln("<h1>Hello Shardha<br>");
		document.writeln("Welcome to Java Script</h1>");
	 </script>
	</font>
  <body>
</html>

ex-2:
=========================
<html>
  <head>
   <title>WElcome to JS</title>
  </head>
  <body bgcolor="red">
    <font size=7>
     <script>
		console.log("Hello Shardha");
		console.log("Welcome to Programming");
		console.log("Welcome to Java Script");
	 </script>
	</font>
  <body>
</html>

Data types
=======================================
1) number (ex: 10, 10.5, 0, 0.5 ....)
2) string (ex: 'abcd',"abcde",'a',"a"....)
3) boolean(ex: true, false)
4) object (ex: null)

Variable declaration
===============================================
. In Java script variables are declared with "var" or "let" keyword

. Rules for constructing variable name
=========================================
  1) Variable name is a comination of alphabets and digits but first character must not be a digit
  2) No camas and blank spaces are allowed within a variable name
  3) No special symbols are allowed except underscore( _ )
  4) Variable name should contain atleast one character
  ex:
     abcd
     abc1234
     123abcd X
     ab cd X
     ab_cd 
     ab$cd X
     a
. ex-1:
========
<html>
  <head>
   <title>WElcome to JS</title>
  </head>
  <body bgcolor="red">
    <font size=7>
     <script>
		var a=10;
		var b="Hello";
		var c=true;
		var d=null;
		document.writeln(a,b,c,d);
	 </script>
	</font>
  <body>
</html>

ex-2:
=======
<html>
  <head>
   <title>WElcome to JS</title>
  </head>
  <body bgcolor="red">
    <font size=7>
     <script>
		let a=10;
		let b="Hello";
		let c=true;
		let d=null;
		document.writeln(a,b,c,d);
	 </script>
	</font>
  <body>
</html>

ex-3:
===========================================
<html>
  <head>
   <title>WElcome to JS</title>
  </head>
  <body bgcolor="red">
    <font size=7>
     <script>
		a=10;
		b="Welcome";
		c=false;
		d=null;
		document.writeln(a,b,c,d);
	 </script>
	</font>
  <body>
</html>

typeof()
========================================================
. used to find the data type of a variable
. Java script is a dynamically typed language i.e. there is no need to specify data types.
  ex:
      a=10 
      b="abcde"
. C and Java are strictly typed languagues i.e. we must specify data type
  ex: 
      number a=10;
      String b="abcde";
. ex:
==========
<html>
  <head>
   <title>WElcome to JS</title>
  </head>
  <body bgcolor="red">
    <font size=7>
     <script>
		a=10;
		b="Welcome";
		c=false;
		d=null;
		document.writeln(typeof(a), typeof(b), typeof(c),typeof(d))
	 </script>
	</font>
  <body>
</html>





