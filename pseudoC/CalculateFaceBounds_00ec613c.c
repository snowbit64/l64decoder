// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CalculateFaceBounds
// Entry Point: 00ec613c
// Size: 352 bytes
// Signature: undefined __thiscall CalculateFaceBounds(AABBTreeImpl * this, uint * param_1, uint param_2, XVector3 * param_3, XVector3 * param_4)


/* aabbtree::AABBTreeImpl::CalculateFaceBounds(unsigned int*, unsigned int,
   aabbtree::XVector3<double>&, aabbtree::XVector3<double>&) */

void __thiscall
aabbtree::AABBTreeImpl::CalculateFaceBounds
          (AABBTreeImpl *this,uint *param_1,uint param_2,XVector3 *param_3,XVector3 *param_4)

{
  uint uVar1;
  long lVar2;
  double dVar3;
  long lVar4;
  double dVar5;
  ulong uVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  if (param_2 == 0) {
    dVar5 = -3.402823466385289e+38;
    dVar3 = 3.402823466385289e+38;
    dVar16 = dVar5;
    dVar13 = dVar3;
    dVar19 = dVar5;
    dVar10 = dVar3;
  }
  else {
    dVar3 = 3.402823466385289e+38;
    dVar5 = -3.402823466385289e+38;
    lVar2 = *(long *)(this + 0x10);
    lVar4 = *(long *)(this + 0x20);
    uVar6 = (ulong)param_2;
    dVar16 = dVar5;
    dVar13 = dVar3;
    dVar19 = dVar5;
    dVar10 = dVar3;
    do {
      uVar1 = *param_1 * 3;
      pdVar9 = (double *)(lVar2 + (ulong)*(uint *)(lVar4 + (ulong)uVar1 * 4) * 0x18);
      pdVar8 = (double *)(lVar2 + (ulong)*(uint *)(lVar4 + (ulong)(uVar1 + 1) * 4) * 0x18);
      pdVar7 = (double *)(lVar2 + (ulong)*(uint *)(lVar4 + (ulong)(uVar1 + 2) * 4) * 0x18);
      dVar14 = *pdVar9;
      dVar17 = pdVar9[1];
      dVar20 = pdVar9[2];
      dVar12 = dVar14;
      if (dVar13 <= dVar14) {
        dVar12 = dVar13;
      }
      dVar13 = dVar17;
      if (dVar10 <= dVar17) {
        dVar13 = dVar10;
      }
      dVar10 = dVar20;
      if (dVar3 <= dVar20) {
        dVar10 = dVar3;
      }
      if (dVar14 <= dVar16) {
        dVar14 = dVar16;
      }
      if (dVar17 <= dVar19) {
        dVar17 = dVar19;
      }
      dVar15 = *pdVar8;
      dVar18 = pdVar8[1];
      if (dVar20 <= dVar5) {
        dVar20 = dVar5;
      }
      dVar21 = pdVar8[2];
      dVar3 = dVar15;
      if (dVar12 <= dVar15) {
        dVar3 = dVar12;
      }
      dVar12 = dVar18;
      if (dVar13 <= dVar18) {
        dVar12 = dVar13;
      }
      dVar11 = dVar21;
      if (dVar10 <= dVar21) {
        dVar11 = dVar10;
      }
      if (dVar15 <= dVar14) {
        dVar15 = dVar14;
      }
      if (dVar18 <= dVar17) {
        dVar18 = dVar17;
      }
      dVar16 = *pdVar7;
      dVar19 = pdVar7[1];
      if (dVar21 <= dVar20) {
        dVar21 = dVar20;
      }
      dVar5 = pdVar7[2];
      dVar13 = dVar16;
      if (dVar3 <= dVar16) {
        dVar13 = dVar3;
      }
      dVar10 = dVar19;
      if (dVar12 <= dVar19) {
        dVar10 = dVar12;
      }
      dVar3 = dVar5;
      if (dVar11 <= dVar5) {
        dVar3 = dVar11;
      }
      if (dVar16 <= dVar15) {
        dVar16 = dVar15;
      }
      if (dVar19 <= dVar18) {
        dVar19 = dVar18;
      }
      if (dVar5 <= dVar21) {
        dVar5 = dVar21;
      }
      uVar6 = uVar6 - 1;
      param_1 = param_1 + 1;
    } while (uVar6 != 0);
  }
  *(double *)param_3 = dVar13;
  *(double *)(param_3 + 2) = dVar10;
  *(double *)(param_3 + 4) = dVar3;
  *(double *)param_4 = dVar16;
  *(double *)(param_4 + 2) = dVar19;
  *(double *)(param_4 + 4) = dVar5;
  return;
}


