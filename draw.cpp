/*
 * odeDraw.cpp
 *
 *  Created on: 2012/09/13
 *      Author: yuya-oc
 */

#include "draw.h"
#include <drawstuff/drawstuff.h>

#ifdef dDOUBLE
	#define dsDrawBox dsDrawBoxD
#endif

void odeDraw::draw(const dBodyBox& box) {
	dsDrawBox(box.getPosition(), box.getRotation(), box.getSides());
}
