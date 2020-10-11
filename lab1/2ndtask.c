#include<stdio.h>
struct students{
  char name[20];
  char address[20];
  int roll,marks;
}s[1];
int main(){
  int i;
  printf("Enter information of students:\n");
   for (i = 0; i < 5; i++) {
     printf("Enter first name: ");
     scanf("%s",s[i].name);
      printf("For roll number:");
      scanf("%d",&s[i].roll);
      printf("Enter marks:");
      scanf("%d",&s[i].marks);
       printf("Enter address: ");
       scanf("%s",s[i].address);
   }
   printf("Displaying Information:\n\n");
      for (i = 0; i < 5; i++) {
          printf("First name:%d ",s[i].name);
          printf("Roll number: %d", s[i].roll);
          printf("Marks: %d", s[i].marks);
          printf("address:%d",s[i].address);
          printf("\n");
      }

}
