#include<iostream>
using namespace std;
 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        ListNode *p=head,*q = head;
        int i=0,j=1,k;
        while(p){
            p = p->next;
            i++;
            cout<<"inside 1st while loop \n";
        }
           k=i;
if(n!=1 && n!=i)
{
    while(q!=NULL && k>n+1)
    {    cout<<"inside 2nd while loop \n";
         cout<<"k = "<<k<<"  j = "<<j <<" n+1 = "<<n+1<<"\n";
          q=q->next;
          k = k-j;
    }
 q->next = q->next->next; 
}
else if(n==i)
{       cout<<"inside elif \n";
        head = head->next;
}
else
{    cout<<"inside 1st else \n";
    
    if(k>1)
    {
        while(q->next->next!=NULL)
        {  cout<<"inside 3rd while loop \n";
            q = q->next;
         }
        q->next = NULL;    
    }
    else
    {   cout<<"inside nested else \n";
        head = NULL;
    }
}
        return head;
        
        
}
};
int main(){
    int i,j,e,n;
    ListNode *temp,*head,*l;
    cout<<"enter the number of elements \n";
    cin>>j;
    cout<<"enter "<<j<<" elements \n";
    for(i=0;i<j;i++){
        cin>>e;
        if(head==NULL){
            l = new ListNode(e);
            head = l;
            temp=head;
        }
        else{
        l = new ListNode(e);
        temp->next = l;
        temp = l;
        }
        
    }
    cout<<"enter the position from end \n";
    cin>>n;
    Solution s1;
    head = s1.removeNthFromEnd(head,n);
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
    return 0;
}