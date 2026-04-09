// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removePendingPhysicsObject
// Entry Point: 0099d9cc
// Size: 148 bytes
// Signature: undefined __thiscall removePendingPhysicsObject(Bt2ScenegraphPhysicsContext * this, Bt2ContextPhysicsObject * param_1)


/* Bt2ScenegraphPhysicsContext::removePendingPhysicsObject(Bt2ContextPhysicsObject*) */

void __thiscall
Bt2ScenegraphPhysicsContext::removePendingPhysicsObject
          (Bt2ScenegraphPhysicsContext *this,Bt2ContextPhysicsObject *param_1)

{
  void *__dest;
  uint uVar1;
  int iVar2;
  Bt2ContextPhysicsObject *pBVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(this + 0x138);
  if (uVar1 != 0) {
    uVar4 = 0;
    do {
      pBVar3 = (Bt2ContextPhysicsObject *)RawTransformGroup::getPhysicsObject();
      if (pBVar3 == param_1) {
        iVar2 = *(int *)(this + 0x138);
        uVar1 = iVar2 - 1;
        *(uint *)(this + 0x138) = uVar1;
        if (uVar1 <= (uint)uVar4) {
          return;
        }
        __dest = (void *)(*(long *)(this + 0x130) + uVar4 * 8);
        memmove(__dest,(void *)((long)__dest + 8),(ulong)(~(uint)uVar4 + iVar2) << 3);
        return;
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  return;
}


