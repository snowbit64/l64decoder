// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: raycastAllNodes
// Entry Point: 009de08c
// Size: 1256 bytes
// Signature: undefined __thiscall raycastAllNodes(ProceduralPlacementRaycastObjectsMask * this, TransformGroup * param_1, set * param_2, Vector3 * param_3, Vector3 * param_4)


/* ProceduralPlacementRaycastObjectsMask::raycastAllNodes(TransformGroup const*,
   std::__ndk1::set<TransformGroup*, std::__ndk1::less<TransformGroup*>,
   std::__ndk1::allocator<TransformGroup*> > const&, Vector3 const&, Vector3 const&) */

bool __thiscall
ProceduralPlacementRaycastObjectsMask::raycastAllNodes
          (ProceduralPlacementRaycastObjectsMask *this,TransformGroup *param_1,set *param_2,
          Vector3 *param_3,Vector3 *param_4)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  undefined4 *puVar9;
  long **pplVar10;
  long **pplVar11;
  long **pplVar12;
  ushort *puVar13;
  int *piVar14;
  long *plVar15;
  long *plVar16;
  uint uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  TransformGroup **local_158;
  TransformGroup **local_150;
  undefined8 local_148;
  float local_13c;
  long *local_138;
  undefined4 local_130;
  float local_118;
  float local_110;
  float fStack_10c;
  float local_108;
  float local_100;
  float fStack_fc;
  float local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  float local_e0;
  float local_dc;
  float fStack_d8;
  float local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  long local_90;
  
  lVar1 = tpidr_el0;
  local_90 = *(long *)(lVar1 + 0x28);
  local_158 = (TransformGroup **)0x0;
  local_150 = (TransformGroup **)0x0;
  local_148 = 0;
  if (-1 < (char)param_2[0x13]) {
    uVar17 = 0xffffffff;
    do {
      plVar15 = (long *)param_1;
      if (-1 < (int)uVar17) {
        pplVar10 = *(long ***)param_2;
        if (uVar17 != 0) {
          uVar5 = (ulong)uVar17;
          pplVar11 = pplVar10;
          do {
            pplVar12 = (long **)pplVar11[1];
            if ((long **)pplVar11[1] == (long **)0x0) {
              pplVar12 = pplVar11 + 2;
              pplVar10 = (long **)*pplVar12;
              if ((long **)*pplVar10 != pplVar11) {
                do {
                  plVar15 = *pplVar12;
                  pplVar12 = (long **)(plVar15 + 2);
                  pplVar10 = (long **)*pplVar12;
                } while (*pplVar10 != plVar15);
              }
            }
            else {
              do {
                pplVar10 = pplVar12;
                pplVar12 = (long **)*pplVar10;
              } while (*pplVar10 != (long *)0x0);
            }
            uVar7 = uVar5 - 1;
            bVar8 = 0 < (long)uVar5;
            uVar5 = uVar7;
            pplVar11 = pplVar10;
          } while (uVar7 != 0 && bVar8);
        }
        plVar15 = pplVar10[4];
      }
      if (((uint)plVar15[2] >> 0xb & 1) == 0) {
        if (((uint)plVar15[2] >> 7 & 1) != 0) {
          local_f0 = (code *)plVar15;
                    /* try { // try from 009de1b4 to 009de1d3 has its CatchHandler @ 009de590 */
          local_d0 = (float)BaseTerrain::getInterpolatedHeightAtPoint
                                      ((BaseTerrain *)(plVar15 + 0x2e),
                                       *(float *)param_3 / *(float *)(plVar15 + 0x43) +
                                       *(float *)((long)plVar15 + 0x204),
                                       *(float *)(param_3 + 8) / *(float *)(plVar15 + 0x43) +
                                       *(float *)((long)plVar15 + 0x204));
          local_d0 = 1000.0 - local_d0;
          FUN_009de5b8(&local_158,&local_f0);
        }
      }
      else {
                    /* try { // try from 009de1dc to 009de1df has its CatchHandler @ 009de58c */
        lVar4 = Geometry::getCollisionProxyMesh();
        if (lVar4 != 0) {
                    /* try { // try from 009de1e8 to 009de1ef has its CatchHandler @ 009de57c */
          RawTransformGroup::updateWorldTransformation();
                    /* try { // try from 009de1f4 to 009de1fb has its CatchHandler @ 009de588 */
          Matrix4x4::invert3x4((Matrix4x4 *)&local_f0,(Matrix4x4 *)(plVar15 + 0x17));
          uVar19 = *(undefined4 *)param_4;
          fVar18 = *(float *)(param_4 + 4);
          uVar23 = *(undefined4 *)(param_4 + 8);
          uVar20 = NEON_fmadd(uVar19,local_f0._4_4_,local_dc * fVar18);
          uVar21 = NEON_fmadd(uVar19,(undefined4)local_f0,local_e0 * fVar18);
          uVar19 = NEON_fmadd(uVar19,local_e8,fStack_d8 * fVar18);
          fStack_10c = (float)NEON_fmadd(uVar23,uStack_cc,uVar20);
          local_110 = (float)NEON_fmadd(uVar23,local_d0,uVar21);
          local_108 = (float)NEON_fmadd(uVar23,local_c8,uVar19);
          uVar20 = *(undefined4 *)param_3;
          fVar18 = *(float *)(param_3 + 4);
          uVar23 = NEON_fmadd(local_110,local_110,fStack_10c * fStack_10c);
          uVar19 = NEON_fmadd(uVar20,local_f0._4_4_,fVar18 * local_dc);
          uVar21 = NEON_fmadd(uVar20,(undefined4)local_f0,fVar18 * local_e0);
          uVar20 = NEON_fmadd(uVar20,local_e8,fVar18 * fStack_d8);
          fVar22 = (float)NEON_fmadd(local_108,local_108,uVar23);
          uVar23 = *(undefined4 *)(param_3 + 8);
          local_100 = (float)NEON_fmadd(uVar23,local_d0,uVar21);
          fStack_fc = (float)NEON_fmadd(uVar23,uStack_cc,uVar19);
          fVar18 = SQRT(fVar22);
          local_f8 = (float)NEON_fmadd(uVar23,local_c8,uVar20);
          local_f8 = local_b8 + local_f8;
          local_100 = local_100 + local_c0;
          fStack_fc = fStack_bc + fStack_fc;
          fVar24 = 1.0 / fVar18;
          if (fVar22 <= 1e-06) {
            fVar24 = 1.0;
          }
          local_110 = local_110 * fVar24;
          fStack_10c = fStack_10c * fVar24;
          local_108 = local_108 * fVar24;
                    /* try { // try from 009de2c8 to 009de2cf has its CatchHandler @ 009de584 */
          lVar4 = TriangleSet::getPositions();
                    /* try { // try from 009de2d4 to 009de2db has its CatchHandler @ 009de580 */
          uVar3 = IndexedTriangleSet::getNumIndices();
                    /* try { // try from 009de2e0 to 009de2f3 has its CatchHandler @ 009de594 */
          uVar5 = IndexedTriangleSet::is16Bit();
          if ((uVar5 & 1) == 0) {
                    /* try { // try from 009de3d8 to 009de3df has its CatchHandler @ 009de594 */
            lVar6 = IndexedTriangleSet::getIndices32();
            if (2 < uVar3) {
              plVar16 = (long *)0x0;
              piVar14 = (int *)(lVar6 + 8);
              fVar22 = 3.402823e+38;
              uVar5 = (ulong)uVar3 / 3;
              do {
                pplVar10 = (long **)(lVar4 + (ulong)(uint)(piVar14[-2] * 3) * 4);
                local_138 = *pplVar10;
                local_130 = *(undefined4 *)(pplVar10 + 1);
                puVar9 = (undefined4 *)(lVar4 + (ulong)(uint)(piVar14[-1] * 3) * 4);
                local_a0 = *puVar9;
                local_9c = puVar9[1];
                local_98 = puVar9[2];
                puVar9 = (undefined4 *)(lVar4 + (ulong)(uint)(*piVar14 * 3) * 4);
                local_b0 = *puVar9;
                local_ac = puVar9[1];
                local_a8 = puVar9[2];
                local_13c = 3.402823e+38;
                    /* try { // try from 009de488 to 009de4a3 has its CatchHandler @ 009de598 */
                uVar7 = MathUtil::rayTriangleIntersect3D
                                  ((Vector3 *)&local_100,(Vector3 *)&local_110,(Vector3 *)&local_138
                                   ,(Vector3 *)&local_a0,(Vector3 *)&local_b0,&local_13c);
                if (((uVar7 & 1) != 0) && (local_13c / fVar18 < fVar22)) {
                  plVar16 = plVar15;
                  fVar22 = local_13c / fVar18;
                }
                uVar5 = uVar5 - 1;
                piVar14 = piVar14 + 3;
              } while (uVar5 != 0);
              goto LAB_009de4c4;
            }
          }
          else {
            lVar6 = IndexedTriangleSet::getIndices16();
            if (2 < uVar3) {
              plVar16 = (long *)0x0;
              puVar13 = (ushort *)(lVar6 + 4);
              fVar22 = 3.402823e+38;
              uVar5 = (ulong)uVar3 / 3;
              do {
                pplVar10 = (long **)(lVar4 + (ulong)puVar13[-2] * 0xc);
                local_138 = *pplVar10;
                local_130 = *(undefined4 *)(pplVar10 + 1);
                puVar9 = (undefined4 *)(lVar4 + (ulong)puVar13[-1] * 0xc);
                local_a0 = *puVar9;
                local_9c = puVar9[1];
                local_98 = puVar9[2];
                puVar9 = (undefined4 *)(lVar4 + (ulong)*puVar13 * 0xc);
                local_b0 = *puVar9;
                local_ac = puVar9[1];
                local_a8 = puVar9[2];
                local_13c = 3.402823e+38;
                    /* try { // try from 009de39c to 009de3b7 has its CatchHandler @ 009de59c */
                uVar7 = MathUtil::rayTriangleIntersect3D
                                  ((Vector3 *)&local_100,(Vector3 *)&local_110,(Vector3 *)&local_138
                                   ,(Vector3 *)&local_a0,(Vector3 *)&local_b0,&local_13c);
                if (((uVar7 & 1) != 0) && (local_13c / fVar18 < fVar22)) {
                  plVar16 = plVar15;
                  fVar22 = local_13c / fVar18;
                }
                uVar5 = uVar5 - 1;
                puVar13 = puVar13 + 3;
              } while (uVar5 != 0);
LAB_009de4c4:
              if (plVar16 != (long *)0x0) {
                    /* try { // try from 009de4d4 to 009de4df has its CatchHandler @ 009de578 */
                local_138 = plVar15;
                local_118 = fVar22;
                FUN_009de5b8(&local_158,&local_138);
              }
            }
          }
        }
      }
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < *(int *)(param_2 + 0x10));
  }
  local_f0 = Hit::sortByDistanceAsc;
                    /* try { // try from 009de4f8 to 009de4ff has its CatchHandler @ 009de574 */
  std::__ndk1::
  __sort<bool(*&)(ProceduralPlacementRaycastObjectsMask::Hit_const&,ProceduralPlacementRaycastObjectsMask::Hit_const&),ProceduralPlacementRaycastObjectsMask::Hit*>
            ((Hit *)local_158,(Hit *)local_150,(_func_bool_Hit_ptr_Hit_ptr *)&local_f0);
  if (local_150 == local_158) {
    bVar2 = false;
    bVar8 = false;
    if (local_150 == (TransformGroup **)0x0) goto LAB_009de534;
  }
  else {
    bVar2 = *local_158 == param_1;
  }
  local_150 = local_158;
  operator_delete(local_158);
  bVar8 = bVar2;
LAB_009de534:
  if (*(long *)(lVar1 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar8;
}


