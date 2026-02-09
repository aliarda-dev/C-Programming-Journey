#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //Loops (Donguler)

// Do While
// For
// Break/Continue

//while
int i=1;

while(i<=5)
{
    printf("Bu cumle dongu tamamlanana kadar yazilacak\n");
    i++;
            //dongu sartlar saglanana kadar basa donup devam eder
}

//do while

int i=5;

do
{
    printf("%d\n",i++);  //bu dongunun whiledan temel farki ne olursa olsun sartlar saglansın veya saglanmasın 1 kere kesin kod calistirilir
} while(i<=7);




//for

int i;

for(i=0;i<7;i++) //0 dan 7 ye kadar tek tek arttır
{
    printf("%d\n",i);
}


//Break and continue

int i;

for(i=0;i<10;i++)
{
    if(i==7){      //i=7 oldugunda donguyu kir ve bitir
        break;
    }
    printf("%d\n",i);
}
    
//------------------------------------
    int i;

for(i=0;i<10;i++)
{
    if(i==5){      //i=5 oldugunda donguyu atla ve devam et
        continue;;
    }
    printf("%d\n",i);
}


//Basit bir carpim tablosu

int i,number;

number=0;
i=1;

printf("Enter a number from 1 to 10: ");
scanf("%d",&number);

if(number<1 || number>10)
{
    printf("Please dont do that!");
    return 0;
}

while(i<=10)
{
    printf("%d x %d = %d\n",number,i,number*i);
    i++;
}
    

   int satir,sutun,i;
     char isminiz[50];
     
     printf("Isminizi giriniz: ");
     scanf(" %[^\n]", isminiz);
     
     printf("Kacinci sutuna inmek istersiniz?: ");
     scanf("%d",&sutun);
     
     printf("Kacinci satira inmek istersiniz?: ");
     scanf("%d",&satir);
     
     for(i=0;i<sutun;i++)
     {
     	printf("\n");
	 }
	 
	 for(i=0;i<satir;i++)
	 {
	 	printf(" ");
	 }
	 
	 printf("%s\n",isminiz);

     

// Asal sayi bulan program

  int number;
  int i;
  i=2;
  printf("Enter a integer number: ");
  scanf("%d",&number);

  while(i<=number/2)
  {
    if(number%i==0){
        printf("%d divided by %d so its not an prime number",number,i);
        return 0;
    }
    i++;
  }

  printf("%d is a prime number",number);


//Girilen sayiya kadar olan tüm asal sayilari ekrana yazdiran program

int number,i,j,control;

i=2;

printf("Enter a integer positive number: ");
scanf("%d",&number);


if(number<0) {
    printf("Please dont do that!");
    return 0;
}

printf("Prime numbers to the %d:\n",number);

for(i=2;i<=number;i++)
{
    control=1;

    for(j=2;j<=i/2;j++){ 
          if(i%j==0){
          control=0;
          break;
          }
    }

      if(control !=0){
        
        printf("%d\n",i);
      }
            
    
}
      

//Girilen notları toplayıp ortalamasını alan program

int i;
float examGrade,sumGrade;

i=1;

printf("When did you finish entering notes please enter -1 on the chat!!\n");

do{
    printf("%dth exam grade: ",i);
    scanf("%f",&examGrade);

    if(examGrade==-1){
        break;
    }

    if(examGrade<0){
        printf("You can't do this!\n");
        continue;
    }

    else{
        sumGrade+=examGrade;
    }

    i++;
}

while(examGrade != -1 );
    printf("You entered %d exam grades\n",i-1);
    printf("Average: %f",sumGrade/(i-1));

    



    //Bugday ornegi

    int i;
    double bugday=1;
    double sumBugday=0;

    for(i=1;i<=64;i++){
        printf("%d. kare icin bilgine verilecek bugday sayisi: %20.0f\n",i,bugday);

        sumBugday+=bugday;
        bugday*=2;
    }
    
    printf("\nbilgine verilecek bugday sayisi: %20.0f\n",bugday);

    


//Faktoriyel Hesaplayan Program

int i,number,carpim;

carpim=1;

printf("Enter a number: ");
scanf("%d",&number);

if(number==0){
    printf("0! = 1");
}

else if(number<0){
    printf("Please enter a positive number!");
}

else {
for(i=1;i<=number;i++){
    carpim*=i;
    
}

printf("%d! = %d",number,carpim); }



//Ic ice dongu

int i,j;

for(i=1;i<=2;i++){

    for(j=1;j<=3;j++){
        printf("Hello C\n");
    }
    
    printf("------------\n");
}



//Girilen sayının en buyuk ve en kucugunu bulan program

int i;
double number,greatest,least;

i=1;
least=999999;
greatest=-999999;

printf("Please enter 0 when you done!\n\n");

do{
    printf("Enter %d. number: ",i);
    scanf("%lf",&number);


    if(number==0){
        break;
    }

    if(number<least){
        least=number;
    }

    if(number>greatest){
        greatest=number;
    }

    i++; 
}while(number!=0);

printf("\nThe largest number: %.3lf\n",greatest);
printf("\nThe smallest number: %.3lf\n\n",least);




//Fibonacci Dizisi Algoritması

int i,first,second,number,third;

first=1;
second=1;
third=1;

printf("Enter a number: ");
scanf("%d",&number);

printf("1 - 1");

for(i=1;i<=number-2;i++){

    first=second;
    second=third;
    third=first+second;

    printf(" - %d",third);

    
}
}