#include<stdio.h>
#include<stdlib.h>
char* solve(int year){
     if(year==1918){
        return "26.09.";
    }
else{
      if(year>=1700&&year<=1917){
        if(year%4==0){
           return "12.09.";
        }
        else{
            return "13.09.";
        }
    }
    else if(year>=1919){
        if(year%400==0||(year%4==0&&year%100!=0)){
            return "12.09.";
        }
        else{
            return "13.09.";
        }
    }
    else{
        return "0";
    }
  }

     // Complete this function
}

int main() {
    int year;
    printf("enter year :");
    scanf("%d", &year);
    int result_size;
    char* result = solve(year);
    printf(" day of programmer is %s%d\n", result,year);
    return 0;
}
