// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLightActorAngularVelocity
// Entry Point: 0099ba70
// Size: 96 bytes
// Signature: undefined __thiscall getLightActorAngularVelocity(Bt2ScenegraphPhysicsContext * this, uint param_1, float * param_2)


/* Bt2ScenegraphPhysicsContext::getLightActorAngularVelocity(unsigned int, float*) */

void __thiscall
Bt2ScenegraphPhysicsContext::getLightActorAngularVelocity
          (Bt2ScenegraphPhysicsContext *this,uint param_1,float *param_2)

{
  Bt2ScenegraphPhysicsContext *pBVar1;
  long lVar2;
  Bt2ScenegraphPhysicsContext *pBVar3;
  
  pBVar3 = *(Bt2ScenegraphPhysicsContext **)(this + 0x268);
  if (pBVar3 != (Bt2ScenegraphPhysicsContext *)0x0) {
    pBVar1 = this + 0x268;
    do {
      if (*(uint *)(pBVar3 + 0x20) >= param_1) {
        pBVar1 = pBVar3;
      }
      pBVar3 = *(Bt2ScenegraphPhysicsContext **)
                (pBVar3 + (ulong)(*(uint *)(pBVar3 + 0x20) < param_1) * 8);
    } while (pBVar3 != (Bt2ScenegraphPhysicsContext *)0x0);
    if (((pBVar1 != this + 0x268) && (*(uint *)(pBVar1 + 0x20) <= param_1)) &&
       (lVar2 = *(long *)(pBVar1 + 0x50), lVar2 != 0)) {
      *param_2 = *(float *)(lVar2 + 0x18c);
      param_2[1] = *(float *)(lVar2 + 400);
      param_2[2] = *(float *)(lVar2 + 0x194);
    }
  }
  return;
}


