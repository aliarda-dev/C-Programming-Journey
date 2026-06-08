#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <ctype.h>

//Struct

struct students{

    char* name;
    char* lastname;

    int no;
    float score;

    char ParentName[40];

};

int main(){

    struct students x; //struct burdaki variable'dir,int gibi ,x bir ogrenciyi temsil ediyor gibi dusunebiliriz,x1,x2 diyerek bu devam edebilir
    struct students x2;

    x2=x; //Struct tamamiyle kopyalandi

    x.lastname="Yildiz";
    x.name="Kenan";
    x.no=41;
    x.score=61.4;

    strcpy(x.ParentName,"Mehmet"); 

    //bu sekilde tanimlanabilir veya 

    // struct students x={"Yildiz","Kenan",41,61.4,"Mehmet"} seklinde de tanimlanabilir bu sayede strcpy gerek kalmaz, tabii ki struct tanımındaki sirayla olmali

    

    printf("Name : %s\n",x.name);
    printf("Lastname : %s\n\n",x.lastname);
    printf("Student Number: %d\n\n",x.no);
    printf("Score : %.3f\n",x.score);
    printf("Parents Name : %s",x.ParentName);
    
}

//Struct Uygulamalari

//Dogum tarihi verilen kisinin kac yil, kac ay,kac gun yasadigini bulan program

struct LifeTime{

    int years,months,days;

};

int main(){

    struct LifeTime x; //Birth date
    struct LifeTime y; //Todays date

    printf("Enter your date of birth: ");
    scanf("%d%d%d",&x.days,&x.months,&x.years);

    printf("Enter a todays date: ");
    scanf("%d%d%d",&y.days,&y.months,&y.years);

    if(x.days>y.days){
        y.days+=30;
        y.months-=1;
    }

    if(x.months>y.months){
        y.months+=12;
        y.years-=1;
    }

    printf("You lived %d years %d months %d days",y.years-x.years,y.months-x.months,y.days-x.days);

}

//Kitap bilgilerini iceren program

struct bookInfo{

    char* bookName;
    char* author;

    int page;
    
};


int main(){

    int i;
    struct bookInfo x[2];

    x[0].bookName="Harry Potter ve Felsefe Tasi";
    x[0].author="J.K Rowling";
    x[0].page=238;

    x[1].bookName="Nutuk";
    x[1].author="Mustafa Kemal Ataturk";
    x[1].page=930;

    for(i=0;i<2;i++){

        printf("Book Name : %s\n",x[i].bookName);
        printf("Author : %s\n",x[i].author);
        printf("Page : %d\n\n",x[i].page);

    }

}

//Struct ve Pointer Iliskisi

struct books{

    char* author;
    char* bookname;

    int page;
};

void print(struct books*);

int main(){

    struct books x;
    struct books* y;

    y=&x;

    (*y).bookname="Nutuk";
    (*y).author="Mustafa Kemal Ataturk";
    (*y).page=926;

    print(y);

}

void print(struct books* y){

    printf("Book Name: %s\n",(*y).bookname);
    printf("Author : %s\n",(*y).author);
    printf("Page: %d\n",(*y).page);


}

//-------------------------------------------

//Enumerations

enum Size{SMALL,  //Sabitlere atama yapilmazsa c 0'dan baslatir
          MEDIUM
         ,LARGE};

int main(void){

    enum Size x[3] = {SMALL,MEDIUM,LARGE};

    for(int i=0;i<3;i++){
        printf("%d\n",*(x+i));
    }

}

//-----------------------------------------

//Typedef Kullanimi | Variablelara takma isim vermemizi saglar

typedef int i; //bundan sonra int yerine i yazilarak kullanabiliriz

typedef char number[30];

i main(void){

    i sabit=4;

    number n1="Arda"; //n1[30] gibi dusunebiliriz

    printf("%d\n",sabit);
    printf("%s",n1);

}*/

//--

typedef struct{

    int number;
    float weight;
    char isim[15];

}student;

int main(void){

    student s1={52,64.5,"Deniz"};
    student s2={101,78.2,"Mehmet"};

   printf("Your name is : %s\n",s1.isim);
   printf("Your number is : %d\n",s1.number);
   printf("Your weight is : %.2f\n",s1.weight);

}