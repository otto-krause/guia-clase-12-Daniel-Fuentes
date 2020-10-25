  #include <stdlib.h>
  #include <stdio.h>

  int numero1();
  int numero2();

  int numero1()
  {
      int a;
      printf("Ingrese un numero\n");
      scanf("%d", &a);

      return a;
  }
  int numero2()
  {
      int b;
      printf("Ingrese otro numero\n");
      scanf("%d", &b);
      return b;
  }

  int main()
  {
      int a, b;
      a = numero1();
      b = numero2();
      system("cls");
      printf("Ingreso los numeros:\n");
      printf("%d\n", a);
      printf("%d", b);
      return 0;
  }


