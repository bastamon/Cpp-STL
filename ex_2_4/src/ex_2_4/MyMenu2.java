package ex_2_4;
import java.awt.*;
import java.awt.event.*;
import java.applet.*;

public class MyMenu2 extends Applet
{
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	int icount;
	//Integer count=new Integer(0);
	public void init()
	{
		icount=0;
		new MyFrame2("one");
	}
	
	
	
	
	class MyFrame2 extends Frame
	{
		/**
		 * 
		 */
		private static final long serialVersionUID = 1L;
		MenuBar mb1=new MenuBar();
		Menu fi=new Menu("file");
		MenuItem[] file={
				new MenuItem("new frame",new MenuShortcut(KeyEvent.VK_N)),
				new MenuItem("Exit",new MenuShortcut(KeyEvent.VK_E))
		};
		TextField tf=new TextField(10);
		MyFrame2(String s)
		{
			super(s);
			setSize(300,300);
			setLayout(new FlowLayout());
			setMenuBar(mb1);
			mb1.add(fi);
			for(int i=0;i<file.length;i++)
				fi.add(file[i]);
			ML ml1=new ML();
			file[0].setActionCommand("new frame");
			file[0].addActionListener(ml1);
			file[1].setActionCommand("Exit");
			file[1].addActionListener(ml1);
			add(tf);
			setVisible(true);
		}
		class ML implements ActionListener
		{
			public void actionPerformed(ActionEvent e)
			{
				MenuItem target=(MenuItem)e.getSource();
				String ac=target.getActionCommand();
				if(ac.equals("new frame"))
				{
					icount++;
					new MyFrame2("new "+Integer.toString(icount));
					tf.setText("Create New");
				}
				else if(ac.equals("Exit"))
					setVisible(false);
			}
		}
	}
}
