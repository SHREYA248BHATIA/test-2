#include<stdio.h>
int main()
{
    int i,j,arr1[3][3],arr2[3][3],arr3[3][3];
    printf("enter first array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("enter second array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("Sum of two Arrays is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr3[i][j]);
        }
    printf("\n");
    }
}
