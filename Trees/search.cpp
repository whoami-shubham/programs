#include"tree.h"
int main(){
node *head=NULL;

char ch='y';
double val,e;
int value,ans;
do{
cout<<"enter how many nodes you want to insert in binary tree \n";
cin>>value;
cout<<" enter "<<value<<"  values \n";
for(int i=0;i<value;i++){
cin>>val;
insert(val,&head);
}
cout<<"do you want to insert again then press any key otherwise press n or q for quit\n";
cin>>ch;
}while(ch!='n' && ch!='C' && ch!='q' && ch!='Q');
cout<<" which element you want to search\n";
cin>>e;
ans=search(e,head);
if(ans==1){
cout<<" element Found !!! \n";
}
else{
cout<<" no such element Exist  !! \n";
}
ans=find_max(head);
if(ans==INT_MIN){
cout<<"You haven't entered element yet please enter then check !\n";
}
else{
cout<<" max element is  "<<ans<<"  !\n";
}


}
