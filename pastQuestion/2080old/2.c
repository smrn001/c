#include <stdio.h>

struct Movie
{
    char movie_name[20];
    char gener[20];
    int released_year;
};

void movieInput(struct Movie m[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d  name : ", i + 1);
        scanf("%s", m[i].movie_name);

        printf("Enter %d movie gener : ", i + 1);
        scanf("%s", m[i].gener);

        printf("Enter %d movie released year  : ", i + 1);
        scanf("%d", &m[i].released_year);
    }
}

void movieRelese2020(struct Movie m[], int n)
{
    printf("\nMovie released in 2020 are : \n");
    for (int i = 0; i < n; i++)
    {
        if (m[i].released_year == 2020)
            printf("%s\t", m[i].movie_name);
    }
}

int main()
{
    struct Movie m[2];
    movieInput(m, 2);
    movieRelese2020(m, 2);

    return 0;
}