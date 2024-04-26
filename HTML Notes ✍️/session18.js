Objects in java script
==============================
1) Array object
2) String object
3) Date
4) Math
5) document
6) window
7) location
8) navigator
9) history
10) screen

Array object
===================================
. Array is used to store multiple values with a single variable name.
. Array is a collection of values(numbers, strings, boolean and object data types)
. Array elements are accessed with its index or subscripts
. Array index always strats from zero.
. syntax: var variablename = new Array(-,-,-,-,-...);
. ex-1:
========
<html>
  <head>
   <title>WElcome to JS</title>
  </head>
  <body>
    <font size=7>
     <script>       
		var a=new Array(10,10.5,"abcd",true,null);
		//document.writeln(a);
		document.writeln(a[0],a[1],a[2],a[3],a[4],"<Br>");
		//for loop
		for(var i=0;i<5;i++)
		  document.writeln(a[i]);

		//length : is variable and returns number of elements in an array
		document.writeln(a.length,"<br>");
		
		for(var i=0;i<a.length;i++)
		  document.writeln(a[i]);

	</script>
   </font>
  <body>
</html>

ex-2:
================
<html>
 <body>
    <font size=7>
     <script>      
	   var a=new Array("red","green","blue","black");
	   for(var i=0;i<a.length;i++)
	   	   document.writeln(a[i]);
		
		document.writeln("<Br>");
		a.forEach(str => {
			document.writeln(str);
			});

	   document.writeln("<br>");	
	   var b=new Array(1,2,3,3,4,4,4);
	   for(var i=0;i<b.length;i++)
	      document.writeln(b[i]);

	  document.writeln("<br>");
	 //enhanced for loop
	  b.forEach(i =>{
		   document.writeln(i)
		   });
	</script>
   </font>
  <body>
</html>

Possible operations on Array object
=====================================================
1) push
2) pop
3) reverse
4) sort

push
=========
. inserting elements into an array is called push operation
. we can insert multiple values at a time
. ex:
=======
<html>
 <body>
    <font size=7>
     <script>      
	    var a=new Array("red","green","blue","black");
	    document.writeln(a,"<br>");
	    a.push("cyan");
		document.writeln(a,"<br>");
		a.push("magenta","yellow","orange");
		document.writeln(a,"<br>");
	</script>
   </font>
  <body>
</html>

2)pop()
============================================
. deleting elements from an array is called pop operation
. we can delete only one value at a time
. pop always deletes last element
. ex:
======
<html>
 <body>
    <font size=7>
     <script>      
	    var a=new Array("red","green","blue","black");
	    document.writeln(a,"<br>");
	    a.pop();
	    document.writeln(a,"<br>");
	    a.pop();
	    document.writeln(a,"<br>");
	</script>
   </font>
  <body>
</html>

3) reverse(): changes order of elements
=========================================
<html>
 <body>
    <font size=7>
     <script>      
	    var a=new Array("red","green","blue","black");
	    document.writeln(a,"<br>");
	    a.reverse();
		document.writeln(a,"<br>");

	   var b=new Array();
	   b.push(a[1]);
	   b.push(a[3]);
	   b.push(a[0]);
	   b.push(a[2]);
	   document.writeln(b);
	</script>
   </font>
  <body>
</html>

4) sort()
===================================================
<html>
 <body>
    <font size=7>
     <script>      
	   var a=new Array(5,4,2,1,3);
	   document.writeln(a,"<br>");
	   a.sort()
	   document.writeln(a,"<br>");
	   var b=new Array("xyz","pqr","mno","abcd");
	   document.writeln(b,"<br>");
	   b.sort()
	   document.writeln(b,"<br>");
     </script>
   </font>
  <body>
</html>

.WAP to change background color in every 2 seconds
================================================================
<html>
 <head>
    <script>
	  var i=0;
	  function changecolor()
	  {
		  var a=new Array("red","green","blue","magenta","cyan");
		  document.bgColor = a[i]; 
		  i++;
		  if(i == 5)
		  {
			  i=0;
		  }
	  }
	  //call changecolor() in every 2000 milliseconds
		setInterval("changecolor()",2000);
	</script>
 </head>
 <body>
    <font size=7>
     <script>      
	   changecolor();
     </script>
   </font>
  <body>
</html>

String object
========================
