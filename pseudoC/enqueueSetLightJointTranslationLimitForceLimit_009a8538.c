// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueSetLightJointTranslationLimitForceLimit
// Entry Point: 009a8538
// Size: 236 bytes
// Signature: undefined __thiscall enqueueSetLightJointTranslationLimitForceLimit(Bt2ScenegraphPhysicsContext * this, uint param_1, uint param_2, float param_3)


/* Bt2ScenegraphPhysicsContext::enqueueSetLightJointTranslationLimitForceLimit(unsigned int,
   unsigned int, float) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueSetLightJointTranslationLimitForceLimit
          (Bt2ScenegraphPhysicsContext *this,uint param_1,uint param_2,float param_3)

{
  long lVar1;
  btCollisionObject *this_00;
  Bt2ScenegraphPhysicsContext *pBVar2;
  Bt2ScenegraphPhysicsContext *pBVar3;
  long lVar4;
  float fVar5;
  uint local_58;
  undefined4 uStack_54;
  undefined local_50;
  uint local_4c;
  float local_48;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_54 = 2;
  local_50 = 1;
  local_58 = param_1;
  local_4c = param_2;
  local_48 = param_3;
  if (this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) {
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
        if (0.0 <= param_3) {
          fVar5 = *(float *)(*(long *)(this + 0x30) + 0x9c) * param_3;
        }
        *(float *)(lVar4 + (ulong)param_2 * 4 + 0xfc) = fVar5;
        btCollisionObject::activate(this_00,false);
        btCollisionObject::activate(*(btCollisionObject **)(lVar4 + 0x30),false);
      }
    }
  }
  else {
    SimpleArray<Bt2ScenegraphPhysicsContext::JointCommand,true,32u>::push_back
              ((SimpleArray<Bt2ScenegraphPhysicsContext::JointCommand,true,32u> *)(this + 0x208),
               (JointCommand *)&local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


