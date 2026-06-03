#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <ctype.h>

//Arrays(Diziler)


int main(){

    int notes[]={15,34,65,74,7,67};
    int i,avg,sum;

    for(i=0;i<6;i++){
        sum+=notes[i];
    }
    printf("%d",sum);

    return 0;
}




//Ortalama alma

int main(){

    double avg=0,numbers[3];

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf",&numbers[0],&numbers[1],&numbers[2]);

    avg=(numbers[0]+numbers[1]+numbers[2])/3;

    printf("Average: %.3f",avg);

    return 0;

}


int main(){

    float temp,lightlvl,temphightest=-1000;
    int motion,password,i;


    for(i=3;i>=1;i--){

        printf("Lutfen sifreyi tuslayin: ");
        scanf("%d",&password);

    if(password==2006){

        printf("\nSifre dogrulandi hosgeldiniz\n\n\n");

    do{
        printf("Lutfen sicaklik degerini giriniz: ");
        scanf("%f",&temp);

        if(temp==-999) break;

        printf("Lutfen isik seviyesini giriniz: ");
        scanf("%f",&lightlvl);

        printf("Lutfen aktif hareket varsa (1) yoksa (2) tuslayin: ");
        scanf("%d",&motion);

        if(motion!=1 && motion!=2){
            printf("Hareket sensor tusu hatali tuslandi lutfen yonergeye uyun!\n\n\n");
            continue;
        }
    

    if(temp>50){
        printf("YANGIN ALARM!\n\n\n");
    }

    else if(motion==1 && lightlvl<20){
        printf("Aydinlatma Acildi ve Guvenlik Uyarildi\n\n\n");
    }

    else{
        printf("Herhangi bir sorun yok\n\n\n");
    }


    if(temp>temphightest){
        temphightest=temp;
    }

    }

    while(temp!=-999);

    printf("Girilen en yuksek sicaklik: %.3f\n\n\n",temphightest); }

    else{

        if(i-1==0){ 
        printf("Yetkisiz erisim algilandi sistem kapatiliyor...");
        break; }


        printf("Hatali veya eksik sifre tusladiniz %d sifre deneme hakkiniz kaldi\n\n",i-1);
        continue;
    }
}


    return 0;
}
    

float direncHesapla(float V,float I);
float gucHesapla(float V,float I);
void sistemDurum(float P);



int main(){

    float V,I,P;

    printf("Voltaj degerini giriniz: ");
    scanf("%f",&V);

    printf("Akim degerini giriniz: ");
    scanf("%f",&I);

     P=I*V;

    printf("R = %.2f",direncHesapla(V,I));
    printf("\nW = %.2f",gucHesapla(V,I));
    sistemDurum(P);






    return 0;
}

float direncHesapla(float V,float I){
    return V/I;
}

float gucHesapla(float V,float I){
    return V*I;
}

void sistemDurum(float P){
    if(P>100){
        printf("\nAsiri isinma gerceklesti fanlari ac!");
    }
    
    else {
        printf("\nHer sey yolunca devam\n");
    }
}
    


int main(){

    double average=0,number[3];

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf",&number[0],&number[1],&number[2]);

    average=(number[0]+number[1]+number[2])/3;

    printf("Average: %.3f",average);

    return 0;
}
    


int main(){

    int i=0,mySquare[20];

    for(i=0;i<5;i++){

        mySquare[i]=i*i;

        printf("mySquare[%d]: %d\n",i,mySquare[i]);
    }
}
    


int main(){

    double myValue,myArray[10];
    int choice,index;

    do{
        printf("Make a choice (-1 to Exit): ");
        printf("\n\t1. Write to array\n");
        printf("\t2. Read from array\n");
        scanf("%d",&choice);

        if(choice==-1) break;

        if(choice!=1 && choice!=2){
            printf("Please make a choice between 1-2!\n\n");
            continue;
        }

        printf("Please enter a index number (0-9): ");
        scanf("%d",&index);

        if(index<0 || index>9){
            printf("\nPlease enter a valuable number between 0-9!\n\n");
            continue;
        }

        switch(choice){

            case 1: printf("\nEnter the value: ");
                    scanf("%lf",&myValue);

                    myArray[index]=myValue;

                    printf("The write operation is successful\n\n");
            break;

            case 2: printf("myArray[%d]: %.3f\n\n",index,myArray[index]);
            break;
        }





    }while(choice!=-1);


    return 0;
}



