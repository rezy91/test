/* 
 * File:   O_Child.h
 * Author: rezacr
 *
 * Created on 20. října 2016, 15:00
 */

#ifndef O_CHILD_H
#define O_CHILD_H

class O_Child : public O_Parent
{
public:
    O_Child();
    O_Child(int initVal);
    virtual ~O_Child();
    virtual int getVariable();
private:
    int dwVariable;
protected:
};

#endif /* O_CHILD_H */

