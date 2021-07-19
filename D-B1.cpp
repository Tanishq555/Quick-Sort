#include <iostream>
using namespace std;

void swap(int A[], int i, int j){
   int temp=A[i];
   A[i]=A[j];
   A[j]=temp;
}

int partiation(int A[], int l, int r ){
   int pi=A[r];
   int i=l-1;
   for (int j = l; j < r; j++)
   {
    if (A[j]<pi)
    {
      i++;
      swap(A,i,j);
    }
    
   }
   swap(A,i+1,r);
   return i+1;
   
}
 
void QuickSort(int A[], int l, int r){

if(l<r){
int pi;
pi= partiation(A, l ,r);
QuickSort(A,l,pi-1);
QuickSort(A,pi+1,r);
}


}

    
 

int main(){
int n;
cin>>n;
int A[n];
for (int i = 0; i < n; i++)
{
   cin>>A[i];
}

QuickSort(A,0,n);


for (int i = 0; i <5; i++)
{
   cout<<A[i]<<" ";
}

}   
