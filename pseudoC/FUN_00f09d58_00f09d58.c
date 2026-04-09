// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f09d58
// Entry Point: 00f09d58
// Size: 124 bytes
// Signature: undefined FUN_00f09d58(void)


void FUN_00f09d58(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN_00f1990c();
  uVar2 = FUN_00f1990c(param_1,param_3);
  if (((*(int *)((long)param_3 + 0xc) == 5) && (lVar3 = *param_3, lVar3 != 0)) &&
     (*(uint *)(lVar3 + 0x14) < 0x41)) {
                    /* WARNING: Subroutine does not return */
    FUN_00f09b70(param_1,"attempt to index %s with \'%s\'",uVar1,lVar3 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00f09b70(param_1,"attempt to index %s with %s",uVar1,uVar2);
}


