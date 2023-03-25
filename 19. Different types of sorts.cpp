/*
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
*/

/*
// Insertion sort
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

void insertionSort(int array[],int n)
{
  for(int i=1; i<n; i++)
    {
      int key=array[i];
      int j=i-1;
      {
        while(j>=0 && array[j]>key)
          {
            array[j+1]=array[j];
            j--;
          }
      }
      array[j+1]=key;
    }
}
void insertionSort1(int array[],int n)
{
  for(int i=1; i<n; i++)
    {
      int key=array[i];
      int j=i-1;
      {
        while(j>=0 && array[j]<key)
          {
            array[j+1]=array[j];
            j--;
          }
      }
      array[j+1]=key;
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
  cout<<"Array list after insertion sort in ascending order: ";
  insertionSort(array,n);
  print(array,n);
  cout<<"Array list after insertion sort in descending order: ";
  insertionSort1(array,n);
  print(array,n);
  return 0;
}
*/

/*
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
*/

/*
// Merge sort
#include<iostream>
using namespace std;

void merge(int array[],int p, int q, int r)
{
  int n1,n2,i,j,k;
  n1=q-p+1;
  n2=r-q;
  int L[n1], R[n2];

  for(int i=0; i<n1; i++)
    {
      L[i]=array[p+i];
    }
  for(int i=0; i<n2; i++)
    {
      R[i]=array[q+i+1];
    }
  i=0;
  j=0;
  k=p;
  while(i<n1 && j<n2)
    {
      if(L[i]<=R[j])
      {
        array[k]=L[i];
        i++;
      }
      else
      {
        array[k]=R[j];
        j++;
      }
      k++;
    }
  while(i<n1)
    {
      array[k]=L[i];
      i++;
      k++;
    }
}
void merge1(int array[],int p, int q, int r)
{
  int n1,n2,i,j,k;
  n1=q-p+1;
  n2=r-q;
  int L[n1], R[n2];

  for(int i=0; i<n1; i++)
    {
      L[i]=array[p+i];
    }
  for(int i=0; i<n2; i++)
    {
      R[i]=array[q+i+1];
    }
  i=0;
  j=0;
  k=p;
  while(i<n1 && j<n2)
    {
      if(L[i]>=R[j])
      {
        array[k]=L[i];
        i++;
      }
      else
      {
        array[k]=R[j];
        j++;
      }
      k++;
    }
  while(i<n1)
    {
      array[k]=L[i];
      i++;
      k++;
    }
}

void mergeSort(int array[],int p,int q)
{
  if(p<q)
  {
    int mid=(p+(q-1))/2;
    mergeSort(array,p,mid);
    mergeSort(array,mid+1,q);
    merge(array,p,mid,q);
  }
}
void mergeSort1(int array[],int p,int q)
{
  if(p<q)
  {
    int mid=(p+(q-1))/2;
    mergeSort1(array,p,mid);
    mergeSort1(array,mid+1,q);
    merge1(array,p,mid,q);
  }
}

void print(int array[],int n)
{
  for(int i=0; i<n; i++)
    {
      cout<<array[i]<<" ";
    }
  cout<<endl;
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
  cout << "Array after merging in ascending order: ";
  mergeSort(array,0,n-1);
  print(array,n);
  cout << "Array after merging in descending order: ";
  mergeSort1(array,0,n-1);
  print(array,n);
return 0;
}
*/

