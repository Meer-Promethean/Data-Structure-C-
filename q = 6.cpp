#include <iostream>

using namespace std;

void calculateGrade() {


int score1, score2, marks,;
int percentDec;
    cin >>score1>>score2>>score3;
    percentDec = (score1+score2+score3);

    if (percentDec >= 85) {
        cout << "The Course grade is: A";
    }
    else if (percentDec >= 75) {
        cout << "The Course grade is: B";
    }
    else if (percentDec >= 65) {
        cout <<"The Course grade is: C";
    }
    else if (percentDec >= 50) {
        cout <<"The Course grade is: P";
    }
    else {
        cout <<"The Course grade is: F";
    }  
} //end of calculateGrade()
int main() {
    calculateGrade();
    return 0;

}
