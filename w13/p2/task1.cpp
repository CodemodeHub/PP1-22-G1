#include <bits/stdc++.h>

using namespace std;

// sort by goals, if equal, by assists, print name, goals and assists
// sort by rating, if equal, by age (higher rate, less age) print name age and rating with 2 digits after point


// 7
// Messi 34 13 7
// Ronaldo 37 12 8
// Yaslan 18 30 2
// Alikhan 19 3 24
// Kairosh 30 25 25
// Iniesta 40 30 40
// Neymar 33 25 17

struct Player {
    string name;
    int age;
    int goals;
    int assists;
    
    float getRate(){
        return (goals + assists) / 2.0;
    }
};



int main(){
    
    return 0;
}

// ANSWER
// Iniesta 30 40
// Yaslan 30 2
// Kairosh 25 25
// Neymar 25 17
// Messi 13 7
// Ronaldo 12 8
// Alikhan 3 24
// -------
// Iniesta 40 35.00
// Kairosh 30 25.00
// Neymar 33 21.00
// Yaslan 18 16.00
// Alikhan 19 13.50
// Messi 34 10.00
// Ronaldo 37 10.00