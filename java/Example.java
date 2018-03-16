class Example
{
int a=10;
int b=20;
static void prt(String s){
System.out.println(s);
}
void display(){
prt(" a + b is  " + (a+b));
}

public static void main(String arg[]){
Example o1=new Example();
o1.display();

}
}
