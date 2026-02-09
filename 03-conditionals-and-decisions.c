#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //Conditions and If

//Sinavi gecip gecememe durumu soyleyen program
int score;

printf("Enter a score: ");
scanf("%d",&score);

if(score>=60) 
{
    printf("Congratulations you passed the exam\n");
    printf("Your score is %d",score);
}
else
{
    printf("You did not pass the exam\n");
    printf("Your score is: %d",score);
}
    
   //Bir sayinin negatif veya pozitif oldugunu soyleyen program

   int mynumber;

   printf("Enter a number: ");
   scanf("%d",&mynumber);

   if(mynumber>0)
   {
    printf("Your number is positive");
   }

   else if (mynumber<0)
   {
    printf("Your number is negative");
   }
   
   else 
   {
    printf("Your number is 0");
   }
  
 //Girilen sayiları karsilastiran program

 float num1,num2;

 printf("Enter two number: ");
 scanf("%f %f",&num1,&num2);

 if (num1>num2)
 {
    printf("%f is greater than %f",num1,num2);
 }
 else if (num2>num1)
 {
    printf("%f is greater than %f",num2,num1);
 }
 else
 {
    printf("%f is equal to %f",num1,num2);
 }
    

//Kitap siparis ve indirim programı

int bookprice,orderquantity;
float discountrate,nodiscountprice,discountprice,sum;
bookprice=20;
orderquantity=0;


printf("Siparis adedinizi giriniz: ");
scanf("%d",&orderquantity);

if(orderquantity>=60)
{
    discountrate=0.30;
}

else if(orderquantity>=10 && orderquantity<60)
{
  if(orderquantity>=30 && orderquantity<60)
    discountrate=0.2;
  

else if (orderquantity>=10 && orderquantity<30)
    discountrate=0.12;
}

else
{
    discountrate=0.01;
}

nodiscountprice=orderquantity*bookprice;
discountprice=orderquantity*bookprice*discountrate;
sum=nodiscountprice-discountprice;

printf("Kitabin indirimsiz tutari: %f TL\n",nodiscountprice);
printf("Indirim tutariniz: %f TL\n",discountprice);

printf("Siparislerinizin toplam tutari: %f TL\n",sum);


//Sayinin tek mi cift mi oldugunu bulan program

int x;

printf("Bir tam sayi giriniz: ");
scanf("%d",&x);

if(x%2==0)
{
    printf("%d sayisi cifttir",x);
}
else
{
    printf("%d sayisi tektir",x);
}


//Kullanicidan alinan uc sayinin en büyügünü ve en kucugunu bulan program

float x,y,z,max,min;

printf("Uc adet sayi giriniz: ");
scanf("%f %f %f",&x,&y,&z);

if(x>=y && x>=z)
{
    max=x;
}
else if (y>=x && y>=z)
{
    max=y;
}
else
{
    max=z;
}

if(x<=y && x<=z){
    min=x;
}
else if(y<=x && y<=z){
    min=y;
}
else {
    min=z;
}

printf("Girdiginiz en buyuk sayi: %f\n",max);
printf("Girdiginiz en kucuk sayi: %f",min);



//Kenar uzunlukları alinan bir ucgenin hangi tur oldugunu bulan program Not: theres some flaws

float a,b,c;
char longestside;


printf("Enter the side lengths of your triangle: ");
scanf("%f %f %f",&a,&b,&c);

if(a>b && a>c)
{
    longestside=a;
}
 else if(b>a && b>c)
{
    longestside=b;
}
else
{
    longestside=c;
}

if(longestside==a)
{
    if(a*a==b*b + c*c){
        printf("Dik acili ucgen");
    }
    else if(a*a>b*b+c*c){
        printf("Genis acili ucgen");
    }
    else{
        printf("Girilen kenarlarla bir ucgen olusmaz");
    }
}
else if(longestside==b)
{
    if(b*b==a*a + c*c){
        printf("Dik acili ucgen");
    }
    else if(b*b>a*a+c*c){
        printf("Genis acili ucgen");
    }
    else{
        printf("Girilen kenarlarla bir ucgen olusmaz");
    }
}
else
{
    if(c*c==b*b+a*a){
        printf("Dik acili ucgen");
    }
    else if(c*c>b*b+a*a){
        printf("Genis acili ucgen");
    }
    else{
        printf("Girilen kenarlarla bir ucgen olusmaz");
    }
}
    

    //Dort basamaklı ozel sayiyi tespit eden program abcd=(ab+cd)^2

    int ab,cd,newnumber,number;
    

    printf("4 basamakli bir tam sayi giriniz: ");
    scanf("%d",&number);

    ab=number/100;
    cd=number%100;
    newnumber=(ab+cd)*(ab+cd);

    if(number==newnumber)
    {
        printf("%d bir ozel sayi",number);
    }
    else
    {
        printf("%d bir ozel sayi degil",number);
    }


   //Girilen tam sayinin karekokunun tam sayi olup olmadigini bulan program

   int number;
   float a;

   printf("Bir tam sayi giriniz: ");
   scanf("%d",&number);


   if(number<0)
   {
    printf("Your number must be greater then zero for sqaure root");
   }
   else
   {
    a=sqrt(number);
          if(a*a==number){
            printf("Sqaure root of %d is an integer",number);
          }
           else{
            printf("Sqaure root of %d is not an integer",number);
          }
   }


