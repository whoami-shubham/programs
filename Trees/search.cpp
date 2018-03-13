#include"tree.h"
int main(){
node *tree1=NULL;

char ch='y';
double val,e;
int value,ans;
tree1=create(&tree1);
cout<<" which element you want to search\n";
cin>>e;
ans=search(e,tree1);
if(ans==1){
cout<<" element Found !!! \n";
}
else{
cout<<" no such element Exist  !! \n";
}
ans=find_max(tree1);
if(ans==INT_MIN){
cout<<"You haven't entered element yet please enter then check !\n";
}
else{
cout<<" max element is  "<<ans<<"  !\n";
}
/*
 * delete_tree(tree1);
if(!tree1){
cout<<" error \n";
}
else{
cout<<" deleted \n";
}
//vector<double>A;
//print_all_path(head,0,A);
*/
node *tree2=NULL;
tree2=create(&tree2);

if(compair_tree(tree1,tree2)){
cout<<" Both  tree are equal \n";

}
else{
cout<<" tree are not same \n";
}


}
