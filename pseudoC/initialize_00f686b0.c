// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initialize
// Entry Point: 00f686b0
// Size: 2172 bytes
// Signature: undefined initialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btConvexPolyhedron::initialize() */

void btConvexPolyhedron::initialize(void)

{
  ushort *puVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  long lVar9;
  bool bVar10;
  long in_x0;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  float *pfVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined2 local_130;
  undefined2 local_12e;
  short local_128;
  short local_126;
  btHashMap<btInternalVertexPair,btInternalEdge> abStack_120 [4];
  undefined8 local_11c;
  long local_110;
  char local_108;
  undefined8 local_fc;
  long local_f0;
  char local_e8;
  undefined8 local_dc;
  long local_d0;
  char local_c8;
  undefined8 local_bc;
  long local_b0;
  char local_a8;
  long local_a0;
  
  lVar9 = tpidr_el0;
  local_a0 = *(long *)(lVar9 + 0x28);
  local_108 = '\x01';
  local_e8 = '\x01';
  local_c8 = '\x01';
  local_a8 = '\x01';
  uVar17 = *(uint *)(in_x0 + 0x2c);
  local_110 = 0;
  local_11c = 0;
  local_f0 = 0;
  local_fc = 0;
  local_d0 = 0;
  local_dc = 0;
  local_b0 = 0;
  local_bc = 0;
  *(undefined8 *)(in_x0 + 0x68) = 0;
  *(undefined8 *)(in_x0 + 0x70) = 0;
  if (0 < (int)uVar17) {
    lVar23 = 0;
LAB_00f6876c:
    lVar13 = *(long *)(in_x0 + 0x38);
    uVar5 = *(uint *)(lVar13 + lVar23 * 0x30 + 4);
    if (0 < (int)uVar5) {
      uVar14 = 0;
      do {
        uVar11 = uVar14 + 1;
        lVar21 = 0;
        if (uVar11 != uVar5) {
          lVar21 = uVar14 + 1;
        }
        lVar13 = *(long *)(lVar13 + lVar23 * 0x30 + 0x10);
        uVar17 = *(uint *)(lVar13 + uVar14 * 4);
        uVar6 = *(uint *)(lVar13 + lVar21 * 4);
        sVar8 = (short)uVar17;
        local_126 = (short)uVar6;
        uVar16 = (int)sVar8;
        uVar12 = (int)local_126;
        local_128 = sVar8;
        if ((int)sVar8 < (int)local_126) {
          uVar16 = uVar6;
          uVar12 = uVar17;
          local_128 = local_126;
          local_126 = sVar8;
        }
        uVar17 = uVar12 * 0x10000 + (int)(short)uVar16 & local_dc._4_4_ - 1U;
        if (uVar17 < (uint)local_11c) {
          for (iVar22 = *(int *)(local_110 + (long)(int)uVar17 * 4); iVar22 != -1;
              iVar22 = *(int *)(local_f0 + (long)iVar22 * 4)) {
            puVar1 = (ushort *)(local_b0 + (long)iVar22 * 4);
            if (((uint)*puVar1 == (uVar16 & 0xffff)) && ((uint)puVar1[1] == (uVar12 & 0xffff))) {
              lVar13 = local_d0 + (long)iVar22 * 4;
              goto LAB_00f68870;
            }
          }
        }
        lVar13 = 0;
LAB_00f68870:
        lVar21 = *(long *)(in_x0 + 0x58);
        pfVar15 = (float *)(*(long *)(in_x0 + 0x18) + (long)(short)uVar16 * 0x10);
        pfVar2 = (float *)(*(long *)(in_x0 + 0x18) + (long)(short)uVar12 * 0x10);
        fVar24 = *pfVar2 - *pfVar15;
        fVar26 = pfVar2[1] - pfVar15[1];
        uVar17 = *(uint *)(in_x0 + 0x4c);
        uVar14 = (ulong)uVar17;
        fVar25 = pfVar2[2] - pfVar15[2];
        uVar28 = NEON_fmadd(fVar26,fVar26,fVar24 * fVar24);
        fVar29 = (float)NEON_fmadd(fVar25,fVar25,uVar28);
        fVar29 = 1.0 / SQRT(fVar29);
        fVar24 = fVar29 * fVar24;
        fVar26 = fVar29 * fVar26;
        fVar29 = fVar29 * fVar25;
        if (0 < (int)uVar17) {
          pfVar15 = (float *)(lVar21 + 8);
          uVar19 = uVar14;
          do {
            if ((((ABS(pfVar15[-2] - fVar24) <= 1e-06) && (ABS(pfVar15[-1] - fVar26) <= 1e-06)) &&
                (ABS(*pfVar15 - fVar29) <= 1e-06)) ||
               (((ABS(pfVar15[-2] + fVar24) <= 1e-06 && (ABS(pfVar15[-1] + fVar26) <= 1e-06)) &&
                (ABS(*pfVar15 + fVar29) <= 1e-06)))) goto joined_r0x00f68958;
            uVar19 = uVar19 - 1;
            pfVar15 = pfVar15 + 4;
          } while (uVar19 != 0);
        }
        if (uVar17 == *(uint *)(in_x0 + 0x50)) {
          uVar6 = uVar17 << 1;
          if (uVar17 == 0) {
            uVar6 = 1;
          }
          if ((int)uVar17 < (int)uVar6) {
            if (uVar6 == 0) {
              lVar21 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              lVar21 = (*(code *)PTR_FUN_01048e38)
                                 (-(ulong)(uVar6 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar6 << 4,
                                  0x10);
              uVar17 = *(uint *)(in_x0 + 0x4c);
              uVar14 = (ulong)uVar17;
            }
            if (0 < (int)uVar17) {
              lVar18 = 0;
              do {
                puVar3 = (undefined8 *)(*(long *)(in_x0 + 0x58) + lVar18);
                uVar27 = *puVar3;
                ((undefined8 *)(lVar21 + lVar18))[1] = puVar3[1];
                *(undefined8 *)(lVar21 + lVar18) = uVar27;
                lVar18 = lVar18 + 0x10;
              } while (uVar14 * 0x10 - lVar18 != 0);
            }
            if ((*(long *)(in_x0 + 0x58) != 0) && (*(char *)(in_x0 + 0x60) != '\0')) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
            }
            *(long *)(in_x0 + 0x58) = lVar21;
            *(uint *)(in_x0 + 0x50) = uVar6;
            *(undefined *)(in_x0 + 0x60) = 1;
            uVar17 = *(uint *)(in_x0 + 0x4c);
          }
        }
        pfVar15 = (float *)(lVar21 + (long)(int)uVar17 * 0x10);
        *pfVar15 = fVar24;
        pfVar15[1] = fVar26;
        pfVar15[2] = fVar29;
        pfVar15[3] = 0.0;
        *(int *)(in_x0 + 0x4c) = *(int *)(in_x0 + 0x4c) + 1;
joined_r0x00f68958:
        if (lVar13 == 0) {
          local_12e = 0xffff;
          local_130 = (short)lVar23;
          btHashMap<btInternalVertexPair,btInternalEdge>::insert
                    (abStack_120,(btInternalVertexPair *)&local_128,(btInternalEdge *)&local_130);
        }
        else {
          *(short *)(lVar13 + 2) = (short)lVar23;
        }
        if (uVar11 == uVar5) goto LAB_00f6875c;
        lVar13 = *(long *)(in_x0 + 0x38);
        uVar14 = uVar11;
      } while( true );
    }
    goto LAB_00f68760;
  }
  fVar24 = 0.0;
  bVar10 = false;
  lVar13 = *(long *)(in_x0 + 0x38);
  lVar23 = *(long *)(in_x0 + 0x18);
LAB_00f68bbc:
  fVar24 = 1.0 / fVar24;
  fVar25 = 3.402823e+38;
  *(undefined4 *)(in_x0 + 0x88) = 0x7f7fffff;
  fVar26 = *(float *)(in_x0 + 0x68) * fVar24;
  fVar29 = *(float *)(in_x0 + 0x6c) * fVar24;
  fVar24 = *(float *)(in_x0 + 0x70) * fVar24;
  *(float *)(in_x0 + 0x68) = fVar26;
  *(float *)(in_x0 + 0x6c) = fVar29;
  *(float *)(in_x0 + 0x70) = fVar24;
  if (bVar10) {
    uVar14 = (ulong)uVar17;
    pfVar15 = (float *)(lVar13 + 0x2c);
    fVar25 = 3.402823e+38;
    do {
      uVar28 = NEON_fmadd(fVar29,pfVar15[-2],pfVar15[-3] * fVar26);
      fVar30 = (float)NEON_fmadd(fVar24,pfVar15[-1],uVar28);
      fVar30 = ABS(fVar30 + *pfVar15);
      if (fVar30 < fVar25) {
        *(float *)(in_x0 + 0x88) = fVar30;
        fVar25 = fVar30;
      }
      uVar14 = uVar14 - 1;
      pfVar15 = pfVar15 + 0xc;
    } while (uVar14 != 0);
  }
  uVar14 = (ulong)*(uint *)(in_x0 + 0xc);
  if ((int)*(uint *)(in_x0 + 0xc) < 1) {
    fVar29 = -3.402823e+38;
    fVar33 = 3.402823e+38;
    fVar31 = -3.402823e+38;
    fVar30 = 3.402823e+38;
    fVar24 = fVar33;
    fVar26 = fVar29;
  }
  else {
    fVar30 = 3.402823e+38;
    fVar33 = 3.402823e+38;
    pfVar15 = (float *)(lVar23 + 8);
    fVar24 = fVar30;
    do {
      fVar29 = pfVar15[-2];
      fVar31 = pfVar15[-1];
      fVar26 = *pfVar15;
      uVar14 = uVar14 - 1;
      fVar30 = (float)NEON_fminnm(fVar29,fVar30);
      fVar24 = (float)NEON_fminnm(fVar31,fVar24);
      fVar33 = (float)NEON_fminnm(fVar26,fVar33);
      pfVar15 = pfVar15 + 4;
    } while (uVar14 != 0);
  }
  fVar37 = fVar29 - fVar30;
  fVar32 = fVar31 - fVar24;
  iVar22 = 0x400;
  fVar36 = fVar32;
  if (fVar37 >= fVar32) {
    fVar36 = fVar37;
  }
  fVar34 = fVar25 * 0.5773503;
  *(float *)(in_x0 + 0x78) = fVar34;
  *(float *)(in_x0 + 0xa0) = fVar32;
  *(float *)(in_x0 + 0xa4) = fVar26 - fVar33;
  uVar17 = 2;
  if (fVar26 - fVar33 <= fVar36) {
    uVar17 = (uint)(fVar37 < fVar32);
  }
  uVar14 = (ulong)uVar17;
  *(undefined4 *)(in_x0 + 0xa8) = 0;
  *(float *)(in_x0 + 0x9c) = fVar37;
  *(float *)(in_x0 + 0x8c) = fVar30 + fVar29;
  *(float *)(in_x0 + 0x90) = fVar31 + fVar24;
  fVar29 = ((float *)(in_x0 + 0x9c))[uVar14];
  pfVar15 = (float *)(in_x0 + 0x78) + uVar14;
  *(float *)(in_x0 + 0x94) = fVar26 + fVar33;
  *(undefined4 *)(in_x0 + 0x98) = 0;
  *(float *)(in_x0 + 0x7c) = fVar34;
  *(float *)(in_x0 + 0x80) = fVar34;
  fVar29 = fVar29 * 0.5;
  fVar24 = fVar29 - fVar34;
  *pfVar15 = fVar29;
  do {
    uVar11 = testContainment();
    if ((uVar11 & 1) != 0) {
      uVar17 = 1 << uVar14 & 3;
      iVar22 = 0x400;
      pfVar15 = (float *)(in_x0 + 0x78 + (ulong)uVar17 * 4);
      pfVar2 = (float *)(in_x0 + 0x78 + (ulong)(1 << (ulong)uVar17 & 3) * 4);
      fVar24 = *pfVar2;
      goto LAB_00f68dbc;
    }
    fVar29 = fVar29 - fVar24 * 0.0009765625;
    iVar22 = iVar22 + -1;
    *pfVar15 = fVar29;
  } while (iVar22 != 0);
  *(float *)(in_x0 + 0x7c) = fVar34;
  *(float *)(in_x0 + 0x80) = fVar34;
  *(float *)(in_x0 + 0x78) = fVar34;
joined_r0x00f68e04:
  if (local_b0 != 0) {
LAB_00f68e08:
    if (local_a8 != '\0') {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
  }
LAB_00f68e30:
  local_b0 = 0;
  local_bc = 0;
  local_a8 = 1;
  if ((local_d0 != 0) && (local_c8 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  local_c8 = 1;
  local_d0 = 0;
  local_dc = 0;
  if ((local_f0 != 0) && (local_e8 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  local_f0 = 0;
  local_fc = 0;
  local_e8 = 1;
  if ((local_110 != 0) && (local_108 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  if (*(long *)(lVar9 + 0x28) == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00f6875c:
  uVar17 = *(uint *)(in_x0 + 0x2c);
LAB_00f68760:
  lVar23 = lVar23 + 1;
  if ((int)uVar17 <= lVar23) goto LAB_00f68a5c;
  goto LAB_00f6876c;
LAB_00f68a5c:
  lVar13 = *(long *)(in_x0 + 0x38);
  lVar23 = *(long *)(in_x0 + 0x18);
  if ((int)uVar17 < 1) {
    fVar24 = 0.0;
    bVar10 = false;
  }
  else {
    fVar24 = 0.0;
    uVar14 = 0;
    do {
      lVar21 = lVar13 + uVar14 * 0x30;
      iVar22 = *(int *)(lVar21 + 4);
      if (2 < iVar22) {
        piVar20 = *(int **)(lVar21 + 0x10);
        uVar27 = *(undefined8 *)(in_x0 + 0x68);
        uVar28 = *(undefined4 *)(in_x0 + 0x70);
        puVar3 = (undefined8 *)(lVar23 + (long)*piVar20 * 0x10);
        uVar11 = 1;
        do {
          uVar19 = uVar11 + 1;
          fVar25 = *(float *)(puVar3 + 1);
          iVar7 = 0;
          if (iVar22 != 0) {
            iVar7 = (int)uVar19 / iVar22;
          }
          uVar35 = *puVar3;
          puVar4 = (undefined8 *)(lVar23 + (long)piVar20[uVar11] * 0x10);
          fVar29 = *(float *)(puVar4 + 1);
          uVar38 = *puVar4;
          fVar31 = (float)uVar35;
          fVar32 = (float)uVar38;
          fVar41 = fVar31 - fVar32;
          fVar36 = (float)((ulong)uVar35 >> 0x20);
          fVar34 = (float)((ulong)uVar38 >> 0x20);
          fVar42 = fVar36 - fVar34;
          uVar38 = CONCAT44(fVar42,fVar41);
          puVar4 = (undefined8 *)
                   (lVar23 + (long)piVar20[(uint)((int)uVar19 - iVar7 * iVar22)] * 0x10);
          fVar26 = *(float *)(puVar4 + 1);
          uVar35 = *puVar4;
          fVar39 = (float)uVar35;
          fVar40 = (float)((ulong)uVar35 >> 0x20);
          uVar43 = CONCAT44(fVar36 - fVar40,fVar31 - fVar39);
          fVar30 = fVar25 - fVar26;
          fVar33 = fVar25 - fVar29;
          uVar35 = NEON_ext(uVar43,uVar38,4,1);
          uVar44 = NEON_rev64(CONCAT44(fVar33,fVar30),4);
          uVar45 = NEON_rev64(uVar43,4);
          uVar38 = NEON_ext(uVar38,uVar43,4,1);
          fVar37 = -((float)uVar35 * (float)uVar44) + (float)uVar38 * fVar30;
          fVar33 = -((float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar44 >> 0x20)) +
                   (float)((ulong)uVar38 >> 0x20) * fVar33;
          fVar30 = (float)uVar45 * fVar41 - (float)((ulong)uVar45 >> 0x20) * fVar42;
          fVar33 = SQRT(fVar37 * fVar37 + fVar30 * fVar30 + fVar33 * fVar33);
          fVar30 = fVar33 * 0.1666667;
          fVar24 = (float)NEON_fmadd(fVar33,0x3f000000,fVar24);
          uVar27 = CONCAT44((float)((ulong)uVar27 >> 0x20) + (fVar34 + fVar36 + fVar40) * fVar30,
                            (float)uVar27 + (fVar32 + fVar31 + fVar39) * fVar30);
          uVar28 = NEON_fmadd(fVar30,fVar29 + fVar25 + fVar26,uVar28);
          *(undefined8 *)(in_x0 + 0x68) = uVar27;
          *(undefined4 *)(in_x0 + 0x70) = uVar28;
          uVar11 = uVar19;
        } while (iVar22 - 1 != uVar19);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar17);
    bVar10 = true;
  }
  goto LAB_00f68bbc;
  while (iVar22 = iVar22 + -1, fVar24 = fVar29, iVar22 != 0) {
LAB_00f68dbc:
    fVar26 = *pfVar15;
    *pfVar15 = fVar26 + fVar25 * 0.0004127439;
    fVar29 = *pfVar2 + fVar25 * 0.0004127439;
    *pfVar2 = fVar29;
    uVar14 = testContainment();
    if ((uVar14 & 1) == 0) {
      *pfVar15 = fVar26;
      *pfVar2 = fVar24;
      goto joined_r0x00f68e04;
    }
  }
  if (local_b0 == 0) goto LAB_00f68e30;
  goto LAB_00f68e08;
}


