/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rezacr
 *
 * Created on 19. října 2016, 15:43
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <unistd.h>


#include "O_Parent.h"
#include "O_Child.h"

using namespace std;


int main(int argc, char** argv) {
 

  time_t result = time(NULL);  
    cout << "Build: " << asctime(localtime(&result)) << endl;
    O_Child objectF = O_Child(1);
    O_Parent objectP = O_Parent(-1);
    O_Parent *ptrObj = &objectP;
    
    int val = ptrObj->getVariable();
    objectF.setVariable(2);
    
    
    
    cout << "value is: " << val  << "  "  << objectF.getVariable() << endl;
    
    return 0;
}

