package ex_2_4;
import java.applet.*;
import java.awt.*;
import java.awt.event.*;
public class Mouse extends Applet implements MouseListener,MouseMotionListener
{
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	String txt="";
	public void init()
	{
		this.addMouseMotionListener(this);
		this.addMouseListener(this);
	}
	public void paint(Graphics g)
	{
		g.drawString(txt,20,50);
	}
	public void mousePressed(MouseEvent e){}
	public void mouseReleased(MouseEvent e){}
	public void mouseEntered(MouseEvent e){}
	public void mouseExited(MouseEvent e){}
	public void mouseClicked(MouseEvent e)
	{
		txt="mouse clicked";
		repaint();
	}
	public void mouseMoved(MouseEvent e)
	{
		txt="mouse moved";
		repaint();
	}
	public void mouseDragged(MouseEvent e)
	{
		txt="mouse dragged";
		repaint();
	}
}
