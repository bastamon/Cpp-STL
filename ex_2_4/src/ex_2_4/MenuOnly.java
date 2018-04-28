package ex_2_4;
import java.awt.*;
import java.awt.event.*;
import java.applet.*;

public class MenuOnly extends Applet
{
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	MyFrame f=new MyFrame("hi menuonly");
	Button b1=new Button("open");
	Button b2=new Button("close");
	MenuBar mb1=new MenuBar();
	Menu fi=new Menu("file");
	MenuItem[] file={
			new MenuItem("Open",new MenuShortcut(KeyEvent.VK_O)),
			new MenuItem("Close",new MenuShortcut(KeyEvent.VK_S)),
			new MenuItem("Exit",new MenuShortcut(KeyEvent.VK_E))
	};
	public void init()
	{
		this.add(b1);
		this.add(b2);
		f.setMenuBar(mb1);
		mb1.add(fi);
		for(int i=0;i<file.length;i++)
			fi.add(file[i]);
	}
	
	b1.addActionListener(new Bl1());
	b2.addActionListener(new Bl2());
	f.setSize(200,300);
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
	class MyFrame extends Frame
	{
		/**
		 * 
		 */
		private static final long serialVersionUID = 1L;
		Label la1=new Label("My Applet Frame");
		public MyFrame(String s) 
		{
			super(s);
			setLayout(new FlowLayout());
		}		
	}
}
