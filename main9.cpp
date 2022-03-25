#include <iostream>
using namespace std;

int maxofffour(int a,int b,int c,int d){
    if (a>b && a>c && a>d) {
     return a;
    }
    else if (b>a && b>c && b>d) {
      return d;
    }
     else if (c>a &&c>b && c>d) {
      return c;
    }
     else if (d>a && d>b && d>c) {
     return d;
    }
    else {
     cout<<"ERROR!";
    }
    return 0;
}

int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int ans = maxofffour(a, b, c, d);
    cout<<"The max value is "<<ans;
    
    return 0;
}