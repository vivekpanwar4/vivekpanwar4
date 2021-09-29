#include<iostream>
using namespace std;
int main()
{
int a[5][5],n,m,i,j;
cout<<"enter the row size of element";
cin>>m>>endl;
cout<<"enter the column size of element";
cin>>n>>endl;
cout<<"enter elements of the matrix\n";
for(i=0;i<m;++i)
for(j=0;j<n;++j)
cin>>a[i][j]>>endl;
cout<<"matrix is"<<endl;
for(i=0;i<m;++i)
{
for(j=0;j<n;++j)
cout<<a[i][j]<<" ";
cout<<"n";
}
return 0;
}
