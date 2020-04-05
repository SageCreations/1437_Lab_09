#ifndef ORDEREDARRAYLISTTYPE_HPP
#define ORDEREDARRAYLISTTYPE_HPP
 
#include "arrayListType.hpp"  
 
class orderedArrayListType: public arrayListType
{
public:
    void insertAt(int location, int insertItem);
    void insertEnd(int insertItem);
    void replaceAt(int location, int repItem);
    int seqSearch(int searchItem) const;
    void insert(int insertItem);
    void remove(int removeItem);

    // constructor
    orderedArrayListType(int size = 100);

};

#endif
