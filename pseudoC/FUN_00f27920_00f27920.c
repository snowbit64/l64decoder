// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f27920
// Entry Point: 00f27920
// Size: 244 bytes
// Signature: undefined FUN_00f27920(void)


void FUN_00f27920(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined auStack_78 [24];
  code *local_60;
  
  FUN_00f27a14(param_2,param_1);
  iVar1 = FUN_00f27b3c(param_2);
  while( true ) {
    if (iVar1 < 1) {
      (*param_4)(1,0x1a,*param_3,param_3,param_2,param_5);
      return;
    }
    iVar1 = FUN_00f27b60(param_2,auStack_78);
    if (iVar1 != 0) break;
    iVar1 = (*param_4)(1,10,*param_3,param_3,param_2,param_5);
    if (iVar1 != 0) {
      return;
    }
    if ((local_60 != (code *)0x0) &&
       (iVar1 = (*local_60)(1,10,*param_3,param_3,param_2), iVar1 != 8)) {
      if (iVar1 != 7) {
        return;
      }
      FUN_00f27ba0(param_2);
    }
    iVar1 = FUN_00f27b3c(param_2);
  }
  return;
}


