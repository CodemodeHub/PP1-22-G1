#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int h = n / 3600;
    int m = n % 3600 / 60;
    int s = n % 60;

    printf("%02i:%02i:%02i\n", h, m, s);

    return 0;
}