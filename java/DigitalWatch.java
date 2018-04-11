import javax.swing.*;  
import java.awt.*;  
import java.text.*;  
import java.util.*;  
public class DigitalWatch implements Runnable{  
JFrame f;  
Thread t=null;  
int hours=0, minutes=0, seconds=0;  
String timeString = "";  
JButton b;  
DigitalWatch(){  
    f=new JFrame();  
    t = new Thread(this);  
    t.start();  
    b=new JButton();
    b.setFont(new Font("Verdana",Font.BOLD,60));  
    b.setFocusPainted(false);
    //b.setFont(new Font("Arial", Font.PLAIN, 60));
    b.setBounds(50,150,300,80); 
    b.setBackground(Color.BLACK);
    b.setForeground(Color.GREEN); 
    f.setTitle("Digital Watch");
    f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);  
    f.add(b);  
    f.setSize(400,400);  
    f.setLocationRelativeTo(null);
    f.setVisible(true);  
}  
 public void run() {  
      try {  
         while (true) {  
  
            Calendar cal = Calendar.getInstance();  
            hours = cal.get( Calendar.HOUR_OF_DAY );  
            if ( hours > 12 )
                hours -= 12;  
            minutes = cal.get( Calendar.MINUTE );  
            seconds = cal.get( Calendar.SECOND );  
            SimpleDateFormat formatter = new SimpleDateFormat("hh:mm:ss");  
            Date date = cal.getTime();  
            timeString = formatter.format( date );  
             printTime();  
           t.sleep( 1000);  
         }  
      }  
      catch (Exception e) { }  
 }   
public void printTime(){  
b.setText(timeString);  
}    
public static void main(String[] args) {  
    new DigitalWatch();  
}  
}  
