// Merge sort
#include<iostream>
using namespace std;

void print(int A[],int n)
{
  for(int i=0; i<n; i++)
    {
      cout<<A[i]<<" ";
    }
  cout<<endl;
}
void merge(int A[],int p, int q, int r)
{
  int n1,n2,i,j,k;
  n1=q-p+1;
  n2=r-q;
  int L[n1], R[n2];

  for(int i=0; i<n1; i++)
    {
      L[i]=A[p+i];
    }
  for(int i=0; i<n2; i++)
    {
      R[i]=A[q+i+1];
    }
  i=0;
  j=0;
  k=p;
  while(i<n1 && j<n2)
    {
      if(L[i]<=R[j])
      {
        A[k]=L[i];
        i++;
      }
      else
      {
        A[k]=R[j];
        j++;
      }
      k++;
    }
  while(i<n1)
    {
      A[k]=L[i];
      i++;
      k++;
    }
}
void merge1(int A[],int p, int q, int r)
{
  int n1,n2,i,j,k;
  n1=q-p+1;
  n2=r-q;
  int L[n1], R[n2];

  for(int i=0; i<n1; i++)
    {
      L[i]=A[p+i];
    }
  for(int i=0; i<n2; i++)
    {
      R[i]=A[q+i+1];
    }
  i=0;
  j=0;
  k=p;
  while(i<n1 && j<n2)
    {
      if(L[i]>=R[j])
      {
        A[k]=L[i];
        i++;
      }
      else
      {
        A[k]=R[j];
        j++;
      }
      k++;
    }
  while(i<n1)
    {
      A[k]=L[i];
      i++;
      k++;
    }
}
void mergeSort(int A[],int p,int q)
{
  if(p<q)
  {
    int mid=(p+(q-1))/2;
    mergeSort(A,p,mid);
    mergeSort(A,mid+1,q);
    merge(A,p,mid,q);
  }
}
void mergeSort1(int A[],int p,int q)
{
  if(p<q)
  {
    int mid=(p+(q-1))/2;
    mergeSort1(A,p,mid);
    mergeSort1(A,mid+1,q);
    merge1(A,p,mid,q);
  }
}
int main()
{
  int N;
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
  cout << "Array after merging in ascending order: ";
  mergeSort(A,0,N-1);
  print(A,N);
  cout << "Array after merging in descending order: ";
  mergeSort1(A,0,N-1);
  print(A,N);
return 0;
}
