// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2PhysicsCookedDataSet
// Entry Point: 0098d634
// Size: 112 bytes
// Signature: undefined __thiscall ~Bt2PhysicsCookedDataSet(Bt2PhysicsCookedDataSet * this)


/* Bt2PhysicsCookedDataSet::~Bt2PhysicsCookedDataSet() */

void __thiscall Bt2PhysicsCookedDataSet::~Bt2PhysicsCookedDataSet(Bt2PhysicsCookedDataSet *this)

{
  if (*(int *)(this + 8) == 0) {
    if (*(btCollisionShape **)this != (btCollisionShape *)0x0) {
                    /* try { // try from 0098d668 to 0098d697 has its CatchHandler @ 0098d6a4 */
      Bt2PhysicsColShapeCache::releaseColShape
                (*(Bt2PhysicsColShapeCache **)(this + 0x20),*(btCollisionShape **)this);
    }
  }
  else if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
  }
  if (*(int *)(this + 0x18) == 0) {
    if (*(btCollisionShape **)(this + 0x10) != (btCollisionShape *)0x0) {
      Bt2PhysicsColShapeCache::releaseColShape
                (*(Bt2PhysicsColShapeCache **)(this + 0x20),*(btCollisionShape **)(this + 0x10));
    }
  }
  else if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x10));
    return;
  }
  return;
}


