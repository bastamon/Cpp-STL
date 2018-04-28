package ex_2_4;
import java.awt.*;
import java.awt.event.*;
import java.applet.*;
class ButtonPanel extends Panel
{
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	ButtonPanel(String id)
	{
		setLayout(new BorderLayout());
		this.add("Center",new Button(id));
		this.add("North",new Button(id));
		this.add("South",new Button(id));
		this.add("West",new Button(id));
	}
}
public class PanelLayout extends Applet
{
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	Button first=new Button("First Card");
	Button second=new Button("Second Card");
	Button third=new Button("Third Card");
	Panel cards=new Panel();
	CardLayout cl=new CardLayout();
	public void init()
	{
		setLayout(new BorderLayout());
		Panel p=new Panel();
		p.setLayout(new FlowLayout());
		p.add(first);
		p.add(second);
		p.add(third);
		add("North",p);
		cards.setLayout(cl);
		cards.add("card1",new ButtonPanel("in the first card"));
		cards.add("card2",new ButtonPanel("in the second card"));
		cards.add("card3",new ButtonPanel("in the third card"));
		add("Center",cards);
		first.addActionListener(new ActionListenerOfButton());
		second.addActionListener(new ActionListenerOfButton());
		third.addActionListener(new ActionListenerOfButton());
	}
	class ActionListenerOfButton implements ActionListener
	{
		public void actionPerformed(ActionEvent e)
		{
			Object source=e.getSource();
			if(source==first)
				cl.first(cards);
			else if(source==second)
				{
					cl.first(cards);
					cl.next(cards);
				}
			else if(source==third)
				cl.last(cards);
		}
	}		
}