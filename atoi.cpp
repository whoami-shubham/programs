class Solution {
public:
    int myAtoi(string str) {
        int sign=1,count=0,j=1;
        long long ans = 0;
        if(str.length()>0){
            for (int i=0;i<str.length();i++){
                if(str[i]>=48 && str[i]<=57){
                if(str[i]=='0'){
                    ans=(long long)(ans*10 + 0);
                }
              else if(str[i]=='1'){
                    ans=(long long)(ans*10 + 1);
                }
             else if(str[i]=='2'){
                    ans=(long long)(ans*10 + 2);
                }
             else if(str[i]=='3'){
                    ans=(long long)(ans*10 + 3);
                }
             else  if(str[i]=='4'){
                    ans=(long long)(ans*10 + 4);
                }
            else  if(str[i]=='5'){
                    ans=(long long)(ans*10 + 5);
                }
             else  if(str[i]=='6'){
                    ans=(long long)(ans*10 + 6);
                }
             else  if(str[i]=='7'){
                    ans=(long long)(ans*10 + 7);
                }
            else  if(str[i]=='8'){
                if(ans>=214748364 ){
                    if( sign==-1){
                    return -2147483648;
                }
                else{
                    return 2147483647;
                }

                if(i<str.length()-1 && ans>214748364 && sign==-1 ){
                    return -2147483648;
                }
                if(i<str.length()-1 && ans>214748364 && sign!=-1){
                    return  2147483647;
                }


                }
                    ans=(long long)(ans*10 + 8);
                }
                else{
                    if(ans>=214748364){
                        if( sign==-1){
                    return -2147483648;
                }
                else{
                    return 2147483647;
                }
                    }
                    ans=(long long)(ans*10 + 9);
                }
                }
                else if(str[i]=='+' || str[i]=='-'){
                    if(str.length()>1){
                        count++;
                        if(i==0  && str[i]=='-'||(str[i-1]==' ' && str[i]=='-')){
                           sign=-1;
                        }
                         if(count>1){
                                return 0;
                            }
                        }
                    else{
                        return 0;
                    }
                }
                else if(str[i]==' '){
                    if(i<str.length()-1 && str[i+1]==' ' && ans!=0){
                        break;
                    }
                    if(i>0 && str[i-1] !=' '){
                        return 0;
                    }
                    continue;
                }
            else {
                 break;
                }

        }
            }

        if( ans>2147483647){
            if(sign==-1){
            ans=-2147483648;
            sign=1;
            }
            else{
                ans=2147483647;
            }

        }
        return (long long)(ans*sign);

    }
};
