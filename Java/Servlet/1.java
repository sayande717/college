import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/AddServlet")
public class AddServlet extends HttpServlet {
    public void service(HttpServletRequest req, HttpServletResponse res) throws IOException {

        int i = Integer.parseInt(req.getParameter("n1"));
        int j = Integer.parseInt(req.getParameter("n2"));

        int k = i + j;

        PrintWriter out = res.getWriter();
        out.println("Result is " + k);

    }
}