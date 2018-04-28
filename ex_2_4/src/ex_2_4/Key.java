package ex_2_4;
import java.awt.*;
import java.awt.event.*;
import java.applet.*;

public class Key extends Applet
{
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	TextField tf1=new TextField(10);
	TextField tf2=new TextField(10);
	Label l1=new Label("tf1:",Label.CENTER);
	Label l2=new Label("tf2:",Label.CENTER);	
	class TextFieldKeyListener extends KeyAdapter
	{
		public void keyTyped(KeyEvent e)
		{
			tf2.setText(tf1.getText());
		}
	}
	public void init()
	{
		add(l1);
		add(tf1);
		add(l2);
		add(tf2);
		tf1.addKeyListener(new TextFieldKeyListener());
	}
}
