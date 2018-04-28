package ex_2_4;
import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class ButtonExample extends Applet implements ActionListener
{
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	TextField name=new TextField(30);
	TextField pw=new TextField(30);
	TextField pw1=new TextField(30);
	Label la1=new Label("name:",Label.CENTER);
	Label la2=new Label("password:",Label.CENTER);
	Label la3=new Label("show password:",Label.CENTER);
	Button b1=new Button("ok");
	public void actionPerformed(ActionEvent e)
	{
		if(e.getSource()==pw)
			pw1.setText("action from pw password");
		else if(e.getSource()==b1)
			pw1.setText("action from b1 button");
	}
	public void init()
	{
		this.setLayout(new FlowLayout());
		//la1.setText();
		this.add(la1);
		this.add(name);
		//la2.setText();
		this.add(la2);
		pw.setEchoChar('*');
		this.add(pw);
		pw.addActionListener(this);
		//la3.setText();
		this.add(la3);
		this.add(pw1);
		this.add(b1);
		b1.addActionListener(this);
	}
}
