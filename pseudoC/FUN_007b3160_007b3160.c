// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b3160
// Entry Point: 007b3160
// Size: 164 bytes
// Signature: undefined FUN_007b3160(void)


void FUN_007b3160(long param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  
  uVar2 = *param_2;
  iVar5 = (int)((ulong)(*(long *)(param_1 + 0x180) - *(long *)(param_1 + 0x178)) >> 4);
  uVar3 = iVar5 * -0x45d1745d;
  if (uVar2 < uVar3) {
    puVar4 = (undefined *)BaseTerrain::getDetailLayerName((BaseTerrain *)(param_1 + 0x170),uVar2);
  }
  else if (uVar2 < (int)((ulong)(*(long *)(param_1 + 0x1b0) - *(long *)(param_1 + 0x1a8)) >> 6) +
                   uVar3) {
    lVar1 = *(long *)(param_1 + 0x1a8) + (ulong)(uVar2 + iVar5 * 0x45d1745d) * 0x40;
    puVar4 = (undefined *)(lVar1 + 9);
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      puVar4 = *(undefined **)(lVar1 + 0x18);
    }
  }
  else {
    puVar4 = &DAT_0050a39f;
  }
  *(undefined **)(param_2 + 0x40) = puVar4;
  param_2[0x42] = 6;
  *(ushort *)(param_2 + 0x43) = *(ushort *)(param_2 + 0x43) & 0xfffe;
  return;
}


