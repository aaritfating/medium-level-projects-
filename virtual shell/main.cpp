#include <iostream>
#include <string>
#include <vector>

using namespace std;

// base class for all file systems elements (directories ,  files etc)

class node {
    protected:
    string name;
    node* parent;
    
    public:
    node (const string& name, node* parent=nullptr)
    :name(name),parent(parent){}

    

}