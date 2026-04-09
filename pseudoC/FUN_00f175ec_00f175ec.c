// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f175ec
// Entry Point: 00f175ec
// Size: 124 bytes
// Signature: undefined FUN_00f175ec(void)


/* WARNING: Removing unreachable block (ram,0x00f1763c) */
/* WARNING: Removing unreachable block (ram,0x00f1765c) */

void FUN_00f175ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0xc);
  if (((iVar1 != 3) && (iVar1 != 4)) && (iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00f09b70(param_1,"table index is nil");
  }
  FUN_00f17668();
  return;
}


