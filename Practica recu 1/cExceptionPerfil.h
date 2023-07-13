#pragma once
#include <exception>

class cExceptionPerfil :public exception {
public:
	const char* what()const throw() {
		return "Error con un perfil";
	}
};