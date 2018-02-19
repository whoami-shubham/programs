import java.math.BigInteger;
import java.util.*;
class pu2{
public static void main(String args[]){
int i;
BigInteger sum=new BigInteger("2");
BigInteger c=new BigInteger("1");
BigInteger d=new BigInteger("2");
for(i=2;i<4000000;i++){
c=c.add(d);
d=d.add(c);
if(c.intValue()>4000000){
break;
}
if(c.intValue()%2==0){
sum=sum.add(c);
}
if(d.intValue()%2==0){
sum=sum.add(d);
}
}
System.out.println(sum);
}
}
