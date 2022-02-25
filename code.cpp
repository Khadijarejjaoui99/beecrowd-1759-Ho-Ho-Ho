// beecrowd 1759 Ho Ho Ho
#include <iostream>
using namespace std;
 
int main() {
    int number;
    cin >> number;
    if(number > 0){
        for(int i = 0; i < number-1; i++ ){
                cout << "Ho" << " ";
            }
            cout<< "Ho!" <<endl;
    }
    
    system("pause");
    return 0;
}