//Bir gsm operatoru 4dk konusma ucretini 0.30 tl olarak belirlemistir ancak konusma suresi 4 dakikayi aşarsa sonraki her dakika icin ek olarak 0.07 tl almaktadir.Bu programi yazalim

const float sabitfiyat=0.3;
float konusmasuresi,sonfiyat;


printf("Konusma suresini giriniz: ");
scanf("%f",&konusmasuresi);

if(konusmasuresi<=4)
{
 sonfiyat=0.30;
}
else if (konusmasuresi>4)
{
    sonfiyat=sabitfiyat+(konusmasuresi-4)*0.07;
}

printf("Fatura ucretiniz: %.3f TL",sonfiyat);


//Herhangi bir karakteri girdi olarak alıp harf olup olmadigini , harfse buyuk veya kucuk harf oldugunu belirten programı yazalim

char karakter;

printf("Enter a character: ");
scanf("%c",&karakter);

if((karakter>='A') && (karakter<='Z'))
{
    printf("%c is a uppercase letter",karakter);
}
else if ((karakter>='a') && (karakter<='z'))
{
    printf("%c is a lowercase letter",karakter);
}
else
{
    printf("%c is a number",karakter);

}


 //Switch

 int day=8;

 switch(day)
 {
    case 1: printf("Monday \n");
        break;
    case 2: printf("Tuesday \n");
        break;
    case 3: printf("Wednesday \n");
        break;
    case 4: printf("Thursday \n");
        break;
    case 5: printf("Friday \n");
        break;
    case 6: printf("Saturday \n");
        break;
    case 7: printf("Sunday");
        break;
    default: printf("Theres no such a day"); //Hicbir degerin saglanmaması durumunda default calisir
 }
    


    int x,y,z;
    
    x=3;
    y=12;
    switch(x)
    {
        case 7: z=19;   //x=7 ise z=19
        break;
        default: switch(y){  //x 7 ye esit degilse ve y
            case 12 : z=10;  //esitse 12 z=10
            break;
            default: z=-90;  //y esit degilse 12 z=-90
        }
    }
    printf("%d",z);

    

    int urunsayisi,day;
    char *dayName;

    urunsayisi=0;

    printf("Enter a number of a day (1-7): ");
    scanf("%d",&day);

    switch(day)
    {
        case 1 : urunsayisi+=2;
        dayName="Monday";
        break;
        case 2 : urunsayisi+=7;
        dayName="Tuesday";
        break;
        case 3 : urunsayisi+=14;
        dayName="Wednesday";
        break;
        case 4 : urunsayisi+=24;
        dayName="Thursday";
        break;
        case 5 : urunsayisi+=39;
        dayName="Friday";
        break;
        case 6 : urunsayisi+=58;
        dayName="Saturday";
        break;
        case 7 : urunsayisi+=83;
        dayName="Sunday";

    }

    printf("He solded %d products by %s night",urunsayisi,dayName);
    

    //dort islem operatorlerinden birini ve iki reel sayiyi girdi olarak alip girilen operatore gore islem sonucunu bulan programi yazalim

    char myOperator;
    float number1,number2;

    printf("Choose your operator (+,-,*,/): ");
    scanf("%c",&myOperator);

    printf("Enter two numbers: ");
    scanf("%f %f",&number1,&number2);

    printf("Your operator = %c \nYour first number = %f \nYour second number = %f \n",myOperator,number1,number2);


    switch(myOperator)
    {
        case '/': printf("Your result: %f",number1/number2);
        break;

        case '*': printf("Your result: %f",number1*number2);
        break;

        case '+': printf("Your result: %f",number1+number2);
        break;

        case '-': printf("Your result is: %f",number1-number2);
        break;

        default: printf("You entered the wrong operator");
    }
        

 //Switch ile tek cift sayi bulan program

 int number;

 printf("Enter a integer number: ");
 scanf("%d",&number);

 switch (number%2)
 {
    case 0: printf("%d is a even number",number);
    break;
    case 1: printf("%d is a odd number",number);
    break;

    default: printf("You are not entered an integer number");
 }
    

 
//Sesli veya sessiz harfi bulan program

  char letter;

  printf("Enter a letter: ");
  scanf("%c",&letter);

  switch(letter)
  {
    case 'a':
    case 'e':
    case 'u':
    case 'o':
    case 'i': printf("%c is a vowel letter\n",letter);
    break;

    default: printf("%c is a consonant\nor not a letter",letter);
  }


    
}
