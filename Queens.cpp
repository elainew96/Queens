#include <iostream>

using namespace std;

bool place_queen() {
    int position[8];
    int col = 1;
    while (col<=8) {
        bool is_placed = false;
        for(int row=1; row<=8; row++) {
            if (is_placed == true) {
                break;
            }
            if (col==1) {
                row = 1;
                is_placed = true;
                position[col-1] = row;
                col++;
                break;

            }
            else if ((col>1) && (col<=8)) {
                for (int i=1; i<=col-1; i++){
                    if (position[i-1] == row) {
                        if (row==8) {
                            is_placed = false;
                            //recursion starts
                            while (is_placed==false){
                                col--;
                                int x = position[col-1]+1;
                                for (x; x<=8; x++) {
                                    if (is_placed == true) {
                                        break;
                                    }
                                    for (int j=1; j<=col-1; j++){
                                        if (position[j-1] == x) {
                                            if (x==8) {
                                                break;
                                            }
                                        break;
                                        } else if (position[j-1]+(col-j)==x ) {  //checking diagonals
                                            if (x==8) {
                                                break;
                                            }
                                        break;
                                        } else if (position[j-1]-(col-j)==x ) {  //checking diagonals
                                            if (x==8) {
                                                break;
                                            }
                                        break;
                                        } else if (j==col-1) {
                                            is_placed = true;
                                            position[col-1] = x;
                                            col++;
                                            break;
                                        }
                                    //exit(0);
                                    }
                                }
                            } // end while -- recursion ends
                        }
                        break;
                    }else if (position[i-1]+(col-i)==row ) {  //checking diagonals
                        if (row==8) {
                            is_placed = false;
                            //recursion starts
                            while (is_placed==false){
                                col--;
                                int x = position[col-1]+1;
                                for (x; x<=8; x++) {
                                    if (is_placed == true) {
                                        break;
                                    }
                                    for (int j=1; j<=col-1; j++){
                                        if (position[j-1] == x) {
                                            if (x==8) {
                                                break;
                                            }
                                        break;
                                        } else if (position[j-1]+(col-j)==x ) {  //checking diagonals
                                            if (x==8) {
                                                break;
                                            }
                                        break;
                                        } else if (position[j-1]-(col-j)==x ) {  //checking diagonals
                                            if (x==8) {
                                                break;
                                            }
                                        break;
                                        } else if (j==col-1) {
                                            is_placed = true;
                                            position[col-1] = x;
                                            col++;
                                            break;
                                        }
                                    }
                                }
                            } // end while -- recursion ends
                        }
                    break;
                    }else if (position[i-1]-(col-i)==row) {
                        if (row==8) {
                            is_placed = false;
                            //recursion starts
                            while (is_placed==false){
                                col--;
                                int x = position[col-1]+1;
                                for (x; x<=8; x++) {
                                    if (is_placed == true) {
                                        break;
                                    }
                                    for (int j=1; j<=col-1; j++){
                                        if (position[j-1] == x) {
                                            if (x==8) {
                                                break;
                                            }
                                        break;
                                        } else if (position[j-1]+(col-j)==x ) {  //checking diagonals
                                            if (x==8) {
                                                break;
                                            }
                                        break;
                                        } else if (position[j-1]-(col-j)==x ) {  //checking diagonals
                                            if (x==8) {
                                                break;
                                            }
                                        break;
                                        } else if (j==col-1) {
                                            is_placed = true;
                                            position[col-1] = x;
                                            col++;
                                            break;
                                        }
                                    }
                                }
                            } // end while -- recursion ends
                        }
                    break;
                    }else if (i == col-1){
                        is_placed = true;
                        position[col-1] = row;
                        col++;
                        break;
                    }
                } // end column for loop
            }
        } //end row for loop
    }
    for (int i=0; i<8; i++) {
        if (i!=7) {
            cout << position[i] << ",";
        }else {
            cout << position[i];
        }
    }
}

int main() {
    place_queen();
    return 0;
}
