/*
Theron Rabe
10/7/2012
access.c
	Contains all the getters, setters, and query functions for the framework.
*/

<<<<<<< HEAD
#include <game.h>
=======

>>>>>>> 0c130a3d454dd197adecb20ae56faedd74e4f93a

void setStepTime(int step) {
	GAME.STEPTIME = step;
}

char keyIsHeld(char key) {
	return GAME.KEYS[key];
}

void createHeadInst() {
        GAME.headInst = (Instance *) malloc(sizeof(Instance));
        GAME.tailInst = (Instance *) malloc(sizeof(Instance));

        GAME.headInst->OBJ = NULL;
        GAME.headInst->DATA = NULL;
        GAME.headInst->NEXT = GAME.tailInst;
        GAME.headInst->PREV = NULL;
        GAME.headInst->id = -1;

        GAME.tailInst->OBJ = NULL;
        GAME.tailInst->DATA = NULL;
        GAME.tailInst->NEXT = NULL;
	GAME.tailInst->PREV = GAME.headInst;
<<<<<<< HEAD
	GAME.tailInst->id = 999999999;
=======
	GAME.tailInst->id = 999;
>>>>>>> 0c130a3d454dd197adecb20ae56faedd74e4f93a
	
	GAME.instCount = 0;
}

float getInstanceDirection(Instance *i) {
<<<<<<< HEAD
	if(i) {
		return atan2(i->yVelocity, i->xVelocity) * 180/PI;
	} else {
		return -1.0;
	}
}

void setInstanceDirection(Instance *i, float direction) {
	if(i) {
		i->xVelocity = cos(direction*PI/180);
		i->yVelocity = sin(direction*PI/180);
	}
}

float getInstanceSpeed(Instance *i) {
	if(i) {
		return sqrt(pow(i->xVelocity, 2) + pow(i->yVelocity, 2));
	} else {
		return -1.0;
	}
}

void setInstanceSpeed(Instance *i, float s) {
	if(i) {
		float dir = getInstanceDirection(i);
		float xC = cos(dir*PI/180);
		float yC = sin(dir*PI/180);

		i->xVelocity = s*xC;
		i->yVelocity = s*yC;
	}
=======
	return atan2(i->yVelocity, i->xVelocity) * 180/PI;
}

void setInstanceDirection(Instance *i, float direction) {
	i->xVelocity = cos(direction*PI/180);
	i->yVelocity = sin(direction*PI/180);
}

float getInstanceSpeed(Instance *i) {
	return sqrt(pow(i->xVelocity, 2) + pow(i->yVelocity, 2));
}

void setInstanceSpeed(Instance *i, float s) {
	float dir = getInstanceDirection(i);
	float xC = cos(dir*PI/180);
	float yC = sin(dir*PI/180);

	i->xVelocity = s*xC;
	i->yVelocity = s*yC;
>>>>>>> 0c130a3d454dd197adecb20ae56faedd74e4f93a
}
