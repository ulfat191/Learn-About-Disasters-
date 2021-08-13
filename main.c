#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct feedback //Use of structure
{
    char email[50];//Use of array
    int cellnumber;
    char message[200];//Use of different data types
}f;

void Arsenic();//precautionary function
void drought();//precautionary function
void flood();//precautionary function
void storm();//precautionary function
void cyclone();//precautionary function
void landsides();//precautionary function
void northwester();//precautionary function
void tornado();//precautionary function
void erosion();//precautionary function
void fire();//precautionary function
void earthquake();//precautionary function
void feedback(f ppl);//function with string argument
void division(int);//function with int argument
void month(int);//function with int argument
int main()
{
    printf("\t\t Learn About Disasters in Bangladesh\t\t\n");

    int divisioncode;
    char name[50];
    char location[50];
    char choice;
    char selection;

    FILE *user_id;//Name of file
    user_id = fopen("user record.txt", "a");
    //start:
    printf("\nWould you like to learn about the different natural & man-made disasters in our country and what to do during/after a disaster??\n");
    printf("\nEnter your choice (Y/N):\n");
    scanf("%c", &choice);

    if(choice=='n' || choice=='N')//use of OR operator
    {
        goto END;//use of goto label
    }

    if(choice=='Y' || choice=='y')//Case sensitive
    {

    if(user_id==NULL)//left hand side of the operand contains name of file
    {
        printf("Record file not created for user's info\n");//safety check for file creation
    }
    else
        printf("\nPlease Enter the following details\n");
        start://backward jump for goto
        fflush(stdin);

        printf("\nEnter your nick name:\n");
        gets(name);
        printf("\nEnter your location\n");
        gets(location);
        fflush(stdin);//clearing screen
    fprintf(user_id, "\n%s\t\t%s", name, location);//writing in file

    fclose(user_id);//file closed
    //Use of file
    jump:
    printf("\nPlease select the division to know about the particular disasters that happened there in the past decades\n");
    printf("\nFor Dhaka press 1\n\nFor Chittagong press 2\n\nFor Sylhet press 3\n\nFor Rangpur press 4\n\nFor Mymensingh press 5\n\nFor Barisal press 6\n\nFor Khulna press 7\n\nFor Rajshahi press 8\n");
    scanf("%d", &divisioncode);

    division(divisioncode);
    if(divisioncode>8)
    {
        printf("\nInvalid input\n");
        goto jump;
    }
    fflush(stdin);
    //Use of clearing screen
        // other variables
    int i,n;

//    FILE *user_id;//Name of file
    user_id = fopen("user record.txt", "a");//file in append mode

    printf("\nWe will be collecting your address, name and contact details for further update of our work\n");


    if(user_id==NULL)//left hand side of the operand contains name of file
    {
        printf("Record file not created for user's info\n");//safety check for file
    }
    else
        printf("Record file open for access\n");
    // creating a student structure array variable
    printf("\nEnter the number of feedback that you want to add about our project (Any type of constructive criticism is accepted)\n");
    scanf("%d",&n);
    if(n==0)
        goto END;
    f ppl[n];
//Use of structure as function argument
    // taking user input
    for (i=0;i<n;i++)
        //Use of for loop
        {
    printf("\nEnter the following details of person #%d\n", (i+1));//serial number included for ease
    fflush(stdin);
    printf("\nEnter your email: \n");
    gets (ppl[i].email);
//    Use of string
    fflush(stdin);
    printf("\nEnter the cellphone number: \n");
    scanf("%d", &ppl[i].cellnumber);
    fflush(stdin);
    printf("\nEnter your response/review: \n");
    gets (ppl[i].message);
    fflush(stdin);

    fprintf(user_id, "\t\t%s\t\t%d\t\t%s", ppl[i].email, ppl[i].cellnumber, ppl[i].message);
  }
  // output
    for (i=0;i<n;i++) {
    printf("\nName #%d Response:\n", (i+1));
    feedback(ppl[i]);
  }
    }

    printf("Do you want to run the program again?(y/n\n");
    scanf("%c", &selection);

    switch (selection)//Use of switch conditional statement
    {
    case 'y':
        goto start;
        break;

    case 'n':
        goto END;
        break;
    }

    END://forward jump
        printf("Thank you for checking our program\t Wishing you a good day\n \nREGARDS \n \nMd Ulfat Tahsin\n");

    return 0;
}

