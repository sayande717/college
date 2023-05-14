<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title></title>
</head>
<body>
    <%
        int n = Integer.parseInt(request.getParameter("input"));
        long out = 1;
        int i = 2;
        while(i <= n) {
            f = f * i;
            i++;
        }
        out.println("<h3>Factorial of "+n+": "+out);
    %>
</body>
</html>