#include <iostream>
#include"Patient.h"
#include"PatientQueue.h"

int main() {
    PatientQueue hospitalQueue;

    hospitalQueue.enqueue(Patient("Ali", 30, "Flu"));
    hospitalQueue.enqueue(Patient("Sara", 25, "Fever"));

    if (!hospitalQueue.isEmpty()) {
        Patient next = hospitalQueue.peek();
        cout << "Next patient: " << next.name << "\n Age: " << next.age 
             << "\n Condition: " << next.condition << endl;
    }

    hospitalQueue.dequeue();

    cout << "Remaining patients: " << hospitalQueue.getSize() << endl;

    return 0;
}

