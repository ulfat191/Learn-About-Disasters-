
#include <stdio.h>
#include <stdlib.h>
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
