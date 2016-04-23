#include <iostream>
#include "Libc.h"

void Libc::seta (std::string val) {
	temp[0] = val;
}

std::string Libc::geta () {
	return temp[0];
}

void Libc::setb (std::string val) {
	temp[1] = val;
}

std::string Libc::getb () {
	return temp[1];
}

void Libc::setc (std::string val) {
	temp[2] = val;
}

std::string Libc::getc () {
	return temp[2];
}
