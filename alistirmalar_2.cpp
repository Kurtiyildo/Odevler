/* 3 sayi al çarpým, toplam, aritmetik ortalama , en büyük ve enküçüðünü yazdýr.*/
#include <stdio.h>
int main(){
int s1, s2, s3, top, carp, art, enbuyuk, enkucuk;
printf("3 adet tam sayi giriniz. ");
scanf("%d%d%d", &s1,&s2,&s3);
top = s1 + s2 + s3;
carp = s1* s2 * s3;
art = top / 3;
printf("bu 3 sayinin toplami  %d dir \n", top);
printf("bu 3 sayinin carpimi %d dir \n", carp);
printf("bu 3 sayinin aritmetik ortalamasi %d dir \n", art);

enkucuk = s1;
if(s2 < enkucuk){
	enkucuk = s2;
}
if(s3 < enkucuk){
	enkucuk = s3;
}
printf("en kucuk sayi %d dir \n", enkucuk);

enbuyuk = s1;
if(s2 > enbuyuk){
	enbuyuk = s2;
}
if(s3 > enbuyuk){
	enbuyuk = s3;
}
printf("en buyuk sayi %d dir", enbuyuk);
return 0;
}
