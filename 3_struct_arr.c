#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[20];
    char branch[20];
    float cgpa;
    
};
int student_count()
{
    int n;
    printf("enter number of students:\n");
    scanf("%d",&n);
    return n;
}
void input_data(struct student st[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("enter the student %d name,branch and cgpa\n",i+1);
        scanf("%s %s %f",st[i].name,st[i].branch,&st[i].cgpa);
    }

}
int main()
{
    int n;
    n=student_count();
    struct student st[n];
    input_data(st,n);

    printf("name\tbranch\tcgpa\n");
    for(int i=0;i<n;i++)
    {
        printf("%s\t%s\t%.2f\n",st[i].name,st[i].branch,st[i].cgpa);

    }


    
    return 0;
}

//
enter number of students:
2
enter the student 1 name,branch and cgpa
a
eee
6.5
enter the student 2 name,branch and cgpa
b
ece
6.4
name    branch  cgpa
a       eee     6.50
b       ece     6.40
