#include <stdio.h>
#include <stdlib.h>

int main()
{
   int id;
   char title[20];
   char author[100];
   int year;
   FILE *fptr;

   fptr = fopen("program.txt","wb");

   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }

    printf("Enter id: ");
    scanf("%d",&id);
    printf("\nEnter title of the book:");
    scanf("%s", title);
    printf("\nEnter author name of the book:");
    scanf("%s", author);
    printf("\nEnter year of publications:");
    scanf("%d",&year);



   fprintf(fptr,"%d",id);
   fprintf(fptr,"%s",title);
   fprintf(fptr,"%s",author);
   fprintf(fptr,"%d",year);
   fclose(fptr);

   return 0;
}
