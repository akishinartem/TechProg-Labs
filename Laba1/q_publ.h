#pragma once

#include "q_A.h"
class q_publ : public q_A {
public:
	void calc();
	void print();
	void new_k(int num);
	void new_a(elem*value);
	void new_b(elem*value);
};
