// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ConvexH
// Entry Point: 00f9b6ec
// Size: 748 bytes
// Signature: undefined __thiscall ConvexH(ConvexH * this, int param_1, int param_2, int param_3)


/* ConvexH::ConvexH(int, int, int) */

void __thiscall ConvexH::ConvexH(ConvexH *this,int param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 4) = 0;
  this[0x18] = (ConvexH)0x1;
  this[0x38] = (ConvexH)0x1;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  this[0x58] = (ConvexH)0x1;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x44) = 0;
  if (param_1 < 1) {
    iVar6 = 0;
    uVar4 = 0;
  }
  else {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    lVar3 = (*(code *)PTR_FUN_01048e38)((ulong)(uint)param_1 << 4,0x10);
    uVar4 = *(uint *)(this + 4);
    if (0 < (int)uVar4) {
      lVar5 = 0;
      do {
        uVar8 = *(undefined8 *)(*(long *)(this + 0x10) + lVar5);
        ((undefined8 *)(lVar3 + lVar5))[1] = ((undefined8 *)(*(long *)(this + 0x10) + lVar5))[1];
        *(undefined8 *)(lVar3 + lVar5) = uVar8;
        lVar5 = lVar5 + 0x10;
      } while ((ulong)uVar4 * 0x10 - lVar5 != 0);
    }
    if ((*(long *)(this + 0x10) != 0) && (this[0x18] != (ConvexH)0x0)) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    uVar4 = *(uint *)(this + 0x24);
    iVar6 = *(int *)(this + 0x28);
    *(long *)(this + 0x10) = lVar3;
    *(int *)(this + 8) = param_1;
    this[0x18] = (ConvexH)0x1;
  }
  *(int *)(this + 4) = param_1;
  if (((int)uVar4 < param_2) && (iVar6 < param_2)) {
    if (param_2 == 0) {
      lVar3 = 0;
    }
    else {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      lVar3 = (*(code *)PTR_FUN_01048e38)
                        (-(ulong)((uint)param_2 >> 0x1f) & 0xfffffffc00000000 |
                         (ulong)(uint)param_2 << 2,0x10);
      uVar4 = *(uint *)(this + 0x24);
    }
    if (0 < (int)uVar4) {
      lVar5 = 0;
      do {
        *(undefined4 *)(lVar3 + lVar5) = *(undefined4 *)(*(long *)(this + 0x30) + lVar5);
        lVar5 = lVar5 + 4;
      } while ((ulong)uVar4 * 4 - lVar5 != 0);
    }
    if ((*(long *)(this + 0x30) != 0) && (this[0x38] != (ConvexH)0x0)) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(long *)(this + 0x30) = lVar3;
    *(int *)(this + 0x28) = param_2;
    this[0x38] = (ConvexH)0x1;
  }
  uVar4 = *(uint *)(this + 0x44);
  *(int *)(this + 0x24) = param_2;
  if ((int)uVar4 < param_3) {
    lVar3 = (long)(int)uVar4;
    if (*(int *)(this + 0x48) < param_3) {
      if (param_3 == 0) {
        lVar5 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar5 = (*(code *)PTR_FUN_01048e38)((long)param_3 * 0x14,0x10);
        uVar4 = *(uint *)(this + 0x44);
      }
      if (0 < (int)uVar4) {
        lVar7 = 0;
        do {
          puVar1 = (undefined8 *)(lVar5 + lVar7);
          puVar2 = (undefined8 *)(*(long *)(this + 0x50) + lVar7);
          lVar7 = lVar7 + 0x14;
          uVar9 = puVar2[1];
          uVar8 = *puVar2;
          *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar2 + 2);
          puVar1[1] = uVar9;
          *puVar1 = uVar8;
        } while ((ulong)uVar4 * 0x14 - lVar7 != 0);
      }
      if ((*(long *)(this + 0x50) != 0) && (this[0x58] != (ConvexH)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(long *)(this + 0x50) = lVar5;
      *(int *)(this + 0x48) = param_3;
      this[0x58] = (ConvexH)0x1;
    }
    lVar5 = lVar3 * 0x14 + 0x10;
    lVar3 = param_3 - lVar3;
    do {
      lVar3 = lVar3 + -1;
      *(undefined4 *)(*(long *)(this + 0x50) + lVar5) = 0;
      lVar5 = lVar5 + 0x14;
    } while (lVar3 != 0);
  }
  *(int *)(this + 0x44) = param_3;
  return;
}


