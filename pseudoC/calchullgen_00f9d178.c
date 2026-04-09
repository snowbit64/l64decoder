// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calchullgen
// Entry Point: 00f9d178
// Size: 2852 bytes
// Signature: undefined __thiscall calchullgen(HullLibrary * this, btVector3 * param_1, int param_2, int param_3)


/* HullLibrary::calchullgen(btVector3*, int, int) */

undefined4 __thiscall
HullLibrary::calchullgen(HullLibrary *this,btVector3 *param_1,int param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  HullLibrary *pHVar10;
  HullLibrary *this_00;
  int iVar11;
  int iVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  HullLibrary *pHVar22;
  uint uVar23;
  int *piVar24;
  long lVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined auVar55 [16];
  btAlignedObjectArray abStack_e0 [4];
  uint local_dc;
  uint local_d8;
  HullLibrary *local_d0;
  char local_c8;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined4 local_b4;
  long local_b0;
  
  lVar6 = tpidr_el0;
  local_b0 = *(long *)(lVar6 + 0x28);
  if (param_2 < 4) {
    uVar31 = 0;
LAB_00f9dc54:
    if (*(long *)(lVar6 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar31;
  }
  lVar25 = (ulong)(uint)param_2 << 2;
  fVar52 = *(float *)(param_1 + 8);
  fVar51 = *(float *)param_1;
  fVar50 = *(float *)(param_1 + 4);
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  pHVar10 = (HullLibrary *)(*(code *)PTR_FUN_01048e38)(lVar25,0x10);
  local_dc = 0;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  this_00 = (HullLibrary *)(*(code *)PTR_FUN_01048e38)(lVar25,0x10);
  uVar28 = 0;
  uVar27 = (ulong)(uint)param_2;
  local_c8 = '\x01';
  pHVar22 = pHVar10;
  uVar23 = param_2;
  fVar47 = fVar52;
  fVar44 = fVar50;
  fVar32 = fVar51;
  uVar26 = 0;
  local_d8 = param_2;
  local_d0 = this_00;
  if (param_2 != 0) goto LAB_00f9d39c;
LAB_00f9d27c:
  uVar26 = (uint)uVar27;
  uVar5 = uVar26 << 1;
  if (uVar26 == 0) {
    uVar5 = 1;
  }
  pHVar22 = pHVar10;
  if ((int)uVar26 < (int)uVar5) {
    if (uVar5 == 0) {
      pHVar10 = (HullLibrary *)0x0;
    }
    else {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      pHVar10 = (HullLibrary *)
                (*(code *)PTR_FUN_01048e38)
                          (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2,0x10);
    }
    if ((int)uVar26 < 1) {
      if (local_d0 != (HullLibrary *)0x0) goto LAB_00f9d364;
    }
    else {
      if ((uVar26 < 8) || ((pHVar10 < local_d0 + uVar27 * 4 && (local_d0 < pHVar10 + uVar27 * 4))))
      {
        uVar13 = 0;
      }
      else {
        uVar13 = uVar27 & 0xfffffff8;
        puVar17 = (undefined8 *)(local_d0 + 0x10);
        puVar19 = (undefined8 *)(pHVar10 + 0x10);
        uVar21 = uVar13;
        do {
          puVar7 = puVar17 + -1;
          uVar33 = puVar17[-2];
          uVar53 = puVar17[1];
          uVar41 = *puVar17;
          uVar21 = uVar21 - 8;
          puVar17 = puVar17 + 4;
          puVar19[-1] = *puVar7;
          puVar19[-2] = uVar33;
          puVar19[1] = uVar53;
          *puVar19 = uVar41;
          puVar19 = puVar19 + 4;
        } while (uVar21 != 0);
        if (uVar13 == uVar27) goto LAB_00f9d364;
      }
      lVar25 = uVar27 - uVar13;
      puVar14 = (undefined4 *)(local_d0 + uVar13 * 4);
      puVar16 = (undefined4 *)(pHVar10 + uVar13 * 4);
      do {
        lVar25 = lVar25 + -1;
        *puVar16 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar16 = puVar16 + 1;
      } while (lVar25 != 0);
LAB_00f9d364:
      if (local_c8 != '\0') {
        gNumAlignedFree = gNumAlignedFree + 1;
        local_d0 = (HullLibrary *)(*(code *)PTR_FUN_01048e40)();
      }
    }
    local_c8 = '\x01';
    this_00 = local_d0;
    uVar26 = local_dc;
    local_d8 = uVar5;
    local_d0 = pHVar10;
  }
LAB_00f9d39c:
  *(undefined4 *)(local_d0 + (long)(int)uVar26 * 4) = 1;
  local_dc = local_dc + 1;
  pHVar10 = pHVar22;
  if (uVar28 == uVar23) {
    uVar26 = (int)uVar28 << 1;
    if (uVar28 == 0) {
      uVar26 = 1;
    }
    if (uVar28 < uVar26) {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      pHVar10 = (HullLibrary *)(*(code *)PTR_FUN_01048e38)((ulong)uVar26 << 2,0x10);
      if (uVar28 == 0) {
        if (pHVar22 == (HullLibrary *)0x0) {
          uVar23 = 1;
          this_00 = pHVar10;
          goto LAB_00f9d4b0;
        }
      }
      else {
        if (uVar28 < 8) {
          uVar27 = 0;
        }
        else if ((pHVar10 < pHVar22 + uVar28 * 4) && (pHVar22 < pHVar10 + uVar28 * 4)) {
          uVar27 = 0;
        }
        else {
          uVar13 = uVar28 & 0xfffffffffffffff8;
          uVar27 = uVar28 & 0x7ffffffffffffff8;
          puVar17 = (undefined8 *)(pHVar22 + 0x10);
          puVar19 = (undefined8 *)(pHVar10 + 0x10);
          do {
            puVar7 = puVar17 + -1;
            uVar33 = puVar17[-2];
            uVar53 = puVar17[1];
            uVar41 = *puVar17;
            uVar13 = uVar13 - 8;
            puVar17 = puVar17 + 4;
            puVar19[-1] = *puVar7;
            puVar19[-2] = uVar33;
            puVar19[1] = uVar53;
            *puVar19 = uVar41;
            puVar19 = puVar19 + 4;
          } while (uVar13 != 0);
          if (uVar28 == uVar27) goto LAB_00f9d484;
        }
        do {
          lVar25 = uVar27 * 4;
          uVar27 = uVar27 + 1;
          *(undefined4 *)(pHVar10 + lVar25) = *(undefined4 *)(pHVar22 + lVar25);
        } while (uVar28 != uVar27);
      }
LAB_00f9d484:
      gNumAlignedFree = gNumAlignedFree + 1;
      this_00 = (HullLibrary *)(*(code *)PTR_FUN_01048e40)(pHVar22);
      uVar23 = uVar26;
    }
  }
LAB_00f9d4b0:
  pfVar1 = (float *)(param_1 + uVar28 * 0x10);
  *(undefined4 *)(pHVar10 + uVar28 * 4) = 0;
  uVar28 = uVar28 + 1;
  fVar29 = *pfVar1;
  fVar35 = pfVar1[1];
  fVar39 = pfVar1[2];
  fVar51 = (float)NEON_fminnm(fVar29,fVar51);
  fVar50 = (float)NEON_fminnm(fVar35,fVar50);
  fVar52 = (float)NEON_fminnm(fVar39,fVar52);
  if (fVar32 <= fVar29) {
    fVar32 = fVar29;
  }
  if (fVar44 <= fVar35) {
    fVar44 = fVar35;
  }
  if (fVar47 <= fVar39) {
    fVar47 = fVar39;
  }
  if (uVar28 != (uint)param_2) {
    uVar27 = (ulong)local_d8;
    pHVar22 = pHVar10;
    uVar26 = local_dc;
    if (local_dc == local_d8) goto LAB_00f9d27c;
    goto LAB_00f9d39c;
  }
  auVar55 = FindSimplex(this_00,param_1,param_2,abStack_e0);
  uVar27 = auVar55._8_8_;
  uVar28 = auVar55._0_8_;
  iVar8 = auVar55._0_4_;
  if (iVar8 == -1) {
    uVar31 = 0;
    goto joined_r0x00f9dbfc;
  }
  fVar39 = *(float *)(param_1 + ((long)(uVar28 << 0x20) >> 0x1c));
  fVar29 = *(float *)(param_1 + ((long)uVar28 >> 0x20) * 0x10);
  uVar53 = *(undefined8 *)((long)(param_1 + ((long)(uVar28 << 0x20) >> 0x1c)) + 4);
  uVar41 = *(undefined8 *)((long)(param_1 + ((long)(uVar27 << 0x20) >> 0x1c)) + 4);
  fVar36 = *(float *)(param_1 + ((long)(uVar27 << 0x20) >> 0x1c));
  fVar35 = *(float *)(param_1 + ((long)uVar27 >> 0x20) * 0x10);
  uVar54 = *(undefined8 *)((long)(param_1 + ((long)uVar28 >> 0x20) * 0x10) + 4);
  uVar33 = *(undefined8 *)((long)(param_1 + ((long)uVar27 >> 0x20) * 0x10) + 4);
  iVar9 = auVar55._8_4_;
  iVar11 = auVar55._12_4_;
  iVar12 = auVar55._4_4_;
  lVar25 = allocateTriangle(this,iVar9,iVar11,iVar12);
  *(undefined4 *)(lVar25 + 0x14) = 1;
  *(undefined8 *)(lVar25 + 0xc) = 0x300000002;
  lVar25 = allocateTriangle(this,iVar11,iVar9,iVar8);
  *(undefined4 *)(lVar25 + 0x14) = 0;
  *(undefined8 *)(lVar25 + 0xc) = 0x200000003;
  lVar25 = allocateTriangle(this,iVar8,iVar12,iVar11);
  *(undefined8 *)(lVar25 + 0xc) = 0x100000000;
  *(undefined4 *)(lVar25 + 0x14) = 3;
  lVar25 = allocateTriangle(this,iVar12,iVar8,iVar9);
  *(undefined4 *)(lVar25 + 0x14) = 2;
  *(undefined8 *)(lVar25 + 0xc) = 1;
  *(undefined4 *)(pHVar10 + ((long)uVar27 >> 0x20) * 4) = 1;
  *(undefined4 *)
   (pHVar10 + (-(uVar27 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar27 & 0xffffffff) << 2)) = 1;
  *(undefined4 *)(pHVar10 + ((long)uVar28 >> 0x20) * 4) = 1;
  *(undefined4 *)
   (pHVar10 + (-(uVar28 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar28 & 0xffffffff) << 2)) = 1;
  uVar28 = (ulong)*(uint *)(this + 4);
  if (0 < (int)*(uint *)(this + 4)) {
    lVar25 = 0;
    do {
      piVar24 = *(int **)(*(long *)(this + 0x10) + lVar25 * 8);
      pfVar1 = (float *)(param_1 + (long)piVar24[2] * 0x10);
      pfVar2 = (float *)(param_1 + (long)*piVar24 * 0x10);
      pfVar3 = (float *)(param_1 + (long)piVar24[2] * 0x10);
      fVar43 = pfVar1[1] - pfVar2[1];
      fVar45 = *pfVar3 - *pfVar1;
      fVar30 = *pfVar1 - *pfVar2;
      fVar40 = pfVar1[2] - pfVar2[2];
      fVar37 = pfVar3[1] - pfVar1[1];
      fVar46 = pfVar3[2] - pfVar1[2];
      fVar38 = (float)NEON_fnmsub(fVar37,fVar30,fVar45 * fVar43);
      fVar37 = (float)NEON_fnmsub(fVar46,fVar43,fVar37 * fVar40);
      fVar40 = (float)NEON_fnmsub(fVar45,fVar40,fVar46 * fVar30);
      local_b8 = 0.0;
      uVar31 = NEON_fmadd(fVar37,fVar37,fVar38 * fVar38);
      local_c0 = 1.0;
      fVar30 = (float)NEON_fmadd(fVar40,fVar40,uVar31);
      fStack_bc = 0.0;
      if (SQRT(fVar30) != 0.0) {
        local_b8 = 1.0 / SQRT(fVar30);
        local_c0 = local_b8 * fVar37;
        fStack_bc = local_b8 * fVar40;
        local_b8 = local_b8 * fVar38;
      }
      local_b4 = 0;
      iVar8 = maxdirsterid<btVector3>(param_1,param_2,(btVector3 *)&local_c0,abStack_e0);
      pfVar1 = (float *)(param_1 + (long)iVar8 * 0x10);
      piVar24[7] = iVar8;
      lVar25 = lVar25 + 1;
      pfVar2 = (float *)(param_1 + (long)*piVar24 * 0x10);
      uVar31 = NEON_fmadd(fStack_bc,pfVar1[1] - pfVar2[1],local_c0 * (*pfVar1 - *pfVar2));
      iVar8 = NEON_fmadd(local_b8,pfVar1[2] - pfVar2[2],uVar31);
      piVar24[8] = iVar8;
      uVar28 = (ulong)*(int *)(this + 4);
    } while (lVar25 < (long)uVar28);
  }
  iVar8 = 0x3b9ac9fc;
  if (param_3 != 0) {
    iVar8 = param_3 + -4;
  }
  if (0 < iVar8) {
    uVar48 = NEON_fmov(0x3e800000,4);
    uVar31 = NEON_fmadd(fVar44 - fVar50,fVar44 - fVar50,(fVar32 - fVar51) * (fVar32 - fVar51));
    fVar32 = (float)NEON_fmadd(fVar47 - fVar52,fVar47 - fVar52,uVar31);
    fVar32 = SQRT(fVar32);
    while( true ) {
      plVar18 = *(long **)(this + 0x10);
      uVar28 = uVar28 & 0xffffffff;
      lVar25 = 0;
      do {
        lVar20 = *plVar18;
        lVar15 = lVar20;
        if (((lVar25 != 0) && (lVar15 = lVar25, lVar20 != 0)) &&
           (lVar15 = lVar20, *(float *)(lVar20 + 0x20) <= *(float *)(lVar25 + 0x20))) {
          lVar15 = lVar25;
        }
        uVar28 = uVar28 - 1;
        plVar18 = plVar18 + 1;
        lVar25 = lVar15;
      } while (uVar28 != 0);
      if ((*(float *)(lVar15 + 0x20) <= fVar32 * 0.001) || (lVar15 == 0)) break;
      iVar11 = *(int *)(lVar15 + 0x1c);
      *(undefined4 *)(pHVar10 + (long)iVar11 * 4) = 1;
      iVar9 = *(int *)(this + 4);
      if (iVar9 != 0) {
        pfVar1 = (float *)(param_1 + (long)iVar11 * 0x10);
        lVar25 = (long)iVar9 * 8;
        do {
          lVar25 = lVar25 + -8;
          piVar24 = *(int **)(*(long *)(this + 0x10) + lVar25);
          if (piVar24 != (int *)0x0) {
            pfVar2 = (float *)(param_1 + (long)piVar24[2] * 0x10);
            pfVar3 = (float *)(param_1 + (long)*piVar24 * 0x10);
            pfVar4 = (float *)(param_1 + (long)piVar24[2] * 0x10);
            fVar51 = pfVar2[1] - pfVar3[1];
            fVar30 = *pfVar2 - *pfVar3;
            fVar52 = *pfVar4 - *pfVar2;
            fVar44 = pfVar4[1] - pfVar2[1];
            fVar37 = pfVar2[2] - pfVar3[2];
            fVar47 = pfVar4[2] - pfVar2[2];
            fVar50 = (float)NEON_fnmsub(fVar44,fVar30,fVar52 * fVar51);
            fVar44 = (float)NEON_fnmsub(fVar47,fVar51,fVar44 * fVar37);
            fVar47 = (float)NEON_fnmsub(fVar52,fVar37,fVar47 * fVar30);
            uVar31 = NEON_fmadd(fVar44,fVar44,fVar50 * fVar50);
            fVar51 = (float)NEON_fmadd(fVar47,fVar47,uVar31);
            if (SQRT(fVar51) == 0.0) {
              fVar47 = 0.0;
              fVar51 = 0.0;
              fVar44 = 1.0;
            }
            else {
              fVar51 = 1.0 / SQRT(fVar51);
              fVar44 = fVar51 * fVar44;
              fVar47 = fVar51 * fVar47;
              fVar51 = fVar51 * fVar50;
            }
            uVar31 = NEON_fmadd(pfVar1[1] - pfVar3[1],fVar47,(*pfVar1 - *pfVar3) * fVar44);
            fVar44 = (float)NEON_fmadd(pfVar1[2] - pfVar3[2],fVar51,uVar31);
            if (fVar32 * 1e-05 < fVar44) {
              extrude(this,(btHullTriangle *)piVar24,iVar11);
            }
          }
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        uVar23 = *(uint *)(this + 4);
        uVar28 = (ulong)uVar23;
        if (uVar23 != 0) {
          do {
            uVar23 = uVar23 - 1;
            piVar24 = *(int **)(*(long *)(this + 0x10) + (long)(int)uVar23 * 8);
            if (piVar24 != (int *)0x0) {
              if ((*piVar24 == iVar11 || piVar24[1] == iVar11) || piVar24[2] == iVar11) {
                uVar34 = *(undefined8 *)((long)(param_1 + (long)*piVar24 * 0x10) + 4);
                fVar44 = *(float *)(param_1 + (long)*piVar24 * 0x10);
                uVar42 = *(undefined8 *)(param_1 + (long)piVar24[1] * 0x10);
                fVar51 = *(float *)((long)(param_1 + (long)piVar24[1] * 0x10) + 8);
                uVar49 = *(undefined8 *)(param_1 + (long)piVar24[2] * 0x10);
                fVar38 = (float)((ulong)uVar34 >> 0x20);
                fVar47 = (float)uVar42;
                fVar30 = (float)uVar49 - fVar47;
                fVar50 = (float)((ulong)uVar42 >> 0x20);
                fVar40 = (float)((ulong)uVar49 >> 0x20) - fVar50;
                fVar43 = *(float *)((long)(param_1 + (long)piVar24[2] * 0x10) + 8) - fVar51;
                fVar47 = fVar47 - fVar44;
                fVar51 = fVar51 - fVar38;
                fVar37 = (float)uVar34;
                fVar50 = fVar50 - fVar37;
                uVar34 = NEON_rev64(CONCAT44(fVar51,fVar47),4);
                fVar52 = -(fVar43 * fVar47) + (float)uVar34 * fVar30;
                fVar30 = -(fVar30 * fVar50) + (float)((ulong)uVar34 >> 0x20) * fVar40;
                fVar50 = -(fVar40 * fVar51) + fVar43 * fVar50;
                fVar47 = (float)NEON_fmadd(fVar50,fVar50,fVar30 * fVar30);
                fVar47 = SQRT(fVar47 + fVar52 * fVar52);
                if (fVar47 == 0.0) {
                  fVar52 = 0.0;
                  fVar30 = 0.0;
                  fVar50 = 1.0;
                }
                else {
                  fVar51 = 1.0 / fVar47;
                  fVar50 = fVar51 * fVar50;
                  fVar52 = fVar52 * fVar51;
                  fVar30 = fVar30 * fVar51;
                }
                fVar44 = (float)NEON_fmadd(fVar50,(fVar29 + fVar39 + fVar36 + fVar35) * 0.25 -
                                                  fVar44,
                                           fVar52 * (((float)uVar54 + (float)uVar53 +
                                                     (float)uVar41 + (float)uVar33) * (float)uVar48
                                                    - fVar37));
                if ((fVar32 * 1e-05 <
                     fVar44 + fVar30 * (((float)((ulong)uVar54 >> 0x20) +
                                         (float)((ulong)uVar53 >> 0x20) +
                                        (float)((ulong)uVar41 >> 0x20) +
                                        (float)((ulong)uVar33 >> 0x20)) *
                                        (float)((ulong)uVar48 >> 0x20) - fVar38)) ||
                   (fVar47 < fVar32 * 0.0001 * fVar32 * 0.001)) {
                  extrude(this,*(btHullTriangle **)(*(long *)(this + 0x10) + (long)piVar24[3] * 8),
                          iVar11);
                  uVar23 = *(uint *)(this + 4);
                  uVar28 = (ulong)uVar23;
                }
                goto LAB_00f9d984;
              }
              break;
            }
LAB_00f9d984:
          } while (uVar23 != 0);
          if ((int)uVar28 != 0) {
            uVar27 = -(uVar28 >> 0x1f) & 0xfffffff800000000 | uVar28 << 3;
            do {
              uVar27 = uVar27 - 8;
              piVar24 = *(int **)(*(long *)(this + 0x10) + uVar27);
              if (piVar24 != (int *)0x0) {
                if (-1 < piVar24[7]) break;
                pfVar1 = (float *)(param_1 + (long)piVar24[2] * 0x10);
                pfVar2 = (float *)(param_1 + (long)*piVar24 * 0x10);
                pfVar3 = (float *)(param_1 + (long)piVar24[2] * 0x10);
                fVar51 = pfVar1[1] - pfVar2[1];
                fVar50 = *pfVar1 - *pfVar2;
                fVar52 = *pfVar3 - *pfVar1;
                fVar44 = pfVar3[1] - pfVar1[1];
                fVar37 = pfVar1[2] - pfVar2[2];
                fVar30 = pfVar3[2] - pfVar1[2];
                fVar47 = (float)NEON_fnmsub(fVar44,fVar50,fVar52 * fVar51);
                local_c0 = (float)NEON_fnmsub(fVar30,fVar51,fVar44 * fVar37);
                fStack_bc = (float)NEON_fnmsub(fVar52,fVar37,fVar30 * fVar50);
                uVar31 = NEON_fmadd(local_c0,local_c0,fVar47 * fVar47);
                fVar44 = (float)NEON_fmadd(fStack_bc,fStack_bc,uVar31);
                if (SQRT(fVar44) == 0.0) {
                  fStack_bc = 0.0;
                  local_b8 = 0.0;
                  local_c0 = 1.0;
                }
                else {
                  local_b8 = 1.0 / SQRT(fVar44);
                  local_c0 = local_b8 * local_c0;
                  fStack_bc = local_b8 * fStack_bc;
                  local_b8 = local_b8 * fVar47;
                }
                local_b4 = 0;
                iVar9 = maxdirsterid<btVector3>(param_1,param_2,(btVector3 *)&local_c0,abStack_e0);
                piVar24[7] = iVar9;
                if (*(int *)(pHVar10 + (long)iVar9 * 4) == 0) {
                  pfVar1 = (float *)(param_1 + (long)iVar9 * 0x10);
                  pfVar2 = (float *)(param_1 + (long)*piVar24 * 0x10);
                  uVar31 = NEON_fmadd(fStack_bc,pfVar1[1] - pfVar2[1],local_c0 * (*pfVar1 - *pfVar2)
                                     );
                  iVar9 = NEON_fmadd(local_b8,pfVar1[2] - pfVar2[2],uVar31);
                  piVar24[8] = iVar9;
                }
                else {
                  piVar24[7] = -1;
                }
              }
              uVar23 = (int)uVar28 - 1;
              uVar28 = (ulong)uVar23;
            } while (uVar23 != 0);
          }
        }
      }
      if (iVar8 < 2) break;
      uVar28 = (ulong)*(uint *)(this + 4);
      iVar8 = iVar8 + -1;
    }
  }
  uVar31 = 1;
joined_r0x00f9dbfc:
  if ((local_d0 != (HullLibrary *)0x0) && (local_c8 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  if (pHVar10 != (HullLibrary *)0x0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)(pHVar10);
  }
  goto LAB_00f9dc54;
}


