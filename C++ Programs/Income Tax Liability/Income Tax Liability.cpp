//PLEASE DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.

#include <iostream>
using namespace std;


int main(){   //DO NOT change the 'main()' signature
    
    //Write your code here
    int num_sources;
    cout << "Enter the no. of income sources: ";
    cin >> num_sources;
    
    int income[num_sources];
    cout << "Enter the income from various sources:\n";
    for (int i = 0; i < num_sources; i++) {
        cin >> income[i];
    }
    
    int taxable_income = 0;
    for (int i = 0; i < num_sources; i++) {
        if (income[i] > 9950) {
            taxable_income++;
        }
    }
    
    if (taxable_income > 0) {
        cout << "No. of taxable income(s): " << taxable_income << endl;
    } 
    
    else {
        cout << "Not liable to pay income tax" << endl;
    }
    return 0;
}
