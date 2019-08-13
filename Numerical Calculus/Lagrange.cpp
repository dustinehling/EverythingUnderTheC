/* Lagrange Polynomial */
#include<stdio.h>
#include<math.h>                        //include <math.h> for sin(x) function
void main()
{
  float x[5],y[5],temp=1,f[5],sum,p,re; //create arrays to enter in data, could have read in from file as well
  int i,n,j,k=0,c;
  printf("\nHow many data points?");    //important so the loop that follows know how many times to run
  scanf("%d",&n);
  for(i=0; i<n; i++)
  {
   printf("\n\nEnter the value of x%d: ",i);  //since we have 3 data points we run the loop 3 time to enter in
   scanf("%f",&x[i]);                         //our desired table of data
   printf("\n\nEnter the value of f(x%d): ",i);
   scanf("%f",&y[i]);
  }
  printf("\n\nEnter the value of x for finding sin(x): ");
  scanf("%f",&p);

  for(i=0;i<n;i++)      //this loop is determining the coefficients
  {
    temp = 1;
    k = i;
    for(j=0;j<n;j++)
    {
      if(k==j)
      {
        continue;
      }
      else
      {
        temp = temp * ((p-x[j])/(x[k]-x[j]));
      }
    }
    f[i]=y[i]*temp;
  }

  for(i=0;i<n;i++)
  {
     sum = sum + f[i];             //Sum and compare with actual value to calculate error
  }
  p = sin(.34);
  re = sin(.34)-sum;
  printf("\n\nP_2(x) = 295.52*(x-0.32)(x-0.35)-524.28*(x-0.30)(x-0.35)+228.60*(x-0.30)(x-0.32)");
  printf("\n\nP_2(%.21f) = %f ",p,sum);
  printf("\n\nThe real value of sin(x) = %f ",p);           //Output
  printf("n\nThe relative error is equal to %f",re);
}
