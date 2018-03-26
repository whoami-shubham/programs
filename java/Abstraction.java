import java.util.*;
import java.io.*;
abstract class person
{
static Scanner in = new Scanner(System.in);
public String name;
public int age;

person(){
System.out.println(" enter a name of person ");
name=in.nextLine();
System.out.println(" enter age of person ");
age = in.nextInt();
//this.age=age;
//this.name=name;
}
int get_age(){
	return age;
}
String get_name(){
	return name;
}
abstract void display();

}

class student extends person
{
String subject;
student(){
//super(name,age);
//this.subject=subject;
System.out.println(" enter major subject of student ");
in.nextLine();
subject = in.nextLine();
}
void display(){
System.out.println("------------------------------------------- ");
System.out.println(" student's name is  " + this.get_name());
System.out.println(" student's age is  " + this.get_age());
System.out.println(" student's major subject is " + subject);
System.out.println(" ------------------------------------------- ");

}
public static void main( String args[]){
person s = new student();
s.display();

}





}
