#include <iostream>
#include <queue>
using namespace std;
class PatientQueue {
private:
    queue <Patient>pq;

public:
    void enqueue(Patient p) {
        pq.push(p);
    }

    void dequeue() {
        if (!pq.empty())
            pq.pop();
        else
            cout << "Queue is empty.\n";
    }

    Patient peek() {
        if (!pq.empty())
            return pq.front();
        else {
            cout << "Queue is empty.\n";
            return Patient(); // return default patient
        }
    }

    bool isEmpty() {
        return pq.empty();
    }

    int getSize() {
        return pq.size();
  }
};


