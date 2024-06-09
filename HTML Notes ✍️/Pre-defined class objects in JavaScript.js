Pre-defined class objects in JavaScript :

3.String :

<!DOCTYPE html>
<html lang="en">
<head>
     <meta charset="UTF-8">
     <meta name="viewport" content="width=device-width,initial-scale=1.0">
     <title>Document</title>
</head>
<body>
     <script>
        var S1="good";
        var S2=new.String("hello");
        document.writeln(S2.CharAt(1));
        document.writeln(S2.concat(S1));
        document.writeln(S2.indexof('b'));
        document.writeln(S2.lastindexOf('l'));
        document.writeln(S2.toUpperCase());
        document.writeln(S2.startsWith("go"));
        document.writeln(S2.endsWith("boy"));
     </script>
</body>
</html>