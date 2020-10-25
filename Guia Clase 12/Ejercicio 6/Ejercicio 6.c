    #include <stdlib.h>
    #include <stdio.h>
    float octParte(int num);

    void main()
    {
        int a;
        printf("Ingrese un numero entero\n");
        scanf("%d", &a);
        printf("La octava parte de %d es %.1f", a, octParte(a));
    }

    float octParte(int num)
    {
        float oct;
        oct = num/8;
        return oct;
    }
