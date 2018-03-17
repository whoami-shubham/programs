interface A {
int a=10;
int sum(int a,int b);
}
class S implements A {
	public int sum(int a,int b){
		return a+b;
	}
public static void main(String args[]){
S o = new S();
int i,sum=0;
for(i=0;i<args.length;i++){
sum = sum + Integer.parseInt(args[i]);
}
System.out.println(" sum is  " + sum);


}


}

