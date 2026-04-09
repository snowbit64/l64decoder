// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TraceRecursive
// Entry Point: 00ec71d4
// Size: 808 bytes
// Signature: undefined __thiscall TraceRecursive(AABBTreeImpl * this, uint param_1, XVector3 * param_2, XVector3 * param_3, double * param_4, double * param_5, double * param_6, double * param_7, double * param_8, uint * param_9)


/* aabbtree::AABBTreeImpl::TraceRecursive(unsigned int, aabbtree::XVector3<double> const&,
   aabbtree::XVector3<double> const&, double&, double&, double&, double&, double&, unsigned int&)
   const */

void __thiscall
aabbtree::AABBTreeImpl::TraceRecursive
          (AABBTreeImpl *this,uint param_1,XVector3 *param_2,XVector3 *param_3,double *param_4,
          double *param_5,double *param_6,double *param_7,double *param_8,uint *param_9)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  double local_80;
  double dStack_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar13 = *(long *)(this + 0x48);
  puVar2 = (uint *)(lVar13 + (ulong)param_1 * 0x40);
  lVar6 = *(long *)(puVar2 + 2);
  if (lVar6 == 0) {
    uVar9 = *puVar2;
    lVar6 = lVar13 + (ulong)uVar9 * 0x40;
    dStack_78 = 3.402823466385289e+38;
    local_80 = 3.402823466385289e+38;
    IntersectRayAABB(param_2,param_3,(XVector3 *)(lVar6 + 0x10),(XVector3 *)(lVar6 + 0x28),&local_80
                     ,(XVector3 *)0x0);
    lVar13 = lVar13 + (ulong)(uVar9 + 1) * 0x40;
    IntersectRayAABB(param_2,param_3,(XVector3 *)(lVar13 + 0x10),(XVector3 *)(lVar13 + 0x28),
                     (double *)((ulong)&local_80 | 8),(XVector3 *)0x0);
    dVar14 = *param_4;
    bVar1 = dStack_78 >= local_80;
    if (*(double *)((ulong)&local_80 | (ulong)(dStack_78 < local_80) << 3) < dVar14) {
      uVar9 = *puVar2;
      if (dStack_78 < local_80) {
        uVar9 = uVar9 + 1;
      }
      TraceRecursive(this,uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      dVar14 = *param_4;
    }
    if (*(double *)((ulong)&local_80 | (ulong)bVar1 << 3) < dVar14) {
      TraceRecursive(this,*puVar2 + (uint)bVar1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8,param_9);
    }
  }
  else {
    uVar9 = *puVar2;
    if (uVar9 != 0) {
      uVar7 = 0;
      lVar13 = *(long *)(this + 0x10);
      lVar8 = *(long *)(this + 0x20);
      do {
        uVar3 = *(uint *)(lVar6 + uVar7 * 4);
        dVar25 = *(double *)param_3;
        dVar26 = *(double *)(param_3 + 4);
        uVar5 = uVar3 * 3;
        pdVar12 = (double *)(lVar13 + (ulong)*(uint *)(lVar8 + (ulong)uVar5 * 4) * 0x18);
        pdVar11 = (double *)(lVar13 + (ulong)*(uint *)(lVar8 + (ulong)(uVar5 + 1) * 4) * 0x18);
        pdVar10 = (double *)(lVar13 + (ulong)*(uint *)(lVar8 + (ulong)(uVar5 + 2) * 4) * 0x18);
        dVar19 = *pdVar12;
        dVar28 = pdVar12[1];
        dVar14 = *pdVar11 - dVar19;
        dVar29 = pdVar12[2];
        dVar23 = pdVar10[1] - dVar28;
        dVar18 = pdVar10[2] - dVar29;
        dVar15 = pdVar11[2] - dVar29;
        dVar22 = *pdVar10 - dVar19;
        dVar17 = pdVar11[1] - dVar28;
        dVar28 = *(double *)(param_2 + 2) - dVar28;
        dVar30 = (double)NEON_fmadd(dVar15,dVar22,dVar18 * -dVar14);
        dVar24 = -*(double *)(param_3 + 2);
        dVar19 = *(double *)param_2 - dVar19;
        uVar31 = NEON_fmadd(dVar17,dVar18,dVar23 * -dVar15);
        uVar20 = NEON_fmadd(dVar19,uVar31,dVar30 * dVar28);
        uVar32 = NEON_fmadd(dVar14,dVar23,dVar22 * -dVar17);
        uVar31 = NEON_fmsub(dVar25,uVar31,dVar30 * dVar24);
        dVar29 = *(double *)(param_2 + 4) - dVar29;
        dVar16 = (double)NEON_fmsub(dVar26,uVar32,uVar31);
        dVar21 = (double)NEON_fmadd(dVar29,uVar32,uVar20);
        dVar30 = 1.0 / dVar16;
        dVar21 = dVar30 * dVar21;
        if (0.0 <= dVar21) {
          dVar27 = (double)NEON_fmadd(-dVar26,dVar19,dVar25 * dVar29);
          uVar32 = NEON_fmadd(dVar24,dVar29,dVar26 * dVar28);
          uVar20 = NEON_fmadd(-dVar25,dVar28,*(double *)(param_3 + 2) * dVar19);
          uVar31 = NEON_fmadd(dVar22,uVar32,dVar23 * dVar27);
          dVar18 = (double)NEON_fmadd(dVar18,uVar20,uVar31);
          dVar18 = dVar30 * dVar18;
          if (0.0 <= dVar18 && dVar18 == 1.0 || 0.0 <= dVar18 && dVar18 < 1.0) {
            dVar14 = (double)NEON_fmadd(dVar14,uVar32,dVar17 * dVar27);
            dVar14 = (double)NEON_fnmadd(dVar15,uVar20,-dVar14);
            dVar30 = dVar30 * dVar14;
            if ((0.0 <= dVar30 && dVar30 + dVar18 == 1.0 || 0.0 <= dVar30 && dVar30 + dVar18 < 1.0)
                && dVar21 < *param_4) {
              *param_4 = dVar21;
              *param_5 = (1.0 - dVar18) - dVar30;
              *param_6 = dVar18;
              *param_7 = dVar30;
              *param_8 = dVar16;
              *param_9 = uVar3;
              uVar9 = *puVar2;
            }
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar9);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


