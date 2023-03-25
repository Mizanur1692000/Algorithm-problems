// Hash Table
#include<iostream>
using namespace std;

#define X 10

int arr[X];


void init()
{
    int i;
    for(i = 0; i < X; i++)
        arr[i] = -1;
}

void insert(int value)
{
    int key = value % X;

    if(arr[key] == -1)
    {
        arr[key] = value;
      cout<<value<<" inserted at a["<<key<<"]";
        }
    else
    {
      cout<<"Collision : arr["<<key<<"] has element "<<arr[key]<<" already";
      cout<<" Unable to insert "<<value<<endl;
    }
}

void del(int value)
{
    int key = value % X;
    if(arr[key] == value)
        arr[key] = -1;
    else
      cout<<value<<" not present in the hast table"<<endl;
}

void search(int value)
{
    int key = value % X;
    if(arr[key] == value)
      cout<<"Search Found"<<endl;
    else
      cout<<"Search Not Found"<<endl;
}

void print()
{
    int i;
    for(i = 0; i < X; i++)
      cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
}

int main()
{
    init();
  int n,m,k,p,q,r;
  cout<<"Enter the total number: ";
  cin>>n;
  cout<<"Enter the numbers: ";
  for(int i=0; i<n; i++)
    {
      cout<<endl;
      cin>>m;
      cout<<" ";
      insert(m);
    }
    cout<<"Hash table"<<endl;
    print();
    cout<<endl;
  cout<<"Enter how many number do you want to delete: ";
  cin>>k;
  for(int i=0; i<k; i++)
    {
      cout<<"Enter the number to delete: ";
      cin>>p;
      del(p);
    }

    cout<<"After the deletion hash table"<<endl;
    print();
    cout<<endl;
    cout<<"Enter how many numbers do you want to search: ";
    cin>>q;
    for(int j=0; j<q; j++)
      {
        cout<<"Enter the value to search: ";
        cin>>r;
        search(r);
      }
    return 0;
}



