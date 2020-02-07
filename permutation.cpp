#include <iostream>
using namespace std;
void swap(char a[],int f,int l)
{
    int temp=a[f];
    a[f]=a[l];
   a[l]=temp;
}
int k=0;
void permutation(char a[],int first,int last)
{
    if(first==last)
        cout<<++k<<" "<<a<<endl;
    else
    {
        for(int i=first;i<=last;i++)
        {
            swap(a,first,i);
            permutation(a,first+1,last);
            swap(a,first,i);
        }
    }
}
int main()
{
    int num;
    cout<<"Enter the number of characters :\n";
    cin>>num;
    char a[num];
    for(int i=0;i<num;i++)
        a[i]='a'+i;
    permutation(a,0,num-1);
}