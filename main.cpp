/*************************************************************************
> File Name: singleton.cpp
> Author: CarlSun
> Mail:sunxiuyang04@gmail.com 
> Created Time: Mon Aug  8 16:23:35 2016
 ************************************************************************/
#include "singleton.h"
int main(){
	Singleton* sgn1 = Singleton::getInstance();
	Singleton* sgn2 = Singleton::getInstance();
	delete sgn1;
//	delete sgn2; //sgn1 share same point with sgn2, so deleting sgn2 will make error
}
