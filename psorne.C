#intclude<stdio.h>
void main()
{
int a;
printf("\n Enter a number");
scanf("%d",&a);
if(a>0)
printf("\n Entered number is a positive number");
else if(a<0)
printf("\n entered number is negative number");
else if(a==0)
printf("\n entered number is zero");
getch();
}
