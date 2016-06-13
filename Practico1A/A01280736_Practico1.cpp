//
//  main.cpp
//  Practico1A
//
//  Created by Miguel Cuellar on 2/14/16.
//  Copyright © 2016 Miguel Cuellar. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    string palabra;
    cin>>palabra;
    char alfabeto[]={'Z','Y','X','W','V','U','T','S','R','Q','P','O','N','M','L','K','J','I','H','G','F','E','D','C','B','A'};
       for (int ix=0; ix<palabra.size(); ix++) {
        palabra[ix]=alfabeto[palabra[ix]-65];
    }
    cout<<palabra<<endl;
       return 0;
}
