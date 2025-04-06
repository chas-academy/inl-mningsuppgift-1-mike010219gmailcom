#include <stdio.h>
#include <stdlib.h>

int main()
{

    // The Line below must *NOT* be changed or test will fail!
    srand(1);
    
    
    int throw [100];
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;
    int sum = 0; 

    for (int i = 0; i < 100; i++)
    {
        int roll = (rand() % 6) + 1;
        throw [i] = roll;
    
    
    if (roll == 1)
    {
        one++;
    }
    else if (roll == 2)
    {
        two++;
    }
    else if (roll == 3)
    {
        three++;
    }
    else if (roll == 4)
    {
        four++;
    }
    else if (roll == 5)
    {
        five++;
    }
    else
        six++;   
   
    sum += roll;

    }
    
    float mid = (float)sum/100;

    printf("%d\n", one);
    printf("%d\n", two);
    printf("%d\n", three);
    printf("%d\n", four);
    printf("%d\n", five);
    printf("%d\n", six);
    printf("%d\n", sum);
    printf("%.1f", mid);

    return 0;
}
