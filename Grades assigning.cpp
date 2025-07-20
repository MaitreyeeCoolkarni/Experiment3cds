#include <iostream>
using namespace std;

int main() {
    int physics, maths, biology;

    
    cout << "Enter marks for math: ";
    cin >> maths;

    cout << "Enter marks for physics: ";
    cin >> physics;

    cout << "Enter marks for biology: ";
    cin >> biology;

    // Calculate average
    int avg = (physics + maths + biology) / 3;

    // Output the average
    cout << "Average marks: " << avg << endl;

    // Determine grade based on average
    if (avg > 80) {
        cout << "O grade" << endl;
    }
    else if (avg > 70) { 
        cout << "A+ grade" << endl;
    }
    else if (avg > 60) { 
        cout << "A grade" << endl;
    }
    else if(avg>50){
        cout<<"B grade"<<endl;
    }
    else if(avg>40){
        cout<<"C grade"<<endl;
    }
    else {
        cout << "Fail" << endl;
    }

    return 0;
    }

