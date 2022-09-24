#ifndef ENTITY_H
#define ENTITY_H

#include "../cincludes.h"

struct Entity {
};

struct Entity* EntityNew(Rect r) {
    struct Entity e = {r};
    return &e;
}

#endif