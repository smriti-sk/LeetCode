# 1920. Build Array from Permutation
### emplace_back():
This method is used instead of creating the object using parameterized constructor and allocating it into a different memory, then passing it to the copy constructor, which will insert it into the vector. This function can directly insert the object without calling the copy constructor. 


| |Push_back	|emplace_back
|-|-------------|------------
|1.	|It is used to insert the element in a vector or a string	|It is used to insert an element in a vector or a string.
|2.	|It is slower.	|It is faster.
|3.	|Its syntax is :push_back(value_to_insert) |Its syntax is -:emplace_back(value_to_insert)
|4.	|push_back accepts the only object of the type if the constructor accept more than one arguments |emplace_back accept arguments of the constructor of the type.
