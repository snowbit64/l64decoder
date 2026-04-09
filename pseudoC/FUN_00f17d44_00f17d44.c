// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f17d44
// Entry Point: 00f17d44
// Size: 228 bytes
// Signature: undefined FUN_00f17d44(void)


void FUN_00f17d44(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar3 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    lVar6 = *(long *)(param_1 + 0x18);
    if (uVar2 == 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar3 & 0xfffffffe;
      puVar7 = (undefined4 *)(lVar6 + 0x1c);
      uVar9 = uVar8;
      do {
        uVar9 = uVar9 - 2;
        puVar7[-4] = 0;
        *puVar7 = 0;
        puVar7 = puVar7 + 8;
      } while (uVar9 != 0);
      if (uVar8 == uVar3) goto LAB_00f17da0;
    }
    lVar4 = uVar3 - uVar8;
    puVar7 = (undefined4 *)(lVar6 + uVar8 * 0x10 + 0xc);
    do {
      lVar4 = lVar4 + -1;
      *puVar7 = 0;
      puVar7 = puVar7 + 4;
    } while (lVar4 != 0);
  }
LAB_00f17da0:
  if (*(int *)(param_1 + 0xc) < 1) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  puVar5 = *(undefined1 **)(param_1 + 0x20);
  if (puVar5 != luaH_dummynode) {
    uVar2 = 1 << (ulong)(*(byte *)(param_1 + 6) & 0x1f);
    *(uint *)(param_1 + 0xc) = uVar2;
    if (*(byte *)(param_1 + 6) != 0x1f) {
      *(undefined4 *)(puVar5 + 0xc) = 0;
      uVar1 = uVar2;
      if ((int)uVar2 < 2) {
        uVar1 = 1;
      }
      *(undefined4 *)(puVar5 + 0x1c) = 0;
      if (1 < (int)uVar2) {
        lVar6 = 0;
        do {
          lVar4 = *(long *)(param_1 + 0x20) + lVar6;
          lVar6 = lVar6 + 0x20;
          *(undefined4 *)(lVar4 + 0x2c) = 0;
          *(undefined4 *)(lVar4 + 0x3c) = 0;
        } while ((ulong)uVar1 * 0x20 + -0x20 != lVar6);
      }
    }
  }
  *(undefined *)(param_1 + 3) = 0xff;
  return;
}


