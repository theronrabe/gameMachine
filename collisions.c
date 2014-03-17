<<<<<<< HEAD
#include <game.h>

=======
>>>>>>> 0c130a3d454dd197adecb20ae56faedd74e4f93a
int instDistance(Instance *i1, Instance *i2) {
	return sqrt(((i2->X-i1->X)*(i2->X-i1->X)) + ((i2->Y-i1->Y)*(i2->Y-i1->Y)) + ((i2->Z-i1->Z)*(i2->Z-i1->Z)));
}

Instance *collide(Instance *this, Object *other) {
	Instance *i = GAME.headInst;

	while(i) {
		Object *OBJ = i->OBJ;
		if(OBJ == other && i != this) {
			if(instDistance(this, i) <= i->radius + this->radius) {
				return i;
			}
		}
		i = i->NEXT;
	}
	
	return NULL;
}
