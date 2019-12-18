#include <stdio.h>
#include <time.h>



void bindec(long int a)
{


    int dec_warotsc = 0, pod = 1, mem;

    long int num,bin_wartosc;

  //  printf("podaj liczbe binarna(0 i 1)");
  //  scanf("%ld", &num);
    num = a;
    bin_wartosc = num;
    while (num > 0)
    {
        mem = num % 10;
        dec_warotsc = dec_warotsc + mem * pod;
        num = num / 10 ;
        pod = pod * 2;
    }

    printf("bin to dec = %d \n", dec_warotsc);

}



int main(){
  float start,stop,x;
  start = time(0);
  for(x=0;x>=99;x++){
  bindec(x);
}
  stop = time(0);
  printf("%.100f\n",stop-start);





}
