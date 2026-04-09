// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueSetLightJointTranslationLimit
// Entry Point: 009a8444
// Size: 124 bytes
// Signature: undefined __thiscall enqueueSetLightJointTranslationLimit(Bt2ScenegraphPhysicsContext * this, uint param_1, uint param_2, bool param_3, float param_4, float param_5)


/* Bt2ScenegraphPhysicsContext::enqueueSetLightJointTranslationLimit(unsigned int, unsigned int,
   bool, float, float) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueSetLightJointTranslationLimit
          (Bt2ScenegraphPhysicsContext *this,uint param_1,uint param_2,bool param_3,float param_4,
          float param_5)

{
  long lVar1;
  uint local_58;
  undefined4 uStack_54;
  SetJointLimit local_50 [4];
  uint local_4c;
  float local_48;
  float fStack_44;
  undefined local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_54 = 0;
  local_50[0] = (SetJointLimit)0x1;
  local_58 = param_1;
  local_4c = param_2;
  local_48 = param_4;
  fStack_44 = param_5;
  local_40 = param_3;
  if (this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) {
    setJointLimits(this,param_1,local_50);
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


