#include<stdio.h>
#include<stdbool.h>
int bubble_sort(int a[100],int n) //a is the array and n is the no of elements in the array
{
    int temp=0,i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if (a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int insertion_sort(int a[100],int n)
{
    int temp=0;
    int i,j;
    for(i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while((temp<a[j]&&(j>=0))){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
int selection_sort(int a[100],int n)
{
    int k,min,i,j,swap;
    for(i = 0; i < n - 1; i++)
{
min=i;
for(j = i + 1; j < n; j++)
{
if(a[min] > a[j])
min=j;
}
if(min != i)
{
swap=a[i];
a[i]=a[min];
a[min]=swap;
}
}
}
int linear_search(int a[100],int n,int key)
{
    int i;
    for(i=0;i<n;i++){
        if(key==a[i])
        {
            printf("element is found at %d index",i);
            break;
        }
    }
    if (i==n){
        printf("given element not found");
    }
}
int binary_search(int a[100],int n,int key)
{
    int first = 0;
    int last = n - 1;
    int middle = (first+last)/2;

  while (first <= last) {
    if (a[middle] < key)
      first = middle + 1;
    else if (a[middle] == key) {
      printf("element found at %d index .\n", middle);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", key);

  return 0;
}
int main()
{
    int num,num1,num2,i;

    printf("enter the number of elements to be entered in the array for bubble sort: \n"); //bubble sorting
    scanf("%d",&num);
    int arr[num];
    printf("enter the elements: \n");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    printf("After bubble sorting the array is: \n");
    bubble_sort(arr,num);
    for(i=0;i<num;i++){
        printf("%d\n",arr[i]);
    }


    printf("enter the number of elements to be entered in the array for insertion sort: "); //insertion sorting
    scanf("%d",&num1);
    int arr2[num1];
    printf("enter the elements: \n");
    for(i=0;i<num1;i++){
        scanf("%d",&arr2[i]);
    }
    printf("After insertion sorting the array is: \n");
    insertion_sort(arr2,num1);
    for(i=0;i<num1;i++){
        printf("%d\n",arr2[i]);
    }

    printf("enter the number of elements to be entered in the array for selection sort: \n"); //selection sorting
    scanf("%d",&num2);
    int arr3[num2];
    printf("enter the elements: \n");
    for(i=0;i<num2;i++){
        scanf("%d",&arr3[i]);
    }
    printf("After selection sorting the array is: \n");
    selection_sort(arr3,num2);
    for(i=0;i<num2;i++){
        printf("%d\n",arr3[i]);
    }

    printf("enter a sorted array for binary search\n"); //binary search
    printf("enter the number of elements \n");
    int num5;
    scanf("%d",&num5);
    printf("enter the  elements \n");
    int arr5[num5];
    for(i=0;i<num5;i++){
        scanf("%d",&arr5[i]);
    }
    printf("enter the element to be searched: \n");
    int num6;
    scanf("%d",&num6);
    binary_search(arr5,num5,num6);



    printf("enter the number of elements for linear search\n"); //linear search
    int num7;
    scanf("%d",&num7);
    printf("enter the  elements \n");
    int arr7[num7];
    for(i=0;i<num7;i++){
        scanf("%d",&arr7[i]);
    }
    printf("enter the element to be searched: \n");
    int num8;
    scanf("%d",&num8);
    linear_search(arr7,num7,num8);
}
