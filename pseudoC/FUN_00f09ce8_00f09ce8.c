// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f09ce8
// Entry Point: 00f09ce8
// Size: 112 bytes
// Signature: undefined FUN_00f09ce8(void)


void FUN_00f09ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_00f1990c();
  uVar4 = FUN_00f1990c(param_1,param_3);
  puVar1 = &DAT_0050262d;
  if (param_4 != 0x10) {
    puVar1 = &DAT_004eb0ad;
  }
  puVar2 = &DAT_004c7e9d;
  if (param_4 != 0xf) {
    puVar2 = puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00f09b70(param_1,"attempt to compare %s %s %s",uVar3,puVar2,uVar4);
}


