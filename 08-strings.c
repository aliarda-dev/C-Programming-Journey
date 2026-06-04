#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <ctype.h>

//Stringler

int main(){

    char* messagePtr="Hi Im Ali Arda";
    int i=0;

    while(*(messagePtr+i)!='\0'){
        printf("%c",*(messagePtr+i));
        i++;
    }


    return 0;
}


//Hazır String Fonksiyonları

//String uzunlugunu bulma strlen

int main(){

    char letters[]="ABCDE";

    printf("%d\n",sizeof(letters)/sizeof(char)-1); //Burada \0 karakteri da dahil
    printf("%d",strlen(letters));


    return 0;
}

//String Birlestirme strcat

int main(){

    char str1[]="Hello ";
    char str2[]="Im Ali Arda";

    strcat(str1,str2); //Ikı fonksiyonu birlestirip ilkinde yeni stringi tutar

    printf("%s",str1);


    return 0;
}

//String Kopyalama strcpy

int main(){

    char str1[]="Weather is rainy";
    char str2[strlen(str1)];

    strcpy(str2,str1); //Ikıncı yazılan kopyalamak istedigimiz,ilk yazılan da kopya

    printf("%s",str2);


    return 0;
}

//Iki stringi karsılastirma strcmp

int main(){

    char str1[]="Hello";
    char str2[]="C world";

    if(strcmp(str1,str2)==0){ //Eger esitse fonksiyon 0 donduruyor
        printf("Bu stringler esit");
    }

    else printf("Bu stringler esit degil!");

    return 0;
}
    

//Gets ve Puts Fonksiyonlari

int main(){

    char* messagePtr="What an interesting language";
    char myArray[]="Hello C!";

    fputs(messagePtr,stdout); //fputs ve puts icine adres alir! fputs farkli olarak \n karakterini kendisi eklemez 
    fputs(myArray,stdout);

    printf("\n");

    puts(messagePtr);//array sonlarindaki \0 karakterine kadar okur sonrasinda \n kendisi ekler
    puts(myArray);

    return 0;
}


int main(){

    char message[20];

    printf("Please enter a sentence: ");
    gets(message); //gets kullanimi tehlikelidir cunku kullanici ne yazdiysa icine doldurur dizinin sinirlarini bile tanimaz bu da ramdaki yan taraftaki degiskenlerin ustune gelebilir guvenlik acigi olusabilir,\0 karakterine kadar okuma yapar

    printf("Your sentence: ");
    puts(message);

    printf("Please enter a sentence: ");
    fgets(message,20,stdin); //Kullanici ne kadar yazarsa yazsin 19 karakteri alir sonuna da \0 ekler,siniri 20 olarak biz belirledigimiz icin guvenlidir

    printf("Your sentence: ");
    fputs(message,stdout);

    return 0;
}

//Programlamada metnin karakter sayini bulma

int main(){

    char sentence[25];

    printf("Enter a sentence: ");
    fgets(sentence,25,stdin);

    printf("Girdiginiz metin bosluk karakterleri dahil %d adet karakter iceriyor",strlen(sentence)-1);

    return 0;
}

//Girilen Cumlede Kelime Sayisini Bulan Program

int wordCount(char*);

int main(){

    char sentence[50];
    
    
    printf("Please enter a sentence: ");
    fgets(sentence,50,stdin);

    printf("Number of words: %d",wordCount(sentence)+1);

    return 0;
}

    int wordCount(char* ptr){

        int i=0,kelimesayac=0;

         while(*(ptr+i)!='\0'){

        if(*(ptr+i)==' '){
            kelimesayac++;
        }
        i++;
    }

    return kelimesayac;


    }


//Buyuk harfi kucuk harfe,kucuk harfi buyuk harfe donusturme

void upperToLower(char*);
void lowerToUpper(char*);

int main(){

    char message[100];
    int choice;

    printf("Bir secim yapiniz:\n\n");
    printf("1) buyuk harften kucuk harfe cevir\n");
    printf("2) kucuk harften buyuk harfe cevir\n\n");

    scanf("%d",&choice);

    while(getchar() != '\n');

    switch(choice){

        case 1: printf("Buyuk harflerden olusan bir cumle giriniz: ");
                fgets(message,100,stdin);
                upperToLower(message);
        break;

        case 2: printf("Kucuk harflerden olusan bir cumle giriniz: ");
                fgets(message,100,stdin);
                lowerToUpper(message);
        break;

        default: printf("Yanlis secim");
    }



    return 0;
}

void upperToLower(char* ptr){

    int i=0;

    while(*(ptr+i)!='\0'){

        if(*(ptr+i)<='Z' && *(ptr+i)>='A'){

            *(ptr+i)+=32;
        

        }
        i++;
    }

    fputs(ptr,stdout);

}

void lowerToUpper(char* ptr){

     int i=0;

    while(*(ptr+i)!='\0'){

        if(*(ptr+i)<='z' && *(ptr+i)>='a'){

            *(ptr+i)-=32;
        

        }
        i++;
        
    }

    fputs(ptr,stdout);
}

//Kelimelerin Bas Harfini alma uygulamasi

void summary(char*);

int main(){

    char metin[50];
    

    printf("Bir metin giriniz: ");
    fgets(metin,50,stdin);

    summary(metin);

    return 0;
}

void summary(char* ptr){

    char basHarfler[10];
    int i=1,j=1;

    basHarfler[0]=*(ptr);

    while(*(ptr+i)!='\0'){

        if(*(ptr+i)==' ' && *(ptr+i+1)!='\n'){

            

                basHarfler[j]=*(ptr+i+1);
            j++;

        }
        i++;

    }

    basHarfler[j]='\0';

    fputs(basHarfler,stdout);


}
    

//Girilen Cumleyi Tersten Yazdirma

void tersYazdir(char*,int);

int main(){

    char input[50];
    int i;

    printf("Lutfen bir cumle giriniz: ");
    fgets(input,50,stdin);

    i=strlen(input)-2;


    tersYazdir(input,i);

    return 0;
}

void tersYazdir(char* x , int i){

    int k;

    for(k=i;k>=0;k--){
        printf("%c",*(x+k));
    }

}
    

//Girilen Cumlede Harflerin Kacar Kez Kullanildigini Bulma

void count(char*);

int main(){

    char cumle[50];
    int i;

    printf("Bir cumle giriniz: ");
    fgets(cumle,50,stdin);

    for(i=0;*(cumle+i)!='\0';i++){
        *(cumle+i)=toupper(*(cumle+i));
    }


    count(cumle);
}

void count(char* x){

    int letters[27]={0},i=0,k=0;

    
 while (*(x+i)!='\0'){



     if(*(x+i)<='Z' && *(x+i)>='A'){
            
         k=*(x+i)-65;

        letters[k]++;

        
        }

        i++;

 }

    for(i=0;i<27;i++){

        if(*(letters+i)!=0){
            printf("%c -----> %d\n",i+65,*(letters+i));
        }
    }
    

}
    
//-------------------------------------------------------