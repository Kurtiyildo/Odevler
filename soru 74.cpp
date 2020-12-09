//Bu bir deneme notudur.
#include <stdio.h>
int collatz(int s){
int t=1;
if(s<0){
printf("BU SAYIYLA ISLEM YAPAMAM,POZITIF BIR SAYI GIR. ");
return 0;}
else{

while (s != 1){
if(s % 2 == 0){
s /= 2;
}
else{

s *= 3; s++;
}
t++;
}
}
return t;
}

int main(){
int s1 = 10, s2 = 50, enbuyuk = 0, enbuyukcoll = 0;
int i = s1;
while(i != s2){
if(collatz(i) >enbuyukcoll){
	enbuyuk = i;
	enbuyukcoll = collatz(i);
}
i++;}
printf("Aranan sayi %d'dir\n", enbuyuk);
printf("En buyuk Collatz sayisi %d'dir\n", enbuyukcoll);
return 0;}
