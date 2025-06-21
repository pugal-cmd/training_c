
#include <stdio.h>

int main() {
int val1=123,val2=456,temp=val2,rev=0;
while(temp>0)
{
    rev=rev*10+temp%10;
    temp/=10;
}
while(rev>0)
{
    val1=val1*10+rev%10;
    rev/=10;
}
printf("%d",val1);
    return 0;
}
