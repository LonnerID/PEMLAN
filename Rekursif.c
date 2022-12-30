#include<stdio.h>
#include<conio.h>

double keempat(double x, int y){
if (y > 0 && y % 2 == 0)
    {
      return keempat(x, y/2) * keempat(x, y/2);
    } else if (y > 0 && y % 2 == 1)
    {
      return keempat(x, y/2) * keempat(x, y/2) *x;
    }
}

int main(){
    float x, y;
	printf("Masukkan nila: "); 
	scanf("%f",&x);
	printf("Masukkan pangkat: "); 
	scanf("%f",&y);

    if (y > 0)
    {
        printf("\n hasilnya = %.0f^%.0f/2\n",x,y);
	    printf("	= %f\n", keempat(x, y/2));
    }
}