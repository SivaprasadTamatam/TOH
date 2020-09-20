//
//  main.cpp
//  TOH - Tower of Hanoi
//
//  Created by Sivaprasad Tamatam on 20/09/20.
//



#include <iostream>
using namespace std;


void TOH(int n, int A, int B, int C){
    if(n>0){
        TOH(n-1, A, C, B);
        cout<<A<<"      "<<C<<endl;
        TOH(n-1, B, A, C);
    }
}

int main(int argc, const char * argv[]) {
    cout<<"From"<<"   "<<"TO"<<endl;
    TOH(3,1,2,3);
    return 0;
}
