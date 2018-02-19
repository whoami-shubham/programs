vector<int> Solution::plusOne(vector<int> &A) {
  if(A[A.size()-1]!=9){
      A[A.size()-1]+=1;
    }
    else{
         A[A.size()-1]=0;
         int firstd=A[0],carry=1,i,j=A.size()-2,fd;
         for(i=0;i<A.size()-2;i++){
             if (A[j]+ carry <=9){
                     A[j]=A[j]+carry;
         }
         else{
             A[j]=A[j]+carry;
             carry=(A[j])/10;
             A[j]=(A[j])%10;
         }
         j=j-1;
         if(i==A.size()-3){
             if (firstd+ carry>9){
                         fd=(firstd+carry)/10;
                         A.insert(A.begin(),fd);
         }
         }
         }
    }

    return A;
 }
