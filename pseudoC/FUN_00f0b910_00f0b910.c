// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0b910
// Entry Point: 00f0b910
// Size: 112 bytes
// Signature: undefined FUN_00f0b910(void)


void FUN_00f0b910(long param_1)

{
  undefined uVar1;
  byte bVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)FUN_00f10278(param_1,0x88,*(undefined *)(param_1 + 4));
  uVar1 = *(undefined *)(param_1 + 4);
  bVar2 = *(byte *)(*(long *)(param_1 + 0x18) + 0x20);
  *puVar3 = 10;
  puVar3[2] = uVar1;
  *(undefined4 *)(puVar3 + 0x78) = 0;
  *(undefined8 *)(puVar3 + 0x50) = 0;
  *(undefined8 *)(puVar3 + 0x48) = 0;
  *(undefined8 *)(puVar3 + 0x68) = 0;
  *(undefined8 *)(puVar3 + 0x70) = 0;
  *(undefined8 *)(puVar3 + 0x40) = 0;
  *(undefined8 *)(puVar3 + 0x38) = 0;
  *(undefined8 *)(puVar3 + 0x30) = 0;
  *(undefined8 *)(puVar3 + 0x28) = 0;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[1] = bVar2 & 3;
  *(undefined8 *)(puVar3 + 0x60) = 0;
  *(undefined4 *)(puVar3 + 0x80) = 0;
  return;
}


