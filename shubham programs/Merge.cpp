#include<iostream>
#include<cstdlib>
using namespace std;
/*
  Merge two sorted lists A and B as one linked list
  Node is defined as*/ 
  struct Node
  {
     int data;
     struct Node *next;
  };
Node *insert(int n,Node **head);
   /*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node *MergeLists(Node *headA, Node *headB){
    Node *headAB,*p=NULL;
     headAB=NULL;
    if(!(headA&&headB)){
        if(!headA){
            headAB=headB;
        }
        else{
            headAB=headA;
        }
        return headAB;
    }
    while(headA&&headB){
        if(headA->data>headB->data){
             if(!headAB){
                 Node *temp;
            temp=(Node *)malloc(sizeof(Node));
            temp->data=headB->data;
           temp->next=NULL;
                headAB=temp;
                 p=headAB;
                 headB=headB->next;
            }
            else{
            Node *temp;
            temp=(Node *)malloc(sizeof(Node));
            temp->data=headB->data;
           temp->next=NULL;
         p->next=temp;
            p=p->next;
            headB=headB->next;
        }
        }
        else{
             if(!headAB){
                 Node *temp;
            temp=(Node *)malloc(sizeof(Node));
            temp->data=headA->data;
           temp->next=NULL;
                headAB=temp;
                p=headAB;
                 headA=headA->next;
            }
            else{
             Node *temp;
            temp=(Node *)malloc(sizeof(Node));
            temp->data=headA->data;
                temp->next=NULL;
         p->next=temp;
            p=p->next;
            headA=headA->next;
        }
        }
    }
    if(headA!=NULL){
        p->next=headA;
      while(p->next){
          p=p->next;
      }  
    }
    if(headB!=NULL){
       p->next=headB;
        
    }
    return headAB;
  // This is a "method-only" submission. 
  // You only need to complete this method 
}

int main(){

Node *headA,*headB,*A;
headA=insert(6,&headA);
headA=insert(5,&headA);
headA=insert(3,&headA);
headA=insert(1,&headA);
headB=insert(2,&headB);
headB=insert(4,&headB);
headB=insert(7,&headB);
A=MergeLists(headA,headB);
while(A->next!=NULL){
cout<<A->data<<"->";
A=A->next;
}

return 0;
}
Node *insert(int n,Node **head){
Node *temp;
temp=(Node *)malloc(sizeof(Node));
temp->data=n;
if(!(*head)){
temp->next=NULL;
}
temp->next=*head;
return *head;
}


