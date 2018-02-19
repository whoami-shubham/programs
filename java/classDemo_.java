class display{
int a,b;
display(){
a=0;
b=10;
}
static void main(){
System.out.println("display class ");}
}
class classDemo_ extends display{
public static void main(String args[]){
display.main();
classDemo_ o =new classDemo_();
System.out.println(o.a+o.b);
System.out.println("derived class ");
}
}


