/* sir i have written this code by myself
but seems to bi givung little error value u cant find why hope you will helf me with this this program is written to calculate the value of sinx */

#include <stdio.h>
#include <math.h>
#include <complex.h>

    int main()
    {
        complex double d1=I;
        float deg,value,fact=1,x ;
        int i,j;
        printf("enter the angle in deggree : ");
        scanf("%f",&deg);
        x=deg*22/(180*7);


          for(i=1;i<=1000;i++)
          {



              if(i%2!=0)
              {
                  for(j=1;j<=i;j++)
                  {
                      fact*=j;
                      d1*=I;
                  }

                  value+=-d1*pow(x,i)/fact;

              }

          }
          printf("%f",value);
    }