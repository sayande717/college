import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/service")
public class hello extends HttpServlet {
	protected void service(HttpServletRequest req, HttpServletResponse res) throws ServletException, IOException {
		res.setContentType("text/html");
		PrintWriter pw = res.getWriter();

        // Getting values
		String name = req.getParameter("name");
        String dept = req.getParameter("dept");
        String empid = req.getParameter("empid");
        String email = req.getParameter("email");

        // Printing values
        pw.println("Here's what you entered: ");
        pw.println("Name: "+name);
        pw.println("Department: "+dept);
        pw.println("Employee ID: "+empid);
        pw.println("E-Mail ID: "+email);

        pw.close();
	}
}