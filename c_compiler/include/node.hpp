#ifndef NODE_HPP
#define NODE_HPP

#include <cstdint>
#include <map>
#include <string>

class Type;
class VariableStackBindings; 


// base node class
class Node
{
public:
    virtual ~Node() {}

    virtual void print() const = 0;
    virtual void printXml() const = 0;
    virtual VariableStackBindings printAsm(VariableStackBindings bindings) const = 0;
};

    
#endif
