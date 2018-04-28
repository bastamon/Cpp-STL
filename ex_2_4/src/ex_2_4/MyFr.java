package ex_2_4;
import java.applet.*;
import java.awt.*;
import java.awt.event.*;

public class MyFr extends Applet
{
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	
	MyFrame f=new MyFrame("my first frame");
	Button b1=new Button("open");
	Button b2=new Button("close");
	public void init()
	{
		this.add(b1);
		this.add(b2);
		b1.addActionListener(new Bl1());
		b2.addActionListener(new Bl2());
		f.setSize(200,300);		
	}
	class Bl1 implements ActionListener
	{
		public void actionPerformed(ActionEvent e)
		{
			f.setVisible(true);
		}
	}
	class Bl2 implements ActionListener
	{
		public void actionPerformed(ActionEvent e)
		{
			f.setVisible(false);
		}
	}
//弹出的对话框
	class MyFrame extends Frame
	{
		/**
		 * 
		 */
		private static final long serialVersionUID = 1L;
		Label la1=new Label("My Applet Frame:");
		MyFrame(String s)
		{
			super(s);
			add(la1);
		}
		
	}
}
