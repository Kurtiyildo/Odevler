#include <stdio.h>
int main(){
float s, c;	
printf("Baslangic sayisini giriniz: \n");
scanf("%f", &s);
printf("Bir sayi giriniz(Bir onceki sayiyi girerseniz durur.)\n");
scanf("%f", &c);
while(s != c){
if(s<c)
printf("ARTIYOR\n");
else
printf("AZALIYOR\n");
s = c;
printf("Bir sayi giriniz(Bir onceki sayiyi girerseniz durur.)\n");
scanf("%f", &c);
}
return 0;  
}
