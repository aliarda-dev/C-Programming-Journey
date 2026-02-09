#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //aritmetik islemler 
int p1,p2,p3,sum,multiplication,division;
p1=34;
p2=2;
p3=11;
sum=p1+p2+p3;
multiplication=p1*p2*p3;
division=p1/p2; // Not:p3 eklenirse sonuc ondalikli olacak ,division float turunden olmmadigi icin kod calismiyor.
printf("Sum: %d\n",sum);
printf("Your multiplication is: %d\n",multiplication);
printf("Your division is: %d\n",division); 


//yeni fonksiyon denemesi
int thenumber,thenumber1;
printf("Enter two significant number:");
scanf("%d %d",&thenumber,&thenumber1);
printf ("The number you entered is: %d-%d",thenumber,thenumber1); 

//dairenin cevresini ve alanini bulan program
float radius,perimeter,area;
const float pi=3.1415;
printf("Enter the radius of circle:");
scanf("%f",&radius);
perimeter=2*pi*radius;
area=pi*radius*radius;
printf("The are of circle is: %f\n",area);
printf("The perimeter of circle is: %f",perimeter); 

//4 sayının karesini ve kupunu alan program
float sayi1,sayi2,sayi3,sayi4,kare1,kare2,kare3,kare4,kup1,kup2,kup3,kup4;
printf("Enter four numbers:");
scanf("%f %f %f %f",&sayi1,&sayi2,&sayi3,&sayi4);

printf("The Number\t\t");
printf("Square of the Number\t\t");
printf("Cube of the Number\t\t\n");

printf("----------\t\t");
printf("----------\t\t");
printf("----------\t\t\n");

printf("%f\t\t",sayi1);
printf("%f\t\t",sayi1*sayi1);
printf("%f\t\t\n",sayi1*sayi1*sayi1);

printf("%f\t\t",sayi2);
printf("%f\t\t",sayi2*sayi2);
printf("%f\t\t\n",sayi1*sayi1*sayi2);

printf("%f\t\t",sayi3);
printf("%f\t\t",sayi3*sayi3);
printf("%f\t\t\n",sayi3*sayi3*sayi3);

printf("%f\t\t",sayi4);
printf("%f\t\t",sayi4*sayi4);
printf("%f\t\t\n",sayi4*sayi4*sayi4); 



//metinsel ifade depolama
char mynumber=49;
printf("Karakterimizin sayisal degeri:%d\n\n",mynumber);
printf("Karakterimizin ASCII degeri:%c\n",mynumber); 

printf("Enter a city you living:");
char mycity[16];
scanf("%s",&mycity);
printf("Your city is: %s",mycity); 



//Operatorler
int mynumber;
mynumber=7;
printf("Your first number: %d\n",mynumber);
printf("Your second number: %d\n",++mynumber);
printf("Your third number: %d\n",mynumber++); //Burada sayının tekrar artmama sebebi ++'ın sagda olmasi bu yuzden program ilk printf fonksiyonunu algılıyor onceki satırdaki hesaplanan sayıyı yazıyor daha sonra arttırılan sonucu asagida ancak yazabiliyor
printf("Your fourth number: %d",mynumber); 



int x,y,z;
x=5;
y=2;
z=9;
x++;      //x=5               satırlara yazılan esitlikler o satırlardaki anlık degisken degerleridir
          //x=6
++y;      //y=3
z--;      //z=9
          //z=8
x=y++;    //x=y=3
          //x=3 y=4
x=++y;    //y=5 x=5
z=++x;    //z=6 x=6
z=y--;    //z=5 y=5
          //y=4
z=--y;    //z=3 y=3
printf("x: %d\n",x);
printf("y: %d\n",y);
printf("z: %d",z);    

//Assignment Operators

+= x+=2 x=x+2
-= x-=2 x=x-2
*= x*=2 x=x*2
/= x/=2 x=x/2
%= x%=2 x=x%2 mod(kalan)

&(ve)= x&=3 x=x&3
|(veya) x|4 x=x|4 
^(ya da) x^3 x=x^3
>>(right shift) x>>=5 x=x>>5
<<(left shift) x<<=6 x=<<6   




int andnumber1,ornumber1,xornumber1,rs1,ls1;
andnumber1=7;                                //7=00000111  8 bit sistemlerindeki degerleri
andnumber1 &=12;                            //12=00001100
                                            //   00000100 olusan yeni deger=4
printf("Your and result is: %d\n",andnumber1); 


ornumber1=7;                                //7=00000111
ornumber1 |=3;                              //3=00000011
                                            //  00000111 olusan yeni deger=7
printf("Your or result is: %d\n",ornumber1);


xornumber1=7;                               //7=00000111
xornumber1 ^=3;                              //3=00000011
                                             // =00000100 olusan yeni deger=4
printf("Your xor number is: %d\n",xornumber1);

ls1=7;                    //7=00000111
ls1 <<=2;                 //bitleri 2 birim sola kaydırır olusan yeni deger=00011100(28)
printf("Your left shift number is: %d",ls1);  





//Girilen  Sayinin Rakamlarini Toplayan Program(4 basamakli)

int sayim,bolum,kalan,sum;
sum=0;

printf("4 basamakli bir sayi giriniz:");
scanf("%d",&sayim);

bolum=sayim / 1000;
sum +=bolum;
kalan=sayim % 1000;

bolum=kalan / 100;
sum +=bolum;
kalan= kalan % 100;

bolum=kalan / 10;
sum +=bolum;
kalan= kalan % 10;

sum+= kalan;
printf("Girdiginiz sayinin rakamlar toplami: %d",sum);1 




//Comparison Operators 

== equal to(esitse) x==y
!= not equal to (esit degilse) x!=y
> greater than (büyükse) x>y
> less than (kucukse) x<y
>= greater than or equal to (buyuk veya esitse)
<= less than or equal to (kucuk veya esitse)

//Logical Operators
&&(ve) x>5 && x<10
||(veya) x<3 || x>8
!(sonucu tersine cevirir)


int x,y;
x=9;
y=6;

printf("result x==y: %d\n",x==y);
printf("result x!=: %d\n",x!=y);

printf("result x&: %d\n",x>5 && x<10);
printf("result x|: %d\n",x<2 || x>10);
printf("result !: %d", !(y<8 && x>5));  






//Kaptaki Gazin Basincini Hesaplayan Program

float P,V,N,R,T;
R=22.4/273;
printf("Kaptaki gazin hacmini giriniz: ");
scanf("%f",&V);
printf("Kaptaki gazin mol sayisini giriniz: ");
scanf("%f",&N);
printf("Sicakligi giriniz (derece cinsinden): ");
scanf("%f",&T);
T+=273;
P=N*R*T/V;
printf("%f hacimli kaptaki gazin basinci: %f",V,P);



//Girilen sayinin onlar ve birler basamagini bulan program

int mynumber,bb,ob,bolum,kalan;

printf("Pozitif bir sayi giriniz: ");
scanf("%d",&mynumber);

bb=mynumber%10;
ob=(mynumber%100)/10;


printf("Sayinizin birler basamagi: %d\n",bb);
printf("Sayinizin onlar basamagi: %d",ob);



//Girilen dort sayinin aritmetik ortalamasını bulan program

float num1,num2,num3,num4,ort;

printf("Dort adet pozitif sayi giriniz: ");
scanf("%f %f %f %f",&num1,&num2,&num3,&num4);

ort=(num1+num2+num3+num4)/4;
printf("Aritmetik ortalamaniz: %f",ort);

    
}
