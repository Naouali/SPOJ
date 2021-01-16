#include <iostream>
using namespace std;

int check_prime(int n)
{
    int i, m=0, flag=0;  
    m=n/2;  
    for(i = 2; i <= m; i++)  
        {  
            if(n % i == 0)  
                {  
                    flag=1;  
                    break;  
                                                              
                 }  
                        
        }  
              if (flag==0)  
              {
                  return 1;
              }  
                return 0;  
                
} 


void prime(int min, int max)
{
    int i;
    for (i = min; i <= max; i++)
    {   
        if (check_prime(i) == 1)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    int cases;
    cin >> cases;
    int min, max;
    while (cases--)
    {
        cin >> min;
        cin >> max;
        prime(min, max);
    }
    return 0;
}
