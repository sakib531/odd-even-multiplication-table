#include<stdio.h>

int main (){
    int n,i,j;
    printf ("input the value :");
    scanf("%d",&n);
    if(n%2==0){
        printf ("it's an even number. the multiplication table for even number are :\n");
        i=2;
    }
    else{
        printf ("it's an even number. the multiplication table for even number are :\n");
        i=1;
    }
    for(i;i<=n;i=i+2){
            for (j=1;j<=10;j++) {
                printf (" %d * %d = %d\n",i,j,i*j);
            }

    }
    return 0;
}
