#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    cin>>n;
    cout<<n<<endl;

    while ( n != 1 )
    {
        if ( n % 2 == 0 ) //even
        {
            n = n / 2 ;
            cout << n << endl;
        }
        else if ( n % 2 == 1 )//odd
        {
            n = 3 * n + 1 ;
            cout<<n<<endl;
        }
    }

    return 0;
}
