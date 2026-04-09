// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createStitches
// Entry Point: 008faf4c
// Size: 400 bytes
// Signature: undefined __thiscall createStitches(Decimator * this, vector * param_1, vector * param_2)


/* Decimator::createStitches(std::__ndk1::vector<IndexedTriangleSet*,
   std::__ndk1::allocator<IndexedTriangleSet*> >&, std::__ndk1::vector<IndexedTriangleSet*,
   std::__ndk1::allocator<IndexedTriangleSet*> >&) const */

void __thiscall Decimator::createStitches(Decimator *this,vector *param_1,vector *param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  
  uVar5 = (ulong)*(int *)(this + 0x18);
  uVar9 = (long)*(int *)(this + 0x10) - 1;
  uVar6 = uVar9 * uVar5;
  uVar7 = *(long *)(param_1 + 8) - *(long *)param_1 >> 3;
  if (uVar7 < uVar6) {
    std::__ndk1::vector<IndexedTriangleSet*,std::__ndk1::allocator<IndexedTriangleSet*>>::__append
              ((vector<IndexedTriangleSet*,std::__ndk1::allocator<IndexedTriangleSet*>> *)param_1,
               uVar6 - uVar7);
    uVar5 = (ulong)*(uint *)(this + 0x14);
  }
  else if (uVar6 < uVar7) {
    *(ulong *)(param_1 + 8) = *(long *)param_1 + uVar6 * 8;
  }
  iVar3 = (int)uVar5;
  if (iVar3 != 0) {
    lVar10 = 0;
    iVar8 = 0;
    do {
      if ((int)uVar9 != 0) {
        uVar5 = 0;
        do {
          uVar2 = stitchRight(this,(int)uVar5,iVar8,0,0);
          *(undefined8 *)(*(long *)param_1 + lVar10 + uVar5 * 8) = uVar2;
          uVar5 = uVar5 + 1;
        } while ((uVar9 & 0xffffffff) != uVar5);
        uVar5 = (ulong)*(uint *)(this + 0x14);
      }
      iVar8 = iVar8 + 1;
      lVar10 = lVar10 + (-((uVar9 & 0xffffffff) >> 0x1f) & 0xfffffff800000000 |
                        (uVar9 & 0xffffffff) << 3);
      iVar3 = (int)uVar5;
    } while (iVar3 != iVar8);
  }
  uVar5 = (long)*(int *)(this + 0x10) * ((long)iVar3 + -1);
  uVar6 = *(long *)(param_2 + 8) - *(long *)param_2 >> 3;
  if (uVar6 < uVar5) {
    std::__ndk1::vector<IndexedTriangleSet*,std::__ndk1::allocator<IndexedTriangleSet*>>::__append
              ((vector<IndexedTriangleSet*,std::__ndk1::allocator<IndexedTriangleSet*>> *)param_2,
               uVar5 - uVar6);
  }
  else if (uVar5 < uVar6) {
    *(ulong *)(param_2 + 8) = *(long *)param_2 + uVar5 * 8;
  }
  iVar3 = (int)((long)iVar3 + -1);
  if (iVar3 != 0) {
    iVar8 = 0;
    iVar4 = *(int *)(this + 0x10);
    do {
      if (iVar4 != 0) {
        lVar10 = 0;
        do {
          uVar2 = stitchTop(this,(int)lVar10,iVar8,0,0);
          iVar4 = *(int *)(this + 0x10);
          lVar1 = lVar10 + iVar8 * iVar4;
          lVar10 = lVar10 + 1;
          *(undefined8 *)(*(long *)param_2 + lVar1 * 8) = uVar2;
        } while ((int)lVar10 != iVar4);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar3);
  }
  return;
}


