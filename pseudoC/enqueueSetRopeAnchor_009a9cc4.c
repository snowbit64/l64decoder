// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueSetRopeAnchor
// Entry Point: 009a9cc4
// Size: 132 bytes
// Signature: undefined __thiscall enqueueSetRopeAnchor(Bt2ScenegraphPhysicsContext * this, uint param_1, uint param_2, TransformGroup * param_3, bool param_4, float param_5, float param_6, float param_7, bool param_8)


/* Bt2ScenegraphPhysicsContext::enqueueSetRopeAnchor(unsigned int, unsigned int, TransformGroup*,
   bool, float, float, float, bool) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueSetRopeAnchor
          (Bt2ScenegraphPhysicsContext *this,uint param_1,uint param_2,TransformGroup *param_3,
          bool param_4,float param_5,float param_6,float param_7,bool param_8)

{
  long lVar1;
  uint local_58;
  undefined4 uStack_54;
  uint local_50 [2];
  TransformGroup *local_48;
  undefined local_40;
  float local_3c;
  float fStack_38;
  float local_34;
  undefined local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_54 = 1;
  local_58 = param_1;
  local_50[0] = param_2;
  local_48 = param_3;
  local_40 = param_4;
  local_3c = param_5;
  fStack_38 = param_6;
  local_34 = param_7;
  local_30 = param_8;
  if (this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) {
    setRopeAnchor(this,param_1,(SetRopeAnchor *)local_50);
  }
  else {
    FUN_009a9b8c(this + 0x308,&local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


