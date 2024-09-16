#include <iostream>
#include <string>
#include <vector>

using namespace std;

//enums

// enum  = a user-defined data type that consists
//         of paired named-integer constants
//         GREAT if you have a set of potential options

enum weightedPlates{white = 5, green = 10, yellow = 15, blue = 20, red = 25 };
int main()
{


    int weight;
    cout << "Please enter a weight: ";
    cin >> weight;

    switch (weight)
    {
    case white:
        cout << "You have a white plate!" << endl;
        break;
    case green:
        cout << "You have a yellow plate!" << endl;
        break;
     case yellow:
        cout << "You have a green plate!" << endl;
        break;
     case blue:
        cout << "You have a blue plate!" << endl;
        break;
     case red:
        cout << "You have a red plate!" << endl;
        break;   
    
    default:
        break;
    }








    return 0;
}