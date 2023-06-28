<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title></title>
</head>
<body>
    <%@ page import="java.util.Arrays">
    <%
        String name = request.getParameter("name").value.toString();
        String[] names = {"Ram",
                          "Rohan",
                          "Shubham"
                        };
        String[] numbers = {"1234567890",
                          "2345678901",
                          "3456789012"
                        };   
        Arrays.sort(names);
        int index = Arrays.binarySearch(names, name);
        out.println("Phone number: "+numbers[index]);
    %>
    <%@ page import java.util.Arrays %>
</body>
</html>