class thread implements Runnable{
public void run(){
int i;
for(i=0;i<10;i++){
System.out.println(" thread " +Thread.currentThread().getId() + " is running ");
}
}
public static void main(String args[]){
thread t = new thread();
Thread a = new Thread(t);
Thread b = new Thread(t);

a.start();
b.start();
}
}
