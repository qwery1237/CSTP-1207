#include "Pair.h"

template<class T> void Pair<T>::SetFound(bool isFound)
{
	m_isFound = isFound;
}

template<class T> bool Pair<T>::IsFound()
{
	return m_isFound;
}