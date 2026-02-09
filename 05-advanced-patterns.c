#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

        //Kullanıcı verileriyle dik ucgen yapan program

    int i,j,sharp=0;

    printf("Enter the number of sharps: ");
    scanf("%d",&sharp);

    for(i=1;i<=sharp;i++){
        for(j=1;j<=i;j++){
            printf("#");
        }
        printf("\n");
    }
//------------------------------------------------- 

  int i,j,sharp=0;

  printf("Enter a number of sharps: ");
  scanf("%d",&sharp);

  for(i=sharp;i>=1;i--){
    for(j=1;j<=i;j++){
        printf("#");
    }

    printf("\n");
  }

//-------------------------------------------------- 

int i,j,number,sharp=0;

printf("Enter the number of sharp: ");
scanf("%d",&sharp);

printf("Enter sort type (1 increases, 2 decreases): ");
scanf("%d",&number);

if(number==1){
    for(i=1;i<=sharp;i++){
        for(j=1;j<=i;j++){
        printf("#"); }

        printf("\n");
    }

    
}

else if(number==2){
    for(i=1;i<=sharp;i++){
        for(j=sharp;j>=i;j--){
           printf("#");
        }
        printf("\n");
    }

    
}

else{
    printf("Please enter 1 or 2 !!!");
}
   


//Ucgen sayi piramit deseni algoritmasi

 int i,j,number;

 printf("Enter a number value: ");
 scanf("%d",&number);

 for(i=1;i<=number;i++){
    for(j=1;j<=i;j++){
        printf("%d",i);
    }
    printf("\n");
 }

 //-------------------------------- 

 int i,j,number;


 printf("Enter a number value: ");
 scanf("%d",&number);

 for(i=0;i<number;i++){
    for(j=1;j<=number-i;j++){
        printf("%d",i+1);
    }

    printf("\n");
 }
    

    //Bos kare desen algoritmasi

    int i,j,number;

    printf("Enter a number value of your sqaure: ");
    scanf("%d",&number);

    for(i=1;i<=number;i++){
          for(j=1;j<=number;j++){

            if(i==1 || i==number || j==1 || j==number){
                printf("* ");
            }

            else{
                printf("  ");
            }
            

          }
          printf("\n");



    }


//Kullanici verileriye dikdortgen

int i,j,uk,kk;

printf("Dikdortgenimizin uzun kenari: ");
scanf("%d",&uk);

printf("Dikdortgenimizin kisa kenari: ");
scanf("%d",&kk);

if(kk>=uk){
    printf("Please dont do that!");
    return 0;
}

else if(kk<=0 || uk<=0){
    printf("Please enter a positive number!");
    return 0;
}



for(i=1;i<=uk;i++){
    

    for(j=1;j<=kk;j++){

        if(j==1 || j==kk || i==1 || i==uk){
            printf("* ");
        }

        else{
            printf("  ");
        }
    }
    printf("\n");
}
    


//Ucgen piramit desenli algoritma

int i,j,number;

printf("Enter a number value: ");
scanf("%d",&number);


for(i=1;i<=number;i++){

for(j=1;j<=number-i;j++){   //satir baslarindaki bosluklar
    printf(" ");
}

for(j=1;j<=i;j++){
    printf("* ");
}
printf("\n");


}


//Ters ucgen piramit desenli algoritma

int i,j,number;

printf("Enter a valuable number: ");
scanf("%d",&number);

for(i=number;i>=1;i--){

    for(j=0;j<number-i;j++){
        printf(" ");
    }

    for(j=1;j<=i;j++){
        printf("* ");
    }

    printf("\n");
}
    

//kullanicidan tek sayi verisi girilerek cift tarafli simetrik ücgen deseni yapan algoritma

int i,j,number;

printf("Enter a odd number: ");
scanf("%d",&number);

if(number%2==0){
    
    printf("Please enter a odd number!");
}

else{

    for(i=1;i<=number;i+=2){

        for(j=i;j<number;j++){ //Yukarinin bosluk

            printf(" ");
        }

        for(j=number-i;j<number;j++){
            printf("* ");
        }

        printf("\n");
    }

    for(i=1;i<=number-2;i+=2){

        for(j=number-i;j<=number;j++){
            printf(" ");
        }

        for(j=i-number;j<-1;j++){
            printf("* ");
        }

        printf("\n");
    }
        

//Harf ucgen algoritmasi

char letter,character='A';
int i,j;

printf("Enter a valuable uppercase letter: ");
scanf("%c",&letter);

if(letter>=65 && letter<=90){
for(i=1;i<=(letter-'A'+1);i++){
    for(j=1;j<=i;j++){
        printf("%c",character);
    }
    character++;
    printf("\n");
}
}
else{
    printf("Please enter a uppercase letter!");
}




//Pascal Ucgeni (HARDCORE)

int i,j,rows,space,number=1;

printf("Enter the number of rows: ");
scanf("%d",&rows);

for(i=0;i<rows;i++){

    for(space=1;space<=(rows-i);space++){
        printf("  ");
    }

    for(j=0;j<=i;j++){
        
        if(j==0 || i==0){
            number=1;
        }

        else{
            number=number*(i-j+1)/j;
        }
        printf("%4d",number);
    }

    printf("\n");



}
    

//Harflerle sag ok deseni

int i,j,row,a=0,k;
char letter;


printf("Enter a uppercase letter: ");
scanf("%c",&letter);


printf("Enter odd row number: ");
scanf("%d",&row);


for(i=1;i<=row;i++){

        for(j=0;j<a;j++){
            printf(" ");
        }

        if(i<(row+1)/2){
            a++;
        }

        else{
            a--;
        }
        
        printf("%c\n",letter);
        

        
    }
        



//EBOB && EKOK

int i,j,n1,n2,ebob=0,ekok=1,least;

printf("Enter two positive numbers: ");
scanf("%d %d",&n1,&n2);

if(n1>0 && n2>0){


    if(n1>n2) least=n2;

    else if(n2>n1) least=n1;

    else least=n1;


    for(i=1;i<=least;i++){

        if(n1%i==0 && n2%i==0){
            ebob=i;
        }
    }

    ekok=ebob*(n1/ebob)*(n2/ebob);


    printf("EBOB(%d,%d): %d\n",n1,n2,ebob);
    printf("EKOK(%d,%d): %d",n1,n2,ekok);
}



//Mukemmel Sayi Algoritmasi (6=1x2x3 , 6=1+2+3)

int i,j,number,sum;

printf("Hangi sayiya kadar olan mukemmel sayilar listelensin?: ");
scanf("%d",&number);


for(i=1;i<=number;i++){

    sum=0;

    for(j=1;j<=i/2;j++){
        if(i%j==0){
            sum+=j;
        }
    }

    if(sum==i){
        printf("%d\t",i);
    }
}

    
}