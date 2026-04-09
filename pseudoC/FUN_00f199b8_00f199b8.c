// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f199b8
// Entry Point: 00f199b8
// Size: 128 bytes
// Signature: undefined FUN_00f199b8(void)


void FUN_00f199b8(long param_1,ulong param_2,undefined param_3)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_2 < 0x7fffffe8) {
    puVar2 = (undefined *)FUN_00f10278(param_1,param_2 + 0x10,*(undefined *)(param_1 + 4));
    lVar3 = *(long *)(param_1 + 0x18);
    *(int *)(puVar2 + 4) = (int)param_2;
    puVar2[3] = param_3;
    *(undefined8 *)(puVar2 + 8) = 0;
    bVar1 = *(byte *)(lVar3 + 0x20);
    *puVar2 = 8;
    puVar2[2] = *(undefined *)(param_1 + 4);
    puVar2[1] = bVar1 & 3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00f1007c(param_1);
}


