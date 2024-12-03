#include <iostream>
using namespace std;

int main() {
int matrix1[4][4];
int matrix2[4][4];
int sumMatrix[4][4];

  cout << "enter the element of the 4x4 matrix1"<< endl;
  for(int i= 0; i < 4 ; i++){
    for (int j = 0; j< 4 ; j++){
        cout << "element ["<< i <<"]["<< j <<"]: ";
        cin >> matrix1[i][j];
    }
  }

  cout << "enter the element of the 4x4 matrix2: "<< endl;
  for(int i= 0; i < 4 ; i++){
    for (int j = 0; j< 4 ; j++){
        cout << "element ["<< i <<"]["<< j <<"]: ";
        cin >> matrix2[i][j];
    }
  }


    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }



cout << "\n the 4x4 matris is: "<< endl;
    for (int i =0; i< 4 ; i++){
         for (int j =0; j< 4 ; j++){
        cout << matrix1[i][j]<< " ";
    }
    cout << endl;
}

cout << "\n the 4x4 matris is: "<< endl;
    for (int i =0; i< 4 ; i++){
         for (int j =0; j< 4 ; j++){
        cout <<matrix2[i][j]<< " ";
    }
    cout << endl;
}

cout << "\n the 4x4 matris is: "<< endl;
    for (int i =0; i< 4 ; i++){
         for (int j =0; j< 4 ; j++){
        cout << sumMatrix[i][j]<< " ";
    }
    cout << endl;
}

return 0;
}
