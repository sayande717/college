<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>

<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>
<body background-color="green">

<%

int i=Integer.parseInt(request.getParameter("n1"));
int j=Integer.parseInt(request.getParameter("n2"));

int k=i+j;
out.println("Result is "+k);


%>

</body>
</html>