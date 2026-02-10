#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Functions 



void myMessage(){
    printf("Now I can write a function!");
}

int main() {

    myMessage();

    return 0;
}
    

//----------------------------------------------------

void nameList(char name[],int age) {
    printf("Hello %s you are %d years old\n",name,age);
}

int main(){

    nameList("Ali Arda",19);
    nameList("Can",24);
}
    

//-----------------------------------------------------

//Diziler ile Fonksiyonlarin Kullanimlari

void allNumbers(int myNumbers[6]){
    int i;

    for(i=0;i<6;i++){
        printf("%d\n",myNumbers[i]);
    }
}

int main() {

    int myNumbers[6]={10,20,30,40,50,60};

    allNumbers(myNumbers);

    return 0;
}
    

//-------------------------------------------------------

int showMe(int x){
    return x+5;
}

int main() {
    printf("Result is %d\n",showMe(2));
}
    



int sumNumbers(int x,int y){

    int sum;

    sum=x+y;

    return sum;
}

int main(){

    int t;

    t=sumNumbers(5,12)*5;

    printf("Result is %d",t);

    return 0;

}
    


//-------------------------------------------------

int sum(int,int);

int main(){

    printf("result is: %d",sum(5,11));

    return 0;
}

int sum(int x,int y){        //Profosyonel kullanim int main fonksiyonunu ust tarafta kullanip en altta diger fonksiyonlarin tanimlanmasidir.
    return x+y;
}
    

//------------------------------------------------------

//Recursion Fonksiyonlar

int sumNumber(int i);

int main() {

    printf("%d\n",sumNumber(5));

    return 0;
}

int sumNumber(int i){

    if(i>0){
        return i+sumNumber(i-1);
    }

    else return 0;

}
    

//Faktoriyelli fonksiyon ve kullanim


int fac(int x);

int main(){

    int number;

    printf("Hangi sayinin faktoriyeli hesaplansin?: ");
    scanf("%d",&number);

    printf("%d! = %d",number,fac(number));

    return 0;
}

int fac(int x){

    if(x>1){

        return x*fac(x-1);
    }

    else{
        return 1;
    }

}


//Us alma fonksiyonu ve kullanimi

float us(float x,int y);

int main(){

    float base;
    int ust;

    printf("Almak istediginiz taban ve ussu sirasi ile yaziniz: ");
    scanf("%f %d",&base,&ust);

    printf("Sonuc: %.2f",us(base,ust));

    return 0;
}


float us(float x,int y){

    float result=1;
    int i;

    if(y<0){

        for(i=0;i<-y;i++){
            result*=1/x;
        }
    }

    else{
        for(i=0;i<y;i++){
            result*=x;
        }
    }

    return result;
}
    


//Fonksiyonlarla matematik islemler uygulamasi

void menu();
int min(int,int);
int max(int,int);
int square(int);
int cube(int);
int absoluate(int);



int main(){

    int choose=0;
    int x,y;

    menu();

    printf("\nChoose a number between (1-5): ");
    scanf("%d",&choose);
    printf("\n");

    switch(choose){
        case 1: printf("Enter two numbers: ");
                scanf("%d %d",&x,&y);
                printf("Min: %d",min(x,y));
        break; 

        case 2: printf("Enter two numbers: ");
                scanf("%d %d",&x,&y);
                printf("Maks: %d",maks(x,y));
        break;

        case 3: printf("Enter a number: ");
                scanf("%d",&x);
                printf("%dx%d= %d",x,x,square(x));
        break;

        case 4: printf("Enter a number: ");
                scanf("%d",&x);
                printf("%dx%dx%d= %d",x,x,x,cube(x));
        break;

        case 5: printf("Enter a number: ");
                scanf("%d",&x);
                printf("|%d|= %d",x,absoluate(x));
        break;

        default: printf("Please enter a valuable number between (1-5)!");
    }


    return 0;
}

void menu(){

    printf("\n");
    printf("**********\n");
    printf("*  MENU  *\n");
    printf("**********\n\n");

    printf("1-Minimum\n");
    printf("2-Maksimum\n");
    printf("3-Kare al\n");
    printf("4-Kup al\n");
    printf("5-Mutlak Deger\n");
}

int min(int x,int y){

    int mindeger;

    if(x>y){
        mindeger=y;
    }

    else{
        mindeger=x;
    }

    return mindeger;
}


int maks(int x,int y){

    int maksdeger;

    if(x>y){
        maksdeger=x;
    }

    else{
        maksdeger=y;
    }

    return maksdeger;
}

int square(int x){
    return x*x;
}

int cube(int x){
    return x*x*x;
}

int absoluate(int x){
    if(x<0){
        return -x;
    }

    else{
        return x;
    }
}
    

//Iki basamakli sayiyi yaziya cevirme algoritmasi

void Birlik();
void Onluk();

int main(){

    int number=0,d1,d2;

    printf("Enter a two digit number: ");
    scanf("%d",&number);

    d1=number%10;
    d2=number/10;

    Onluk(d2);
    Birlik(d1);





    return 0;
}



