// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeFromScene
// Entry Point: 009bb504
// Size: 72 bytes
// Signature: undefined __thiscall removeFromScene(Bt2Rope * this, Bt2ScenegraphPhysicsContext * param_1)


/* Bt2Rope::removeFromScene(Bt2ScenegraphPhysicsContext*) */

void __thiscall Bt2Rope::removeFromScene(Bt2Rope *this,Bt2ScenegraphPhysicsContext *param_1)

{
  if (*(btSoftBody **)this != (btSoftBody *)0x0) {
    Bt2World::removeSoftBody(*(Bt2World **)(param_1 + 0x30),*(btSoftBody **)this);
    if (*(long **)this != (long *)0x0) {
      (**(code **)(**(long **)this + 8))();
    }
    *(undefined8 *)this = 0;
  }
  return;
}


