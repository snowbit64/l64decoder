// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setJointLimitsForceLimit
// Entry Point: 009a50d0
// Size: 196 bytes
// Signature: undefined __thiscall setJointLimitsForceLimit(Bt2ScenegraphPhysicsContext * this, uint param_1, SetJointLimitForceLimit * param_2)


/* Bt2ScenegraphPhysicsContext::setJointLimitsForceLimit(unsigned int,
   Bt2ScenegraphPhysicsContext::SetJointLimitForceLimit const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::setJointLimitsForceLimit
          (Bt2ScenegraphPhysicsContext *this,uint param_1,SetJointLimitForceLimit *param_2)

{
  float *pfVar1;
  btCollisionObject *this_00;
  Bt2ScenegraphPhysicsContext *pBVar2;
  Bt2ScenegraphPhysicsContext *pBVar3;
  long lVar4;
  float fVar5;
  
  pBVar3 = *(Bt2ScenegraphPhysicsContext **)(this + 0x1c8);
  if (pBVar3 != (Bt2ScenegraphPhysicsContext *)0x0) {
    pBVar2 = this + 0x1c8;
    do {
      if (*(uint *)(pBVar3 + 0x20) >= param_1) {
        pBVar2 = pBVar3;
      }
      pBVar3 = *(Bt2ScenegraphPhysicsContext **)
                (pBVar3 + (ulong)(*(uint *)(pBVar3 + 0x20) < param_1) * 8);
    } while (pBVar3 != (Bt2ScenegraphPhysicsContext *)0x0);
    if ((pBVar2 != this + 0x1c8) && (*(uint *)(pBVar2 + 0x20) <= param_1)) {
      lVar4 = *(long *)(pBVar2 + 0x30);
      this_00 = *(btCollisionObject **)(lVar4 + 0x28);
      fVar5 = 3.402823e+38;
      if (0.0 <= *(float *)(param_2 + 8)) {
        fVar5 = *(float *)(*(long *)(this + 0x30) + 0x9c) * *(float *)(param_2 + 8);
      }
      pfVar1 = (float *)(lVar4 + (long)(int)*(uint *)(param_2 + 4) * 0x44 + 0x1cc);
      if (*param_2 != (SetJointLimitForceLimit)0x0) {
        pfVar1 = (float *)(lVar4 + (ulong)*(uint *)(param_2 + 4) * 4 + 0xfc);
      }
      *pfVar1 = fVar5;
      btCollisionObject::activate(this_00,false);
      btCollisionObject::activate(*(btCollisionObject **)(lVar4 + 0x30),false);
      return;
    }
  }
  return;
}


