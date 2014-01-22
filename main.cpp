#include <iostream>

#include "add.h"
#include "pow.h"
#include "multiply.h"

int main(){
	std::cout<<pow(add(multiply(2,2),4),3)<<std::endl;
	return 0;	
}