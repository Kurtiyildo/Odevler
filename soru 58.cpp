#include <stdio.h>
int giris = 1;
//Goze guzel gozukmesi icin ayirdim
int hafif = 0,orta = 0,agir = 0;
float ortalama = 0; 

int main(){
    while (giris != 0)
    {
        printf("KILO GIRINIZ:  ");
        scanf("%d", &giris);
        printf("\n");
        if (giris > 0)
        {
            ortalama += giris;
            if(giris < 50)
                hafif++;
            else if (giris >= 50 && giris < 70)
                orta++;
            else if (giris >= 70)
                agir++;               
        }
        else if(giris < 0)
        {
            printf("LUTFEN POZITIF BIR DEGER GIRINIZ \n");
        }

    }
    int toplama = hafif + orta + agir;
    ortalama /= toplama;
    printf("Toplam %d adet sporcu girilmistir\n", toplama);
    printf("%d hafif, %d orta ve %d agir siklet vardir\n", hafif, orta, agir);
    printf("Genel ortalama %.2f dir\n", ortalama);
    return 0;
}

