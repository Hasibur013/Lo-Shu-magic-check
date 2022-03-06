/***

    Name: Md. Hasibur Rahman
    Id: 212902012
    Department of CSE
    Green University of Bangladesh

***/

#include<stdio.h>

int magic_matrix(int a[10][10],int r,int c); // prototype function


int main()
{
    int a[10][10],r,c,i,j,magic_number,check;

    printf("Enter the desire grid dimension= ");
    scanf("%d%d",&r,&c);

    magic_number=r*(r*r+1)/2;

    printf("Enter all element of matrix: ");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    check=magic_matrix(a,r,c);

    if(check==1)
    {
        printf("This is Lo Shu Magic Square\n");
        printf("And the magic number is %d\n",magic_number);
        printf("\n\nThank You!\n");
    }
    else
        printf("This is not Lo Shu Magic Square\n");


    return 0;
}

int magic_matrix(int a[10][10],int r,int c)
{
    a[r][c];

    int n=r=c;

    int i=0,j=0;

    int sumd1 = 0, sumd2=0;

    for (i = 0; i < n; i++)
    {
        sumd1 += a[i][i];
        sumd2 += a[i][n-1-i];
    }

    if(sumd1!=sumd2)
        return 2;


    for (i = 0; i < n; i++)
    {

        int rowSum = 0, colSum = 0;
        for (j = 0; j < n; j++)
        {
            rowSum += a[i][j];
            colSum += a[j][i];
        }
        if (rowSum != colSum || colSum != sumd1)
            return 2;
    }

    return 1;
}

