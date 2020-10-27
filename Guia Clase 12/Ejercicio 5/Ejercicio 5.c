    #include <stdlib.h>
    #include <stdio.h>
    int resTotal(int a, int b, int c, int d, int e);

    void main()
    {
        int r1, r2, r3, r4, r5;//Se puede ingresar en una sola variable a través de una estructura repetitiva.
        printf("Ingrese las 5 resistencias en serie\n");
        scanf("%d %d %d %d %d", &r1, &r2, &r3, &r4, &r5);
        system("cls");
        printf("La resistencia total de %d, %d, %d, %d, %d es:\n", r1, r2, r3, r4, r5);
        printf("%d", resTotal(r1, r2, r3, r4, r5));
    }

    int resTotal(int a, int b, int c, int d, int e)
    {
        int total;
        total = a + b + c + d + e;
        return total;
    }

