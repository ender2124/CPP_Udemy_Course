//Section 6: Variables and Constants
//https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535354#questions

#include <iostream>
#include <climits>
using namespace std;
int main () {
    
    int width;
    int length;
    signed short int peso;
    bool encendido;
    cout << "enter the width of the room" <<endl;
    cin >> width;
    
    cout << "enter the length of the room" <<endl;
    cin >> length;
    
    cout << "area equal to: " << width * length << endl;
    return 0;
}
