// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f17180
// Entry Point: 00f17180
// Size: 96 bytes
// Signature: undefined FUN_00f17180(void)


undefined * FUN_00f17180(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  
  puVar2 = *(undefined **)(param_1 + 0x20);
  uVar3 = *(uint *)(param_2 + 0x10) & (-1 << (ulong)(*(byte *)(param_1 + 6) & 0x1f) ^ 0xffffffffU);
  while( true ) {
    puVar2 = puVar2 + (long)(int)uVar3 * 0x20;
    uVar1 = *(uint *)(puVar2 + 0x1c);
    if (((uVar1 & 0xf) == 5) && (*(long *)(puVar2 + 0x10) == param_2)) break;
    uVar3 = (int)uVar1 >> 4;
    if (uVar1 < 0x10) {
      return &DAT_0056fdf8;
    }
  }
  return puVar2;
}


