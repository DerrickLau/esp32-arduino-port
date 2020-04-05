/*
 * FunctionalInterrupt.h
 *
 *  Created on: 8 jul. 2018
 *      Author: Herman
 */

 #include "pthread.h"

 
#ifndef CORE_CORE_FUNCTIONALINTERRUPT_H_
#define CORE_CORE_FUNCTIONALINTERRUPT_H_

#include <functional>

struct InterruptArgStructure {
	std::function<void(void)> interruptFunction;
};

void attachInterrupt(uint8_t pin, std::function<void(void)> intRoutine, int mode);


#endif /* CORE_CORE_FUNCTIONALINTERRUPT_H_ */
