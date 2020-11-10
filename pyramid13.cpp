#include <iostream>

int main()
{
      using namespace std;
      cout<<"Enter tne number of rows = ";
      int n,k=0,l=0;
      cin>>n;
      for(int i=1;i<=n;i++)
      {
            for(int j=i;j<=n;j++)
                  cout<<" ";
            while(k !=(2*i)-1)
            {
                  cout<<"*";
                  k++;
            }
            k=0;
           
             for(int j=i;j<=n;j++)
                  cout<<" ";
            cout<<endl;
      }
      for(int i=n;i>=1;i--)
      {
            for(int j=n;j>=i;j--)
                  cout<<" ";
            while(l !=(i*2)-1)
            {
                  cout<<" ";
                  l++;
            }
            l=0;
            for(int s=n;s>=i;s--)
                  cout<<"*";
            cout<<endl;
      }
      return 0;
}
