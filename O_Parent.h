/* 
 * File:   O_Parent.h
 * Author: rezacr
 *
 * Created on 20. října 2016, 14:40
 */

#ifndef O_PARENT_H
#define O_PARENT_H

class O_Parent 
{
public:
    O_Parent();
    O_Parent(int initVal);
    virtual ~O_Parent();
    virtual int getVariable();
private:
    int dwVariable; 
protected:
};

#endif /* O_PARENT_H */

