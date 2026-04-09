// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueSetLightJointTranslationLimitSpring
// Entry Point: 009a84c0
// Size: 120 bytes
// Signature: undefined __thiscall enqueueSetLightJointTranslationLimitSpring(Bt2ScenegraphPhysicsContext * this, uint param_1, uint param_2, float param_3, float param_4)


/* Bt2ScenegraphPhysicsContext::enqueueSetLightJointTranslationLimitSpring(unsigned int, unsigned
   int, float, float) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueSetLightJointTranslationLimitSpring
          (Bt2ScenegraphPhysicsContext *this,uint param_1,uint param_2,float param_3,float param_4)

{
  long lVar1;
  uint local_58;
  undefined4 uStack_54;
  SetJointLimitSpring local_50 [4];
  uint local_4c;
  float local_48;
  float fStack_44;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_54 = 1;
  local_50[0] = (SetJointLimitSpring)0x1;
  local_58 = param_1;
  local_4c = param_2;
  local_48 = param_3;
  fStack_44 = param_4;
  if (this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) {
    setJointLimitsSpring(this,param_1,local_50);
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


