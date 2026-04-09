// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007af20c
// Entry Point: 007af20c
// Size: 192 bytes
// Signature: undefined FUN_007af20c(void)


undefined8 * FUN_007af20c(undefined4 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  void *pvVar4;
  ulong uVar5;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  uVar1 = param_1[4];
  uVar5 = (ulong)(uint)~(-1 << (ulong)(uVar1 & 0x1f));
  *(undefined4 *)(puVar2 + 1) = *param_1;
  *(uint *)((long)puVar2 + 0xc) = uVar1;
  *puVar2 = &PTR__TerrainDetailDistanceConstructor_00fdb4e8;
  puVar3 = (ulong *)operator_new__(uVar5 * 0x18 + 8);
  *puVar3 = uVar5;
  if (uVar1 != 0) {
    memset(puVar3 + 1,0,((uVar5 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18);
  }
  puVar2[2] = puVar3 + 1;
  pvVar4 = operator_new__(uVar5);
  puVar2[3] = pvVar4;
  return puVar2;
}


