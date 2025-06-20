#include <stdio.h>

int main() {
    int n,even=0,odd=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0) {
        int temp=n%10;
        if(temp%2==0){
         even++;
        }
        else{
            odd++;
        }
        n/=10;
    }
    printf("odd%d\n",odd);
    printf("even%d\n",even);
    
    return 0;
}
