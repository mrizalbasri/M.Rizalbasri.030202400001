#include <iostream>
using namespace std;

int main() {
int matrix[3][3];

  cout << "enter the element of the 3x3 matrix: "<< endl;
  for(int i= 0; i < 3 ; i++){
    for (int j = 0; j< 3 ; j++){
        cout << "element ["<< i <<"]["<< j <<"]: ";
        cin >> matrix[i][j];
    }
  }


cout << "\n the 3x3 matris is: "<< endl;
    for (int i =0; i< 3 ; i++){
         for (int j =0; j< 3 ; j++){


        cout << matrix[i][j]<< " ";
    }
    cout << endl;
}
return 0;
}
