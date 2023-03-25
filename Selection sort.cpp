// Selection sort
#include<iostream>
using namespace std;

void print(int array[],int n)
{
  for(int i=0; i<n; i++)
    {
      cout<<array[i]<<" ";
    }
  cout<<endl;
}
void swap(int *a,int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}

void selectionSort(int array[],int n)
{
  int i,j,min;
  for(i=0; i<n-1; i++)
    {
      min=i;
      for(j=i+1; j<n; j++)
        {
          if(array[j]<array[min])
          {
            min=j;
          }
        }
      swap(&array[min],&array[i]);
    }
}

void selectionSort1(int array[],int n)
{
  int i,j,min;
  for(i=0; i<n-1; i++)
    {
      min=i;
      for(j=i+1; j<n; j++)
        {
          if(array[j]>array[min])
          {
            min=j;
          }
        }
      swap(&array[min],&array[i]);
    }
}

int main()
{
  int n;
  cout<<"Enter how many elements do you want to sort: ";
  cin>>n;
  int array[n];
  cout<<"Enter the "<<n<<" elements: ";
  for(int i=0; i<n; i++)
    {
      cin>>array[i];
    }
  cout<<"Array before sorting: ";
  print(array,n);
  cout<<"Array after sorting in ascending order: ";
  selectionSort(array,n);
  print(array,n);
  cout<<"Array after sorting in descending order: ";
  selectionSort1(array,n);
  print(array,n);
  return 0;
}