void division(int code1)
{


int monthrange;
   if(code1==1)//Use of conditional statement
   {
       printf("\nLocation: Dhaka Division\n");

       fflush(stdin);
       prev1:
       printf("\nPlease select the month range section :\n \n(101)October to January\n \n(102)February to May\n \n(103)June to September\n");
       scanf("%d", &monthrange);
       month(monthrange);
       if(monthrange>103)
       {
           printf("\nInvalid Input\n");
           goto prev1;
       }
       fflush(stdin);
       }
   if(code1==2)
   {
       printf("\nLocation: Chittagong Division\n");

       prev2:
       printf("\nPlease select the month range section :\n \n(201)October to January\n \n(202)February to May\n \n(203)June to September\n");
       scanf("%d", &monthrange);
       month(monthrange);
       if(monthrange>203)
       {
           printf("\nInvalid Input\n");
           goto prev2;
       }
       fflush(stdin);
   }
   if(code1==3)
   {
       printf("\nLocation: Sylhet Division\n");

       fflush(stdin);
       prev3:
       printf("\nPlease select the month range section :\n \n(301)October to January\n \n(302)February to May\n \n(303)June to September\n");
       scanf("%d", &monthrange);
       month(monthrange);
       if(monthrange>303)
       {
           printf("\nInvalid Input\n");
           goto prev3;
       }
       fflush(stdin);
   }
   if(code1==4)
   {
       printf("\nLocation: Rangpur Division\n");

       fflush(stdin);
       prev4:
       printf("\nPlease select the month range section :\n \n(401)October to January\n \n(402)February to May\n \n(403)June to September\n");
       scanf("%d", &monthrange);
       month(monthrange);
       if(monthrange>403)
       {
           printf("\nInvalid Input\n");
           goto prev4;
       }
       fflush(stdin);
   }
   if(code1==5)
   {
       printf("\nLocation: Mymensingh Division\n");

       fflush(stdin);
       prev5:
       printf("\nPlease select the month range section :\n \n(501)October to January\n \n(502)February to May\n \n(503)June to September\n");
       scanf("%d", &monthrange);
       month(monthrange);
       if(monthrange>503)
       {
           printf("\nInvalid Input\n");
           goto prev5;
       }
       fflush(stdin);
   }
   if(code1==6)
   {
       printf("\nLocation: Barisal Division\n");

       fflush(stdin);
       prev6:
       printf("\nPlease select the month range section :\n \n(601)October to January\n \n(602)February to May\n \n(603)June to September\n");
       scanf("%d", &monthrange);
       month(monthrange);
       if(monthrange>603)
       {
           printf("\nInvalid Input\n");
           goto prev6;
       }
       fflush(stdin);
   }
   if(code1==7)
   {
       printf("\nLocation: Khulna Division\n");
       fflush(stdin);
       prev7:
       printf("\nPlease select the month range section :\n \n(701)October to January\n \n(702)February to May\n \n(703)June to September\n");
       scanf("%d", &monthrange);
       month(monthrange);
       if(monthrange>703)
       {
           printf("\nInvalid Input\n");
           goto prev7;
       }
       fflush(stdin);
   }
   if(code1==8)
   {
       printf("\nLocation: Rajshahi Division\n");
       fflush(stdin);
       prev8:
       printf("\nPlease select the month range section :\n \n(801)October to January\n \n(802)February to May\n \n(803)June to September\n");
       scanf("%d", &monthrange);
       month(monthrange);
       if(monthrange>803)
       {
           printf("\nInvalid Input\n");
           goto prev8;
       }
       fflush(stdin);
   }
}



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

void feedback(f ppl)//structure function
{
    printf("\nEmail: %s\nCellphone Number: %d\nMessage: %s\n",ppl.email,ppl.cellnumber,ppl.message);
}

