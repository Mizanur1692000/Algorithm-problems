// Bubble sort
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

void swap(int *a, int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}

void bubbleSort(int array[],int n)
{
  for(int i=0; i<n-1; i++)
    {
      for(int j=0; j<n-1-i; j++)
        {
          if(array[j]>array[j+1])
          {
            swap(&array[j],&array[j+1]);
          }
        }
    }
}
void bubbleSort1(int array[],int n)
{
  for(int i=0; i<n-1; i++)
    {
      for(int j=0; j<n-1-i; j++)
        {
          if(array[j]<array[j+1])
          {
            swap(&array[j],&array[j+1]);
          }
        }
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
  cout<<"Array after bubble sort in ascending order: ";
  bubbleSort(array,n);
  print(array,n);
  cout<<"Array after bubble sort in descending order: ";
  bubbleSort1(array,n);
  print(array,n);
  return 0;
}
