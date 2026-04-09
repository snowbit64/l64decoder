// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f068dc
// Entry Point: 00f068dc
// Size: 188 bytes
// Signature: undefined FUN_00f068dc(void)


undefined * FUN_00f068dc(long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar5;
  undefined8 *puVar4;
  
  if (param_2 == -0x2712) {
    lVar2 = *(long *)(param_1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
  }
  else {
    if (param_2 != -0x2711) {
      if (param_2 == -10000) {
        return (undefined *)(*(long *)(param_1 + 0x18) + 0xbf0);
      }
      lVar2 = **(long **)(*(long *)(param_1 + 0x20) + 8);
      puVar1 = &DAT_0056fdf8;
      if (-0x2712 - param_2 <= (int)(uint)*(byte *)(lVar2 + 4)) {
        puVar1 = (undefined *)(lVar2 + (long)(-0x2713 - param_2) * 0x10 + 0x30);
      }
      return puVar1;
    }
    lVar2 = *(long *)(param_1 + 0x18);
    if (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x40)) {
      puVar4 = (undefined8 *)(param_1 + 0x58);
    }
    else {
      puVar4 = (undefined8 *)(**(long **)(*(long *)(param_1 + 0x20) + 8) + 0x10);
    }
    uVar3 = *puVar4;
  }
  *(undefined8 *)(lVar2 + 0xbe0) = uVar3;
  lVar5 = *(long *)(param_1 + 0x18);
  *(undefined4 *)(lVar2 + 0xbec) = 6;
  return (undefined *)(lVar5 + 0xbe0);
}


