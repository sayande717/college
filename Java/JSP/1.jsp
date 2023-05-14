Scriplet:
<% 
    int i=Integer.parseInt(request.getParameter("n1")); 
    int j=Integer.parseInt(request.getParameter("n2")); 
    int k=i+j;
    out.println("Result is "+k);

%>


Declaration:
<%!

    int a=1;

%>

Directive: <%@ page import=" java.util.Date" %>

Expression: <%= k %>