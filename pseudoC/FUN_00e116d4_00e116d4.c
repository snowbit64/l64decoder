// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e116d4
// Entry Point: 00e116d4
// Size: 84 bytes
// Signature: undefined FUN_00e116d4(void)


undefined4 * FUN_00e116d4(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined4 *)calloc(1,0x30);
  uVar1 = *param_2;
  uVar4 = *(undefined8 *)(param_2 + 4);
  *(undefined4 **)(puVar2 + 6) = param_2;
  *puVar2 = (int)uVar4;
  puVar2[1] = uVar1;
  pvVar3 = calloc(2,8);
  *(void **)(puVar2 + 2) = pvVar3;
  return puVar2;
}


