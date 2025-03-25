#include <iostream>

/* This assignment was done by Group members
1) Medhanie Eyob
2)Kambere Elton Blessing
3) Niza
4) Vrajni Dilip Halai
5) Aina Iyanuoluwa Oluwatimilehin
*/

using namespace std;

void merge (int a[],int m, int b[], int n, int r[]);


int main()
{
    int a[] = {2,4,6,8};
    int b[] = {1,3,5,7};
    int r[8];

    printf("Array 1\n");
    for (int j=0;j<4;j++)
    {
        printf("%d\t",a[j]);
    }

    printf("\nArray 2\n");
    for(int k=0;k<4;k++)
    {
        printf("%d\t",b[k]);
    }

    printf("\nSorted Merged array\n");
    merge(a,4,b,4,r);
    for(int i=0;i<8;i++)
    {
        printf("%d\t",r[i]);
    }

    return 0;
}

void merge (int a[], int m, int b[], int n, int r[])
{
    int i=0,j=0,k=0;

    while (i<m && j<n)
    {
        if(a[i]< b[j])
        {
            r[k]=a[i];
            k++;
            i++;
        }
        else
        {
            r[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<m)
    {
        r[k]=a[i];
        k++;
        i++;
    }

    while(j<n)
    {
        r[k]=b[j];
        k++;
        j++;
    }
}
