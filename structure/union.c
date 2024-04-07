#include <stdio.h>
union student
{
int roll;;
float marks;
} st;

int main()
{
st.roll=455;
printf("\n Roll=%d",st.roll);
st.marks=78;
printf("\n Marks=%f",st.marks);
return 0;
}