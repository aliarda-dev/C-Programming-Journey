#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <ctype.h>

//preprocessor komutlari

//#define output 8  artik bundan sonra output=8 olarak tanimli

//define ile makro kullanim(amac fonksiyondan daha hizli cagirmak)

#define MAX(number1,number2) (number1>number2)? number1:number2
#define AREA_OF_RECTANGLE(x,y) ((x)*(y))

int main(){

    printf("%d\n",MAX(2,7));
    printf("%d",AREA_OF_RECTANGLE(4,5));
    
    return 0;
}

//komutlar 

//if else vb komutlar

#define MYNUMBER 10

int main(){

    #if MYNUMBER>11
    printf("MYNUMBER is greater than 11");

    #else
    printf("MYNUMBER is smaller than 11");
    #endif

    //Burada amac kod derlenmeden if else bloklarini calisitirip hafizada fazladan yer kaplamamak , arduino gibi kartlarda bu sekilde islemcinin de yorulmamasini saglariz daha hizli kodumuz derlenir


    #ifdef MYNUMBER //Eger MYNUMBER tanimliysa
    printf("MYNUMBER tanimli");

    #endif

    #ifndef MYNUMBER //Eger MYNUMBER tanimli degilse
    printf("MYNUMBER tanimli degil")

    #endif

    return 0;
}
    

//---------------------------------------------------------------------------------

//Pointerlar

//Bellekten Adres Okuma

int main(){

    int a=7;

    char letter='F';

    printf("a adresi: %x\n",&a); //%x hexadecimal adresi bulmak icin kullandigimiz format specifier
    printf("letter adresi: %x\n",&letter);


    return 0;
}

//Pointer Tanımlama

int main(){

    int x=7; //Buradaki x'in adresi x'in degeri olan 7 degerini tutuyor

    int* xpointer=&x;//Burasi ise direkt olarak x'in adresini deger olarak tutuyor,ekstra olarak kendisinin de ayri bir adresi var

    printf("x'in adresi: %x\n",&x);
    printf("x'in adresi: %x\n",xpointer);

    printf("xpointer'in adresi: %x\n",&xpointer);

    printf("x'in degeri: %d\n",*xpointer);


    return 0;
}

//Pointer degerlerinin artirilip azaltilmasi

int main(){

    char harf='A';
    int sayi=5;

    char* ptr=&harf;
    int* ptrsayi=&sayi;

    printf("%x\n",ptr);
    ptr-=2;
    printf("%x\n\n",ptr);

    printf("%x\n",ptrsayi);
    ptrsayi+=2;
    printf("%x",ptrsayi);

    return 0;
}

//Fonksiyonlarda Pointer Parametresi ve Fonksiyon Uygulamalari

int sq(int *ptr);

int main(){

    int input,result;

    printf("Enter a input: ");
    scanf("%d",&input);

    result=sq(&input);

    printf("Sqaure of %d = %d",input,result);

    return 0;
}

int sq(int *ptr){
    return *ptr * *ptr;
}

//---------------------------------

int toplama( int *ptr1,int *ptr2);

int main(){

    int input1,input2;

    printf("Toplanacak iki sayi giriniz: ");
    scanf("%d%d",&input1,&input2);

    printf("%d + %d = %d",input1,input2,toplama(&input1,&input2));

    return 0;
}

int toplama(int *ptr1, int *ptr2){
    return *ptr1+*ptr2;
}

//----------------------------------------------------------
float* squareRoot(float *ptr);

int main(){

    float input;
    float* pointer;

    printf("Karekoku alinacak bir tam sayi giriniz: ");
    scanf("%f",&input);

    pointer=squareRoot(&input);

    printf("%f",*pointer);

    return 0;
}

float* squareRoot(float *ptr){

    *ptr=sqrt(*ptr);
    
    return ptr;
}

//Dizi ile Pointer İliskisi

int main(){

    char letters[3]={'a','b','c'};
    int numbers[3]={1,2,3};

    int i;

    for(i=0;i<3;i++){
        printf("letters[%d] = %c\n",i,*(letters+i));
    }

    printf("\n\n");


    for(i=0;i<3;i++){
        printf("numbers[%d] = %d\n",i,*(numbers+i));
    }

    return 0;
}

//------------------------


void myArray(int *x);

int main(){

    int numbers[6]={11,22,13,34,5,26};
    int i;

    for(i=0;i<6;i++){
        printf("numbers[%d] = %d\n",i,*(numbers+i));
    }

    myArray(numbers);

    return 0;
}

void myArray(int *x){

    int j;

    for(j=0;j<6;j++){
        *(x+j)*=3;
        printf("3 x numbers[%d] = %d\n",j,*(x+j));
    }

}
    

//Harf sirasi degistirme uygulamasi

void duzenle(char*,int);

int main(){

char letters[7]={'Y','a','z','i','l','i','m'};

int size=sizeof(letters)/sizeof(char); //satir sayisi icin gerekli

duzenle(letters,size);

return 0; }

void duzenle(char* letters,int size){

    int i=0,j=0,k=0;

    for(i=0;i<size+1;i++){

        for(j=i;j<=size-1;j++){
            printf("%c",*(letters+j));
        }

        for(k=0;k<i;k++){
            printf("%c",*(letters+k));
        }

        printf("\n");
    }
}