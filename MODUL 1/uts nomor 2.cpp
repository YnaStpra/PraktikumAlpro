#include <stdio.h>
using namespace std;

int main()
{
int row,n,i,j,k;
char c = 65;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=n-0;j>=i;j--)
{
printf(" ");
}
for(k=1;k<=i+(i-1);k++)
{
if(c>90)
c = 65;
printf("%c",c++);
 
}
printf("\n");
}
return 0;
}