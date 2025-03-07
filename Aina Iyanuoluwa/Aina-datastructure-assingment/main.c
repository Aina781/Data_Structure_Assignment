#include <stdio.h>
#include <stdlib.h>
//Question 1 finding average.

/*
Group work by
    1) Aina Oluwatimilehin
    2) Kambere Elton Jesse
    3) Medhanie Eyob
    4) Niza
    */
int main()
{
   int mathematics,chemistry,physics;
   float average1,average2,average3,average4,Total_Average;
   //ASSIGNMENTS
   printf("Enter your score in percentage for Assignments. \nMATHS:");
   scanf("%d",&mathematics);
   printf("PHYSICS:");
   scanf("%d",&physics);
   printf("CHEMISTRY:");
   scanf("%d",&chemistry);
   average1=(float)mathematics + (float)chemistry + (float)physics;
   average1= average1/3;
   printf("Average mark for Assignments is %.1f",average1);

   //COURSEWORK
    printf("\nEnter your score in percentage for Coursework. \nMATHS:");
   scanf("%d",&mathematics);
   printf("PHYSICS:");
   scanf("%d",&physics);
   printf("CHEMISTRY:");
   scanf("%d",&chemistry);
   average2=(float)mathematics + (float)chemistry + (float)physics;
   average2= average2/3;
   printf("Average for Coursework is %.1f",average2);

   //MIDTERM
      printf("\nEnter your score in percentage for Midterm. \nMATHS:");
   scanf("%d",&mathematics);
   printf("PHYSICS:");
   scanf("%d",&physics);
   printf("CHEMISTRY:");
   scanf("%d",&chemistry);
   average3=(float)mathematics + (float)chemistry + (float)physics;
   average3= average3/3;
   printf("Average for Midterm is %.1f",average3);

   //ENDOFTERM
      printf("\nEnter your score in percentage for End Of Term. \nMATHS:");
   scanf("%d",&mathematics);
   printf("PHYSICS:");
   scanf("%d",&physics);
   printf("CHEMISTRY:");
   scanf("%d",&chemistry);
   average4=(float)mathematics + (float)chemistry + (float)physics;
   average4= average4/3;
   printf("Average for End Of Term is %.1f",average4);

   Total_Average=(average1 + average2 + average3 +average4)/4;
   printf("\nYour Total Average is %.1f",Total_Average);
    return 0;
}
