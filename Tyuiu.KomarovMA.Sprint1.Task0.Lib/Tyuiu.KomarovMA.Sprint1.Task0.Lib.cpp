// Tyuiu.KomarovMA.Sprint1.Task0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
// TODO: This is an example of a library function
class Service : public ISprint1Task0V01
{
	virtual int Rezalt(int a, int b, int c) override
	{
		return (a * b * c);
	}
};
