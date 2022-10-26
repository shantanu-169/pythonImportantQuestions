#include<stdio.h>
#include<string.h>

int main(){

struct student {
char name[50];
int marks;
float cgpa;
char course[50];
};





struct student s1={"shantanu",69,6.9,"btech"};
struct student s2={"moksh",89,9.9,"btech"};
struct student s3={"prince",67,8.2,"btech"};
struct student s4={"kushal",86,6.2,"btech"};
struct student s5={"lana",84,5.7,"btech"};



printf("marks of s1 is :%d  \n",s1.marks);
printf("marks of s2 is :%d    \n",s2.marks);
printf("marks of s3 is :%d    \n",s3.marks);
printf("marks of s4 is :%d      \n",s4.marks);
printf("marks of s5 is :%d      \n",s5.marks);

printf("cgpa of s1 is :%f    \n",s1.cgpa);
printf("cgpa of s2 is :%f    \n",s2.cgpa);

printf("cgpa of s3 is :%f   \n",s3.cgpa);
printf("cgpa of s4 is :%f    \n",s4.cgpa);
printf("cgpa of s5 is :%f    \n",s5.cgpa);

printf("name of s1 is :%s   \n",s1.name);
printf("name of s2 is :%s   \n",s2.name);
printf("name of s3 is :%s   \n",s3.name);
printf("name of s4 is :%s   \n",s4.name);
printf("name of s5 is :%s   \n",s5.name);

printf("course of s1 is :%s   \n",s1.course);
printf("course of s2 is :%s   \n",s2.course);
printf("course of s3 is :%s   \n",s3.course);
printf("course of s4 is :%s   \n",s4.course);
printf("course of s5 is :%s   \n",s5.course);



return 0;
}




