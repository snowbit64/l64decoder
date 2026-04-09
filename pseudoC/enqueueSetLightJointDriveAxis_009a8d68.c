// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueSetLightJointDriveAxis
// Entry Point: 009a8d68
// Size: 136 bytes
// Signature: undefined __thiscall enqueueSetLightJointDriveAxis(Bt2ScenegraphPhysicsContext * this, uint param_1, bool param_2, uint param_3, bool param_4, bool param_5, float param_6, float param_7, float param_8, float param_9, float param_10)


/* Bt2ScenegraphPhysicsContext::enqueueSetLightJointDriveAxis(unsigned int, bool, unsigned int,
   bool, bool, float, float, float, float, float) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueSetLightJointDriveAxis
          (Bt2ScenegraphPhysicsContext *this,uint param_1,bool param_2,uint param_3,bool param_4,
          bool param_5,float param_6,float param_7,float param_8,float param_9,float param_10)

{
  long lVar1;
  uint local_58;
  undefined4 uStack_54;
  SetJointDriveAxis local_50 [4];
  uint local_4c;
  undefined local_48;
  undefined local_47;
  float local_44;
  float fStack_40;
  float local_3c;
  float fStack_38;
  float local_34;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_54 = 6;
  local_58 = param_1;
  local_50[0] = (SetJointDriveAxis)param_2;
  local_4c = param_3;
  local_48 = param_4;
  local_47 = param_5;
  local_44 = param_6;
  fStack_40 = param_7;
  local_3c = param_8;
  fStack_38 = param_9;
  local_34 = param_10;
  if (this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) {
    setJointDriveAxis(this,param_1,local_50);
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


