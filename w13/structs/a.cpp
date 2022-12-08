#include <bits/stdc++.h>

using namespace std;

struct Machina {
    int wheels;
    string model;
    int speed;

    float getTime(int distance){
        return distance / float(speed);
    }
};

float getTimeOfCar(int speed, int distance){
    return distance / speed;
}


int main(){
    Machina audi;
    audi.wheels = 4;
    audi.model = "a6";
    audi.speed = 250;

    Machina bmw = {4, "f90", 330};

    cout << "Speed of bmw: " <<  bmw.speed << endl;

    printf("We have a car which models is %s and speed is %d\n", audi.model.c_str(), audi.speed);

    float time_of_bmw = bmw.getTime(2000);

    // float secondTime = getTimeOfCar(bmw.speed, 2000);

    // cout << "Time of bmw for distance: " << time_of_bmw << endl;
    printf("Time for %s for distance: %.02f\n", bmw.model.c_str(), time_of_bmw);
    return 0;
}