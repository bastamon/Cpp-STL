package ex_2_4;
import java.applet.*;
import java.awt.*;
import java.awt.event.*;

public class MouseTest extends Applet// implements MouseListener
{
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	int x=10,y=10;
	public void init()
	{
		this.addMouseListener(new ML());
	}
	public void paint(Graphics g)
	{
		g.drawLine(x-5,y-5,x+5,y+5);
		g.drawLine(x+5,y-5,x-5,y+5);
	}
	/*public void mousePressed(MouseEvent e){}
	public void mouseReleased(MouseEvent e){}
	public void mouseEntered(MouseEvent e){}
	public void mouseExited(MouseEvent e){}*/
	class ML extends MouseAdapter
	{	
		public void mouseClicked(MouseEvent e)
		{
			x=e.getX();
			y=e.getY();
			repaint();
		}
	}
}

