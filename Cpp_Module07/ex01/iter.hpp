#ifndef ITER_HPP
#define ITER_HPP

# include <iostream>
# include <string>

template<typename T>
void iter(T &tab, int len, void (*f)(T &val));

template<typename T>
void print(T &val);

#endif