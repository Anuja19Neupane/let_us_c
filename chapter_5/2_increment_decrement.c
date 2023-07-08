//printing 1 to 10 using increment while loop.
#include <stdio.h>
int main()
{
    int i=1;
    while (i<=10)

    {
        printf("%d\n",i);
        i=i+1; //can use i=i++
        // note: dont use i=+++ to increment i by 2 because there is no operator such as +++
        //other compound assignment operators are -=,*=,/= and %= 
    }
    return 0;

}
//it is not necassary that the loop counter must be int.



//printing 1 to 10 using decrement while loop.
// #include <stdio.h>
// int main()
// {
//     int i=5;
//     while (i>=10)

//     {
//         printf("hello\n");
//         i=i-1;
//     }
//     return 0;

// }