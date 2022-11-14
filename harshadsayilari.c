#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
   /* Harshad sayisi 
   bir sayı basamak toplamlarına kalansız bölünüyorsa harshad sayisidir*/
   int sayi, basamaktoplam = 0 , toplam = 0 ;
   
    printf("Harshad sayisi mi kontrol etmek istediginiz sayiyi girin : ");
    scanf("%d" , &sayi) ;
      for (int i = 1;  i <=100000; i*=10)
        {
            toplam = (sayi/i)%10;
            basamaktoplam += toplam ;
        }
        if (sayi % basamaktoplam == 0)
        {printf("Harshad sayisidir.");}
        else printf("Degil");     

   getch();
   return 0;
}