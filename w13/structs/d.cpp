#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
    string id;
    string firstName;
    string lastName;
    int age;
};

bool myComparatorByAge(Student &a, Student &b){
    return a.age < b.age;
}

bool myComparatorByAge2(Student &a, Student &b){
    if(a.age == b.age){
        return a.firstName < b.firstName;
    }
    return a.age < b.age;
}

void printVector(vector<Student> students){
    for(int i = 0; i < students.size(); i++){
        printf("%s %s's ID is %s and age is %i\n", students[i].firstName.c_str(), students[i].lastName.c_str(), students[i].id.c_str(), students[i].age);
    }
}


int main(){
    freopen("input.txt", "r", stdin);

    int n;
    cin >> n;

    vector<Student> students;
    
    for(int i = 0; i < n; i++){
        string id;
        string firstName;
        string lastName;
        int age;
        cin >> id >> firstName >> lastName >> age;
        Student temp = {id, firstName, lastName, age};
        students.push_back(temp);
    }

    sort(students.begin(), students.end(), myComparatorByAge);

    printVector(students);
    cout << "-------------\n";
    sort(students.begin(), students.end(), myComparatorByAge2);

    printVector(students);
    return 0;
}