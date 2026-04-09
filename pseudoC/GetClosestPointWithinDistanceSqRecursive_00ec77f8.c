// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetClosestPointWithinDistanceSqRecursive
// Entry Point: 00ec77f8
// Size: 696 bytes
// Signature: undefined __cdecl GetClosestPointWithinDistanceSqRecursive(uint param_1, XVector3 * param_2, double * param_3, double * param_4, double * param_5, uint * param_6, XVector3 * param_7)


/* aabbtree::AABBTreeImpl::GetClosestPointWithinDistanceSqRecursive(unsigned int,
   aabbtree::XVector3<double> const&, double&, double&, double&, unsigned int&,
   aabbtree::XVector3<double>&) const */

void aabbtree::AABBTreeImpl::GetClosestPointWithinDistanceSqRecursive
               (uint param_1,XVector3 *param_2,double *param_3,double *param_4,double *param_5,
               uint *param_6,XVector3 *param_7)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  bool bVar5;
  ulong uVar6;
  double *in_x7;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double in_d1;
  double in_d2;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double local_88;
  double dStack_80;
  long local_78;
  
  uVar6 = (ulong)param_1;
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  lVar9 = *(long *)(uVar6 + 0x48);
  puVar1 = (uint *)(lVar9 + ((ulong)param_2 & 0xffffffff) * 0x40);
  plVar13 = (long *)(puVar1 + 2);
  lVar7 = *plVar13;
  while (lVar7 == 0) {
    uVar2 = *puVar1;
    dVar19 = *param_3;
    dVar17 = param_3[1];
    lVar7 = lVar9 + (ulong)uVar2 * 0x40;
    dVar21 = param_3[2];
    dVar14 = *(double *)(lVar7 + 0x10);
    if (*(double *)(lVar7 + 0x10) <= dVar19) {
      dVar14 = dVar19;
    }
    dVar15 = *(double *)(lVar7 + 0x28);
    if (dVar14 <= *(double *)(lVar7 + 0x28)) {
      dVar15 = dVar14;
    }
    dVar14 = *(double *)(lVar7 + 0x18);
    if (*(double *)(lVar7 + 0x18) <= dVar17) {
      dVar14 = dVar17;
    }
    lVar9 = lVar9 + (ulong)(uVar2 + 1) * 0x40;
    dVar16 = *(double *)(lVar7 + 0x30);
    if (dVar14 <= *(double *)(lVar7 + 0x30)) {
      dVar16 = dVar14;
    }
    dVar14 = *(double *)(lVar7 + 0x20);
    if (*(double *)(lVar7 + 0x20) <= dVar21) {
      dVar14 = dVar21;
    }
    dVar20 = *(double *)(lVar7 + 0x38);
    if (dVar14 <= *(double *)(lVar7 + 0x38)) {
      dVar20 = dVar14;
    }
    dVar14 = *(double *)(lVar9 + 0x10);
    if (*(double *)(lVar9 + 0x10) <= dVar19) {
      dVar14 = dVar19;
    }
    uVar18 = NEON_fmadd(dVar19 - dVar15,dVar19 - dVar15,(dVar17 - dVar16) * (dVar17 - dVar16));
    dVar16 = (double)NEON_fmadd(dVar21 - dVar20,dVar21 - dVar20,uVar18);
    dVar15 = *(double *)(lVar9 + 0x28);
    if (dVar14 <= *(double *)(lVar9 + 0x28)) {
      dVar15 = dVar14;
    }
    dVar14 = *(double *)(lVar9 + 0x18);
    if (*(double *)(lVar9 + 0x18) <= dVar17) {
      dVar14 = dVar17;
    }
    dVar20 = *(double *)(lVar9 + 0x30);
    if (dVar14 <= *(double *)(lVar9 + 0x30)) {
      dVar20 = dVar14;
    }
    dVar14 = *(double *)(lVar9 + 0x20);
    if (*(double *)(lVar9 + 0x20) <= dVar21) {
      dVar14 = dVar21;
    }
    in_d2 = (dVar17 - dVar20) * (dVar17 - dVar20);
    dVar17 = *(double *)(lVar9 + 0x38);
    if (dVar14 <= *(double *)(lVar9 + 0x38)) {
      dVar17 = dVar14;
    }
    uVar18 = NEON_fmadd(dVar19 - dVar15,dVar19 - dVar15,in_d2);
    dVar14 = (double)NEON_fmadd(dVar21 - dVar17,dVar21 - dVar17,uVar18);
    if (dVar16 <= dVar14) {
      iVar8 = 0;
      iVar11 = 1;
      in_d1 = *param_4;
      bVar5 = dVar16 < in_d1;
      dVar16 = dVar14;
      iVar4 = 1;
      if (bVar5) goto LAB_00ec7a40;
    }
    else {
      iVar11 = 0;
      iVar8 = 1;
      in_d1 = *param_4;
      bVar5 = dVar14 < in_d1;
      dVar14 = dVar16;
      iVar4 = 0;
      if (bVar5) {
LAB_00ec7a40:
        iVar11 = iVar4;
        GetClosestPointWithinDistanceSqRecursive
                  (param_1,(XVector3 *)(ulong)(iVar8 + uVar2),param_3,param_4,param_5,param_6,
                   param_7);
        in_d1 = *param_4;
        dVar16 = dVar14;
      }
    }
    if (in_d1 <= dVar16) goto LAB_00ec7a78;
    lVar9 = *(long *)(uVar6 + 0x48);
    puVar1 = (uint *)(lVar9 + (ulong)(*puVar1 + iVar11) * 0x40);
    plVar13 = (long *)(puVar1 + 2);
    lVar7 = *plVar13;
  }
  if (*puVar1 != 0) {
    uVar12 = 0;
    while( true ) {
      lVar9 = *(long *)(uVar6 + 0x20);
      lVar10 = *(long *)(uVar6 + 0x10);
      uVar2 = *(int *)(lVar7 + uVar12 * 4) * 3;
      dVar14 = (double)ClosestPointOnTriangle
                                 ((XVector3 *)
                                  (lVar10 + (ulong)*(uint *)(lVar9 + (ulong)uVar2 * 4) * 0x18),
                                  (XVector3 *)
                                  (lVar10 + (ulong)*(uint *)(lVar9 + (ulong)(uVar2 + 1) * 4) * 0x18)
                                  ,(XVector3 *)
                                   (lVar10 + (ulong)*(uint *)(lVar9 + (ulong)(uVar2 + 2) * 4) * 0x18
                                   ),(XVector3 *)param_3,&dStack_80,&local_88);
      uVar18 = NEON_fmadd(dVar14 - *param_3,dVar14 - *param_3,
                          (in_d1 - param_3[1]) * (in_d1 - param_3[1]));
      dVar19 = (double)NEON_fmadd(in_d2 - param_3[2],in_d2 - param_3[2],uVar18);
      if (dVar19 < *param_4) {
        *in_x7 = dVar14;
        in_x7[1] = in_d1;
        in_x7[2] = in_d2;
        *param_4 = dVar19;
        *param_5 = dStack_80;
        *(double *)param_6 = local_88;
        *param_7 = *(XVector3 *)(*plVar13 + uVar12 * 4);
        in_d1 = local_88;
      }
      uVar12 = uVar12 + 1;
      if (*puVar1 <= uVar12) break;
      lVar7 = *plVar13;
    }
  }
LAB_00ec7a78:
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


