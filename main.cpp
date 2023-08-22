#include <iostream>
#include <string>

using namespace std;

int main() {
    int size = 5;


    string names[size];



    cout << "Enter " << size << " names:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Enter name " << i + 1 << ": ";
        cin >> names[i];
    }


    // Display the entered names
    cout << "Entered names: "<<endl;
    for (int i = 0; i < size; ++i) {
        cout <<i <<" )" << names[i] << endl;
    }




    cout << endl;

    return 0;
}




