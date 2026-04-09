// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: construct
// Entry Point: 00760a30
// Size: 192 bytes
// Signature: undefined __cdecl construct(MethodInvocation * param_1)


/* TerrainDetailDistanceConstructor::construct(MethodInvocation*) */

undefined8 * TerrainDetailDistanceConstructor::construct(MethodInvocation *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  void *pvVar4;
  ulong uVar5;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar5 = (ulong)(uint)~(-1 << (ulong)(uVar1 & 0x1f));
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)param_1;
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


