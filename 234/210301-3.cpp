#include<iostream>
#include<cmath>
using namespace std;

int mu2(int n) {
    return n*n;
}

int tinhM(int a, int n, int m) {
    if(n == 0) {
        return 1 % m;
    }else{
        if(n % 2 == 0 ) {
            return mu2(pow(a, n/2)) % m; 
        }else{
            return a * (mu2(pow(a, n/2)) % m) % m;
        }
    }
}

int main() {
    int a, n, m;
    cin >> a >> n >> m;
    cout << tinhM(a, n, m);
    return 0;
}
