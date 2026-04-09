// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: subdivideTopPlane
// Entry Point: 008cd6b4
// Size: 3124 bytes
// Signature: undefined __thiscall subdivideTopPlane(FillPlaneGeometry * this, Brep * param_1, Brep * param_2, vector * param_3)


/* FillPlaneGeometry::subdivideTopPlane(Brep&, Brep&,
   std::__ndk1::vector<std::__ndk1::vector<unsigned short, std::__ndk1::allocator<unsigned short> >,
   std::__ndk1::allocator<std::__ndk1::vector<unsigned short, std::__ndk1::allocator<unsigned short>
   > > >&) */

void __thiscall
FillPlaneGeometry::subdivideTopPlane
          (FillPlaneGeometry *this,Brep *param_1,Brep *param_2,vector *param_3)

{
  bool bVar1;
  ushort *puVar2;
  ulong uVar3;
  VertexFormat *this_00;
  VertexFormat *pVVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  ushort uVar13;
  uint *puVar14;
  uint **ppuVar15;
  void *__dest;
  int iVar16;
  long lVar17;
  uint *puVar18;
  uint *puVar19;
  uint **ppuVar20;
  ulong uVar21;
  uint **ppuVar22;
  ulong uVar23;
  long lVar24;
  void *pvVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  uint **ppuVar30;
  uint uVar31;
  ulong uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  ushort local_124 [2];
  uint **local_120;
  uint ***local_118;
  Brep *pBStack_110;
  uint ***local_108;
  void *local_100;
  void *local_f8;
  void *local_f0;
  uint **local_e8;
  uint **local_e0;
  uint **local_d8;
  uint **local_d0;
  uint *local_c8;
  uint *local_c0;
  undefined8 local_b8;
  uint *local_b0;
  uint *puStack_a8;
  uint *local_a0;
  uint *puStack_98;
  long local_90;
  
  lVar12 = tpidr_el0;
  local_90 = *(long *)(lVar12 + 0x28);
  lVar24 = *(long *)(param_1 + 0x2f58);
  local_c8 = (uint *)0x0;
  local_c0 = (uint *)0x0;
  lVar26 = *(long *)(param_1 + 0x2f50);
  local_b8 = 0;
                    /* try { // try from 008cd708 to 008cd713 has its CatchHandler @ 008ce308 */
  computeMaxEdgeLengthsSquared(this,(vector *)&local_c8,param_1);
  uVar27 = (lVar24 - lVar26 >> 2) * -0x5555555555555555;
  puVar19 = puStack_a8;
  if (this[0x138] != (FillPlaneGeometry)0x0) {
    local_b0 = (uint *)0x0;
    puStack_a8 = (uint *)0x0;
    uVar29 = (uVar27 & 0xffff) - 3;
    local_a0 = (uint *)0x0;
    if (uVar29 != 0) {
      if (uVar29 >> 0x3e != 0) {
                    /* try { // try from 008ce2d8 to 008ce2e3 has its CatchHandler @ 008ce2f4 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 008cd758 to 008cd75b has its CatchHandler @ 008ce2f4 */
      puStack_a8 = (uint *)operator_new(uVar29 * 4);
      local_a0 = puStack_a8 + uVar29;
    }
    lVar24 = *(long *)(param_1 + 0x2f70);
    lVar26 = *(long *)(param_1 + 0x2f68);
    local_118 = (uint ***)param_1;
    local_d8 = (uint **)param_1;
    local_b0 = puStack_a8;
    if (((ulong)(lVar24 - lVar26) >> 3 & 0xfffffffc) == 0) {
      local_120 = &local_b0;
      local_e0 = local_120;
      puVar14 = puStack_a8;
      puVar19 = puStack_a8;
    }
    else {
      uVar29 = 0;
      uVar31 = 2;
      do {
        puVar19 = local_b0;
        uVar9 = uVar31 - 2;
        if (((uVar9 & 3) != 0) &&
           (lVar17 = *(long *)(param_1 + 0x2f68), *(int *)(lVar17 + uVar29 + 4) != -1)) {
          uVar5 = uVar31;
          if ((uVar31 - 3 & 3) != 0) {
            uVar5 = uVar31 - 3;
          }
          if (*(ushort *)(lVar17 + (ulong)uVar5 * 8) < *(ushort *)(lVar17 + uVar29)) {
            if (puStack_a8 == local_a0) {
              uVar28 = (long)puStack_a8 - (long)local_b0;
              uVar32 = ((long)uVar28 >> 2) + 1;
              if (uVar32 >> 0x3e != 0) {
                    /* try { // try from 008ce2a8 to 008ce2af has its CatchHandler @ 008ce314 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar32 <= (ulong)((long)uVar28 >> 1)) {
                uVar32 = (long)uVar28 >> 1;
              }
              if (0x7ffffffffffffffb < uVar28) {
                uVar32 = 0x3fffffffffffffff;
              }
              if (uVar32 == 0) {
                puVar14 = (uint *)0x0;
              }
              else {
                if (uVar32 >> 0x3e != 0) {
                    /* try { // try from 008ce2b8 to 008ce2c3 has its CatchHandler @ 008ce314 */
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                    /* try { // try from 008cd858 to 008cd85b has its CatchHandler @ 008ce2f0 */
                puVar14 = (uint *)operator_new(uVar32 << 2);
              }
              puVar18 = puVar14 + ((long)uVar28 >> 2);
              *puVar18 = uVar9;
              if (0 < (long)uVar28) {
                memcpy(puVar14,puVar19,uVar28);
              }
              local_a0 = puVar14 + uVar32;
              local_b0 = puVar14;
              puStack_a8 = puVar18 + 1;
              if (puVar19 != (uint *)0x0) {
                operator_delete(puVar19);
              }
            }
            else {
              *puStack_a8 = uVar9;
              puStack_a8 = puStack_a8 + 1;
            }
          }
        }
        uVar31 = uVar31 + 1;
        uVar29 = uVar29 + 8;
      } while ((lVar24 - lVar26 & 0x7ffffffe0U) != uVar29);
      local_120 = &local_b0;
      puVar18 = local_b0;
      local_e0 = local_120;
      puVar14 = local_b0;
      puVar19 = puStack_a8;
      if (local_b0 != puStack_a8) {
        do {
          puStack_a8 = puStack_a8 + -1;
          uVar9 = *puStack_a8;
          uVar29 = (ulong)uVar9;
          uVar31 = uVar9 - 2;
          if ((uVar9 + 1 & 3) != 0) {
            uVar31 = uVar9 + 1;
          }
          uVar32 = (ulong)uVar31;
          fVar33 = (float)local_c8[uVar29];
          fVar34 = (float)local_c8[uVar32];
          uVar5 = *(uint *)(*(long *)(param_1 + 0x2f68) + uVar29 * 8 + 4);
          uVar31 = uVar9 + 2;
          if ((uVar9 - 1 & 3) != 0) {
            uVar31 = uVar9 - 1;
          }
          uVar10 = uVar5 - 2;
          if ((uVar5 + 1 & 3) != 0) {
            uVar10 = uVar5 + 1;
          }
          uVar28 = (ulong)uVar10;
          uVar10 = uVar5 + 2;
          if ((uVar5 - 1 & 3) != 0) {
            uVar10 = uVar5 - 1;
          }
          fVar37 = (float)local_c8[uVar10];
          fVar35 = ((fVar33 + fVar34) - (float)local_c8[uVar31]) /
                   (SQRT(fVar33 * fVar34) + SQRT(fVar33 * fVar34));
          fVar38 = ((fVar33 + fVar37) - (float)local_c8[uVar28]) /
                   (SQRT(fVar33 * fVar37) + SQRT(fVar33 * fVar37));
          fVar39 = (float)NEON_fmsub(fVar35,fVar35,0x3f800000);
          fVar40 = 0.0;
          if (0.0 < fVar39) {
            fVar40 = fVar39;
          }
          fVar41 = (float)NEON_fmsub(fVar38,fVar38,0x3f800000);
          fVar39 = 0.0;
          if (0.0 < fVar41) {
            fVar39 = fVar41;
          }
          uVar36 = NEON_fmadd(fVar35,fVar38,SQRT(fVar39) * -SQRT(fVar40));
          fVar34 = (float)NEON_fmadd(SQRT(fVar34 * fVar37) * -2.0,uVar36,fVar34 + fVar37);
          if (fVar34 < fVar33 * 0.9999) {
                    /* try { // try from 008cd9d0 to 008cd9db has its CatchHandler @ 008ce340 */
            Brep::flipEdge(param_1,uVar9);
            local_c8[uVar5] = local_c8[uVar32];
            local_c8[uVar29] = local_c8[uVar28];
            local_c8[uVar32] = (uint)fVar34;
            local_c8[uVar28] = (uint)fVar34;
                    /* try { // try from 008cda00 to 008cda37 has its CatchHandler @ 008ce358 */
            FUN_008ce9c4(&local_e0,uVar32,uVar5);
            FUN_008ce9c4(&local_e0,uVar28,uVar29);
            FUN_008cec10(&local_120,uVar31);
            FUN_008cec10(&local_120,uVar10);
            puVar18 = local_b0;
          }
          puVar14 = puStack_a8;
          puVar19 = puStack_a8;
        } while (puVar18 != puStack_a8);
      }
    }
    puStack_a8 = puVar14;
    if (puStack_a8 != (uint *)0x0) {
      operator_delete(puStack_a8);
      puVar19 = puStack_a8;
    }
  }
  puStack_a8 = puVar19;
  uVar31 = (uint)uVar27 & 0xffff;
  local_e0 = (uint **)0x0;
  local_d8 = (uint **)0x0;
  iVar11 = uVar31 - 1;
  local_d0 = (uint **)0x0;
  if ((uVar27 & 0xffff) == 0 || iVar11 == 0) {
                    /* try { // try from 008ce29c to 008ce2a7 has its CatchHandler @ 008ce318 */
                    /* WARNING: Subroutine does not return */
    FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  }
  lVar17 = (long)(int)(uVar31 * 2 + -3);
                    /* try { // try from 008cda80 to 008cda83 has its CatchHandler @ 008ce318 */
  local_e0 = (uint **)operator_new(lVar17 << 2);
  lVar24 = *(long *)(param_1 + 0x2f70);
  lVar26 = *(long *)(param_1 + 0x2f68);
  local_d0 = (uint **)((long)local_e0 + lVar17 * 4);
  local_d8 = local_e0;
  if (((ulong)(lVar24 - lVar26) >> 3 & 0xfffffffc) != 0) {
    uVar29 = 0;
    uVar31 = 2;
    do {
      ppuVar30 = local_e0;
      uVar9 = uVar31 - 2;
      if ((uVar9 & 3) != 0) {
        lVar17 = *(long *)(param_1 + 0x2f68);
        if (*(int *)(lVar17 + uVar29 + 4) != -1) {
          uVar5 = uVar31;
          if ((uVar31 - 3 & 3) != 0) {
            uVar5 = uVar31 - 3;
          }
          if (*(ushort *)(lVar17 + uVar29) <= *(ushort *)(lVar17 + (ulong)uVar5 * 8))
          goto LAB_008cdadc;
        }
        if (local_d8 == local_d0) {
          uVar28 = (long)local_d8 - (long)local_e0;
          uVar32 = ((long)uVar28 >> 2) + 1;
          if (uVar32 >> 0x3e != 0) {
                    /* try { // try from 008ce288 to 008ce29b has its CatchHandler @ 008ce344 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar32 <= (ulong)((long)uVar28 >> 1)) {
            uVar32 = (long)uVar28 >> 1;
          }
          if (0x7ffffffffffffffb < uVar28) {
            uVar32 = 0x3fffffffffffffff;
          }
          if (uVar32 == 0) {
            ppuVar15 = (uint **)0x0;
          }
          else {
            if (uVar32 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 008cdb74 to 008cdb77 has its CatchHandler @ 008ce31c */
            ppuVar15 = (uint **)operator_new(uVar32 << 2);
          }
          puVar19 = (uint *)((long)ppuVar15 + ((long)uVar28 >> 2) * 4);
          ppuVar22 = (uint **)(puVar19 + 1);
          *puVar19 = uVar9;
          if (0 < (long)uVar28) {
            memcpy(ppuVar15,ppuVar30,uVar28);
          }
          local_d0 = (uint **)((long)ppuVar15 + uVar32 * 4);
          local_e0 = ppuVar15;
          local_d8 = ppuVar22;
          if (ppuVar30 != (uint **)0x0) {
            operator_delete(ppuVar30);
          }
        }
        else {
          *(uint *)local_d8 = uVar9;
          local_d8 = (uint **)((long)local_d8 + 4);
        }
      }
LAB_008cdadc:
      uVar31 = uVar31 + 1;
      uVar29 = uVar29 + 8;
    } while ((lVar24 - lVar26 & 0x7ffffffe0U) != uVar29);
  }
  ppuVar30 = local_e0;
  local_e8 = &local_c8;
  uVar29 = (long)local_d8 - (long)local_e0;
  if (4 < (long)uVar29) {
    lVar24 = (long)uVar29 >> 2;
    uVar28 = lVar24 - 2U >> 1;
    uVar32 = uVar28;
    do {
      if ((7 < uVar29) && ((long)uVar32 <= (long)uVar28)) {
        uVar21 = uVar32 << 1 | 1;
        uVar23 = uVar32 * 2 + 2;
        puVar19 = (uint *)((long)local_e0 + uVar21 * 4);
        if (((long)uVar23 < lVar24) && ((float)local_c8[*puVar19] < (float)local_c8[puVar19[1]])) {
          uVar21 = uVar23;
          puVar19 = puVar19 + 1;
        }
        puVar14 = (uint *)((long)local_e0 + uVar32 * 4);
        uVar23 = (ulong)*puVar19;
        uVar31 = *puVar14;
        fVar33 = (float)local_c8[uVar31];
        if (fVar33 <= (float)local_c8[uVar23]) {
          do {
            puVar18 = puVar19;
            *puVar14 = (uint)uVar23;
            if ((long)uVar28 < (long)uVar21) break;
            uVar3 = uVar21 << 1 | 1;
            uVar23 = uVar21 * 2 + 2;
            puVar19 = (uint *)((long)local_e0 + uVar3 * 4);
            uVar21 = uVar3;
            if (((long)uVar23 < lVar24) && ((float)local_c8[*puVar19] < (float)local_c8[puVar19[1]])
               ) {
              uVar21 = uVar23;
              puVar19 = puVar19 + 1;
            }
            uVar23 = (ulong)*puVar19;
            puVar14 = puVar18;
          } while (fVar33 <= (float)local_c8[uVar23]);
          *puVar18 = uVar31;
        }
      }
      bVar1 = 0 < (long)uVar32;
      uVar32 = uVar32 - 1;
    } while (bVar1);
  }
  uVar9 = iVar11 * ((uint)uVar27 & 0xffff);
  local_100 = (void *)0x0;
  local_f8 = (void *)0x0;
  local_f0 = (void *)0x0;
  uVar31 = uVar9;
  if ((int)uVar9 < 0) {
    uVar31 = uVar9 + 1;
  }
  if (2 < uVar9 + 1) {
    if (uVar9 == 0xfffffffe || (int)(uVar9 + 2) < 0 != SCARRY4(uVar9,2)) {
                    /* try { // try from 008ce2c4 to 008ce2cb has its CatchHandler @ 008ce2f8 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar24 = (long)((ulong)uVar31 << 0x20) >> 0x21;
    uVar27 = lVar24 << 1;
                    /* try { // try from 008cdd24 to 008cdd2b has its CatchHandler @ 008ce2f8 */
    local_100 = operator_new(uVar27);
    pvVar25 = (void *)((long)local_100 + lVar24 * 2);
    local_f0 = pvVar25;
    memset(local_100,0xff,uVar27);
    local_f8 = pvVar25;
  }
  if (((ulong)(*(long *)(this + 0xb8) - *(long *)(this + 0xb0)) < 0x7f8) &&
     (uVar27 = (ulong)*(uint *)ppuVar30, *(float *)(this + 0x128) < (float)local_c8[uVar27])) {
    while ((lVar24 = *(long *)(param_1 + 0x2f50),
           (~(((uint)(*(int *)(param_1 + 0x2f58) - (int)lVar24) >> 2) * -0x5555) & 0xffff) != 0 &&
           ((((uint)(*(int *)(param_2 + 0x2f58) - *(int *)(param_2 + 0x2f50)) >> 2) * -0x5555 &
            0xffff) < 0xfc17))) {
      uVar31 = (uint)uVar27;
      if (4 < (long)local_d8 - (long)ppuVar30) {
        lVar26 = (long)local_d8 - (long)ppuVar30 >> 2;
        uVar29 = lVar26 - 1;
        *(uint *)ppuVar30 = *(uint *)((long)local_d8 + -4);
        *(uint *)((long)local_d8 + -4) = uVar31;
        if (1 < uVar29) {
          if (uVar29 == 2) {
            puVar19 = *local_e8;
LAB_008cde30:
            uVar32 = 1;
            ppuVar15 = (uint **)((long)ppuVar30 + 4);
          }
          else {
            puVar19 = *local_e8;
            ppuVar15 = ppuVar30 + 1;
            if ((float)puVar19[*(uint *)ppuVar15] <= (float)puVar19[*(uint *)((long)ppuVar30 + 4)])
            goto LAB_008cde30;
            uVar32 = 2;
          }
          uVar28 = (ulong)*(uint *)ppuVar15;
          uVar9 = *(uint *)ppuVar30;
          fVar33 = (float)puVar19[uVar9];
          if (fVar33 <= (float)puVar19[uVar28]) {
            ppuVar22 = ppuVar30;
            do {
              ppuVar20 = ppuVar15;
              *(uint *)ppuVar22 = (uint)uVar28;
              if ((long)(lVar26 - 3U >> 1) < (long)uVar32) break;
              uVar23 = uVar32 << 1 | 1;
              uVar28 = uVar32 * 2 + 2;
              ppuVar15 = (uint **)((long)ppuVar30 + uVar23 * 4);
              uVar32 = uVar23;
              if (((long)uVar28 < (long)uVar29) &&
                 ((float)puVar19[*(uint *)ppuVar15] <
                  (float)puVar19[*(uint *)(uint **)((long)ppuVar15 + 4)])) {
                ppuVar15 = (uint **)((long)ppuVar15 + 4);
                uVar32 = uVar28;
              }
              uVar28 = (ulong)*(uint *)ppuVar15;
              ppuVar22 = ppuVar20;
            } while (fVar33 <= (float)puVar19[uVar28]);
            *(uint *)ppuVar20 = uVar9;
          }
        }
      }
      local_d8 = (uint **)((long)local_d8 + -4);
      uVar9 = uVar31 + 2;
      if ((uVar31 - 1 & 3) != 0) {
        uVar9 = uVar31 - 1;
      }
      puVar2 = (ushort *)(*(long *)(param_1 + 0x2f68) + uVar27 * 8);
      iVar11 = *(int *)(puVar2 + 2);
      uVar8 = *(ushort *)(*(long *)(param_1 + 0x2f68) + (ulong)uVar9 * 8);
      uVar6 = *puVar2;
      if (iVar11 == -1) {
                    /* try { // try from 008cdf20 to 008cdf7b has its CatchHandler @ 008ce324 */
        uVar13 = createPolyline(this,param_2,*(ushort *)(lVar24 + (ulong)uVar8 * 0xc + 8),
                                *(ushort *)(lVar24 + (ulong)uVar6 * 0xc + 8),param_3);
      }
      else {
        uVar13 = 0xffff;
      }
      Brep::splitHalfEdge(param_1,uVar31,uVar31,uVar13,0.5);
      uVar32 = (long)local_c0 - (long)local_c8 >> 2;
      uVar29 = (ulong)(*(long *)(param_1 + 0x2f70) - *(long *)(param_1 + 0x2f68)) >> 3 & 0xfffffffc;
      if (uVar29 < uVar32 || uVar29 - uVar32 == 0) {
        if (uVar29 < uVar32) {
          local_c0 = local_c8 + uVar29;
        }
      }
      else {
        std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append
                  ((vector<float,std::__ndk1::allocator<float>> *)&local_c8,uVar29 - uVar32);
      }
      VertexFormat::VertexFormat
                ((VertexFormat *)&local_b0,*(VertexFormat **)(this + 0xe0),uVar8,uVar6);
      ppuVar30 = *(uint ***)(this + 0xe8);
      if (ppuVar30 == *(uint ***)(this + 0xf0)) {
        pvVar25 = *(void **)(this + 0xe0);
        uVar32 = (long)ppuVar30 - (long)pvVar25;
        uVar29 = ((long)uVar32 >> 5) + 1;
        if (uVar29 >> 0x3b != 0) {
                    /* try { // try from 008ce2b0 to 008ce2b7 has its CatchHandler @ 008ce310 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar29 <= (ulong)((long)uVar32 >> 4)) {
          uVar29 = (long)uVar32 >> 4;
        }
        if (0x7fffffffffffffdf < uVar32) {
          uVar29 = 0x7ffffffffffffff;
        }
        if (uVar29 == 0) {
          __dest = (void *)0x0;
        }
        else {
          if (uVar29 >> 0x3b != 0) {
                    /* try { // try from 008ce2cc to 008ce2d7 has its CatchHandler @ 008ce310 */
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 008ce018 to 008ce01b has its CatchHandler @ 008ce2ec */
          __dest = operator_new(uVar29 << 5);
        }
        ppuVar30 = (uint **)((long)__dest + ((long)uVar32 >> 5) * 0x20);
        ppuVar30[1] = puStack_a8;
        *ppuVar30 = local_b0;
        ppuVar30[3] = puStack_98;
        ppuVar30[2] = local_a0;
        if (0 < (long)uVar32) {
          memcpy(__dest,pvVar25,uVar32);
        }
        *(void **)(this + 0xe0) = __dest;
        *(uint ***)(this + 0xe8) = ppuVar30 + 4;
        *(void **)(this + 0xf0) = (void *)((long)__dest + uVar29 * 0x20);
        if (pvVar25 != (void *)0x0) {
          operator_delete(pvVar25);
        }
      }
      else {
        ppuVar30[1] = puStack_a8;
        *ppuVar30 = local_b0;
        ppuVar30[3] = puStack_98;
        ppuVar30[2] = local_a0;
        *(uint ***)(this + 0xe8) = ppuVar30 + 4;
      }
      if (*(float *)(this + 300) < (float)local_c8[uVar27]) {
        *(int *)(this + 0x130) =
             (int)((ulong)(*(long *)(this + 0xe8) - *(long *)(this + 0xe0)) >> 5);
      }
      local_120 = &local_c8;
      local_118 = &local_e0;
      local_108 = &local_e8;
      iVar16 = (int)((ulong)(*(long *)(param_1 + 0x2f70) - *(long *)(param_1 + 0x2f68)) >> 3);
      pBStack_110 = param_1;
      if (iVar11 == -1) {
        FUN_008cf1a4(&local_120,uVar27,iVar16 - 4U & 0xfffffffc | 1);
        uVar8 = *(ushort *)(*(long *)(param_1 + 0x2f50) + (ulong)uVar8 * 0xc + 8);
        uVar6 = *(ushort *)(*(long *)(param_1 + 0x2f50) + (ulong)uVar6 * 0xc + 8);
        uVar7 = uVar8;
        uVar31 = (uint)uVar6;
        if ((uint)uVar6 <= (uint)uVar8) {
          uVar7 = uVar6;
          uVar31 = (uint)uVar8;
        }
        uVar31 = (uVar31 - 1) * uVar31;
        if ((int)uVar31 < 0) {
          uVar31 = uVar31 + 1;
        }
        *(ushort *)((long)local_100 + ((ulong)((uint)uVar7 + (uVar31 >> 1)) & 0xffff) * 2) = uVar13;
        uVar29 = (long)local_f8 - (long)local_100 >> 1;
        uVar27 = uVar29 + uVar13;
        local_124[0] = 0xffff;
        if (uVar29 < uVar27) {
                    /* try { // try from 008ce19c to 008ce1a7 has its CatchHandler @ 008ce2e8 */
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::__append
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)&local_100,
                     (ulong)uVar13,local_124);
        }
        else if (uVar27 < uVar29) {
          local_f8 = (void *)((long)local_100 + uVar27 * 2);
        }
      }
      else {
                    /* try { // try from 008ce0e0 to 008ce12f has its CatchHandler @ 008ce320 */
        FUN_008cf1a4(&local_120,uVar27,iVar16 - 8U & 0xfffffffc | 1);
        FUN_008cf1a4(&local_120,iVar11,
                     (int)((ulong)(*(long *)(param_1 + 0x2f70) - *(long *)(param_1 + 0x2f68)) >> 3)
                     - 4U & 0xfffffffc | 1);
      }
      if ((0x7f7 < (ulong)(*(long *)(this + 0xb8) - *(long *)(this + 0xb0))) ||
         (uVar27 = (ulong)*(uint *)local_e0, ppuVar30 = local_e0,
         (float)local_c8[uVar27] <= *(float *)(this + 0x128))) break;
    }
  }
  pVVar4 = *(VertexFormat **)(this + 0xe8);
  for (this_00 = *(VertexFormat **)(this + 0xe0); this_00 != pVVar4; this_00 = this_00 + 0x20) {
    VertexFormat::minimizeArea(this_00,(vector *)&local_100);
  }
  std::__ndk1::
  vector<FillPlaneGeometry::VertexFormat,std::__ndk1::allocator<FillPlaneGeometry::VertexFormat>>::
  shrink_to_fit();
  if (local_100 != (void *)0x0) {
    local_f8 = local_100;
    operator_delete(local_100);
  }
  if (local_e0 != (uint **)0x0) {
    local_d8 = local_e0;
    operator_delete(local_e0);
  }
  if (local_c8 != (uint *)0x0) {
    local_c0 = local_c8;
    operator_delete(local_c8);
  }
  if (*(long *)(lVar12 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


