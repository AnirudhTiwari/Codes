#include<stdio.h>


void jumpr(int A[], int m, int n){

    int i,k=1;

    for(i=m+n-1;i>n-1;i--){

        A[i] = A[m-k];
        k+=1;
    }
}
void merge(int A[], int m, int B[], int n) {

    int i,j,k=0,common=0;

    jumpr(A,m,n);


 //   for(i=0;i<m+n;i++)
 //       printf("%d\n", A[i]);

    i=0;
    j=n;

    while( i < n && j < m+n){

 //   printf("Ini i is %d j is %d A[j] is %d B[i] is %d\n",i,j, A[j], B[i]);

        if(A[j] < B[i]){

            A[k] = A[j];
            j+=1;

        }

        else if(A[j] > B[i]){

            A[k] = B[i];
            i+=1;
        }

        else if(A[j]==B[i]){

            A[k] = A[j];
            j+=1;

        }
  //      printf("fin i is %d j is %d A[j] is %d B[i] is %d\n",i,j, A[j], B[i]);

        k+=1;

    }

    if(i<n){
        while(i!=n){
            A[k] = B[i];
            k+=1;
            i+=1;
        }
    }

    else if(j < m+n){
        while(j!=m+n){
            A[k] = A[j];
            k+=1;
            j+=1;
        }
    }

}

int main(){

    int A[3] = {1,2,3},i;
    int B[3] = {2,5,6};

    merge(A,3,B,3);



    return 0;
}