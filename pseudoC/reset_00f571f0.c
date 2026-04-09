// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 00f571f0
// Size: 416 bytes
// Signature: undefined __thiscall reset(btUnionFind * this, int param_1)


/* btUnionFind::reset(int) */

void __thiscall btUnionFind::reset(btUnionFind *this,int param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  uVar3 = (ulong)(uint)param_1;
  uVar1 = *(uint *)(this + 4);
  if ((int)uVar1 < param_1) {
    lVar9 = (long)(int)uVar1;
    if (*(int *)(this + 8) < param_1) {
      if (param_1 == 0) {
        lVar2 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar2 = (*(code *)PTR_FUN_01048e38)
                          (-(ulong)((uint)param_1 >> 0x1f) & 0xfffffff800000000 | uVar3 << 3,0x10);
        uVar1 = *(uint *)(this + 4);
      }
      if (0 < (int)uVar1) {
        lVar4 = 0;
        do {
          *(undefined8 *)(lVar2 + lVar4) = *(undefined8 *)(*(long *)(this + 0x10) + lVar4);
          lVar4 = lVar4 + 8;
        } while ((ulong)uVar1 * 8 - lVar4 != 0);
      }
      if ((*(long *)(this + 0x10) != 0) && (this[0x18] != (btUnionFind)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(long *)(this + 0x10) = lVar2;
      *(int *)(this + 8) = param_1;
      this[0x18] = (btUnionFind)0x1;
    }
    do {
      *(undefined8 *)(*(long *)(this + 0x10) + lVar9 * 8) = 0;
      lVar9 = lVar9 + 1;
    } while (param_1 != lVar9);
  }
  *(int *)(this + 4) = param_1;
  if (0 < param_1) {
    lVar9 = *(long *)(this + 0x10);
    if ((uint)param_1 < 8) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar3 & 0xfffffff8;
      iVar12 = 2;
      iVar13 = 3;
      iVar10 = 0;
      iVar11 = 1;
      piVar7 = (int *)(lVar9 + 0x20);
      uVar8 = uVar5;
      do {
        uVar8 = uVar8 - 8;
        *piVar7 = iVar10 + 4;
        piVar7[1] = 1;
        piVar7[2] = iVar11 + 4;
        piVar7[3] = 1;
        piVar7[4] = iVar12 + 4;
        piVar7[5] = 1;
        piVar7[6] = iVar13 + 4;
        piVar7[7] = 1;
        piVar7[-8] = iVar10;
        piVar7[-7] = 1;
        piVar7[-6] = iVar11;
        piVar7[-5] = 1;
        piVar7[-4] = iVar12;
        piVar7[-3] = 1;
        piVar7[-2] = iVar13;
        piVar7[-1] = 1;
        iVar10 = iVar10 + 8;
        iVar11 = iVar11 + 8;
        iVar12 = iVar12 + 8;
        iVar13 = iVar13 + 8;
        piVar7 = piVar7 + 0x10;
      } while (uVar8 != 0);
      if (uVar5 == uVar3) {
        return;
      }
    }
    puVar6 = (undefined4 *)(lVar9 + uVar5 * 8 + 4);
    do {
      puVar6[-1] = (int)uVar5;
      *puVar6 = 1;
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 2;
    } while (uVar3 != uVar5);
  }
  return;
}


