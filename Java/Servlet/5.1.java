import java.io.IOException;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

@WebServlet("/AddServlet")
public class AddServlet extends HttpServlet {
    public void doGet(HttpServletRequest req, HttpServletResponse res) throws IOException, ServletException {
        int i = Integer.parseInt(req.getParameter("n1"));
        int j = Integer.parseInt(req.getParameter("n2"));
        int k = i + j;
        HttpSession session = req.getSession();
        session.setAttribute("K", k);
        res.sendRedirect("SquareServlet");

    }
}