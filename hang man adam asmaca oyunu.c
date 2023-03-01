#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>



// Hangman Adam Asmaca Oyunu
// Emircan Gürbüz

char kelimler[][20]={"EMİR","YETKİN","GÜRBÜZ","YÖNETİM","BİLİSİM","SİSTEMLERİ","CPU","RAM","HDD","SSD"};
char *kelime;
char *tahmin;
int size;

void kelimeolustur()
{
    int i;
    int rastgele=rand()%10;
    kelime=kelimler[rastgele];
    size=strlen(kelime);
    tahmin=(char*)malloc(size+1*sizeof(char));
    i=0;
    while(i<size)
    {
        tahmin[i]='_';
        i++;
    }
    tahmin[i]='\0';

    printf("kelime: %s\n",kelime);
    printf("uzunluk: %d\n",size);
    printf("tahmin: %s\n",tahmin);
 
}

int harfkontrol(char harf)
{

    int i;
    i=0;
    int sonuc=0;
    while(i<size)
    {
        if(kelime[i]==harf)
        {
            tahmin[i]=harf;
            sonuc=1;
        }
        i++;
    }
    printf("\n");
    return sonuc;
}

int kelimekontrol()
{
    int i;
    i=0;
    int sonuc=1;
    while(i<size)
    {
        if(tahmin[i]=='_')
        {
            sonuc=0;
        }
        i++;
    }
    printf("tahmininiz: %s\n",tahmin);
    return sonuc;
}


void sehpaciz(int n)
{
    system("cls");
    printf("\n\n\t HANGMAN ADAM ASMACA OYUNU \n\n");

    if(n==2)
{
    printf("\t\t---------\n");
}

if(n==3)
{
    printf("\t\t|       |\n");
    printf("\t\t|       |\n");
    printf("\t\t---------\n");
}

if(n==4)
{
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t-------\n");
}

if(n==5)
{
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t-------\n");
}

if(n==6)
{
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t-------\n");
}

if(n==7)
{
    printf("\t\t_________\n");
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t-------\n");
}
if(n==8)
{
    printf("\t\t_________\n");
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t-------\n");
}

if(n==9)
{
    printf("\t\t_________\n");
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t      |\n");
    printf("\t\t-------\n");
}

if(n==10)
{
    printf("\t\t________\n");
    printf("\t\t   |   |\n");
    printf("\t\t   O   |\n");
    printf("\t\t  /|\\ |\n");
    printf("\t\t   |   |\n");
    printf("\t\t  / \\ |\n");
    printf("\t\t       |\n");
    printf("\t\t       |\n");
    printf("\t\t       |\n");
    printf("\t\t       |\n");
    printf("\t\t---------\n");
    printf("\t asildiniz !!! \n");
    printf("\t kelime: %s\n",kelime);

}
printf("\n\n");
}


int main ()
{
    system("cls");
    system("color 0a");
    printf("\n\n\t HANGMAN ADAM ASMACA OYUNU \n\n");
    srand(time(0));
    kelimeolustur();
    char harf;
    int adet=0;
    int sonuc1;
    int sonuc2;
    while(adet<10)
    {
        adet++;
        printf("harf giriniz: ");
        scanf("%c",&harf);
        if (harfkontrol(harf))
        adet--;
        
           sehpaciz(adet);

           if(kelimekontrol())
              {
                printf("Tebrikler kelimeyi buldunuz Kazandiniz!");
                break;
              }
        }

    return 0;
}