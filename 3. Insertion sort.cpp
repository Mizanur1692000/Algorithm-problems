// Insertion sort
#include<iostream>
using namespace std;

void print(int A[],int N)
{
  for(int i=0; i<N; i++)
    {
      cout<<A[i]<<" ";
    }
  cout<<endl;
}

void insertionSort(int A[],int N)
{
  for(int i=1; i<N; i++)
    {
      int key=A[i];
      int j=i-1;
      {
        while(j>=0 && A[j]>key)
          {
            A[j+1]=A[j];
            j--;
          }
      }
      A[j+1]=key;
    }
}
void insertionSort1(int A[],int N)
{
  for(int i=1; i<N; i++)
    {
      int key=A[i];
      int j=i-1;
      {
        while(j>=0 && A[j]<key)
          {
            A[j+1]=A[j];
            j--;
          }
      }
      A[j+1]=key;
    }
}

void search(int A[],int N, int value)
{
  for(int i=0; i<N; i++)
    {
      if(A[i]==value)
      {
        cout<<A[i]<<" is present in the array.";
        return;
      }
    }
  cout<<"Value is not present in the array.";
}

int main()
{
  int N,n;
  cout<<"Enter how many elements do you want to sort: ";
  cin>>N;
  int A[N];
  cout<<"Enter the "<<N<<" elements: ";
  for(int i=0; i<N; i++)
    {
      cin>>A[i];
    }
  cout<<"Array before sorting: ";
  print(A,N);
  cout<<"Array list after insertion sort in ascending order: ";
  insertionSort(A,N);
  print(A,N);
  cout<<"Array list after insertion sort in descending order: ";
  insertionSort1(A,N);
  print(A,N);
  cout<<"Enter the value to search: ";
  cin>>n;
  search(A,N,n);
  return 0;
}
