// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079b67c
// Entry Point: 0079b67c
// Size: 160 bytes
// Signature: undefined FUN_0079b67c(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0079b67c(uint *param_1)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = *param_1;
  Mutex::enterCriticalSection();
  if (_DAT_02110240 != (undefined *)0x0) {
    puVar3 = &DAT_02110240;
    puVar4 = _DAT_02110240;
    do {
      if (*(uint *)(puVar4 + 0x1c) >= uVar1) {
        puVar3 = puVar4;
      }
      puVar4 = *(undefined **)(puVar4 + (ulong)(*(uint *)(puVar4 + 0x1c) < uVar1) * 8);
    } while (puVar4 != (undefined *)0x0);
    if ((puVar3 != &DAT_02110240) && (*(uint *)(puVar3 + 0x1c) <= uVar1)) {
      bVar2 = *(int *)(puVar3 + 0x20) != 0;
      goto LAB_0079b6f8;
    }
  }
  bVar2 = false;
LAB_0079b6f8:
  Mutex::leaveCriticalSection();
  *(bool *)(param_1 + 0x40) = bVar2;
  param_1[0x42] = 3;
  return;
}


