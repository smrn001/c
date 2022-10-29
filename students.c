#include <stdio.h>
int main(){
    int n,i;
    struct student
    {
        char name[20];
        int roll;
        float mark;
    }s[5];
    FILE*p;
    printf("Input the no. of students");
    scanf("%d",&n);
    p=fopen("abc.txt","a");
    for(i=0;i<n;i++){
        printf("Input name rollno and percentage ");
        scanf("%s %d %f",s[i].name,&s[i].roll,&s[i].mark);
        if(s[i].mark>=75){
            fprintf(p,"%s%d%f",s[i].name,s[i].roll,s[i].mark);
        }
    }
    fclose(p);
    
    return 0;
}