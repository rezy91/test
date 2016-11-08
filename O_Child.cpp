/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   O_Child.cpp
 * Author: rezacr
 * 
 * Created on 20. října 2016, 15:00
 */
#include "O_Parent.h"
#include "O_Child.h"

O_Child::O_Child() {
}

O_Child::O_Child(int initVal)
{
    valCh = initVal;
}

O_Child::~O_Child() {
}

O_Child::setVariable(int newVal)
{
    valCh = newVal;
}

int O_Child::getVariable()
{
    return valCh;
}

