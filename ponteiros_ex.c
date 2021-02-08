

#include <stdio.h>
void main()
{
  int a;
  int b;
  int c;
  int *ptr;  // declara um ponteiro para um inteiro
             // um ponteiro para uma variável do tipo inteiro
  a = 90;
  b = 2;
  c = 3;
  ptr = &a;
  printf("Valor de ptr: %p, Conteudo de ptr: %d\n", ptr, *ptr);

  
  //printf("B: %d, C: %d", b, c);
}






#include <stdio.h>
void main()
{
  int count=10;
  int *pt;
  pt = &count;

  //imprimir valor do ponteiro
  printf("%d", *pt);

  *pt = 12;

  printf(" %d", count);
}



#include <stdio.h>
int main () {
  int num,valor;
  int *p;

  num=55;
  p=&num;     // Pega o endereco de num
  valor=*p;   /* Valor eh igualado a num indiretamente */

  printf ("\n\n%d\n",valor);
  printf ("Endereco para onde o ponteiro aponta: %p\n",p);
  printf ("Valor da variavel apontada: %d\n",*p);

  return(0);
}



#include <stdio.h>

int main () {
  int num,*p;

  num=55;
  p=&num;     /* Pega o endereco de num */
  printf ("\nValor inicial: %d\n",num);
  *p=100; /* Muda o valor de num de uma maneira indireta */
  printf ("\nValor final: %d\n",num);
  return(0);
}




#include <stdio.h>
int main () {
   int matrx [10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
   int *p;
   p = matrx;

   printf ("O terceiro elemento do vetor e: %d",p[2]);
   return(0);
}


#include <stdio.h>
int main(){
    int x=2, *y, **z;

    y = &x;
    printf("-%d \n", *y);
    z = &y;
    printf("-%d", **z);

    return(0);
}




#include <stdio.h>
int main(){
    float fpi = 3.1415;
    float *pf, **ppf;
    pf = &fpi; /* pf armazena o endereco de fpi */
    ppf = &pf; /* ppf armazena o endereco de pf */

    printf("%f", **ppf); /* Imprime o valor de fpi */

    printf(" %f", *pf); /* Tambem imprime o valor de fpi */
    return(0);
}
