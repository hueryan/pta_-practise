#include <iostream>
using namespace std; 
int main()
{
    int a, b, t;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(b == 0 || a % b) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
