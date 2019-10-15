#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 2500;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (size_t p = 2; p * p <= n; p++)
    {
        if(prime[p])
        {
            for(size_t i = p * p; i<= n; i += p)
                prime[i] = false;
        }
    }

    for (int p=2; p<=n; p++) 
       if (prime[p]) 
          cout << p << " ";

    return 0;
    
}