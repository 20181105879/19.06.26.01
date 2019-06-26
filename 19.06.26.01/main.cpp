#include <iostream>
#include <algorithm>
using namespace std;
long long s[100000000];
int main()
{
    long long i,t,j;
    long long count=0,g=0;
    for(i=0;;i++)
    {
        cin>>t;
        if(t==-1)
        {
            if(i==0)
            {
                cout<<"NULL";
                return 0;
            }
            break;
        }
        else
        {
            //           if(s[t]==0)
            //          {
            s[t]++;
            count++;
            //           }
        }
        
    }
    for(;;i++)
    {
        cin>>t;
        if(t==-1)
        {
            if(i==0)
            {
                cout<<"NULL";
                return 0;
            }
            break;
        }
        else
        {
            //           if(s[t]==0)
            
            s[t]++;
            count++;
            
        }
        
    }
    int k=0;
    i=0;
    if(count==0)
    {
        cout<<"NULL";
    }
    for(j=0;;j++)
    {
        if(s[j]!=0)
        {
            
            for(g=0;g<s[j];g++)
            {
                if(k==0)
                {
                    cout<<j;
                }
                else
                    cout<<" "<<j;
                k=1;
            }
            
            
            i++;
        }
        if(i==count)
        {
            return 0;
        }
    }
    
    
    
    
    
    
    
    
    
    return 0;
}
