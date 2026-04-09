// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f09c74
// Entry Point: 00f09c74
// Size: 116 bytes
// Signature: undefined FUN_00f09c74(void)


void FUN_00f09c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00f1990c();
  lVar2 = FUN_00f1990c(param_1,param_3);
  if (lVar1 == lVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00f09b70(param_1,"attempt to perform arithmetic (%s) on %s",
                 (&PTR_s___index_01017788)[param_4 & 0xffffffff] + 2,lVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00f09b70(param_1,"attempt to perform arithmetic (%s) on %s and %s",
               (&PTR_s___index_01017788)[param_4 & 0xffffffff] + 2,lVar1,lVar2);
}