void month(int monthrange1)
{
    if(monthrange1==101)
      {
         printf("\nIts winter and the atmosphere is cool with normal conditions and no probable natural disaster expected\n");
         //include precautionary function for unexpected fire and earthquake
         fire();//Function call inside another function
         printf("\nDhaka Fire Service: 9556667, 9555555, 9556666\n");

         earthquake();
      }
      if(monthrange1==102)
      {
          printf("\nIts summer, stay hydrated and unpredicted Nor'wester and storms might hit at undefined intervals\n");
          //include precautionary function for excessive rain, thurderstrike
          fire();
          earthquake();
          tornado();
          northwester();
          erosion();

      }
      if(monthrange1==103)
      {
          printf("\nIts monsoon.Dhaka city has the greatest possibility of being flooded due to its poor drainage facilities.\n \nThere is also a possibility of riverbank erosion due to excessive rainfall in the regions around buriganga and its channels\n");
          //include required precautionary function for flood
          fire();
          earthquake();
          tornado();
          erosion();
      }

      if(monthrange1==201)
      {
          printf("\nIts winter and Chittagong is generally out of risk from any natural calamities\n \nThe riverbank regions might expect cold waves sometimes\n \nVery rarely storms may hit\n");
          //include precautionary function for unexpected fire and earthquake
          fire();
          printf("\nChittagong Fire Service: 760333-7, 761006, 762280\n");
          earthquake();
          tornado();
          storm();


      }
      if(monthrange1==202)
      {
          printf("\nIts summer and Chittagong will probably get hit by unexpected Nor'wester storms at an unexpected time\n");
          //include precautionary function for excessive rain, thunderstrike

          fire();
          printf("\nChittagong Fire Service: 760333-7, 761006, 762280\n");

          earthquake();
          tornado();
          erosion();
          cyclone();
          landsides();
          Arsenic();
          storm();
          flood();
          }
      if(monthrange1==203)
      {
          printf("\nIts monsoon and there is greater possibility of flood as it is a riverbank zone and the hilly areas might be victim to landslide due to rain at Chittagong.\n \nRiverbank erosion might also be visible at specific places\n");
          //include precautionary function for flood, landslide, riverbank erosion
          fire();
          printf("\nChittagong Fire Service: 760333-7, 761006, 762280\n");

          earthquake();
          tornado();
          erosion();
          cyclone();
          landsides();
          Arsenic();
          storm();
          flood();
      }

      if(monthrange1==301)
      {
          printf("\nIts winter and Sylhet has a calm, cool and dry weather\n");
          //include precautionary function for unexpected fire and earthquake
          fire();
          printf("\nSylhet Fire Service: 713998\n");

          earthquake();
      }
      if(monthrange1==302)
      {
          printf("\nIts Summer and for Sylhet only high temperature and moderate precipitation in expected and nothing else\n");
          //include precautionary function for unexpected fire and earthquake
          fire();
          printf("\nSylhet Fire Service: 713998\n");

          earthquake();
          erosion();
          landsides();
          storm();
          flood();
      }
      if(monthrange1==303)
      {
          printf("\nIts monsoon and the area of Sylhet is very much susceptible to heavy monsoonal rainfall causing periodical rainfall in the plain\n");
          //include precautionary function for excessive rain and flood
          fire();
          printf("\nSylhet Fire Service: 713998\n");

          earthquake();
          tornado();
          erosion();
          flood();
          landsides();
          storm();
      }

      if(monthrange1>=401 && monthrange1<=403)
      {
          printf("\nRangpur is generally calm and dry without any unpredictable or unexpected situations\n");
          //include precautionary function for earthquake
          fire();
          printf("\nRangpur Fire Service: 2222\n");

          earthquake();
          drought();
          erosion();
          storm();
      }

      if(monthrange1>=501 && monthrange1<=503)
      {
          printf("\nMymensingh Municipality has the highest risk of getting hit by earthquake per geological and historical reports\n");
          //include precautionary function for earthquake
          fire();
          printf("\nMymensingh Fire Service: 0015\n");
          earthquake();
          tornado();
          erosion();
      }

      if(monthrange1==601)
      {
          printf("\nIts winter and Barisal will get hit by few cold waves only and nothing else to be afraid of\n");
          //No precaution required
          fire();
          printf("\nBarisal Fire Service: 0018\n");
          earthquake();
      }
      if(monthrange1==602)
      {
          printf("\nBarisal is a river neighbored area so storm surge is slightly expected in summer due to kalboishakhi\n");
          //include precautionary function storm surge
          fire();
          printf("\nBarisal Fire Service: 0018\n");
          earthquake();
          tornado();
          erosion();
          Arsenic();
          storm();
          flood();
      }
      if(monthrange1==603)
      {
          printf("\nBarisal is a river neighbored area and in monsoon storm surge along with excessive rainfall causing flood is expected\n");
          //include precautionary function for flood
          fire();
          printf("\nBarisal Fire Service: 0018\n");
          earthquake();
          tornado();
          erosion();
          cyclone();
          Arsenic();
          storm();
          flood();
      }

      if(monthrange1>=701 && monthrange1<=703)
      {
          printf("\nKhulna is free from any kind of natural disaster due to the presence of the Sundarban there but ground water contamination by arsenic is considered a major issue at particular places there\n");
          //include precautionary function for arsenic contamination
          fire();
          printf("\nBarisal Fire Service: 00465\n");
          earthquake();
          Arsenic();
          flood();
      }
      if(monthrange1>=801 && monthrange1<=803)
      {
          printf("\nRajshahi is most vulnerable to famine mostly in the summer season due to water surge and low streamline flow. No additional risky natural disaster in expected in the region in any season\n");
          //include precautionary function for drought
          fire();
          printf("\nBarisal Fire Service: 00345\n");
          earthquake();
          drought();
          erosion();

      }
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
