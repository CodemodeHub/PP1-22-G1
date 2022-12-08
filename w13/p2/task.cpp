#include <bits/stdc++.h>

using namespace std;

// sort by goals, if equal, by assists, print name, goals and assists
// sort by rating, if equal, by age (higher rate, less age) print name age and rating with 2 digits after point

struct Player {
    string name;
    int age;
    int goals;
    int assists;

    float getRate(){
        return (goals + assists) / 2.0;
    }
};

bool comp1(Player &a, Player &b){
    if(a.goals == b.goals){
        return a.assists > b.assists;
    }
    return a.goals > b.goals;
}

bool comp2(Player &a, Player &b){
    if(a.getRate() == b.getRate()){
        return a.age < b.age;
    }
    return a.getRate() > b.getRate();
}


int main(){
    freopen("input.txt", "r", stdin);

    int n;
    cin >> n;
    vector<Player> v;

    for(int i = 0; i < n; i++){
        string name;
        int age, goals, assists;

        cin >> name >> age >> goals >> assists;
        Player temp = {name, age, goals, assists};
        
        v.push_back(temp);
    }
    
    sort(v.begin(), v.end(), comp1);

    for(int i = 0; i < v.size(); i++){
        printf("%s %i %i\n", v[i].name.c_str(), v[i].goals, v[i].assists);
    }


    sort(v.begin(), v.end(), comp2);
    cout << "-------\n";
    for(int i = 0; i < v.size(); i++){
        printf("%s %i %.2f\n", v[i].name.c_str(), v[i].age, v[i].getRate());
    }
    return 0;
}