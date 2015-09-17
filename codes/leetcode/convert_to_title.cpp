#include<string>
#include<stdio.h>
#include<stdlib.h>
#include<stack>
#include<math.h>
#include<vector>

using namespace std;

string convertToTitle(int n) {

    int length,i=0,divisor,quotient;
    string ans="";

    length = n;
    while(length>0){
       // printf("length is %d i is %d\n", length, i );
        length = n/pow(26,i);
        i+=1;
    }

    length = i-1;

    printf("length %d\n", length);

    while(length >= 0 ){


        divisor = pow(26,length);
        printf("n is %d divisor  is %d\n",n,divisor);

        quotient = n/divisor;
        int rmnder = n%divisor;
        n = n - divisor*quotient;

        rmnder = rmnder + 64;

//        printf("quotient is %c\n", quotient);

        ans = ans + char(rmnder);
    //    length = length - 1;
        length = length - 1;

        if(quotient==0)
            break;

    }
    return ans;
}

int main(){

    string ans = convertToTitle(27);

    for(int i=0;i<ans.size();i++)
        printf("%c",ans[i]);
    printf("\n");
}