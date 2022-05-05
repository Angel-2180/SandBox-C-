#pragma once

template <typename T>
void swap(T& c1, T& c2)
{
	T temp;
	temp = c1;
	c1 = c2;
	c2 = temp;
}

template <typename T>
T add(T& c1, T& c2)
{
	return c1 + c2;
}