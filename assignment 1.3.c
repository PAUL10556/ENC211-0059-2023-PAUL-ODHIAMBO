#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a=20;
    while(a<=200)
    {
        printf("%6.4f pounds = %6.4f kilograms\n",a,(a*0.453592));
        a=a+40;
    }
    return 0;
}