int main(){

    char name[]="Arda";

    printf("%s\n",name);
    printf("%c\n",name[0]);
    printf("%c\n",name[2]);




    return 0;
}
    

//Programlamada dizilere rastgele sayi yerlestirme

int main(){

    int i,dice,howMany[7]={0};

    srand(time(NULL));

    for(i=1;i<=100;i++){

        dice=rand()%6+1;  //1-6 arasi rastgele sayi

        howMany[dice]++;
    }

    printf("Zar Numarasi\t Kac Defa Geldi\n");

    for(i=1;i<7;i++){

        printf("%d\t\t\t%d\n",i,howMany[i]);
    }

    return 0;
}
    



//Dizileri tersten yazdiran algoritma

int main(){

    int numbers[5]={0},i;

    printf("Enter array numbers: ");
    
    for(i=4;i>=0;i--){

        scanf("%d",&numbers[i]);
    }

    for(i=0;i<=4;i++){

        printf("\nnumbers[%d] = %d\n",i,numbers[i]);
    }

    return 0;
}




//Dizi degerlerini kucukten buyuge siralayan program

void Sort();
void writeArray();


int numbers[7]={0},i;

int main(){

    printf("Enter 7 numbers to sort: ");

    for(i=0;i<=6;i++){

        scanf("%d",&numbers[i]);
    }

   printf("\nThis is before sorting\n");
   writeArray();

    printf("\n\nThe array is sorting...\n");
    Sleep(2000);

    Sort();

    printf("\nThis is after sorting:\n");
    writeArray();


}


void Sort(){

    int j,reserve;

    for(i=0;i<7;i++){

        for(j=i+1;j<=6;j++){

            if(numbers[j]<numbers[i]){
                reserve=numbers[i];
                numbers[i]=numbers[j];
                numbers[j]=reserve;
            }
        }
    }
}

void writeArray(){

    for(i=0;i<=6;i++){

        printf("%d ",numbers[i]);
    }
}
    

//Kullanicidan array'a girilecek eleman sayisi alinir,sonra arraya sayilar atar,bunun sonucunda tek ve cift sayilari ayri ayri ekrana yazdiran algoritma


