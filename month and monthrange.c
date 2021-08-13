#include <stdio.h>
#include <stdlib.h>
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
