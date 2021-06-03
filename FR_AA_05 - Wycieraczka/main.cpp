#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int w = 0,a,r,x,y,n;
    cin >> a >> r >> n;
    
    for(int i = 0;i < n;i++)
    {
        cin >> x >> y;
        if(sqrt(pow(a - x,2) + pow(y,2)) > r)
            w++;
    }
    cout << w;
    
    return 0;
}
