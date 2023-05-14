import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.http.Cookie;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/SquareServlet")
public class SquareServlet extends HttpServlet {
    public void doGet(HttpServletRequest req, HttpServletResponse res) throws IOException {
        int k = 0;
        Cookie cookies[] = req.getCookies();
        for (Cookie c : cookies) {
            if (c.getName().equals("K"))
                k = Integer.parseInt(c.getValue());
        }
        k = k * k;
        PrintWriter out = res.getWriter();

        out.println("Result is " + k);

    }
}