int main(){

    int i,input;
    

    printf("How many number you wanna enter: ");
    scanf("%d",&input);

    int myArray[input];

    for(i=0;i<input;i++){

        printf("\nmyArray[%d] = ",i+1);
        scanf("%d",&myArray[i]);
        
    }

    printf("\nTek Sayilar:\n");

    for(i=0;i<input;i++){
        if(myArray[i]%2==1){
            printf("%d\t",myArray[i]);
        }

        else continue;
    }

    printf("\n\nCift Sayilar:\n");

    for(i=0;i<input;i++){
        if(myArray[i]%2==0){
            printf("%d\t",myArray[i]);
        }

        else continue;
    }


//Bir sinif en fazla 100 kisiden olusabiliyorsa,sinifta bulunan ogrenci sayisini girdi alıp her ogrencinin okul numarasi ile notunu iki ayri arraye okutalim.En sonunda en dusuk ve en yuksek notu alan ogrencileri ekrana yazdirilsin

 int main(){

    int ogrenciNo[100],ogrenciNot[100];
    int input,i,j,bnumbno,sn,bn;

    printf("Sinif Mevcudunuz: ");
    scanf("%d",&input);

    for(i=0;i<input;i++){

        printf("Ogrenci Numarasi ve Notu: ");
        scanf("%d %d",&ogrenciNo[i],&ogrenciNot[i]);
    }

    for(i=0;i<input;i++){

        for(j=i+1;j<input;j++){

            if(ogrenciNot[j]<ogrenciNot[i]){
                
                bn=ogrenciNot[i];
                bnumbno=ogrenciNo[i];
                ogrenciNot[i]=ogrenciNot[j];
                ogrenciNo[i]=ogrenciNo[j];
                ogrenciNot[j]=bn;
                ogrenciNo[j]=bnumbno;
                
                
            }

            
         
        }
    }

    printf("En Yuksek Not: %d no'lu ogrenci, Notu=%d\n",ogrenciNo[input-1],ogrenciNot[input-1]);
    printf("En Dusuk Not: %d no'lu ogrenci, Notu=%d\n",ogrenciNo[0],ogrenciNot[0]);






    return 0;
 }
    


//Nokta ile biten bir cumleyi karakter arrayine okutup,cumlede kac tane A veya E karakteri oldugunu hesaplayan algoritma

void countCharacters(char x[]);

int main(){

    char x[100];
    int i=0;

    printf("Enter a sentence: ");

    do{
        scanf("%c",&x[i]);
        i++;
    }while(x[i-1]!='.'); //x[i] olmamasinin sebebi son elemanin enter tusuna indeksli olmasidir,. girildikten sonra enter basilir bu da indeks olarak algilanir

    countCharacters(x);


    return 0;
}

void countCharacters(char x[]){

    int i,aCount=0,eCount=0;

    for(i=0;x[i]!='.';i++){

        if(x[i]=='a' || x[i]=='A'){
            aCount++;
        }

        if(x[i]=='e' || x[i]=='E'){
            eCount++;
        }
    }

    printf("A/a : %d\n",aCount);
    printf("E/e : %d\n",eCount);


}
    


//Nokta ile biten bir cumleyi karakter arrayine okutup cumlede her harften kacar tane oldugunu gosteren algoritma

void countCharacters(char x[],int y[]);

int main(){

    char x[100];
    int y[26],i=0;

    printf("Enter a sentence: ");

    do{
        scanf("%c",&x[i]);
        i++;

    }while(x[i-1]!='.');

    countCharacters(x,y);

    for(i=0;i<26;i++){

        printf("%c/%c : %d adet\n",'A'+i,'a'+i,y[i]);
    }

    return 0;
}

void countCharacters(char x[],int y[]){

    int i,j;

    for(i=0;i<26;i++){ //Burada amac dizinin icini komple 0 layip c'nin aksi bir durumda sayi atamasina karsi onlem almak

        y[i]=0;
    }

    for(i=0;x[i]!='.';i++){

        if(x[i]>='A' && x[i]<='Z'){
            y[(int)x[i]-(int)'A']++; //x[i] cumleden girilen harfi sayiya cevirdik daha sonra A'nin ascii sayi degerinden cikarinca kalan deger bizim y dizimizde sirasiyla biriktirdigimiz harfler olmakta,y[0]=A,y[1]=B gibi
        }


        if(x[i]>='a' && x[i]<='z'){
            y[(int)x[i]-(int)'a']++; //x[i] cumleden girilen harfi sayiya cevirdik daha sonra A'nin ascii sayi degerinden cikarinca kalan deger bizim y dizimizde sirasiyla biriktirdigimiz harfler olmakta,y[0]=a,y[1]=b gibi
        }
    }




    }
    

//Iki boyutlu dizi ornegi

int main(){


    int i,j,x[3][4];

    for(i=0;i<3;i++){

        for(j=0;j<4;j++){

            x[i][j]=i+j;

            printf("%d",x[i][j]);
        }

        printf("\n");
    }



    return 0;
}
    


//Mayin Oyunu

int main(){

    int i,j,k,matrix[5][5],row[5]={0,0,0,0,0};
    int r,c;

    srand(time(NULL));

    for(i=0;i<5;i++){

        for(j=0;j<5;j++){
            matrix[i][j]=0;
        }
    }

    

    for(i=0;i<5;){

        int satir=rand()%5,sutun=rand()%5;

        if(row[satir]<2 && matrix[satir][sutun]==0){

            

            matrix[satir][sutun]=1;
            row[satir]++;
            i++;
        
        }
        
    }

    for(i=0;i<5;i++){

        for(j=0;j<5;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }

    do{
        printf("[1-5][1-5] satir ve sutun secimi yapiniz: ");
        scanf("%d %d",&r,&c);

        if(matrix[r-1][c-1]==1){
            printf("BOOOOM!\n\n");
            break;
        }

        else if(matrix[r-1][c-1]==0){
            printf("Bu sefer patlamadin devam et bakalim\n\n");
            continue;
        }

        else{
            printf("Lutfen gecerli degerler gir!\n\n");
            continue;
        }

    }while(1);


    return 0;
}