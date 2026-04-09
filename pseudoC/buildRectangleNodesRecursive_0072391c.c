// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildRectangleNodesRecursive
// Entry Point: 0072391c
// Size: 572 bytes
// Signature: undefined __thiscall buildRectangleNodesRecursive(RectangleTree * this, uint param_1, uint * param_2, BoundingBox * param_3, uint param_4)


/* RectangleTree::buildRectangleNodesRecursive(unsigned int, unsigned int*, BoundingBox*, unsigned
   int) */

void __thiscall
RectangleTree::buildRectangleNodesRecursive
          (RectangleTree *this,uint param_1,uint *param_2,BoundingBox *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  float *pfVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  uVar9 = (ulong)param_4;
  lVar7 = *(long *)this;
  puVar6 = (undefined8 *)(lVar7 + (ulong)param_4 * 0x14);
  if (param_1 != 1) {
    uVar9 = (ulong)param_4;
    do {
      uVar4 = 1;
      puVar11 = (uint *)(lVar7 + uVar9 * 0x14 + 0x10);
      *puVar11 = *puVar11 & 0xfffffffe;
      fVar20 = *(float *)param_3;
      fVar14 = *(float *)((long)param_3 + 4);
      fVar16 = *(float *)((long)param_3 + 8);
      fVar17 = *(float *)((long)param_3 + 0xc);
      pfVar13 = (float *)((long)param_3 + 0x1c);
      do {
        uVar4 = uVar4 + 1;
        if (pfVar13[-3] < fVar20) {
          fVar20 = pfVar13[-3];
        }
        if (pfVar13[-2] < fVar14) {
          fVar14 = pfVar13[-2];
        }
        if (fVar16 < pfVar13[-1]) {
          fVar16 = pfVar13[-1];
        }
        if (fVar17 < *pfVar13) {
          fVar17 = *pfVar13;
        }
        pfVar13 = pfVar13 + 4;
      } while (param_1 != uVar4);
      lVar7 = lVar7 + uVar9 * 0x14;
      *(float *)puVar6 = fVar20;
      *(float *)(lVar7 + 4) = fVar14;
      *(float *)(lVar7 + 0xc) = fVar17;
      *(float *)(lVar7 + 8) = fVar16;
      *puVar11 = param_1 * 4 - 2;
      uVar4 = 0;
      uVar8 = (ulong)((fVar16 - *(float *)puVar6) * 0.5 < (fVar17 - fVar14) * 0.5);
      if (param_1 != 0) {
        fVar20 = *(float *)(lVar7 + uVar8 * 4);
        uVar10 = (ulong)param_1;
        fVar20 = (float)NEON_fmadd(((float *)(lVar7 + 8))[uVar8] - fVar20,0x3f000000,fVar20);
        uVar4 = 0;
        do {
          while( true ) {
            pfVar13 = (float *)((long)param_3 + uVar8 * 4 + (ulong)uVar4 * 0x10);
            fVar14 = *pfVar13;
            fVar14 = (float)NEON_fmadd(pfVar13[2] - fVar14,0x3f000000,fVar14);
            if (fVar20 <= fVar14) break;
            uVar4 = uVar4 + 1;
            if (uVar4 == (uint)uVar10) goto LAB_007239dc;
          }
          uVar2 = (uint)uVar10 - 1;
          uVar10 = (ulong)uVar2;
          uVar12 = (ulong)uVar4;
          uVar15 = *(undefined8 *)((long)param_3 + uVar10 * 2 * 8);
          uVar19 = ((undefined8 *)((long)param_3 + uVar12 * 2 * 8))[1];
          uVar18 = *(undefined8 *)((long)param_3 + uVar12 * 2 * 8);
          ((undefined8 *)((long)param_3 + uVar12 * 2 * 8))[1] =
               ((undefined8 *)((long)param_3 + uVar10 * 2 * 8))[1];
          *(undefined8 *)((long)param_3 + uVar12 * 2 * 8) = uVar15;
          ((undefined8 *)((long)param_3 + uVar10 * 2 * 8))[1] = uVar19;
          *(undefined8 *)((long)param_3 + uVar10 * 2 * 8) = uVar18;
          uVar1 = param_2[uVar12];
          param_2[uVar12] = param_2[uVar10];
          param_2[uVar10] = uVar1;
        } while (uVar4 != uVar2);
      }
LAB_007239dc:
      uVar1 = param_1 >> 1;
      if (uVar4 != param_1 && uVar4 != 0) {
        uVar1 = uVar4;
      }
      buildRectangleNodesRecursive(this,uVar1,param_2,param_3,(int)uVar9 + 1);
      lVar7 = *(long *)this;
      uVar9 = (ulong)((int)uVar9 + uVar1 * 2);
      param_1 = param_1 - uVar1;
      param_2 = param_2 + uVar1;
      param_3 = (BoundingBox *)((long)param_3 + (ulong)uVar1 * 2 * 8);
      puVar6 = (undefined8 *)(lVar7 + uVar9 * 0x14);
    } while (param_1 != 1);
  }
  lVar7 = lVar7 + uVar9 * 0x14;
  *(uint *)(lVar7 + 0x10) = *(uint *)(lVar7 + 0x10) | 1;
  uVar15 = *(undefined8 *)param_3;
  puVar6[1] = *(undefined8 *)((long)param_3 + 8);
  *puVar6 = uVar15;
  *(uint *)(lVar7 + 0x10) = *param_2 << 1 | 1;
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


