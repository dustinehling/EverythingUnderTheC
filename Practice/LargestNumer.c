#include <stdio.h>

int max(int x,int y,int z){ //Function of 3 ints that determines the largest
    int meme;
    meme=x;

    if(y>meme)
    meme=y;

    if(z>meme)
    meme=z;

    return meme;
}

main(){

    int x,y,z,meme;

    printf("Enter value x:\n"); //prompt input for 3 ints
    scanf("%d", &x);

    printf("Enter value y:\n");
    scanf("%d", &y);

    printf("Enter value z:\n");
    scanf("%d", &z);

    meme = max(x,y,z); // Determines which of the 3 values entered is largest

    printf("The largest of %d, %d, and %d is %d\n",x,y,z,meme); //Lists input and outputs the max number to user

    return 0;
}
