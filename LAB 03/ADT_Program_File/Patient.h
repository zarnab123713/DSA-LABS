#include <iostream>
#include <queue>
using namespace std;

class Patient {
public:
    string name;
    int age;
    string condition;

    Patient(string n, int a, string c) {
        name = n;
        age = a;
        condition = c;
    }
    
    // Default constructor for queue compatibility
    Patient() {
        name = "";
        age = 0;
        condition = "";
    }
};


