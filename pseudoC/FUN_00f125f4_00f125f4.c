// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f125f4
// Entry Point: 00f125f4
// Size: 120 bytes
// Signature: undefined FUN_00f125f4(void)


void FUN_00f125f4(long param_1,ulong param_2)

{
  undefined uVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  
  if (param_2 < 0x40000001) {
    puVar3 = (undefined *)FUN_00f10278(param_1,param_2 + 0x19,*(undefined *)(param_1 + 4));
    lVar4 = *(long *)(param_1 + 0x18);
    *(undefined4 *)(puVar3 + 0x10) = 0;
    *(int *)(puVar3 + 0x14) = (int)param_2;
    uVar1 = *(undefined *)(param_1 + 4);
    *(undefined8 *)(puVar3 + 8) = 0;
    bVar2 = *(byte *)(lVar4 + 0x20);
    *puVar3 = 5;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 4) = 0x8000;
    puVar3[1] = bVar2 & 3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00f1007c(param_1);
}


