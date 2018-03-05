#include <stdio.h>
#include<string.h>

int main()
{
    char a[100];
    scanf("%[^\t\n]s",a);
    int countA=0,countE=0,countI=0,countO=0,countU=0;
    int i;
    int n=strlen(a);
    for(i=0;i<n;i++)
    {
        if( a[i]=='a' || a[i]=='A')
        {
            countA++;
        }
        else if(a[i]=='e' || a[i]=='E')
        {
            countE++;
        }
        else if(a[i]=='i' || a[i]=='I')
        {
            countI++;
        }
        else if(a[i]=='o' || a[i]=='O')
        {
            countO++;
        }
        else if(a[i]=='u' || a[i]=='U')
        {
            countU++;
        }
    }
    
    printf("a --> %d\n",countA);
    printf("e --> %d\n",countE);
    printf("i --> %d\n",countI);
    printf("o --> %d\n",countO);
    printf("u --> %d\n",countU);
}
