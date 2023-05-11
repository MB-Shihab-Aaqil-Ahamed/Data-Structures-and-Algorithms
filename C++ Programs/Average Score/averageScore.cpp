////PLEASE DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.

#include <iostream>
using namespace std;


int main(){   //DO NOT change the 'main()' signature
    
    //Write your code here
    int no_of_assignments;
    float score, sum = 0.0, average;
    bool eligible = false;
    
    cout << "Enter no. of assignments: ";
    cin >> no_of_assignments;
    
    if (no_of_assignments > 10) {
        cout << "No. of assignments must not be more than 10" << endl;
    return 0;
    }

    for (int i = 0; i < no_of_assignments; i++) {
        cout << "Enter the scores: ";
        cin >> score;
        sum += score;
    }

    average = sum / no_of_assignments;

    if (average >= 80.0) {
        eligible = true;
    }

    cout << "The average score is " << average << endl;
    
    if (eligible) {
        cout << "Eligible for projects" << endl;
    } 
    
    else {
    cout << "Not eligible for projects" << endl;
    }
    
    return 0;

}
