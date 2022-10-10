#include <iostream>

using namespace std;

int main(){
    string year = "1771";

    int x = stoi(year);
    cout << year + "20" << endl;
    cout << x + 10 << endl;
    
    string h = "hello";

    h.replace(0, 5, "Yaslan");
    cout << h << endl;

    h.pop_back();

    cout << h << endl;

    h.insert(2, "n");

    cout << h << endl;

    return 0;
}