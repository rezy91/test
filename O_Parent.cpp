/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   O_Parent.cpp
 * Author: rezacr
 * 
 * Created on 20. října 2016, 14:40
 */

#include "O_Parent.h"

O_Parent::O_Parent() 
{
    dwVariable = 0;
}

O_Parent::O_Parent(int initVal)
{
    dwVariable = initVal;
}

O_Parent::~O_Parent() 
{
}

int O_Parent::getVariable()
{
    return dwVariable;
}

