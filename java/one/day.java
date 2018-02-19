
/**
 * Write a description of class day here.
 *
 * @author (your name)
 * @version (a version number or a date)
 */
public class day
{
    // instance variables - replace the example below with your own
    private int x,month,year;

    /**
     * Constructor for objects of class day
     */
    public day(int month,int year )
    {
        this.month=month;
        this.year=year;
        // initialise instance variables
        x = 0;
    }
    int getmonth(){
        return 1;
    }
    int getyear(){
        return 2018;
    }
    /**
     * An example of a method - replace this comment with your own
     *
     * @param  y  a sample parameter for a method
     * @return    the sum of x and y
     */
    public int sampleMethod(int y)
    {
        // put your code here
        return x + y;
    }
}
