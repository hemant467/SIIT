Pre-defined class objects in JavaScript :
1. Date
2. Math
3. String
4. Arrays
5. Document
6. Navigator
7. History
8. Screen
9. Window
10. Location

-------------------------------------------------------------------------

<body>
      <script>
        Var d=new Date();
	document.writeln("<center>"+d.getDate());
	document.writeln("<center>"+d.getMonth());
	document.writeln("<center>"+d.getFullYear());
	document.writeln("<center>"+d.getHours());
	document.writeln("<center>"+d.getMiutes());
</script>
</body>
</html>

-------------------------------------------------------------------------

<body>
      <script>
        Var d=new Date();
	document.writeln("<center>"+Math.PI);
	document.writeln("<center>"+Math.Sqrt(2));
	document.writeln("<center>"+Math.pow(2,3));
	document.writeln("<center>"+Math.ceil(2,3));
	document.writeln("<center>"+Math.floor(2,3));
	document.writeln("<center>"+Math.round(2,3));
</script>
</body>
</html>

-------------------------------------------------------------------------

Possible operations on array[] :
1. Push
2. Pop
3. Reverse
4. Sort

<Script>
   var a=new Arrays(10,2.5,"good","bad");
   console.log(a.length);
      for(i=0;i<a.length;i++)
       {
         console.log(a[i]);
       }
       a.push("bye",3.2,15);
       for(i=0;i<a.length;i++)
        {
           console.log(a[i]);
        }
        console.log(a.length);
        a.pop();
        for(i=0;i<a.length;i++)
         {
            console.log(a[i]);
         }
         a.reverse();
         for(i=0;i<a.length;i++)
          {
            console.log(a[i]);
          }
          a.sort();
          for(i=0;i<a.length;i++)
           {
             console.log(a[i]);
           }
	   var b=prompt("enter a list with comma");
	   var c=b.split(",");
	   console.log(c);
</script>
</body>
</html>

-------------------------------------------------------------------------

DATE:

<script>
d=new Date();
console.log(d.getYear()+1900);
console.log(d);
console.log(d.getTime());
console.log(d.getFullYear());
</script>
