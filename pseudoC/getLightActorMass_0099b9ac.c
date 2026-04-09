// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLightActorMass
// Entry Point: 0099b9ac
// Size: 100 bytes
// Signature: undefined __thiscall getLightActorMass(Bt2ScenegraphPhysicsContext * this, uint param_1)


/* Bt2ScenegraphPhysicsContext::getLightActorMass(unsigned int) */

float __thiscall
Bt2ScenegraphPhysicsContext::getLightActorMass(Bt2ScenegraphPhysicsContext *this,uint param_1)

{
  Bt2ScenegraphPhysicsContext *pBVar1;
  Bt2ScenegraphPhysicsContext *pBVar2;
  float fVar3;
  
  pBVar2 = *(Bt2ScenegraphPhysicsContext **)(this + 0x268);
  if (pBVar2 != (Bt2ScenegraphPhysicsContext *)0x0) {
    pBVar1 = this + 0x268;
    do {
      if (*(uint *)(pBVar2 + 0x20) >= param_1) {
        pBVar1 = pBVar2;
      }
      pBVar2 = *(Bt2ScenegraphPhysicsContext **)
                (pBVar2 + (ulong)(*(uint *)(pBVar2 + 0x20) < param_1) * 8);
    } while (pBVar2 != (Bt2ScenegraphPhysicsContext *)0x0);
    if ((((pBVar1 != this + 0x268) && (*(uint *)(pBVar1 + 0x20) <= param_1)) &&
        (*(long *)(pBVar1 + 0x50) != 0)) &&
       (fVar3 = *(float *)(*(long *)(pBVar1 + 0x50) + 0x19c), fVar3 != 0.0)) {
      return 1.0 / fVar3;
    }
  }
  return 0.0;
}


