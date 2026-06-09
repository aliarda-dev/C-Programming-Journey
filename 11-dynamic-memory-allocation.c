#include <stdio.h>
#include <stdlib.h>

//Dinamik Bellek Yonetimi 


//malloc & free

int main(void){

    int* x=(int*)malloc(sizeof(int));

    *x=10;

    printf("%d",*x);

    free(x);

} 

//Basit Ogrenci Notu Girme Program

int main(void){

    int input;

    printf("Ogrenci Mevcudunuz: ");
    scanf("%d",&input);


    int* ogrenci=(int*)malloc(input*sizeof(int));

    for(int i=0;i<input;i++){

        printf("%d. ogrencinin notunu giriniz: ",i+1);
        scanf("%d",&ogrenci[i]);
        printf("\n");
    }

    printf("\n\n\n");

    for(int i=0;i<input;i++){

        printf("%d. ogrencinin notu: %d ",i+1,ogrenci[i]);
        printf("\n");
    }

    free(ogrenci);

    


}

//calloc & realloc

int main(void){

    int n,new;

    printf("Kac elemanli bir array olusturmak istiyorsunuz: ");
    scanf("%d",&n);

    int* array=(int*)calloc(n,sizeof(int));

    for(int i=0;i<n;i++){

        printf("array[%d]=\n",i);
        
        scanf("%d",(array+i));

    }

    printf("Mevcut Array :\n\n");

     for(int i=0;i<n;i++){
        printf("array[%d] = %d",i,array[i]);
         printf("\n");

    }


    printf("\nGuncel kac elemanli bir array olusturmak istiyorsunuz: ");
    scanf("%d",&new);

    array=(int*)realloc(array,new*sizeof(int));


    for(int i=0;i<new;i++){

        printf("array[%d]= \n",i);
        scanf("%d",array+i);

    }

    printf("Mevcut Array :\n\n");

     for(int i=0;i<new;i++){
        printf("array[%d] = %d",i,array[i]);
        printf("\n");

    }

free(array);

}

