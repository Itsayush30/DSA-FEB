#include <iostream>

void GetPtr(int** val_ptr_ptr, int init_contents)
{
    // val_ptr_ptr should point to a pointer
    // lets allocate it
    *val_ptr_ptr = new int;

    // de-reference ptr->ptr->val to initialize
    // the contents
    **val_ptr_ptr = init_contents;
}

int main(void)
{
    int* val_ptr = NULL;
    GetPtr(&val_ptr, 42);
    std::cout << *val_ptr;
    delete val_ptr;
    return 0;
}