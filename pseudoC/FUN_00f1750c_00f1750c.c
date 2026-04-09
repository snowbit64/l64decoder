// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f1750c
// Entry Point: 00f1750c
// Size: 224 bytes
// Signature: undefined FUN_00f1750c(void)


/* WARNING: Removing unreachable block (ram,0x00f175a4) */
/* WARNING: Removing unreachable block (ram,0x00f175dc) */

void FUN_00f1750c(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)FUN_00f171e0(param_2,param_3);
  *(undefined *)(param_2 + 3) = 0;
  if (puVar2 != &DAT_0056fdf8) {
    return;
  }
  iVar1 = *(int *)(param_3 + 0xc);
  if (((iVar1 != 3) && (iVar1 != 4)) && (iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00f09b70(param_1,"table index is nil");
  }
  FUN_00f17668(param_1,param_2,param_3);
  return;
}


