// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ea8f8
// Entry Point: 006ea8f8
// Size: 84 bytes
// Signature: undefined FUN_006ea8f8(void)


void FUN_006ea8f8(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = EngineManager::getInstance();
  uVar1 = *(int *)(*(long *)(lVar2 + 0xb8) + 0xf00) - 1;
  if (uVar1 < 0x19) {
    uVar3 = *(undefined4 *)(&DAT_00516cfc + (long)(int)uVar1 * 4);
  }
  else {
    uVar3 = 0;
  }
  *(undefined4 *)(param_1 + 0x100) = uVar3;
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


