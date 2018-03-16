class Blocks{
 static int static_var;
 int non_static;
 static {
  System.out.println("Staic Block Called ");
  static_var=5;
 }

 {
System.out.println("Non-Static Block Called ");
non_static=7;
 }
 Blocks(){
System.out.println(" Constructor Called ");
 }
 public static void main(String args[]){

new Blocks();
new Blocks();

 }

}
