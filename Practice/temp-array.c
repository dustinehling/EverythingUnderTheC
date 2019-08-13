#include<stdio.h>

void mergesort(int a[],int i,int j);            //Function initialization
void merge(int a[],int i1,int j1,int i2,int j2);

int main()
{
    int a[30],n,i;
    printf("Enter no of elements:");        //Prompts user for input
    scanf("%d",&n);
    printf("Enter array elements:");

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);     //Scans amount of elements in the array

    mergesort(a,0,n-1);     //Calls the mergesort function with 1st and last index of the a[] array

    printf("\nSorted array is :");
    for(i=0;i<n;i++)
        printf("%d ",a[i]); //Outputs display of the sorted array

    return 0;
}

void mergesort(int a[],int i,int j) //Function template
{
    int mid;

    if(i<j)
    {
        mid=(i+j)/2;
        mergesort(a,i,mid); //Calls function for the 1st element to the mid
        mergesort(a,mid+1,j);   //Calls function for the mid element to the last
        merge(a,i,mid,mid+1,j); //Calls merge function for the two sub-arrays
    }
}

void merge(int a[],int i1,int j1,int i2,int j2)
{
    int temp[50];    //array used for merging
    int i,j,k;
    i=i1;    //beginning of the first list
    j=i2;    //beginning of the second list
    k=0;

    while(i<=j1 && j<=j2)
    {
        if(a[i]<a[j])           //Select smaller element from the two
            temp[k++]=a[i++];   //Store this selected value in a temp
        else
            temp[k++]=a[j++];
    }

    while(i<=j1)
        temp[k++]=a[i++];       //Puts the remaining values of the 1st list into the temp array

    while(j<=j2)
        temp[k++]=a[j++];       //Puts the remaining values of the 2nd sub-array into the temp array

    //Transfer elements from temp[] back to a[]
    for(i=i1,j=0;i<=j2;i++,j++)
        a[i]=temp[j];
}
