// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n=105,sum=0;
    while(n>0){
       int temp=n%10;
        int pro=1;
        for(int i=1;i<=temp;i++){
            pro*=i;
        }
        sum+=pro;
        n/=10;
    }
    printf("%d",sum);

    return 0;
}
