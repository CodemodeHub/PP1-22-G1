#include <iostream>

// Pair

using namespace std;

int main(){
    pair<string, string> fullName;

    // cin >> fullName.first >> fullName.second;

    string firstName, secondName;

    cin >> firstName >> secondName;

    fullName = make_pair(firstName, secondName);

    cout << fullName.first << " " << fullName.second << endl;

    return 0;
}