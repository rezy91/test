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
 
    O_Parent *ptrObj;
    int dw_valueReaded[2];
    time_t result = time(NULL);  
    cout << "Build: " << asctime(localtime(&result)) << endl;

    O_Parent objectP = O_Parent(1);
    O_Child objectF = O_Child(2);

    ptrObj = &objectP;
    dw_valueReaded[0] = ptrObj->getVariable();

    ptrObj = &objectF;
    dw_valueReaded[1] = ptrObj->getVariable();

    cout << "value is: " << dw_valueReaded[0]  << "  "  << dw_valueReaded[1] << endl;
    cout << "end of program" << endl;

    return 0;
}

