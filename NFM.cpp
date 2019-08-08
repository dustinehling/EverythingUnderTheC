/* Newton Forward Method */
#include<stdio.h>
#include<math.h>
void main() {
int i,n,j,fact=1;                       //Declare variable and set up arrays for data entry
float x[5],y[5][5],h,d=1,p,a,f,re;
printf("How many data points:");        //To make sure loop executed proper number of times
scanf("%d",&n);
printf("\nEnter the elements of x:");
{
    for(i=1;i<=n;i++)                   //Data entry
    scanf("%f", &x[i]);
}
printf("\nEnter The Elements of sin(x):");
{
    for(i=1;i<=n;i++)
    scanf("%f",&y[i][1]);
}

    h=x[2]-x[1];                        //Calculate the h values to be used in NFM equation

printf("Enter x for which sin(x) is to be calculated:");
scanf("%f",&f);

    p = (f-x[1])/h;
    a=y[1][1];

for(j=2;j<=n;j++) {
    for(i=1;i<=(n-j)+1;i++)
    y[i][j]= y[i+1][j-1] - y[i][j-1];
}

printf("The Table is :\n\n");       //Create table for NFM rounded to 2 decimals

for(i=1;i<=n;i++)
    {
    printf("\t%.2f",x[i]);
    for(j=1;j<=(n-i)+1;j++)
     printf("\t%.2f",y[i][j]);
    printf("\n");
    }

for(j=2;j<=n;j++) {
    for(i=1;i<j;i++)
    fact=fact*i;

    d = d*(p-(j-1));
    a = a + (y[1][j]*d)/fact;
    fact=1;
}

p = sin(.34);                   //Sum and calculate error from actual value
re = p - a;

printf("\n\nFor sin(x) the value of  is %f",a);     //Output
printf("\n\nThe real value of sin(x) = %f ",p);
printf("n\nThe relative error is equal to %f",re);
getch();
}
