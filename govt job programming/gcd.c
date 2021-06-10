#include <stdio.h>

int main()
{
    int Num1, Num2, Temp, GCD;

    printf("Please Enter two integer Values \n");
    scanf("%d %d", &Num1, &Num2);

    while (Num2 != 0)
    {
        Temp = Num2;
        Num2 = Num1 % Num2;
        Num1 = Temp;
    }
    GCD = Num1;
    printf("GCD = %d", GCD);
    return 0;
}

/*
#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    return 0;
}
*/
