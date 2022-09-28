/*
    * NOTHING HERE *
    All in the gameobject folder will be written on Rust
*/
#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

typedef struct {
    u32 id, generation;
} GameObject;

void PrintInfo(GameObject go);
void SetId(GameObject* go, u32 id); // usage : SetId(&obj, value);
void SetGeneration(GameObject* go, u32 gen) // usage : SetGeneration(&obj, value);

#endif