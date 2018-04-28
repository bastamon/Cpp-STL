package ex_2_4;
import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class TryText3 extends Applet
{
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	TextField name=new TextField(30);
	TextField pw=new TextField(30);
	TextField pw1=new TextField(30);
	Label la1=new Label();
	Label la2=new Label();
	Label la3=new Label();
	public void init()
	{
		this.setLayout(new FlowLayout());
		la1.setText("name:");
		this.add(la1);
		this.add(name);
		la2.setText("password:");
		this.add(la2);
		pw.setEchoChar('*');
		this.add(pw);
		pw.addActionListener(new 
				ActionListener()
				{
					public void actionPerformed(ActionEvent e)
					{
						pw1.setText(pw.getText());
					}
				}
		);
		la3.setText("showpassword:");
		this.add(pw1);
	}
}
