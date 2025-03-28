#include<stdio.h>
int main()
{
  char stud_id[20],roll_no[5],name[41],address[51],gender,course_name[3],email[51];
  int age;
  float marks;
  
  printf("enter your id:\t");
  scanf("%s",stud_id);
  fflush(stdin);
  
  printf("enter your roll no:\t");
  scanf("%s",roll_no);
  fflush(stdin);
  
  printf("enter your name:\t");
  gets(name);
  fflush(stdin);

  printf("enter your address:\t");
  scanf("%[^\n]%*c",address);
  fflush(stdin);
  
  printf("enter your gender(M/F):\t");
  scanf("%c",&gender);
  fflush(stdin);
  
  printf("enter your cousre name:\t");
  gets(course_name);
  fflush(stdin);
  
  printf("enter your email:\t");
  scanf("%s",email);
  fflush(stdin);
  
  printf("ID=%s Roll no=%s Name=%s \nAddress=%s Gender=%c your course=%s email=%s" ,stud_id,roll_no,name,address,gender,course_name,email);
  return 0;
  
	
}
