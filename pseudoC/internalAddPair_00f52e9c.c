// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: internalAddPair
// Entry Point: 00f52e9c
// Size: 508 bytes
// Signature: undefined __thiscall internalAddPair(btHashedSimplePairCache * this, int param_1, int param_2)


/* btHashedSimplePairCache::internalAddPair(int, int) */

int * __thiscall
btHashedSimplePairCache::internalAddPair(btHashedSimplePairCache *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  
  uVar5 = param_1 | param_2 << 0x10;
  uVar2 = *(uint *)(this + 0x10);
  uVar5 = uVar5 + (uVar5 << 0xf ^ 0xffffffff);
  lVar10 = *(long *)(this + 0x18);
  uVar5 = (uVar5 ^ (int)uVar5 >> 10) * 9;
  uVar5 = uVar5 ^ (int)uVar5 >> 6;
  uVar5 = uVar5 + (uVar5 << 0xb ^ 0xffffffff);
  uVar5 = uVar5 ^ (int)uVar5 >> 0x10;
  uVar1 = uVar2 - 1 & uVar5;
  iVar7 = *(int *)(*(long *)(this + 0x38) + (long)(int)uVar1 * 4);
  if (iVar7 != -1) {
    do {
      piVar11 = (int *)(lVar10 + (long)iVar7 * 0x10);
      if (*piVar11 == param_1 && piVar11[1] == param_2) {
        return piVar11;
      }
      iVar7 = *(int *)(*(long *)(this + 0x58) + (long)iVar7 * 4);
    } while (iVar7 != -1);
  }
  uVar3 = *(uint *)(this + 0xc);
  uVar8 = uVar3;
  if (uVar3 == uVar2) {
    uVar4 = uVar2 << 1;
    if (uVar2 == 0) {
      uVar4 = 1;
    }
    uVar8 = uVar2;
    if ((int)uVar2 < (int)uVar4) {
      if (uVar4 == 0) {
        lVar10 = 0;
        uVar1 = uVar2;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar10 = (*(code *)PTR_FUN_01048e38)
                           (-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar4 << 4,0x10);
        uVar1 = *(uint *)(this + 0xc);
      }
      if (0 < (int)uVar1) {
        lVar12 = 0;
        do {
          uVar13 = *(undefined8 *)(*(long *)(this + 0x18) + lVar12);
          ((undefined8 *)(lVar10 + lVar12))[1] =
               ((undefined8 *)(*(long *)(this + 0x18) + lVar12))[1];
          *(undefined8 *)(lVar10 + lVar12) = uVar13;
          lVar12 = lVar12 + 0x10;
        } while ((ulong)uVar1 * 0x10 - lVar12 != 0);
      }
      lVar12 = (long)(int)uVar2;
      if ((*(long *)(this + 0x18) != 0) && (this[0x20] != (btHashedSimplePairCache)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(long *)(this + 0x18) = lVar10;
      piVar11 = (int *)(lVar10 + lVar12 * 0x10);
      this[0x20] = (btHashedSimplePairCache)0x1;
      *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
      *(uint *)(this + 0x10) = uVar4;
      growTables();
      uVar6 = (long)*(int *)(this + 0x10) - 1U & (long)(int)uVar5;
      goto LAB_00f53050;
    }
  }
  lVar12 = (long)(int)uVar3;
  uVar6 = (ulong)(int)uVar1;
  piVar11 = (int *)(lVar10 + lVar12 * 0x10);
  *(uint *)(this + 0xc) = uVar8 + 1;
LAB_00f53050:
  lVar10 = lVar10 + lVar12 * 0x10;
  *piVar11 = param_1;
  *(undefined8 *)(lVar10 + 8) = 0;
  lVar9 = *(long *)(this + 0x38);
  *(int *)(lVar10 + 4) = param_2;
  *(undefined4 *)(*(long *)(this + 0x58) + lVar12 * 4) = *(undefined4 *)(lVar9 + uVar6 * 4);
  *(uint *)(lVar9 + uVar6 * 4) = uVar3;
  return piVar11;
}


