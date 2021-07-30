#ifndef __LOGIC_H__
#define __LOGIC_H__

#include "data.h"

double toDouble(const String &str);
void toString(double n, String &ret);
uint8_t input(uint8_t* r = 0);
void initLogic(PCIOS* os);
void run(PCIOS* os);

#endif /* __LOGIC_H__ */
