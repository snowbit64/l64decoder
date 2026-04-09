// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: splitShape
// Entry Point: 0097cddc
// Size: 3360 bytes
// Signature: undefined __thiscall splitShape(MeshSplitManager * this, MeshSplitShape * param_1, Matrix4x4 * param_2, float param_3, float param_4, float * param_5, float * param_6, float * param_7, float * param_8, vector * param_9)


/* MeshSplitManager::splitShape(MeshSplitShape*, Matrix4x4 const&, float, float, float&, float&,
   float&, float&, std::__ndk1::vector<MeshSplitManager::SplitShapeResult,
   std::__ndk1::allocator<MeshSplitManager::SplitShapeResult> >*) */

bool __thiscall
MeshSplitManager::splitShape
          (MeshSplitManager *this,MeshSplitShape *param_1,Matrix4x4 *param_2,float param_3,
          float param_4,float *param_5,float *param_6,float *param_7,float *param_8,vector *param_9)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  long lVar14;
  Brep *pBVar15;
  long *plVar16;
  long *plVar17;
  void *pvVar18;
  void *pvVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  ushort *puVar23;
  undefined4 *puVar24;
  ulong uVar25;
  uint uVar26;
  int iVar27;
  ulong uVar28;
  int *piVar29;
  Node *pNVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  uint uVar35;
  long lVar36;
  uint uVar37;
  long lVar38;
  ulong uVar39;
  long lVar40;
  long **pplVar41;
  uint uVar42;
  void **ppvVar43;
  uint uVar44;
  uint uVar45;
  ulong uVar46;
  ulong __n;
  void **ppvVar47;
  Brep **ppBVar48;
  float fVar49;
  float fVar50;
  void *local_6a8;
  GsShape *local_678;
  int *local_670;
  void **local_5f8;
  void **local_5f0;
  void *local_5e0;
  void *local_5d8;
  undefined8 local_5d0;
  uint local_5c8 [32];
  Brep *local_548 [32];
  Matrix4x4 aMStack_448 [64];
  float local_408;
  float local_404;
  float local_400;
  undefined8 local_3f8;
  undefined4 local_3f0;
  BrepPlane aBStack_f8 [24];
  Matrix4x4 aMStack_e0 [64];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  long local_80;
  
  lVar6 = tpidr_el0;
  local_80 = *(long *)(lVar6 + 0x28);
  lVar14 = RawTransformGroup::getPhysicsObject();
  if ((*(byte *)(lVar14 + 8) >> 3 & 1) != 0) {
    uVar2 = *(uint *)(param_1 + 0x208);
    uVar3 = *(uint *)(param_1 + 0x20c);
    local_90 = 0x35a00000;
    lVar14 = *(long *)(param_1 + 0x170);
    uStack_98 = 0x8000000000000000;
    local_a0 = 0x3f80000000000000;
    getSplitPlane((TransformGroup *)param_1,param_2,aBStack_f8,aMStack_e0);
    pBVar15 = *(Brep **)(lVar14 + 0x170);
    if (((((uint)(*(int *)(pBVar15 + 0x2ef8) - *(int *)(pBVar15 + 0x2ef0)) >> 4 & 0xffff) < 0x8001)
        && ((((uint)(*(int *)(pBVar15 + 0x2fa0) - *(int *)(pBVar15 + 0x2f98)) >> 3) * -0x5555 &
            0xffff) < 0x8001)) &&
       ((uint)((ulong)(*(long *)(pBVar15 + 0x2f70) - *(long *)(pBVar15 + 0x2f68)) >> 5) < 0x8001)) {
      plVar16 = *(long **)(lVar14 + 0x178);
      uVar28 = *(long *)(lVar14 + 0x180) - (long)plVar16;
      if ((int)(uVar28 >> 3) != 0) {
        uVar28 = uVar28 >> 3 & 0xffffffff;
        do {
          lVar32 = *plVar16;
          if (((0x8000 < ((uint)(*(int *)(lVar32 + 0x2ef8) - *(int *)(lVar32 + 0x2ef0)) >> 4 &
                         0xffff)) ||
              (0x8000 < (((uint)(*(int *)(lVar32 + 0x2fa0) - *(int *)(lVar32 + 0x2f98)) >> 3) *
                         -0x5555 & 0xffff))) ||
             (0x8000 < (uint)((ulong)(*(long *)(lVar32 + 0x2f70) - *(long *)(lVar32 + 0x2f68)) >> 5)
             )) goto LAB_0097d054;
          uVar28 = uVar28 - 1;
          plVar16 = plVar16 + 1;
        } while (uVar28 != 0);
      }
      iVar10 = Brep::classify(pBVar15,aBStack_f8);
      if (iVar10 == 3) {
        local_5e0 = (void *)0x0;
        local_5d8 = (void *)0x0;
        local_5d0 = 0;
                    /* try { // try from 0097cf7c to 0097cfe7 has its CatchHandler @ 0097db3c */
        plVar16 = (long *)Brep::clone();
        Brep::clip((Brep *)plVar16,(vector *)&local_5e0,aMStack_e0,param_3,param_4,1,
                   *(float *)(*(long *)(param_1 + 0x200) + 0x10),false,true);
        pvVar8 = local_5d8;
        pvVar7 = local_5e0;
        if (local_5e0 != local_5d8) {
          getClipArea(this,(vector *)&local_5e0,(Brep *)plVar16,aMStack_e0,param_5,param_6,param_7,
                      param_8);
          lVar32 = *(long *)(lVar14 + 0x178);
          lVar40 = *(long *)(lVar14 + 0x180);
          local_5f8 = (void **)0x0;
          local_5f0 = (void **)0x0;
          uVar42 = *(uint *)(plVar16 + 0x5f6);
          uVar28 = (ulong)uVar42;
          if (uVar42 != 0) {
                    /* try { // try from 0097d004 to 0097d00b has its CatchHandler @ 0097db14 */
            local_5f8 = (void **)operator_new(uVar28 * 0x18);
            uVar21 = (uVar28 * 0x18 - 0x18) / 0x18;
            memset(local_5f8,0,uVar21 * 0x18 + 0x18);
            local_5f0 = local_5f8 + uVar21 * 3 + 3;
          }
          if ((int)((ulong)(*(long *)(param_1 + 0x30) - (long)*(GsShape ***)(param_1 + 0x28)) >> 3)
              == 0) {
            local_678 = (GsShape *)0x0;
          }
          else {
            local_678 = **(GsShape ***)(param_1 + 0x28);
            if ((((byte)local_678[0x11] >> 3 & 1) == 0) ||
               (lVar22 = *(long *)(local_678 + 0x170), (*(byte *)(lVar22 + 0x31) >> 1 & 1) == 0)) {
              local_678 = (GsShape *)0x0;
            }
            else {
              lVar36 = plVar16[0x5ee];
              lVar38 = plVar16[0x5ed];
              if (uVar42 == 0) {
                local_6a8 = (void *)0x0;
              }
              else {
                    /* try { // try from 0097d0f8 to 0097d0ff has its CatchHandler @ 0097db04 */
                local_6a8 = operator_new(uVar28 << 2);
                memset(local_6a8,0,uVar28 << 2);
              }
              uVar21 = (ulong)(lVar36 - lVar38) >> 5 & 0xffffffff;
              if (uVar21 == 0) {
                local_670 = (int *)0x0;
              }
              else {
                    /* try { // try from 0097d12c to 0097d133 has its CatchHandler @ 0097dafc */
                local_670 = (int *)operator_new(uVar21 << 2);
                memset(local_670,0xff,uVar21 << 2);
              }
              uVar20 = (uint)((ulong)(lVar36 - lVar38) >> 5);
              if (uVar20 != 0) {
                puVar23 = (ushort *)plVar16[0x5ed];
                piVar29 = local_670;
                do {
                  if ((uint)((ulong)*puVar23 & 0x3fff) < uVar42) {
                    lVar36 = ((ulong)*puVar23 & 0x3fff) * 4;
                    iVar10 = *(int *)((long)local_6a8 + lVar36);
                    *piVar29 = iVar10;
                    *(int *)((long)local_6a8 + lVar36) = iVar10 + 1;
                  }
                  piVar29 = piVar29 + 1;
                  puVar23 = puVar23 + 0x10;
                  uVar21 = uVar21 - 1;
                } while (uVar21 != 0);
              }
              lVar36 = *(long *)(lVar22 + 0x90);
              uVar21 = *(long *)(lVar22 + 0x98) - lVar36;
              if ((int)(uVar21 >> 2) != 0) {
                uVar39 = 0;
                lVar38 = *(long *)(lVar22 + 0x68);
                uVar45 = uVar20;
                if (uVar20 < 2) {
                  uVar45 = 1;
                }
                uVar5 = ((uint)(*(int *)(*(long *)(lVar14 + 0x170) + 0x2f58) -
                               *(int *)(*(long *)(lVar14 + 0x170) + 0x2f50)) >> 2) * 0xaaab & 0xffff
                ;
                do {
                  puVar23 = (ushort *)(lVar36 + uVar39 * 4);
                  lVar31 = *(long *)(lVar38 + 0x10) + (ulong)puVar23[1] * 0x50;
                  uVar4 = *puVar23;
                  lVar36 = plVar16[0x5ed];
                  local_3f8 = *(undefined8 *)(lVar31 + 0x30);
                  local_3f0 = *(undefined4 *)(lVar31 + 0x38);
                  if (((*(ushort *)(lVar36 + (ulong)uVar4 * 0x20) & 0x3fff) < uVar42) &&
                     (*(ushort *)(lVar36 + (ulong)uVar4 * 0x20 + 8) < uVar5)) {
                    uVar26 = (uint)uVar4;
                    if (uVar5 <= *(ushort *)(lVar36 + (ulong)(uVar26 << 2 | 2) * 8))
                    goto LAB_0097d2a8;
                    bVar9 = uVar5 <= *(ushort *)(lVar36 + (ulong)(uVar26 << 2 | 3) * 8);
                    if (bVar9) {
                      uVar26 = 0xffffffff;
                    }
                    if (bVar9 && uVar20 != 0) goto LAB_0097d2ac;
LAB_0097d36c:
                    if (uVar26 < uVar20) {
                      iVar10 = local_670[uVar26];
                      uVar25 = (ulong)*(ushort *)(plVar16[0x5ed] + (ulong)uVar26 * 0x20) & 0x3fff;
                      lVar36 = *(long *)(lVar22 + 0x90);
                      ppvVar47 = local_5f8 + uVar25 * 3;
                      ppvVar43 = ppvVar47 + 1;
                      puVar24 = (undefined4 *)*ppvVar43;
                      if (puVar24 == (undefined4 *)ppvVar47[2]) {
                        pvVar19 = *ppvVar47;
                        __n = (long)puVar24 - (long)pvVar19;
                        uVar46 = ((long)__n >> 2) + 1;
                        if (uVar46 >> 0x3e != 0) {
                    /* try { // try from 0097dad0 to 0097dae3 has its CatchHandler @ 0097db24 */
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__vector_base_common<true>::__throw_length_error();
                        }
                        if (uVar46 <= (ulong)((long)__n >> 1)) {
                          uVar46 = (long)__n >> 1;
                        }
                        if (0x7ffffffffffffffb < __n) {
                          uVar46 = 0x3fffffffffffffff;
                        }
                        if (uVar46 == 0) {
                          pvVar18 = (void *)0x0;
                        }
                        else {
                          if (uVar46 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_006d1f18(
                                        "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                        );
                          }
                    /* try { // try from 0097d428 to 0097d42b has its CatchHandler @ 0097db08 */
                          pvVar18 = operator_new(uVar46 << 2);
                        }
                        puVar24 = (undefined4 *)((long)pvVar18 + ((long)__n >> 2) * 4);
                        *puVar24 = *(undefined4 *)(lVar36 + uVar39 * 4);
                        if (0 < (long)__n) {
                          memcpy(pvVar18,pvVar19,__n);
                        }
                        *ppvVar47 = pvVar18;
                        *ppvVar43 = puVar24 + 1;
                        ppvVar47[2] = (void *)((long)pvVar18 + uVar46 * 4);
                        if (pvVar19 != (void *)0x0) {
                          operator_delete(pvVar19);
                        }
                      }
                      else {
                        *puVar24 = *(undefined4 *)(lVar36 + uVar39 * 4);
                        *ppvVar43 = puVar24 + 1;
                      }
                      *(short *)((long)local_5f8[uVar25 * 3 + 1] + -4) = (short)iVar10;
                    }
                  }
                  else {
LAB_0097d2a8:
                    if (uVar20 != 0) {
LAB_0097d2ac:
                      uVar35 = 0;
                      lVar31 = 0;
                      uVar44 = 3;
                      fVar50 = 3.402823e+38;
                      uVar37 = 0xffffffff;
                      while( true ) {
                        uVar26 = uVar37;
                        fVar49 = fVar50;
                        if ((*(ushort *)(lVar36 + lVar31) & 0x3fff) < uVar42 &&
                            ((ushort *)(lVar36 + lVar31))[1] != 1) {
                          lVar34 = plVar16[0x5de];
                          lVar33 = plVar16[0x5ea];
                    /* try { // try from 0097d330 to 0097d337 has its CatchHandler @ 0097db5c */
                          fVar49 = (float)MathUtil::pointToTriangleDistanceSquared3D
                                                    ((Vector3 *)&local_3f8,
                                                     (Vector3 *)
                                                     (lVar34 + (ulong)*(ushort *)
                                                                       (lVar33 + (ulong)*(ushort *)
                                                                                         (lVar36 + (
                                                  ulong)(uVar44 - 2) * 8) * 0xc) * 0x10),
                                                  (Vector3 *)
                                                  (lVar34 + (ulong)*(ushort *)
                                                                    (lVar33 + (ulong)*(ushort *)
                                                                                      (lVar36 + (
                                                  ulong)(uVar44 - 1) * 8) * 0xc) * 0x10),
                                                  (Vector3 *)
                                                  (lVar34 + (ulong)*(ushort *)
                                                                    (lVar33 + (ulong)*(ushort *)
                                                                                      (lVar36 + (
                                                  ulong)uVar44 * 8) * 0xc) * 0x10));
                          uVar26 = uVar35;
                          if (fVar50 <= fVar49) {
                            uVar26 = uVar37;
                            fVar49 = fVar50;
                          }
                        }
                        fVar50 = fVar49;
                        if ((ulong)uVar45 * 0x20 + -0x20 == lVar31) break;
                        lVar36 = plVar16[0x5ed];
                        lVar31 = lVar31 + 0x20;
                        uVar35 = uVar35 + 1;
                        uVar44 = uVar44 + 4;
                        uVar37 = uVar26;
                      }
                      goto LAB_0097d36c;
                    }
                  }
                  uVar39 = uVar39 + 1;
                  if (uVar39 == (uVar21 >> 2 & 0xffffffff)) break;
                  lVar36 = *(long *)(lVar22 + 0x90);
                } while( true );
              }
              if (local_670 != (int *)0x0) {
                operator_delete(local_670);
              }
              if (local_6a8 != (void *)0x0) {
                operator_delete(local_6a8);
              }
            }
          }
          pNVar30 = *(Node **)(param_1 + 0x20);
          if (((byte)pNVar30[0x10] >> 6 & 1) != 0) {
            pNVar30 = *(Node **)(pNVar30 + 0x20);
          }
                    /* try { // try from 0097d504 to 0097d50f has its CatchHandler @ 0097db30 */
          ensurePlatformLimits(this,param_1);
          uVar39 = lVar40 - lVar32;
          memset(&local_3f8,0,0x300);
          uVar21 = uVar39 >> 3 & 0xffffffff;
          iVar10 = (int)(uVar39 >> 3);
          if (uVar42 != 0) {
            uVar39 = 0;
            do {
                    /* try { // try from 0097d570 to 0097d57b has its CatchHandler @ 0097db50 */
              plVar17 = (long *)Brep::extractShell((Brep *)plVar16,(ushort)uVar39);
              lVar32 = plVar17[0x5ee];
              lVar40 = plVar17[0x5ed];
                    /* try { // try from 0097d588 to 0097d58f has its CatchHandler @ 0097db54 */
              iVar11 = Brep::classify((Brep *)plVar17,aBStack_f8);
              if (iVar11 == 0) {
LAB_0097d554:
                (**(code **)(*plVar17 + 8))(plVar17);
              }
              else {
                    /* try { // try from 0097d598 to 0097d5a7 has its CatchHandler @ 0097db4c */
                BrepUtil::getOrientedBoundingBox((Brep *)plVar17,aMStack_448,(Vector3 *)&local_408);
                fVar50 = local_408 * local_404 * local_400;
                if ((((fVar50 < *(float *)(this + 0xc)) ||
                     (fVar49 = *(float *)(this + 8), local_408 < fVar49)) || (local_404 < fVar49))
                   || (local_400 < fVar49)) goto LAB_0097d554;
                uVar25 = lVar32 - lVar40;
                iVar27 = (int)(uVar25 >> 5);
                if (iVar27 == 0) {
                  uVar42 = 0;
                  uVar20 = 0;
                }
                else {
                  uVar46 = 0;
                  uVar20 = 0;
                  uVar42 = 0;
                  lVar32 = 4;
                  do {
                    uVar45 = *(uint *)(plVar17[0x5ed] + lVar32);
                    iVar12 = iVar11;
                    if (iVar11 == 3) {
                    /* try { // try from 0097d640 to 0097d64f has its CatchHandler @ 0097db84 */
                      iVar12 = Brep::classifyFace((Brep *)plVar17,(uint)uVar46,aBStack_f8);
                    }
                    if (iVar12 == 1) {
                      uVar20 = uVar45 | uVar20;
                    }
                    else {
                      if (iVar12 != 2) {
                        if (iVar12 != 3) goto LAB_0097d61c;
                        uVar20 = uVar45 | uVar20;
                      }
                      uVar42 = uVar45 | uVar42;
                    }
LAB_0097d61c:
                    uVar46 = uVar46 + 1;
                    lVar32 = lVar32 + 0x20;
                  } while ((uVar25 >> 5 & 0xffffffff) != uVar46);
                }
                if (iVar10 == 0) {
LAB_0097d8a0:
                  (**(code **)(*plVar17 + 8))(plVar17);
                }
                else {
                  uVar46 = 0;
                  uVar45 = 0;
                  ppBVar48 = (Brep **)&local_3f0;
                  do {
                    uVar5 = 1 << (ulong)((uint)uVar46 & 0x1f);
                    if ((uVar5 & (uVar20 | uVar42)) != 0) {
                      pBVar15 = *(Brep **)(*(long *)(lVar14 + 0x178) + uVar46 * 8);
                      if ((uVar5 & uVar42) == 0 || (uVar5 & uVar20) == 0) {
                        if (*(char *)(ppBVar48 + 1) == '\0') {
                    /* try { // try from 0097d714 to 0097d727 has its CatchHandler @ 0097db44 */
                          MeshSplitUtil::splitConvexHull
                                    (pBVar15,aBStack_f8,aMStack_e0,*(float *)(this + 0x14),
                                     ppBVar48 + -1,ppBVar48);
                          pBVar15 = ppBVar48[-1];
                          if (pBVar15 != (Brep *)0x0) {
                            FUN_00f276d0(1,pBVar15 + 8);
                          }
                          if (*ppBVar48 != (Brep *)0x0) {
                            FUN_00f276d0(1,*ppBVar48 + 8);
                          }
                          *(undefined *)(ppBVar48 + 1) = 1;
                        }
                        if ((uVar5 & uVar42) == 0) {
                          pBVar15 = *ppBVar48;
                        }
                        else {
                          pBVar15 = ppBVar48[-1];
                        }
                        if (pBVar15 == (Brep *)0x0) goto LAB_0097d6bc;
                      }
                      local_5c8[uVar45] = (uint)uVar46;
                      local_548[uVar45] = pBVar15;
                      uVar45 = uVar45 + 1;
                    }
LAB_0097d6bc:
                    uVar46 = uVar46 + 1;
                    ppBVar48 = ppBVar48 + 3;
                  } while (uVar21 != uVar46);
                  if (uVar45 == 0) goto LAB_0097d8a0;
                  if (iVar27 != 0) {
                    uVar46 = 0;
                    do {
                      uVar42 = 0;
                      lVar32 = (ulong)uVar45 << 2;
                      do {
                        lVar40 = lVar32 + -4;
                        lVar32 = lVar32 + -4;
                        uVar42 = *(uint *)(plVar17[0x5ed] + uVar46 * 0x20 + 4) >>
                                 (ulong)(*(uint *)((long)local_5c8 + lVar40) & 0x1f) & 1 |
                                 uVar42 << 1;
                      } while (lVar32 != 0);
                    /* try { // try from 0097d7b8 to 0097d7c3 has its CatchHandler @ 0097db58 */
                      Brep::setGroupId((Brep *)plVar17,(uint)uVar46,uVar42);
                      uVar46 = uVar46 + 1;
                    } while (uVar46 != (uVar25 >> 5 & 0xffffffff));
                  }
                    /* try { // try from 0097d7d0 to 0097d7db has its CatchHandler @ 0097db34 */
                  iVar11 = Brep::classify((Brep *)plVar17,(BrepPlane *)&local_a0);
                  fVar49 = *(float *)(this + 0x10);
                  FUN_00f276d0(1,plVar17 + 1);
                    /* try { // try from 0097d814 to 0097d857 has its CatchHandler @ 0097db38 */
                  lVar32 = createNewShape(this,pNVar30,param_1,0xffffffff,uVar2,uVar3,iVar11 != 3,
                                          (Brep *)plVar17,uVar45,local_548,local_678,
                                          (vector *)(local_5f8 + uVar39 * 3),fVar49 <= fVar50,true,1
                                         );
                  if ((param_9 != (vector *)0x0) && (lVar32 != 0)) {
                    /* try { // try from 0097d86c to 0097d877 has its CatchHandler @ 0097db2c */
                    uVar13 = Brep::classify((Brep *)plVar17,aBStack_f8);
                    plVar1 = *(long **)(param_9 + 8);
                    if (plVar1 == *(long **)(param_9 + 0x10)) {
                      pvVar19 = *(void **)param_9;
                      uVar46 = (long)plVar1 - (long)pvVar19;
                      uVar25 = ((long)uVar46 >> 4) + 1;
                      if (uVar25 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__vector_base_common<true>::__throw_length_error();
                      }
                      if (uVar25 <= (ulong)((long)uVar46 >> 3)) {
                        uVar25 = (long)uVar46 >> 3;
                      }
                      if (0x7fffffffffffffef < uVar46) {
                        uVar25 = 0xfffffffffffffff;
                      }
                      if (uVar25 >> 0x3c != 0) {
                    /* try { // try from 0097dae4 to 0097daf7 has its CatchHandler @ 0097db10 */
                    /* WARNING: Subroutine does not return */
                        FUN_006d1f18(
                                    "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                    );
                      }
                    /* try { // try from 0097d904 to 0097d907 has its CatchHandler @ 0097db2c */
                      pvVar18 = operator_new(uVar25 << 4);
                      plVar1 = (long *)((long)pvVar18 + ((long)uVar46 >> 4) * 0x10);
                      *plVar1 = lVar32;
                      *(undefined4 *)(plVar1 + 1) = uVar13;
                      if (0 < (long)uVar46) {
                        memcpy(pvVar18,pvVar19,uVar46);
                      }
                      *(void **)param_9 = pvVar18;
                      *(long **)(param_9 + 8) = plVar1 + 2;
                      *(void **)(param_9 + 0x10) = (void *)((long)pvVar18 + uVar25 * 0x10);
                      if (pvVar19 != (void *)0x0) {
                        operator_delete(pvVar19);
                      }
                    }
                    else {
                      *plVar1 = lVar32;
                      *(undefined4 *)(plVar1 + 1) = uVar13;
                      *(long **)(param_9 + 8) = plVar1 + 2;
                    }
                  }
                  iVar11 = FUN_00f27700(0xffffffff,plVar17 + 1);
                  if (iVar11 < 2) {
                    /* try { // try from 0097d970 to 0097d977 has its CatchHandler @ 0097db38 */
                    (**(code **)(*plVar17 + 0x10))(plVar17);
                  }
                }
              }
              uVar39 = uVar39 + 1;
            } while (uVar39 != uVar28);
          }
          if (iVar10 != 0) {
            lVar32 = 0;
            pplVar41 = (long **)&local_3f0;
            do {
              plVar17 = pplVar41[-1];
              if (((plVar17 != (long *)0x0) &&
                  (plVar17 != *(long **)(*(long *)(lVar14 + 0x178) + lVar32))) &&
                 (iVar10 = FUN_00f27700(0xffffffff,plVar17 + 1), iVar10 < 2)) {
                    /* try { // try from 0097d9e4 to 0097d9eb has its CatchHandler @ 0097db48 */
                (**(code **)(*plVar17 + 0x10))(plVar17);
              }
              plVar17 = *pplVar41;
              if (((plVar17 != (long *)0x0) &&
                  (plVar17 != *(long **)(*(long *)(lVar14 + 0x178) + lVar32))) &&
                 (iVar10 = FUN_00f27700(0xffffffff,plVar17 + 1), iVar10 < 2)) {
                    /* try { // try from 0097da20 to 0097da27 has its CatchHandler @ 0097db48 */
                (**(code **)(*plVar17 + 0x10))(plVar17);
              }
              pplVar41 = pplVar41 + 3;
              lVar32 = lVar32 + 8;
            } while (uVar21 * 8 - lVar32 != 0);
          }
          plVar17 = *(long **)(param_1 + 0x20);
          if ((plVar17 == (long *)0x0) || (((byte)*(MeshSplitShape *)(plVar17 + 2) >> 6 & 1) == 0))
          {
            lVar14 = *(long *)param_1;
            plVar17 = (long *)param_1;
          }
          else {
            lVar14 = *plVar17;
          }
          (**(code **)(lVar14 + 8))(plVar17);
          if (local_5f8 != (void **)0x0) {
            while (ppvVar43 = local_5f0, ppvVar43 != local_5f8) {
              local_5f0 = ppvVar43 + -3;
              pvVar19 = *local_5f0;
              if (pvVar19 != (void *)0x0) {
                ppvVar43[-2] = pvVar19;
                operator_delete(pvVar19);
              }
            }
            operator_delete(local_5f8);
          }
        }
        bVar9 = pvVar7 != pvVar8;
        (**(code **)(*plVar16 + 8))();
        if (local_5e0 != (void *)0x0) {
          local_5d8 = local_5e0;
          operator_delete(local_5e0);
        }
        goto LAB_0097d058;
      }
    }
  }
LAB_0097d054:
  bVar9 = false;
LAB_0097d058:
  if (*(long *)(lVar6 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar9;
}


