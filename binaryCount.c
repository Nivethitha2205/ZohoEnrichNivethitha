#include <stdio.h>

int main()
{
    int num=0,a[1000]={0},i=0;
    int count=0;
    scanf("%d",&num);
    
    while(num!=0)
    {
        a[i]=num%2;
        
        if(a[i]==1)
        {
            count++;
        }
        i++;
        num=num/2;
    }
    
    printf("%d",count);
}

