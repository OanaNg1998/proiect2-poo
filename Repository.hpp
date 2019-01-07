#pragma once
#include <vector>
#include <string>
#include <iostream>
template <class T>
class Repository
{
	
public:
    void Add(T*entity);
	void Remove(T*entity);
	void print();


protected:
	std::vector<T*>vect;



};
template<class T>
inline void Repository<T>::Add(T * entity)
{
	vect.push_back(entity);
}

template<class T>
inline void Repository<T>::Remove(T * entity)
{
	for (unsigned int i = 0; i < vect.size(); i++)
		if (vect[i] == entity)
			vect.erase(vect.begin() + i);
}

template<class T>
inline void Repository<T>::print()
{
	for (unsigned int i = 0; i < vect.size(); i++)
		std::cout << *vect[i] << " ";
	std::cout << '\n';
}




