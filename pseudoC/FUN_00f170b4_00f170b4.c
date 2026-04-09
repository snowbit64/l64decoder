// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f170b4
// Entry Point: 00f170b4
// Size: 204 bytes
// Signature: undefined FUN_00f170b4(void)


undefined1 * FUN_00f170b4(long param_1,int param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  double dVar4;
  
  if (param_2 - 1U < *(uint *)(param_1 + 8)) {
    return (undefined1 *)(*(long *)(param_1 + 0x18) + (long)(int)(param_2 - 1U) * 0x10);
  }
  puVar2 = *(undefined1 **)(param_1 + 0x20);
  if (puVar2 != luaH_dummynode) {
    dVar4 = (double)param_2;
    uVar1 = (uint)((ulong)dVar4 >> 0x20) & 0x7fffffff;
    uVar3 = (SUB84(dVar4,0) ^ uVar1 >> 0x12) * 0x5bd1e995;
    uVar1 = (uVar1 ^ uVar3 >> 0x16) * 0x5bd1e995;
    uVar3 = (uVar1 ^ (uVar3 ^ uVar1 >> 0x11) * 0x5bd1e995 >> 0x13) * 0x5bd1e995 &
            (-1 << (ulong)(*(byte *)(param_1 + 6) & 0x1f) ^ 0xffffffffU);
    while( true ) {
      puVar2 = puVar2 + (long)(int)uVar3 * 0x20;
      uVar1 = *(uint *)(puVar2 + 0x1c);
      if (((uVar1 & 0xf) == 3) && (*(double *)(puVar2 + 0x10) == dVar4)) break;
      uVar3 = (int)uVar1 >> 4;
      if (uVar1 < 0x10) {
        return &DAT_0056fdf8;
      }
    }
    return puVar2;
  }
  return &DAT_0056fdf8;
}


