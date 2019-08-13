/* Hermite Polynomial */
#include<stdio.h>
#include<math.h>

#define true 1
#define false 0

double F(double);
void INPUT(int *, double *, double [][5], int *);
void OUTPUT(FILE **);

main()
{
   double Q[5][5],X[5],Z[5];        //Arrays created for data read in
   double XX,S;
   int I,J,K,N,OK;
   char A;
   FILE *OUP[1];

   INPUT(&OK, X, Q, &N);            //Input coming from given data in a .txt file
   if (OK) {
      for (I=0; I<=N; I++) {
         Z[2*I] = X[I];
         Z[2*I+1] = X[I];
         Q[2*I+1][0] = Q[2*I][0];
         if (I != 0)
            Q[2*I][1] = (Q[2*I][0] - Q[2*I-1][0]) / (Z[2*I] -Z[2*I-1]);
      }
      K = 2 * N + 1;
      for (I=2; I<=K; I++)
         for (J=2; J<=I; J++)
            Q[I][J] = ( Q[I][J - 1] - Q[I - 1][J - 1] ) / ( Z[I] - Z[I - J] );
      OUTPUT(OUP);
         printf("Enter a point at which to evaluate\n");
         scanf("%lf", &XX);
         S = Q[K][K] * (XX - Z[K-1]);
         for (I=2; I<=K; I++) {
            J = K - I + 1;
            S = (S + Q[J][J]) * (XX - Z[J-1]);
         }
         S = S + Q[0][0];
         fprintf(*OUP, "x-value and interpolated-value\n");     //calculate values to 5 decimals
         fprintf(*OUP, "  %.50lf %.50lf\n", XX, S);
      }

   fclose(*OUP);
   return 0;
}
double F(double X)          //sin(x) values
{
   double f;

   f =  1.0/X;
   return f;
}
double FP(double X)         //Derivative values
{
   double f;

   f =  -1.0/(X*X);
   return f;
}

void OUTPUT(FILE **OUP)
{
   int FLAG;
   char NAME[30];

    *OUP = stdout;
}

void INPUT(int *OK, double *X, double Q[][5], int *N)
{
   int I, FLAG;
   char A;
   char NAME[30];
   FILE *INP;

         printf("This is Hermite interpolation.\n");
         *OK = true;

         printf("Has a text file been created with the data in three ");
         printf("columns?\n");
         printf("Enter Y or N\n");
         scanf("\n%c", &A);
         if ((A == 'Y') || (A == 'y')) {
            printf("Input the file name in the form - ");
            printf("drive:name.ext\n");
            printf("for example:   A:DATA.DTA\n");
            scanf("%s", NAME);
            INP = fopen(NAME, "r");
            *OK = false;
            while (!(*OK)) {
               printf("Input the number of data points minus 1\n");
               scanf("%d", N);
               if (*N > 0) {
                  for (I=0; I<=*N; I++)
                     fscanf(INP, "%lf %lf %lf", &X[I], &Q[2*I][0],
                            &Q[2*I+1][1]);
                  fclose(INP);
                  *OK = true;
               }
               else printf("Number must be a positive integer\n");
            }
         }
         else {
            printf("Please create the input file in three column ");
            printf("form with the X values, F(X), and\n");
            printf("F'(X) values in the corresponding columns.\n");
            printf("The program will end so the input file can ");
            printf("be created.\n");
            *OK = false;
         }
}

// Couldn't figure this problem out. Found a online example that read in the given points throgh a file 
//then assigned coeficients. Had trouble with the calculations as C would time out though i received no error.
