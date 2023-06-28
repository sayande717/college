<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<%@page import="java.sql.*,java.util.*"%>
<%
String nm=request.getParameter("name");
String add=request.getParameter("address");
int ag=Integer.parseInt(request.getParameter("age"));
try
{
         Class.forName("com.mysql.jdbc.Driver");
           Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/hit", "root", "root");
           Statement st=conn.createStatement();
           st.executeUpdate("insert into student(name,address,age)values('"+nm+"','"+add+"',"+ag+")");
        out.println("Data is successfully inserted!");
        }
        catch(Exception e)
        {
        System.out.print(e);
        e.printStackTrace();
        }
 %>