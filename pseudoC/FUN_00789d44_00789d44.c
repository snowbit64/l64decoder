// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00789d44
// Entry Point: 00789d44
// Size: 76 bytes
// Signature: undefined FUN_00789d44(void)


void FUN_00789d44(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined2 *puVar5;
  
  lVar4 = EngineManager::getInstance();
  puVar5 = *(undefined2 **)(lVar4 + 0x2e8);
  uVar1 = param_1[4];
  uVar2 = param_1[8];
  uVar3 = param_1[0xc];
  *puVar5 = (short)*param_1;
  puVar5[1] = (short)uVar1;
  *(undefined4 *)(puVar5 + 2) = uVar2;
  *(undefined4 *)(puVar5 + 4) = uVar3;
  *(int *)(puVar5 + 6) = *(int *)(puVar5 + 6) + 1;
  return;
}


