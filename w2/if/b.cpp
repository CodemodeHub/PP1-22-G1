#include <iostream>

using namespace std;

int main(){
    string name;

    cin >> name;

    if(name == "Adil" || name == "Yaslan"){
        cout << "Teacher" << endl;
    }else{
        cout << "Student" << endl;
    }
    return 0;
}