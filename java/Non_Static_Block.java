class Block
{
int c;
Block(){
System.out.println(" super called ");
c=3;
}

}

class Non_Static_Block extends Block
{
int a,b;

{
System.out.println(" Non-Staic Block called ");
a=5;
b=6;
}

Non_Static_Block(){
System.out.println(" Constructor called ");
}
Non_Static_Block(int v){
System.out.println("parameterized constructor called ");
}
public static void main(String args[]){

new Non_Static_Block();
new Non_Static_Block(5);
}






}
