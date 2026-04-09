// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeActorFromQueues
// Entry Point: 0099da60
// Size: 156 bytes
// Signature: undefined __thiscall removeActorFromQueues(Bt2ScenegraphPhysicsContext * this, Bt2PhysicsRBObject * param_1)


/* Bt2ScenegraphPhysicsContext::removeActorFromQueues(Bt2PhysicsRBObject*) */

void __thiscall
Bt2ScenegraphPhysicsContext::removeActorFromQueues
          (Bt2ScenegraphPhysicsContext *this,Bt2PhysicsRBObject *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(this + 0xb0);
  lVar1 = *(long *)(this + 0xb8);
  if ((int)((ulong)(lVar1 - lVar4) >> 3) != 0) {
    uVar2 = (ulong)(lVar1 - lVar4) >> 3 & 0xffffffff;
    lVar3 = uVar2 * 8;
    lVar5 = uVar2 * -8;
    while( true ) {
      lVar3 = lVar3 + -8;
      if (*(Bt2PhysicsRBObject **)(lVar4 + lVar3) == param_1) {
        uVar2 = lVar5 + (lVar1 - lVar4);
        if (uVar2 != 0) {
          memmove((void *)(lVar4 + lVar3),(void *)((long)(void *)(lVar4 + lVar3) + 8),uVar2);
        }
        lVar1 = lVar4 + (uVar2 & 0xfffffffffffffff8) + lVar3;
        *(long *)(this + 0xb8) = lVar1;
      }
      if (lVar3 == 0) break;
      lVar4 = *(long *)(this + 0xb0);
      lVar5 = lVar5 + 8;
    }
  }
  return;
}


