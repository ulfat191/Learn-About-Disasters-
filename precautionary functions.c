#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fire()
{
     printf("\nFire is unpredictable so precautionary measures must be taken accordingly\n");
     FILE *fire_p;//Use of file
     char ch;
     fire_p = fopen("fire.txt", "r");//Use of file to read

     if(fire_p==NULL)
        printf("\nFire and earthquake file not opened\n");//Safety measure
     else
        printf("\nFire and earthquake file open for access\n");

     while(!feof(fire_p))
     {
         ch = fgetc(fire_p);
         printf("%c", ch);
     }
     fflush(stdin);
     //printf("\n");
     fclose(fire_p);
}

void earthquake()
{
     printf("\nFire is unpredictable so precautionary measures must be taken accordingly\n");
     FILE *earthquake_p;
     char E;
     earthquake_p = fopen("earthquake.txt", "r");

     if(earthquake_p==NULL)
        printf("\nFile not open for earthquake\n");
     else
        printf("\nFile for earthquake open for access\n");
     while(!feof(earthquake_p))//Use of conditional statement
        {
            E = fgetc(earthquake_p);
            printf("%c", E);
        }
        fflush(stdin);
        fclose(earthquake_p);
}
void Arsenic()
{
    printf("Arsenic Water Contamination:\n");
    printf("Before:\n");
    printf("In affected areas Practical Action has been working to educate people about the symptoms of arsenic poisoning. We have provided testing kits so that people can check if their water supply is contaminated and, if need be, install arsenic-removal systems or look into alternative safe water supplies.\n");
    printf("After :\n");
    printf("There is no specific medicine available for the treatment of arsenicosis. Cessation of further exposure to arsenic by stopping consumption of arsenic-contaminated water both for drinking and cooking purpose and to use arsenic-safe water for both the drinking and cooking purpose are the main management strategies for arsenicosis patients in Bangladesh.\n");

}

void drought(){
 printf("Drought:\n");
     FILE *d;

    char r;
    d=fopen("Drought.txt" ,"r");
    if(d!=NULL)
    printf("\n Drought \n");
     else
        printf("\nFile doesn't exist\n");
        while((r=getc(d))!=EOF)
        {
            putchar(r);
        }


    fclose(d);
}

void flood(){

 printf("Flood:\n");
     FILE *f;
    char l;
    f=fopen("Flood.txt" ,"r");


    if(f!=NULL)
    {
        while((l=getc(f))!=EOF)
        {
            putchar(l);
        }
    }

    fclose(f);

}

void storm(){
 printf("Storm:\n");
     FILE *s;
    char t;
    s=fopen("Storm.txt" ,"r");


    if(s!=NULL)
    printf("\n Storm \n");
     else
        printf("\nFile doesn't exist\n");
        while((t=getc(s))!=EOF)
        {
            putchar(t);
        }


    fclose(s);

}

void cyclone(){
 printf("Cyclone:\n");
     FILE *c;
    char y;
    c=fopen("Cyclone.txt" ,"r");


    if(c!=NULL)
    printf("\n Cyclone \n");
     else
        printf("\nFile doesn't exist\n");
        while((y=getc(c))!=EOF)
        {
            putchar(y);
        }


    fclose(c);

}

void landsides(){
 printf("Landslide:\n");
     FILE *L;
    char a;
    L=fopen("Landslides.txt" ,"r");


    if(L!=NULL)
     printf("\n Landslides \n");
     else
        printf("\nFile doesn't exist\n");
        while((a=getc(L))!=EOF)
        {
            putchar(a);
        }


    fclose(L);

}

void northwester(){
     printf("Nor’wester:\n");
     FILE *n;
    char o;
    n=fopen("Nor’wester.txt" ,"r");


    if(n!=NULL)
    printf("\n Nor’wester\n");
     else
        printf("\nFile doesn't exist\n");
        while((o=getc(n))!=EOF)
        {
            putchar(o);
        }


    fclose(n);


}

void erosion(){
printf("Soil Erosion:\n");
     FILE *E;

    char p;
    E=fopen("Erosion.txt" ,"r");


    if(E!=NULL)

        printf("\nSoil Erosion\n");
     else
        printf("\nFile doesn't exist\n");

        while((p=getc(E))!=EOF)
        {
            putchar(p);
        }


    fclose(E);

}

void tornado(){
    printf("Tornados:\n");
     FILE *T;
    char n;
    T=fopen("Tornados.txt" ,"r");


    if(T!=NULL)

    printf("\n Tornados \n");
     else
        printf("\nFile doesn't exist\n");

        while((n=getc(T))!=EOF)
        {
            putchar(n);
        }


    fclose(T);
}

