// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compute
// Entry Point: 00fa2084
// Size: 1852 bytes
// Signature: undefined __thiscall compute(btConvexHullInternal * this, void * param_1, bool param_2, int param_3, int param_4)


/* btConvexHullInternal::compute(void const*, bool, int, int) */

void __thiscall
btConvexHullInternal::compute
          (btConvexHullInternal *this,void *param_1,bool param_2,int param_3,int param_4)

{
  double *pdVar1;
  float *pfVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  double *pdVar10;
  long lVar11;
  undefined *puVar12;
  bool bVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  uint uVar17;
  double *pdVar18;
  float *pfVar19;
  undefined8 *puVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  int iVar25;
  ulong uVar26;
  int *piVar27;
  undefined8 *puVar28;
  long lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  double dVar41;
  btAlignedObjectArray<btConvexHullInternal::Point32> abStack_d0 [4];
  undefined8 local_cc;
  long local_c0;
  char local_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long local_88;
  
  uVar16 = (ulong)(uint)param_4;
  lVar11 = tpidr_el0;
  lVar29 = (long)param_3;
  local_88 = *(long *)(lVar11 + 0x28);
  if (param_2) {
    if (param_4 < 1) {
LAB_00fa21a8:
      fVar30 = -1e+30;
      fVar33 = 1e+30;
      fVar32 = fVar33;
      fVar35 = fVar33;
      fVar31 = fVar30;
      fVar34 = fVar30;
    }
    else {
      fVar33 = 1e+30;
      fVar30 = -1e+30;
      pdVar18 = (double *)((long)param_1 + 0x10);
      uVar22 = uVar16;
      fVar32 = fVar33;
      fVar35 = fVar33;
      fVar31 = fVar30;
      fVar34 = fVar30;
      do {
        pdVar1 = pdVar18 + -2;
        pdVar10 = pdVar18 + -1;
        uVar21 = (int)uVar22 - 1;
        uVar22 = (ulong)uVar21;
        dVar41 = *pdVar18;
        pdVar18 = (double *)((long)pdVar18 + lVar29);
        fVar36 = (float)*pdVar1;
        fVar37 = (float)*pdVar10;
        fVar39 = (float)dVar41;
        fVar33 = (float)NEON_fminnm(fVar33,fVar36);
        if (fVar34 <= fVar36) {
          fVar34 = fVar36;
        }
        fVar35 = (float)NEON_fminnm(fVar35,fVar37);
        fVar32 = (float)NEON_fminnm(fVar32,fVar39);
        if (fVar31 <= fVar37) {
          fVar31 = fVar37;
        }
        if (fVar30 <= fVar39) {
          fVar30 = fVar39;
        }
      } while (uVar21 != 0);
    }
  }
  else {
    if (param_4 < 1) goto LAB_00fa21a8;
    fVar33 = 1e+30;
    fVar30 = -1e+30;
    pfVar19 = (float *)((long)param_1 + 8);
    uVar22 = uVar16;
    fVar32 = fVar33;
    fVar35 = fVar33;
    fVar31 = fVar30;
    fVar34 = fVar30;
    do {
      fVar36 = pfVar19[-2];
      fVar37 = pfVar19[-1];
      fVar39 = *pfVar19;
      pfVar19 = (float *)((long)pfVar19 + lVar29);
      uVar21 = (int)uVar22 - 1;
      uVar22 = (ulong)uVar21;
      fVar33 = (float)NEON_fminnm(fVar36,fVar33);
      fVar35 = (float)NEON_fminnm(fVar37,fVar35);
      fVar32 = (float)NEON_fminnm(fVar39,fVar32);
      if (fVar34 <= fVar36) {
        fVar34 = fVar36;
      }
      if (fVar31 <= fVar37) {
        fVar31 = fVar37;
      }
      if (fVar30 <= fVar39) {
        fVar30 = fVar39;
      }
    } while (uVar21 != 0);
  }
  fVar40 = fVar34 - fVar33;
  fVar38 = fVar31 - fVar35;
  fVar39 = fVar30 - fVar32;
  bVar13 = fVar40 < fVar38;
  fVar37 = fVar40;
  fVar36 = fVar38;
  if (!bVar13) {
    fVar37 = fVar38;
    fVar36 = fVar40;
  }
  uVar21 = 2;
  if (fVar39 <= fVar36) {
    uVar21 = (uint)bVar13;
  }
  uVar17 = (uint)!bVar13;
  if (fVar39 <= fVar37) {
    uVar17 = 2;
  }
  *(uint *)(this + 0xac) = uVar21;
  if (uVar17 == uVar21) {
    uVar17 = (uVar21 + 1) % 3;
  }
  uVar8 = 4 - (uVar17 + uVar21);
  fVar36 = 9.788567e-05;
  if (uVar21 != (uVar8 + ((uVar8 & 0xff) / 3) * -3 & 0xff)) {
    fVar36 = -9.788567e-05;
  }
  *(undefined4 *)(this + 0xc) = 0;
  fVar40 = fVar36 * fVar40;
  fVar38 = fVar36 * fVar38;
  fVar36 = fVar36 * fVar39;
  *(undefined4 *)(this + 0x1c) = 0;
  local_b8 = 1;
  *(uint *)(this + 0xa4) = uVar17;
  *(uint *)(this + 0xa8) = 3 - (uVar17 + uVar21);
  *(float *)(this + 0x10) = (fVar33 + fVar34) * 0.5;
  *(float *)(this + 0x14) = (fVar35 + fVar31) * 0.5;
  *(float *)(this + 0x18) = (fVar32 + fVar30) * 0.5;
  *(float *)this = fVar40;
  *(float *)(this + 4) = fVar38;
  *(float *)(this + 8) = fVar36;
  local_c0 = 0;
  local_cc = (ulong)(uint)local_cc;
  fVar33 = 1.0 / fVar40;
  if (fVar40 == 0.0) {
    fVar33 = fVar40;
  }
  fVar30 = 1.0 / fVar38;
  if (fVar38 == 0.0) {
    fVar30 = fVar38;
  }
  fVar34 = 1.0 / fVar36;
  if (fVar36 == 0.0) {
    fVar34 = fVar36;
  }
  if (0 < param_4) {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    local_c0 = (*(code *)PTR_FUN_01048e38)(uVar16 << 4,0x10);
    local_cc = (ulong)(uint)param_4 << 0x20;
  }
  local_b8 = '\x01';
  local_cc = CONCAT44(local_cc._4_4_,param_4);
  if (param_2) {
    if (param_4 < 1) goto LAB_00fa248c;
    fVar31 = *(float *)(this + 0x10);
    fVar32 = *(float *)(this + 0x14);
    iVar25 = *(int *)(this + 0xa8);
    iVar6 = *(int *)(this + 0xb0);
    uVar22 = 0;
    fVar35 = *(float *)(this + 0x18);
    pdVar18 = (double *)((long)param_1 + 0x10);
    iVar7 = *(int *)(this + 0xa4);
    piVar27 = (int *)(local_c0 + 8);
    do {
      pdVar1 = pdVar18 + -2;
      pdVar10 = pdVar18 + -1;
      dVar41 = *pdVar18;
      pdVar18 = (double *)((long)pdVar18 + lVar29);
      fVar36 = (float)dVar41 - fVar35;
      local_b0 = CONCAT44(((float)*pdVar10 - fVar32) * fVar30,((float)*pdVar1 - fVar31) * fVar33);
      piVar27[-2] = (int)*(float *)((long)&local_b0 + (long)iVar25 * 4);
      piVar27[-1] = (int)*(float *)((long)&local_b0 + (long)iVar6 * 4);
      *piVar27 = (int)*(float *)((long)&local_b0 + (long)iVar7 * 4);
      piVar27[1] = (int)uVar22;
      uVar22 = uVar22 + 1;
      piVar27 = piVar27 + 4;
    } while (uVar16 != uVar22);
  }
  else {
    if (param_4 < 1) goto LAB_00fa248c;
    fVar31 = *(float *)(this + 0x10);
    fVar32 = *(float *)(this + 0x14);
    iVar25 = *(int *)(this + 0xa8);
    iVar6 = *(int *)(this + 0xb0);
    uVar22 = 0;
    fVar35 = *(float *)(this + 0x18);
    pfVar19 = (float *)((long)param_1 + 8);
    iVar7 = *(int *)(this + 0xa4);
    piVar27 = (int *)(local_c0 + 8);
    do {
      pfVar2 = pfVar19 + -2;
      pfVar9 = pfVar19 + -1;
      fVar36 = *pfVar19;
      pfVar19 = (float *)((long)pfVar19 + lVar29);
      fVar36 = fVar36 - fVar35;
      local_b0 = CONCAT44((*pfVar9 - fVar32) * fVar30,(*pfVar2 - fVar31) * fVar33);
      piVar27[-2] = (int)*(float *)((long)&local_b0 + (long)iVar25 * 4);
      piVar27[-1] = (int)*(float *)((long)&local_b0 + (long)iVar6 * 4);
      *piVar27 = (int)*(float *)((long)&local_b0 + (long)iVar7 * 4);
      piVar27[1] = (int)uVar22;
      uVar22 = uVar22 + 1;
      piVar27 = piVar27 + 4;
    } while ((uint)param_4 != uVar22);
  }
  uStack_a8 = (ulong)(uint)(fVar36 * fVar34);
  if (1 < param_4) {
    btAlignedObjectArray<btConvexHullInternal::Point32>::quickSortInternal<pointCmp>
              (abStack_d0,(pointCmp *)&local_b0,0,param_4 + -1);
  }
LAB_00fa248c:
  uVar21 = *(uint *)(this + 0x84);
  *(int *)(this + 0x38) = param_4;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(this + 0x20);
  *(undefined8 *)(this + 0x30) = 0;
  if ((int)uVar21 < param_4) {
    lVar29 = (long)(int)uVar21;
    if (*(int *)(this + 0x88) < param_4) {
      if (param_4 == 0) {
        lVar14 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar14 = (*(code *)PTR_FUN_01048e38)
                           (-(ulong)((uint)param_4 >> 0x1f) & 0xfffffff800000000 |
                            (ulong)(uint)param_4 << 3,0x10);
        uVar21 = *(uint *)(this + 0x84);
      }
      if (0 < (int)uVar21) {
        lVar23 = 0;
        do {
          *(undefined8 *)(lVar14 + lVar23) = *(undefined8 *)(*(long *)(this + 0x90) + lVar23);
          lVar23 = lVar23 + 8;
        } while ((ulong)uVar21 * 8 - lVar23 != 0);
      }
      if ((*(long *)(this + 0x90) != 0) && (this[0x98] != (btConvexHullInternal)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(long *)(this + 0x90) = lVar14;
      *(int *)(this + 0x88) = param_4;
      this[0x98] = (btConvexHullInternal)0x1;
    }
    do {
      *(undefined8 *)(*(long *)(this + 0x90) + lVar29 * 8) = 0;
      lVar29 = lVar29 + 1;
    } while (param_4 != lVar29);
  }
  *(int *)(this + 0x84) = param_4;
  if (0 < param_4) {
    uVar22 = 0;
    do {
      puVar20 = *(undefined8 **)(this + 0x30);
      if (puVar20 == (undefined8 *)0x0) {
        puVar20 = *(undefined8 **)(this + 0x28);
        if (puVar20 == (undefined8 *)0x0) {
          gNumAlignedAllocs = gNumAlignedAllocs + 1;
          puVar20 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x18,0x10);
          iVar25 = *(int *)(this + 0x38);
          *(int *)(puVar20 + 1) = iVar25;
          puVar12 = PTR_FUN_01048e38;
          gNumAlignedAllocs = gNumAlignedAllocs + 1;
          puVar20[2] = 0;
          uVar15 = (*(code *)puVar12)((long)iVar25 << 7,0x10);
          *puVar20 = uVar15;
          puVar20[2] = *(undefined8 *)(this + 0x20);
          *(undefined8 **)(this + 0x20) = puVar20;
        }
        else {
          *(undefined8 *)(this + 0x28) = puVar20[2];
        }
        uVar21 = *(uint *)(puVar20 + 1);
        puVar20 = (undefined8 *)*puVar20;
        if (0 < (int)uVar21) {
          if (uVar21 - 1 == 0) {
            uVar24 = 0;
            puVar28 = puVar20;
          }
          else {
            uVar3 = (ulong)(uVar21 - 1) + 1;
            uVar26 = 0;
            uVar24 = uVar3 & 0x1fffffffe;
            puVar28 = puVar20 + 0x10;
            do {
              iVar25 = (int)uVar26;
              uVar26 = uVar26 + 2;
              puVar5 = puVar28 + 0x10;
              puVar4 = puVar28;
              if ((int)uVar21 <= iVar25 + 1) {
                puVar4 = (undefined8 *)0x0;
              }
              if ((int)uVar21 <= (int)uVar26) {
                puVar5 = (undefined8 *)0x0;
              }
              puVar28[-0x10] = puVar4;
              *puVar28 = puVar5;
              puVar28 = puVar28 + 0x20;
            } while (uVar24 != uVar26);
            if (uVar3 == uVar24) goto LAB_00fa2594;
            puVar28 = puVar20 + uVar24 * 0x10;
          }
          do {
            uVar17 = (int)uVar24 + 1;
            uVar24 = (ulong)uVar17;
            puVar5 = puVar28 + 0x10;
            if ((int)uVar21 <= (int)uVar17) {
              puVar5 = (undefined8 *)0x0;
            }
            *puVar28 = puVar5;
            puVar28 = puVar28 + 0x10;
          } while (uVar21 != uVar17);
        }
      }
LAB_00fa2594:
      *(undefined8 *)(this + 0x30) = *puVar20;
      puVar20[1] = 0;
      *puVar20 = 0;
      puVar20[3] = 0;
      puVar20[2] = 0;
      puVar20[4] = 0;
      *(undefined4 *)(puVar20 + 0xf) = 0xffffffff;
      puVar28 = (undefined8 *)(local_c0 + uVar22 * 0x10);
      uVar15 = *puVar28;
      puVar20[0xe] = puVar28[1];
      puVar20[0xd] = uVar15;
      *(undefined8 **)(*(long *)(this + 0x90) + uVar22 * 8) = puVar20;
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar16);
  }
  if ((local_c0 != 0) && (local_b8 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  local_b8 = '\x01';
  *(int *)(this + 0x58) = param_4 * 6;
  local_c0 = 0;
  local_cc = 0;
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 0x40);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xa0) = 0xfffffffd;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  computeInternal(this,0,param_4,(IntermediateHull *)&local_b0);
  *(undefined8 *)(this + 0xb8) = local_b0;
  if ((local_c0 != 0) && (local_b8 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  if (*(long *)(lVar11 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


