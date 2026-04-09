// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addLoadRequest
// Entry Point: 00a6e2e4
// Size: 88 bytes
// Signature: undefined __thiscall addLoadRequest(LocalGeometryLoadBalancer * this, LocalGeometryTransformGroup * param_1, short param_2, short param_3, float param_4, float param_5)


/* LocalGeometryLoadBalancer::addLoadRequest(LocalGeometryTransformGroup*, short, short, float,
   float) */

void __thiscall
LocalGeometryLoadBalancer::addLoadRequest
          (LocalGeometryLoadBalancer *this,LocalGeometryTransformGroup *param_1,short param_2,
          short param_3,float param_4,float param_5)

{
  long lVar1;
  LocalGeometryTransformGroup *local_40;
  float local_38;
  float fStack_34;
  short local_30;
  short local_2e;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = param_1;
  local_38 = param_4;
  fStack_34 = param_5;
  local_30 = param_2;
  local_2e = param_3;
  FUN_00a6e33c(this,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


