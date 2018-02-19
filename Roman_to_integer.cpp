class Solution {
public:
    int romanToInt(string s) {
        if(s==""){
            return 0;
        }
        int i,num=0,j=1;
        for(i=0;i<s.length();i++){
            j=1;
            if(s[i]=='I'){
                if(i+1<s.length()){
                    if(s[i+1]=='X'||s[i+1]=='V'){

                    }
                    else{
                        num=num+1;
                    }
                }
                else{
                num=num+1;
                }
            }
            else if(s[i]=='V'){
                if(i>0){

                if(s[i-1]=='I'){
                    num=num+4;
                }else{
                num=num+5;
                }
                }
                else{
                    num=num+5;
                }

            }
            else if(s[i]=='X'){
                if(i+1<s.length()){
                    if(s[i+1]=='C'||s[i+1]=='L'){
                        j=0;
                    }

                    }

                if(i>0 && j){

                if(s[i-1]=='I'){
                    num=num+9;
                }
                else{
                num=num+10;
                }
                }
                else{
                    if(j){
                    num=num+10;
                    }
                }
            }
            else if(s[i]=='L'){
                if(i>0){

                if(s[i-1]=='X'){
                    num=num+40;
                }else{
                num=num+50;
                }
                }
                else{
                    num=num+50;
                }

            }
            else if(s[i]=='C'){
                 if(i+1<s.length()){
                    if(s[i+1]=='M'||s[i+1]=='D'){
                        j=0;
                    }

                    }

                if(i>0 && j){

                if(s[i-1]=='X'){
                    num=num+90;
                }
                else{
                num=num+100;
                }
                }
                else{
                    if(j){
                    num=num+100;
                    }
                }
            }
            else if(s[i]=='D'){
                if(i>0){

                if(s[i-1]=='C'){
                    num=num+400;
                }else{
                num=num+500;
                }
                }
                else{
                    num=num+500;
                }

            }
            else if(s[i]=='M'){
                if(i>0){

                if(s[i-1]=='C'){
                    num=num+900;
                }else{
                num=num+1000;
                }
                }
                else{
                    num=num+1000;
                }

            }

        }
        return num;

    }
};
