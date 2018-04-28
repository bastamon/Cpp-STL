package ex_2_4;
import java.awt.*;
import java.awt.event.*;
import java.applet.*;

public class MyMenu1 extends Applet
{
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	MyFrame f=new MyFrame("hi");
	Button b1=new Button("Open");
	Button b2=new Button("Close");
	TextField tf1=new TextField(20);
	
	MenuBar mb1=new MenuBar();
	Menu fi=new Menu("File");
	Menu e=new Menu("Exit");
	Menu s=new Menu("Search");
	Menu v=new Menu("view");
	
	CheckboxMenuItem[] vie={
			new CheckboxMenuItem("Text"),
			new CheckboxMenuItem("Html")
	};
	MenuItem[] file={
			new MenuItem("Open",new MenuShortcut(KeyEvent.VK_O)),
			new MenuItem("Save",new MenuShortcut(KeyEvent.VK_C)),
			new MenuItem("Exit",new MenuShortcut(KeyEvent.VK_E))
		};
	MenuItem[] edit={
			new MenuItem("Copy",new MenuShortcut(KeyEvent.VK_C)),
			new MenuItem("Paste",new MenuShortcut(KeyEvent.VK_P)),
			new MenuItem("Delete",new MenuShortcut(KeyEvent.VK_D))
		};
	MenuItem[] Search={
			new MenuItem("Find",new MenuShortcut(KeyEvent.VK_F)),
			new MenuItem("Replace",new MenuShortcut(KeyEvent.VK_R))
	};
	ML ml1=new ML();
	MIL mill=new MIL();
	WL fw1=new WL();
	
	class WL extends WindowAdapter
	{
		public void windowClosing(WindowEvent e)
		{
			f.setVisible(false);
		}
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
	class MyFrame extends Frame
	{
		/**
		 * 
		 */
		private static final long serialVersionUID = 1L;
		Label la1=new Label("My Applet Frame");
		TextField tf=new TextField(20);
		MyFrame(String s)
		{
			super(s);
			setLayout(new FlowLayout());
			add(la1);
			tf.setEditable(false);
			add(tf);
			tf.setText("i am in a frame");
		}
	}
	class ML implements ActionListener
	{
		public void actionPerformed(ActionEvent e)
		{
			MenuItem target=(MenuItem)e.getSource();
			String ac=target.getActionCommand();
			if(ac.equals("Open"))
				tf1.setText("select Open");
			else if(ac.equals("Save"))
				tf1.setText("select Save");
			else if(ac.equals("Exit"))
				f.setVisible(false);
		}
	}
	class MIL implements ItemListener
	{
		public void itemStateChanged(ItemEvent e)
		{
			CheckboxMenuItem target=(CheckboxMenuItem)e.getSource();
			String acommand=target.getActionCommand();
			if(acommand.equals("Text"))
				tf1.setText("Text is"+target.getState());
			else if(acommand.equals("Html"))
				tf1.setText("Html is"+target.getState());
		}
	}
	public void init()
	{
		this.add(b1);
		this.add(b2);
		this.add(tf1);
		f.setMenuBar(mb1);
		mb1.add(fi);
		for(int i=0;i<file.length;i++)
			fi.add(file[i]);
		for(int i=0;i<vie.length;i++)
			v.add(vie[i]);
		fi.add(v);
		mb1.add(s);
		for(int i=0;i<Search.length;i++)
			s.add(Search[i]);
		b1.addActionListener(new Bl1());
		b2.addActionListener(new Bl2());
		file[0].setActionCommand("Open");
		file[0].addActionListener(ml1);
		file[1].setActionCommand("Save");
		file[1].addActionListener(ml1);
		file[2].setActionCommand("Exit");
		file[2].addActionListener(ml1);
		
		vie[0].setActionCommand("Text");
		vie[0].addItemListener(mill);
		vie[1].setActionCommand("Html");
		vie[1].addItemListener(mill);
		
		f.addWindowListener(fw1);
		f.setSize(200,300);
	}
}
