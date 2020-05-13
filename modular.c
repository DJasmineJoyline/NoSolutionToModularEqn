#include<stdio.h>
int main()
{
    int a,b,i,count=0;
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++)
    {
        if(a%i ==b)
        count++;
    }
    printf("%d",count);
	
	
	
	return 0;
}
