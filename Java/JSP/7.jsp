<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title></title>
</head>
<body>
    <%@ page import="java.util.*">
    <%
        String user = request.getParameter("user").value.toString();
        String pwd = request.getParameter("pwd").value.toString();
        String[] users = {"Ram",
                          "Rohan",
                          "Shruti"
                        };
        String[] passwords = {"abcd1234",
                          "bcde2345",
                          "cdef3456"
                        };   
        Arrays.sort(names);
        int index = Arrays.binarySearch(users, user);
        if(password[index].equals(pwd)) {
            out.println("Login succesful");
        } else {
            out.println("Login unsuccesful, username/password incorrect.")
        }
    %>
    <input type="button" value="Back to Login" onclick="history.back()">
</body>
</html>