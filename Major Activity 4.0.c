#include <stdio.h>
#include <stdlib.h>
int main()
{
   char name[50];
   int id,sci,math,eng,i, num, total, average;

   printf("Enter number of students:");
   scanf("%d", &num);

   FILE *fptr;
   fptr = (fopen("C:\\student.txt", "w"));
   if(fptr == NULL)
   {
       printf("Error!");
       exit(1);
   }
    

   for(i = 0; i < num; ++i)
   {
      printf("\nStudent%d\n",i+1);
      printf("Student name:");
      scanf("%s", name);

      printf("Student ID Number: ");
      scanf("%d", &id);
      
      printf("Math grade:");
      scanf("%d",&math);
     
      printf("Science grade:");
      scanf("%d",&sci);
      
      printf("English grade:");
      scanf("%d",&eng);
      
      total= math+sci+eng;
      average=total/3;
      
      fprintf(fptr,"\nStudent number %d\nStudent name: %s \n Student ID Number:%d \n Math grade: %d \n Science grade: %d \n English grade:%d \n Total grade:%d \n Total average:%d\n\n",i+1, name, id,math,sci,eng,total, average);
   }

   fclose(fptr);
   return 0;
}