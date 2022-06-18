#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // array of size 13 with all elements as 0
    int arr[13]={0};
    int die1,die2;
    // use time as seed, so that on each run new values are generated
    srand(time(0));
    // simulate die rolling 36000 times
    for(int i=0;i<36000;i++)
    {
        // generate random values in range [1,6]
        // (rand() %  (upper - lower + 1)) + lower
        die1=(rand() %  (6 - 1 + 1)) + 1;
        die2=(rand() %  (6 - 1 + 1)) + 1;
        // sum of 2 die is die1+die2, so increment the index
        // sum of 2 die range from 2-12 therefore index 0 and 1 will never be user
        arr[die1+die2]++;
    }
    // print results in tabular form
    printf("\tsum\tfreq\n");
    printf("\n\t-----\t-----\n");
    int sum=0;
    for(int i=2;i<13;i++)
    {
        printf("\t%d\t%d\n",i,arr[i]);
        sum=sum+arr[i];
    }
    printf("\n\t\t-----");
    printf("\n\t\t%d",sum);
    return 0;
}