void Birlik(int number){

    switch(number){
        case 1: printf("Bir");
        break;

        case 2: printf("Iki");
        break;

        case 3: printf("Uc");
        break;

        case 4: printf("Dort");
        break;

        case 5: printf("Bes");
        break;

        case 6: printf("Alti");
        break;

        case 7: printf("Yedi");
        break;

        case 8: printf("Sekiz");
        break;

        case 9: printf("Dokuz");
        break;
    }
}


void Onluk(int number){

    switch(number){
        case 1: printf("On ");
        break;

        case 2: printf("Yirmi ");
        break;

        case 3: printf("Otuz ");
        break;

        case 4: printf("Kirk ");
        break;

        case 5: printf("Elli ");
        break;

        case 6: printf("Altis ");
        break;

        case 7: printf("Yetmis ");
        break;

        case 8: printf("Seksen ");
        break;

        case 9: printf("Doksan ");
        break;
    }
}
    

//Fonksiyonlarda Sicaklik Degisim Algoritmasi

void Menu();
float C(float x);
float F(float x);

int main(){

    int input;
    float number;

    Menu();

    printf("Enter a valuable number between 1-2 for menu: ");
    scanf("%d",&input);

    printf("Please enter a number for conversation: ");
    scanf("%f",&number);

    if(input==1){
        printf("%.3f",C(number));
    }

    else if(input==2){
        printf("%.3f",F(number));
    }

    else{
        printf("Please enter a valuable number between 1-2!");
    }



    return 0;
}



void Menu(){

    int input;
    float number;

    printf("\n\n\n****MENU****\n\n\n");

    printf("1- Celsius to Fahrenheit\n");
    printf("2- Fahrenheit to Celsius\n\n");
}

float C(float x){ //Ekrandan Celsius girildiginde
    return (x*9/5)+32;
}

float F(float x){
    return (x-32)*5/9;
}
    


//Hazir Matematik Fonksiyonlari


// exp fonksiyonu (euler fonksiyon)

int main(){

    int i;

    for(i=0;i<=5;i++){
        printf("e^%d : %f\n",i,exp(i));
    }

    return 0;
}
    

// exp2(5)= 2 uzeri 5

// sqrt fonksiyonu (karekok alma)

// pow fonksiyonu (us fonksiyonu)

int main(){

    int number1,number2;

    printf("Enter two numbers: ");
    scanf("%d %d",&number1,&number2);

    printf ("%d^%d = %.2f\n",number1,number2,pow(number1,number2));

    return 0;
}
    

// logx(y) fonksiyonu

//cbrt fonksiyonu (kupkok) double ile tanımlanmalı

//ceil girilen sayiyi en yakin olan buyuk sayiya yuvarlar 

//floor girilen sayiyi en yakin olan kucuk sayiya yuvarlar

//fabs ondalikli sayilarin mutlak degerini alir 

//fmax ve fmin fmax(1,2)=2 gibi

//fmod mod alma

//hypot girilen degerlerle hipotenus alir hypot(3,4)=5

//isnan sayi ise 0,sayi degil ise 1 dondurur

//round girilen sayiyi en yakin sayiya yuvarlar





//Programlamada rastgele sayilar 


int main(){

    int i,number=0;

    srand(time(NULL)); //rand fonksiyonun surekli farkli sayilar uretmesine olanak saglar icindeki time fonksiyonu 1970den bugune gecen zamandir o yuzden surekli random sayilar uretilir

    for(i=1;i<=10;i++){

        number=(rand()%100)+1; //1-10 arasi random sayi

        printf("%d\n",number);
    }
    
}


//Sayi tahmin oyunu

int main(){

int randomnumber,guessnumber,guesscount=0,score=100;

srand(time(NULL));

randomnumber=(rand()%100)+1;

printf("1-100 arasinda rastgele bir sayi tuttum tahmin et!\n");

while(guessnumber!=-1){
    printf("Tahmin sayini gir: ");
    scanf("%d",&guessnumber);

    if(guessnumber==-1) break;

    if(guessnumber<1 || guessnumber>100){
        printf("Lutfen 1-100 arasinda bir tam sayi degeri gir!\n");
        continue; }

        guesscount++;

        if(guessnumber==randomnumber){
            printf("Tebrikler %d. seferde sayiyi buldun",guesscount);
            break;
        }

        else{

            if(guessnumber>randomnumber){
                printf("Daha kucuk bir sayi girmelisin!\n");
                score-=10;
            }

            else{
                printf("Daha buyuk bir sayi girmelisin!\n");
                score-=10;
            }
        }
    
}

printf("\nPuanin %d/100",score <0 ? 0: score);
}



//getchar

int main(){

    char myKey;

    printf("Bir tusa basiniz: ");
    myKey=getchar(); //scanf gibi aslinda ama tek karakterler icin ozel bir kisayol

    printf("%c tusuna bastiniz\n",myKey);
    printf("%c tusunun ASCII kodu: %d",myKey,myKey);
}
    

//putchar 

int main(){

    putch(65); //Sayilar ASCII Tablo karsiligidir
    putch(32);

    putch(65);

    return 0;

}
