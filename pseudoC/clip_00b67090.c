// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clip
// Entry Point: 00b67090
// Size: 2764 bytes
// Signature: undefined __thiscall clip(Brep * this, vector * param_1, Matrix4x4 * param_2, float param_3, float param_4, short param_5, float param_6, bool param_7, bool param_8)


/* Brep::clip(std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned int> >&, Matrix4x4
   const&, float, float, short, float, bool, bool) */

void __thiscall
Brep::clip(Brep *this,vector *param_1,Matrix4x4 *param_2,float param_3,float param_4,short param_5,
          float param_6,bool param_7,bool param_8)

{
  uint uVar1;
  int **ppiVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  long lVar6;
  float *pfVar7;
  void **ppvVar8;
  float *pfVar9;
  int iVar10;
  ulong uVar11;
  void *pvVar12;
  void *__dest;
  ulong uVar13;
  uint *__dest_00;
  ushort uVar14;
  Vector3 *pVVar15;
  long lVar16;
  void **ppvVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  undefined4 *puVar21;
  float *pfVar22;
  void **ppvVar23;
  undefined4 *puVar24;
  uint *puVar25;
  uint *puVar26;
  uint uVar27;
  void *pvVar28;
  uint *__src;
  uint *puVar29;
  ulong uVar30;
  void *pvVar31;
  size_t sVar32;
  float *pfVar33;
  void *__src_00;
  uint uVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  __tree_node **local_180;
  __tree_node *local_178;
  undefined8 uStack_170;
  float *local_168;
  float *local_160;
  undefined8 local_158;
  void *local_150;
  undefined4 *local_148;
  undefined4 *local_140;
  void *local_138;
  void *local_130;
  undefined8 local_128;
  uint *local_120;
  uint *local_118;
  uint *local_110;
  undefined8 local_108;
  void **local_100;
  void **local_f8;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  long local_a0;
  
  lVar6 = tpidr_el0;
  local_a0 = *(long *)(lVar6 + 0x28);
  local_b8 = *(float *)param_2;
  fStack_b4 = *(float *)(param_2 + 4);
  local_b0 = *(float *)(param_2 + 8);
  fVar38 = (float)NEON_fmadd(local_b8,*(undefined4 *)(param_2 + 0x30),
                             fStack_b4 * *(float *)(param_2 + 0x34));
  local_120 = (uint *)0x0;
  local_118 = (uint *)0x0;
  lVar20 = *(long *)(this + 0x2f68);
  local_110 = (uint *)0x0;
  local_138 = (void *)0x0;
  local_130 = (void *)0x0;
  local_a8 = (float)NEON_fmadd(local_b0,*(undefined4 *)(param_2 + 0x38),fVar38);
  fStack_ac = (float)NEON_fnmadd(local_b0,*(undefined4 *)(param_2 + 0x38),-fVar38);
  local_128 = 0;
  local_a8 = ABS(local_a8);
  if (local_a8 <= 1.0) {
    local_a8 = 1.0;
  }
  lVar16 = *(long *)(this + 0x2f70);
  local_a8 = local_a8 * 1.192093e-06;
  if ((int)((ulong)(lVar16 - lVar20) >> 5) != 0) {
    fVar38 = ABS(local_b8);
    fVar39 = ABS(fStack_b4);
    fVar40 = ABS(local_b0);
    uVar27 = 0;
    do {
      if (this[0x2fb4] == (Brep)0x0) {
LAB_00b671f4:
                    /* try { // try from 00b671f4 to 00b6721b has its CatchHandler @ 00b67bb8 */
        iVar10 = split(this,(Split *)((ulong)&local_108 | 4),uVar27,(BrepPlane *)&local_b8);
        local_108 = (void **)CONCAT44(local_108._4_4_,iVar10);
        if (iVar10 != 0) {
          FUN_00b67c38(&local_138,&local_108);
        }
        lVar16 = *(long *)(this + 0x2f70);
        lVar20 = *(long *)(this + 0x2f68);
      }
      else {
        puVar21 = (undefined4 *)(*(long *)(this + 0x2f80) + (ulong)uVar27 * 0x18);
        uVar35 = NEON_fmadd(local_b8,puVar21[3],fStack_b4 * (float)puVar21[4]);
        fVar36 = (float)NEON_fmadd(local_b0,puVar21[5],uVar35);
        uVar35 = NEON_fmadd(fVar38,*puVar21,fVar39 * (float)puVar21[1]);
        fVar37 = (float)NEON_fmadd(fVar40,puVar21[2],uVar35);
        if (ABS(fVar36 + fStack_ac) <= fVar37) goto LAB_00b671f4;
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 != (uint)((ulong)(lVar16 - lVar20) >> 5));
  }
  local_108 = (void **)0x0;
  local_100 = (void **)0x0;
  local_f8 = (void **)0x0;
                    /* try { // try from 00b67228 to 00b6722f has its CatchHandler @ 00b67b78 */
  local_108 = (void **)operator_new(0x48);
  local_f8 = local_108 + 9;
  local_150 = (void *)0x0;
  local_148 = (undefined4 *)0x0;
  local_140 = (undefined4 *)0x0;
  local_100 = local_108;
  if (local_138 == local_130) {
    pvVar31 = (void *)0x0;
    puVar26 = (uint *)0x0;
    __src = (uint *)0x0;
  }
  else {
    pvVar31 = (void *)0x0;
    puVar21 = (undefined4 *)0x0;
    puVar24 = (undefined4 *)0x0;
    do {
      local_168 = (float *)0x0;
      local_160 = (float *)0x0;
      local_158 = 0;
                    /* try { // try from 00b6728c to 00b6729b has its CatchHandler @ 00b67bb0 */
      uVar11 = findSplitContour(this,(vector *)&local_168,(vector *)&local_138);
      pfVar22 = local_160;
      if (((uVar11 & 1) != 0) &&
         (1 < (ulong)(((long)local_160 - (long)local_168 >> 3) * -0x5555555555555555))) {
        pfVar22 = local_160 + -6;
        if (param_8) {
          fVar39 = local_168[1] - *(float *)(param_2 + 0x34);
          fVar38 = *local_168 - *(float *)(param_2 + 0x30);
          fVar40 = local_168[2] - *(float *)(param_2 + 0x38);
          uVar41 = NEON_fmadd(fVar38,*(undefined4 *)(param_2 + 0x10),
                              fVar39 * *(float *)(param_2 + 0x14));
          uVar35 = NEON_fmadd(fVar38,*(undefined4 *)(param_2 + 0x20),
                              fVar39 * *(float *)(param_2 + 0x24));
          fVar38 = (float)NEON_fmadd(fVar40,*(undefined4 *)(param_2 + 0x18),uVar41);
          fVar36 = (float)NEON_fmadd(fVar40,*(undefined4 *)(param_2 + 0x28),uVar35);
          fVar39 = fVar38;
          fVar40 = fVar36;
          pfVar33 = local_168;
          while (pfVar7 = pfVar33 + 6, pfVar7 != pfVar22) {
            fVar37 = pfVar33[7] - *(float *)(param_2 + 0x34);
            fVar42 = *pfVar7 - *(float *)(param_2 + 0x30);
            fVar43 = pfVar33[8] - *(float *)(param_2 + 0x38);
            uVar41 = NEON_fmadd(fVar42,*(undefined4 *)(param_2 + 0x10),
                                *(float *)(param_2 + 0x14) * fVar37);
            uVar35 = NEON_fmadd(fVar42,*(undefined4 *)(param_2 + 0x20),
                                *(float *)(param_2 + 0x24) * fVar37);
            fVar42 = (float)NEON_fmadd(fVar43,*(undefined4 *)(param_2 + 0x18),uVar41);
            fVar37 = (float)NEON_fmadd(fVar43,*(undefined4 *)(param_2 + 0x28),uVar35);
            if (fVar42 < fVar39) {
              fVar39 = fVar42;
            }
            if (fVar38 < fVar42) {
              fVar38 = fVar42;
            }
            if (fVar37 < fVar36) {
              fVar36 = fVar37;
            }
            pfVar33 = pfVar7;
            if (fVar40 < fVar37) {
              fVar40 = fVar37;
            }
          }
          if (((fVar39 < 0.0 || fVar38 != param_3) && (fVar39 < 0.0 || param_3 <= fVar38)) ||
             ((fVar36 < 0.0 || fVar40 != param_4) && (fVar36 < 0.0 || param_4 <= fVar40)))
          goto LAB_00b67624;
        }
        if (local_168[3] != 1.0) {
          fVar39 = local_168[4];
          fVar40 = local_160[-8];
          fVar38 = (float)((int)fVar39 - 2);
          if (((int)fVar39 + 1U & 3) != 0) {
            fVar38 = (float)((int)fVar39 + 1);
          }
          if (fVar38 == fVar40) {
            fVar38 = (float)((uint)((ulong)(*(long *)(this + 0x2f70) - *(long *)(this + 0x2f68)) >>
                                   3) & 0xfffffffc | 2);
          }
          else {
            iVar10 = (int)fVar40 + -2;
            if (((int)fVar40 + 1U & 3) != 0) {
              iVar10 = (int)fVar40 + 1;
            }
            if (*(int *)(*(long *)(this + 0x2f68) + (ulong)(uint)fVar39 * 8 + 4) != iVar10)
            goto LAB_00b67414;
            fVar38 = (float)((int)((ulong)(*(long *)(this + 0x2f70) - *(long *)(this + 0x2f68)) >> 3
                                  ) + 4U | 3);
          }
          local_160[-8] = fVar38;
        }
LAB_00b67414:
        local_178 = (__tree_node *)0x0;
        uStack_170 = 0;
        uVar11 = ((long)pfVar22 - (long)local_168 >> 3) * -0x5555555555555555;
        local_180 = &local_178;
        local_160 = pfVar22;
        if ((int)uVar11 == 0) {
LAB_00b67468:
          uVar35 = (undefined4)((ulong)(*(long *)(this + 0x2ef8) - *(long *)(this + 0x2ef0)) >> 4);
          if (puVar24 < puVar21) {
            *puVar24 = uVar35;
            pfVar33 = local_168;
            pfVar22 = local_160;
            local_148 = puVar24 + 1;
            ppvVar17 = local_100;
            pvVar12 = pvVar31;
            puVar24 = puVar24 + 1;
          }
          else {
            sVar32 = (long)puVar24 - (long)pvVar31;
            uVar11 = ((long)sVar32 >> 2) + 1;
            if (uVar11 >> 0x3e != 0) {
                    /* try { // try from 00b67b2c to 00b67b3f has its CatchHandler @ 00b67b8c */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            uVar13 = (long)puVar21 - (long)pvVar31 >> 1;
            if (uVar11 <= uVar13) {
              uVar11 = uVar13;
            }
            if (0x7ffffffffffffffb < (ulong)((long)puVar21 - (long)pvVar31)) {
              uVar11 = 0x3fffffffffffffff;
            }
            if (uVar11 == 0) {
              pvVar12 = (void *)0x0;
            }
            else {
              if (uVar11 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00b674dc to 00b674df has its CatchHandler @ 00b67b70 */
              pvVar12 = operator_new(uVar11 << 2);
            }
            puVar21 = (undefined4 *)((long)pvVar12 + ((long)sVar32 >> 2) * 4);
            puVar24 = puVar21 + 1;
            *puVar21 = uVar35;
            if (0 < (long)sVar32) {
              memcpy(pvVar12,pvVar31,sVar32);
            }
            puVar21 = (undefined4 *)((long)pvVar12 + uVar11 * 4);
            pfVar33 = local_168;
            pfVar22 = local_160;
            local_150 = pvVar12;
            local_148 = puVar24;
            local_140 = puVar21;
            ppvVar17 = local_100;
            if (pvVar31 != (void *)0x0) {
              operator_delete(pvVar31);
              pfVar33 = local_168;
              pfVar22 = local_160;
              ppvVar17 = local_100;
            }
          }
          while (pvVar31 = pvVar12, pfVar7 = pfVar33, pfVar9 = local_160, local_100 = ppvVar17,
                pfVar7 != local_160) {
            pfVar33 = pfVar7 + 6;
            local_160 = pfVar9;
            pvVar12 = pvVar31;
            if (pfVar7[3] != 1.0) {
              if (pfVar33 != local_160) {
                fVar40 = pfVar7[4];
                fVar39 = pfVar7[10];
                fVar38 = (float)((int)fVar40 - 2);
                if (((int)fVar40 + 1U & 3) != 0) {
                  fVar38 = (float)((int)fVar40 + 1);
                }
                if (fVar38 == fVar39) {
                  fVar38 = (float)((uint)((ulong)(*(long *)(this + 0x2f70) -
                                                 *(long *)(this + 0x2f68)) >> 3) & 0xfffffffc | 2);
                }
                else {
                  iVar10 = (int)fVar39 + -2;
                  if (((int)fVar39 + 1U & 3) != 0) {
                    iVar10 = (int)fVar39 + 1;
                  }
                  if (*(int *)(*(long *)(this + 0x2f68) + (ulong)(uint)fVar40 * 8 + 4) != iVar10)
                  goto LAB_00b67554;
                  fVar38 = (float)((int)((ulong)(*(long *)(this + 0x2f70) - *(long *)(this + 0x2f68)
                                                ) >> 3) + 4U | 3);
                }
                pfVar7[10] = fVar38;
              }
LAB_00b67554:
              local_160 = pfVar22;
                    /* try { // try from 00b67554 to 00b6755b has its CatchHandler @ 00b67bc0 */
              splitEdge(this,(Split *)pfVar7);
              pfVar22 = local_160;
              ppvVar17 = local_100;
              local_160 = pfVar9;
            }
          }
          if (ppvVar17 == local_f8) {
                    /* try { // try from 00b67608 to 00b67613 has its CatchHandler @ 00b67b74 */
            local_160 = pfVar22;
            std::__ndk1::
            vector<std::__ndk1::vector<Brep::Split,std::__ndk1::allocator<Brep::Split>>,std::__ndk1::allocator<std::__ndk1::vector<Brep::Split,std::__ndk1::allocator<Brep::Split>>>>
            ::
            __push_back_slow_path<std::__ndk1::vector<Brep::Split,std::__ndk1::allocator<Brep::Split>>const&>
                      ((vector<std::__ndk1::vector<Brep::Split,std::__ndk1::allocator<Brep::Split>>,std::__ndk1::allocator<std::__ndk1::vector<Brep::Split,std::__ndk1::allocator<Brep::Split>>>>
                        *)&local_108,(vector *)&local_168);
          }
          else {
                    /* try { // try from 00b675ec to 00b675f7 has its CatchHandler @ 00b67b80 */
            local_160 = pfVar22;
            std::__ndk1::vector<Brep::Split,std::__ndk1::allocator<Brep::Split>>::vector
                      ((vector<Brep::Split,std::__ndk1::allocator<Brep::Split>> *)ppvVar17,
                       (vector *)&local_168);
            local_100 = ppvVar17 + 3;
          }
        }
        else {
          lVar20 = 0;
          while( true ) {
            pVVar15 = (Vector3 *)((long)local_168 + lVar20);
                    /* try { // try from 00b67444 to 00b6744f has its CatchHandler @ 00b67bc4 */
            std::__ndk1::__tree<Vector3,Vector3Comparator,std::__ndk1::allocator<Vector3>>::
            __emplace_unique_key_args<Vector3,Vector3_const&>
                      ((__tree<Vector3,Vector3Comparator,std::__ndk1::allocator<Vector3>> *)
                       &local_180,pVVar15,pVVar15);
            if (((ulong)pVVar15 & 1) == 0) break;
            if ((uVar11 & 0xffffffff) * 0x18 + -0x18 == lVar20) goto LAB_00b67468;
            lVar20 = lVar20 + 0x18;
          }
        }
        std::__ndk1::__tree<Vector3,Vector3Comparator,std::__ndk1::allocator<Vector3>>::destroy
                  ((__tree<Vector3,Vector3Comparator,std::__ndk1::allocator<Vector3>> *)&local_180,
                   local_178);
        pfVar22 = local_160;
      }
LAB_00b67624:
      local_160 = pfVar22;
      if (local_168 != (float *)0x0) {
        local_160 = local_168;
        operator_delete(local_168);
      }
    } while (local_138 != local_130);
    ppiVar2 = (int **)(param_1 + 8);
    if (local_100 == local_108) {
      puVar26 = (uint *)0x0;
      __src = (uint *)0x0;
    }
    else {
      puVar29 = (uint *)0x0;
      uVar11 = 0;
      puVar25 = (uint *)0x0;
      __src = (uint *)0x0;
      do {
        ppvVar17 = local_108 + uVar11 * 3;
        pvVar28 = ppvVar17[1];
        lVar20 = *(long *)param_1;
        lVar16 = *(long *)(param_1 + 8);
        pvVar12 = pvVar28;
        if (*ppvVar17 != pvVar28) {
          lVar18 = *(long *)(this + 0x2ef0);
          uVar14 = *(ushort *)(lVar18 + (ulong)*(ushort *)((long)pvVar28 + -4) * 0x10 + 0xc);
          pvVar12 = *ppvVar17;
          while( true ) {
            uVar5 = *(ushort *)(lVar18 + (ulong)*(ushort *)((long)pvVar12 + 0x14) * 0x10 + 0xc);
                    /* try { // try from 00b676b8 to 00b6773f has its CatchHandler @ 00b67ba4 */
            iVar10 = findEdge(this,uVar14,uVar5);
            piVar19 = *ppiVar2;
            if (iVar10 == -1) {
              if (piVar19 != *(int **)param_1) {
                *ppiVar2 = *(int **)param_1;
              }
              goto LAB_00b67a5c;
            }
            if (piVar19 == *(int **)(param_1 + 0x10)) {
              __src_00 = *(void **)param_1;
              uVar30 = (long)piVar19 - (long)__src_00;
              uVar13 = ((long)uVar30 >> 2) + 1;
              if (uVar13 >> 0x3e != 0) {
                    /* try { // try from 00b67b18 to 00b67b2b has its CatchHandler @ 00b67b98 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar13 <= (ulong)((long)uVar30 >> 1)) {
                uVar13 = (long)uVar30 >> 1;
              }
              if (0x7ffffffffffffffb < uVar30) {
                uVar13 = 0x3fffffffffffffff;
              }
              if (uVar13 == 0) {
                __dest = (void *)0x0;
              }
              else {
                if (uVar13 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                __dest = operator_new(uVar13 << 2);
              }
              piVar19 = (int *)((long)__dest + ((long)uVar30 >> 2) * 4);
              *piVar19 = iVar10;
              if (0 < (long)uVar30) {
                memcpy(__dest,__src_00,uVar30);
              }
              *(void **)param_1 = __dest;
              *(int **)(param_1 + 8) = piVar19 + 1;
              *(void **)(param_1 + 0x10) = (void *)((long)__dest + uVar13 * 4);
              if (__src_00 != (void *)0x0) {
                operator_delete(__src_00);
              }
            }
            else {
              *piVar19 = iVar10;
              *ppiVar2 = piVar19 + 1;
            }
            if ((void *)((long)pvVar12 + 0x18) == pvVar28) break;
            lVar18 = *(long *)(this + 0x2ef0);
            uVar14 = uVar5;
            pvVar12 = (void *)((long)pvVar12 + 0x18);
          }
          pvVar28 = ppvVar17[1];
          pvVar12 = *ppvVar17;
        }
        uVar27 = (int)((ulong)((long)pvVar28 - (long)pvVar12) >> 3) * -0x55555555;
        if (3 < uVar27) {
          uVar34 = 0;
          do {
            iVar10 = (int)((ulong)(lVar16 - lVar20) >> 2);
            uVar1 = uVar34 + 1;
            uVar4 = *(uint *)(*(long *)param_1 + (ulong)(uVar34 + iVar10) * 4);
            if (*(uint *)((long)pvVar31 + uVar11 * 4) <=
                (uint)*(ushort *)
                       (*(long *)(this + 0x2f50) +
                       (ulong)*(ushort *)(*(long *)(this + 0x2f68) + (ulong)uVar4 * 8) * 0xc)) {
              uVar3 = 0;
              if (uVar1 != uVar27) {
                uVar3 = uVar1;
              }
                    /* try { // try from 00b67850 to 00b6786b has its CatchHandler @ 00b67b9c */
              uVar13 = checkSplitVertexCollapse
                                 (this,uVar4,
                                  *(uint *)(*(long *)param_1 + (ulong)(uVar3 + iVar10) * 4));
              if ((uVar13 & 1) != 0) {
                contract(this,uVar4);
                pvVar12 = (void *)(*(long *)param_1 +
                                   ((ulong)(lVar16 - lVar20) >> 2 & 0xffffffff) * 4 +
                                  (ulong)uVar34 * 4);
                sVar32 = *(long *)(param_1 + 8) - (long)(void *)((long)pvVar12 + 4);
                if (sVar32 != 0) {
                  memmove(pvVar12,(void *)((long)pvVar12 + 4),sVar32);
                }
                uVar27 = uVar27 - 1;
                *ppiVar2 = (int *)((long)pvVar12 + sVar32);
                uVar1 = uVar34;
              }
            }
            uVar34 = uVar1;
          } while ((3 < uVar27) && (uVar34 < uVar27));
        }
        if (puVar25 == puVar29) {
          uVar30 = (long)puVar29 - (long)__src;
          uVar13 = ((long)uVar30 >> 2) + 1;
          if (uVar13 >> 0x3e != 0) {
                    /* try { // try from 00b67b40 to 00b67b57 has its CatchHandler @ 00b67b64 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar13 <= (ulong)((long)uVar30 >> 1)) {
            uVar13 = (long)uVar30 >> 1;
          }
          if (0x7ffffffffffffffb < uVar30) {
            uVar13 = 0x3fffffffffffffff;
          }
          if (uVar13 == 0) {
            __dest_00 = (uint *)0x0;
          }
          else {
            if (uVar13 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 00b67914 to 00b67917 has its CatchHandler @ 00b67b5c */
            __dest_00 = (uint *)operator_new(uVar13 << 2);
          }
          puVar26 = __dest_00 + ((long)uVar30 >> 2) + 1;
          __dest_00[(long)uVar30 >> 2] = uVar27;
          if (0 < (long)uVar30) {
            memcpy(__dest_00,__src,uVar30);
          }
          puVar29 = __dest_00 + uVar13;
          local_120 = __dest_00;
          local_118 = puVar26;
          local_110 = puVar29;
          if (__src != (uint *)0x0) {
            operator_delete(__src);
          }
        }
        else {
          puVar26 = puVar25 + 1;
          *puVar25 = uVar27;
          __dest_00 = __src;
          local_118 = puVar26;
        }
        uVar11 = (ulong)((int)uVar11 + 1);
        uVar13 = ((long)local_100 - (long)local_108 >> 3) * -0x5555555555555555;
        puVar25 = puVar26;
        __src = __dest_00;
      } while (uVar11 <= uVar13 && uVar13 - uVar11 != 0);
    }
  }
  if (*(long *)param_1 != *(long *)(param_1 + 8)) {
    if ((int)((ulong)((long)puVar26 - (long)__src) >> 2) != 0) {
      lVar20 = 0;
      uVar27 = 0;
      do {
                    /* try { // try from 00b67a08 to 00b67a23 has its CatchHandler @ 00b67b90 */
        uVar11 = triangulate(this,param_1,uVar27,*(uint *)((long)__src + lVar20),
                             (Vector3 *)&local_b8,param_5,param_6);
        if ((uVar11 & 1) == 0) {
          if (*(long *)(param_1 + 8) != *(long *)param_1) {
            *(long *)(param_1 + 8) = *(long *)param_1;
          }
          goto LAB_00b67a5c;
        }
        piVar19 = (int *)((long)__src + lVar20);
        lVar20 = lVar20 + 4;
        uVar27 = *piVar19 + uVar27;
      } while (((ulong)((long)puVar26 - (long)__src) >> 2 & 0xffffffff) * 4 - lVar20 != 0);
    }
                    /* try { // try from 00b67a3c to 00b67a43 has its CatchHandler @ 00b67b60 */
    floodShells();
  }
LAB_00b67a5c:
  if (pvVar31 != (void *)0x0) {
    operator_delete(pvVar31);
  }
  ppvVar17 = local_108;
  ppvVar23 = local_100;
  if (local_108 != (void **)0x0) {
    while (ppvVar8 = ppvVar23, ppvVar8 != ppvVar17) {
      ppvVar23 = ppvVar8 + -3;
      pvVar31 = *ppvVar23;
      if (pvVar31 != (void *)0x0) {
        ppvVar8[-2] = pvVar31;
        operator_delete(pvVar31);
      }
    }
    local_100 = ppvVar17;
    operator_delete(local_108);
  }
  if (local_138 != (void *)0x0) {
    local_130 = local_138;
    operator_delete(local_138);
  }
  if (__src != (uint *)0x0) {
    local_118 = __src;
    operator_delete(__src);
  }
  if (*(long *)(lVar6 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


