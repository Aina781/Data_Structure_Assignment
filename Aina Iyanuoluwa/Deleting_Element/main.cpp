#include <iostream>
/* This assignment was done by Group members
1) Medhanie Eyob
2)Kambere Elton Blessing
3) Niza
4) Vrajni Dilip Halai
5) Aina Iyanuoluwa Oluwatimilehin
*/
using namespace std;

int print_array(int arr[], int size);
int delete_element(int arr[], int *size, int index);

int main()
{
     int arr[]= {13,25,12,53};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Array before deletion\n");
    print_array(arr,size);

    //delete first element
    delete_element(arr,&size,0);
    printf("\n\nArray after deleting first element\n");
    print_array(arr,size);


    //delete middle element

    delete_element(arr,&size, size/2);
    printf("\n\nArray after deleting middle element\n");
    print_array(arr,size);


    //delete last element
    delete_element(arr,&size,3);
    printf("\n\nArray after deleting last element\n");
    print_array(arr,size);

    return 0;
}

//function to delete element
int delete_element(int arr[],int *size, int index){
    int i;
    for(i=index;i<= *size-1 ;i++)
    {
        arr[i] = arr [i+1];
    } (*size)--;
}

//function to print array
int print_array(int arr[], int size){
    int i;
    for (i=0; i<size;i++)
    {
        printf("%d\t", arr[i]);
    }
}



