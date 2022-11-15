#pragma once
template <class T>
class Pair
{
protected:
	bool m_isFound;
public:
	T First, Last;
	bool IsFound()
	{
		return m_isFound;
	};

	void SetFound(bool isFound)
	{
		m_isFound = isFound;
	};
};