// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cutLink
// Entry Point: 00f858a4
// Size: 2460 bytes
// Signature: undefined __thiscall cutLink(btSoftBody * this, int param_1, int param_2, float param_3)


/* btSoftBody::cutLink(int, int, float) */

bool __thiscall btSoftBody::cutLink(btSoftBody *this,int param_1,int param_2,float param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  bool bVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  undefined8 uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  long *plVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  float fVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  float fVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  long alStack_e0 [3];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_80;
  
  lVar9 = tpidr_el0;
  local_80 = *(long *)(lVar9 + 0x28);
  local_c4 = 0;
  lVar15 = *(long *)(this + 0x380) + (long)param_1 * 0x78;
  lVar12 = *(long *)(this + 0x380) + (long)param_2 * 0x78;
  fVar35 = (float)*(undefined8 *)(lVar15 + 0x10);
  fVar39 = (float)((ulong)*(undefined8 *)(lVar15 + 0x10) >> 0x20);
  fVar43 = (float)*(undefined8 *)(lVar15 + 0x30);
  fVar44 = (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20);
  alStack_e0[2] =
       CONCAT44(fVar39 + ((float)((ulong)*(undefined8 *)(lVar12 + 0x10) >> 0x20) - fVar39) * param_3
                ,fVar35 + ((float)*(undefined8 *)(lVar12 + 0x10) - fVar35) * param_3);
  local_c8 = NEON_fmadd(*(float *)(lVar12 + 0x18) - *(float *)(lVar15 + 0x18),param_3,
                        *(float *)(lVar15 + 0x18));
  uVar28 = CONCAT44(fVar44 + ((float)((ulong)*(undefined8 *)(lVar12 + 0x30) >> 0x20) - fVar44) *
                             param_3,
                    fVar43 + ((float)*(undefined8 *)(lVar12 + 0x30) - fVar43) * param_3);
  uVar45 = NEON_fmadd(*(float *)(lVar12 + 0x38) - *(float *)(lVar15 + 0x38),param_3,
                      *(float *)(lVar15 + 0x38));
  appendNode(this,(btVector3 *)(alStack_e0 + 2),1.0);
  appendNode(this,(btVector3 *)(alStack_e0 + 2),1.0);
  lVar12 = *(long *)(this + 0x380);
  iVar7 = *(int *)(this + 0x374) + -2;
  iVar8 = *(int *)(this + 0x374) + -1;
  lVar24 = lVar12 + (long)param_1 * 0x78;
  lVar15 = lVar12 + (long)iVar7 * 0x78;
  lVar32 = lVar12 + (long)iVar8 * 0x78;
  lVar25 = lVar12 + (long)param_2 * 0x78;
  *(undefined8 *)(lVar15 + 0x30) = uVar28;
  *(undefined4 *)(lVar15 + 0x38) = uVar45;
  *(undefined4 *)(lVar15 + 0x3c) = 0;
  *(undefined8 *)(lVar32 + 0x30) = uVar28;
  *(undefined4 *)(lVar32 + 0x38) = uVar45;
  *(undefined4 *)(lVar32 + 0x3c) = 0;
  uVar5 = *(uint *)(this + 0x394);
  alStack_e0[0] = lVar15;
  alStack_e0[1] = lVar32;
  if ((int)uVar5 < 1) {
    bVar10 = false;
  }
  else {
    lVar29 = 0;
    uVar26 = 0;
    bVar10 = false;
    do {
      lVar13 = *(long *)(*(long *)(this + 0x3a0) + lVar29 + 0x10);
      lVar19 = *(long *)(*(long *)(this + 0x3a0) + lVar29 + 0x18);
      uVar11 = 0xffffffff;
      if (lVar19 == lVar24 && lVar13 == lVar25) {
        uVar11 = 1;
      }
      uVar3 = 0;
      if (lVar19 != lVar25 || lVar13 != lVar24) {
        uVar3 = uVar11;
      }
      if (uVar3 != 0xffffffff) {
        appendLink(this,(int)uVar26,(Material *)0x0);
        lVar13 = *(long *)(this + 0x3a0);
        iVar6 = *(int *)(this + 0x394);
        bVar10 = true;
        lVar19 = alStack_e0[1 - uVar3];
        *(long *)(lVar13 + lVar29 + 0x18) = alStack_e0[uVar3];
        *(long *)(lVar13 + (long)iVar6 * 0x48 + -0x38) = lVar19;
      }
      uVar26 = uVar26 + 1;
      lVar29 = lVar29 + 0x48;
    } while (uVar5 != uVar26);
  }
  uVar5 = *(uint *)(this + 0x3b4);
  if (0 < (int)uVar5) {
    uVar26 = 0;
    lVar13 = lVar12 + (long)iVar7 * 0x78;
    lVar29 = lVar12 + (long)iVar8 * 0x78;
    do {
      uVar14 = 2;
      uVar34 = 0;
      do {
        lVar27 = *(long *)(this + 0x3c0);
        lVar19 = lVar27 + uVar26 * 0x48 + 0x10;
        lVar16 = *(long *)(lVar19 + uVar34 * 8);
        lVar19 = *(long *)(lVar19 + (uVar14 & 0xffffffff) * 8);
        iVar6 = -1;
        if (lVar16 == lVar24 && lVar19 == lVar25) {
          iVar6 = 1;
        }
        iVar4 = 0;
        if (lVar16 != lVar25 || lVar19 != lVar24) {
          iVar4 = iVar6;
        }
        if (iVar4 != -1) {
          puVar17 = (undefined8 *)(lVar27 + uVar26 * 0x48);
          uVar11 = *(uint *)(this + 0x3b4);
          uStack_b8 = puVar17[3];
          local_c0 = puVar17[2];
          uStack_a8 = puVar17[5];
          local_b0 = puVar17[4];
          uVar28 = *puVar17;
          uVar37 = puVar17[1];
          uStack_98 = puVar17[7];
          local_a0 = puVar17[6];
          local_90 = puVar17[8];
          if (uVar11 == *(uint *)(this + 0x3b8)) {
            iVar6 = uVar11 << 1;
            if (uVar11 == 0) {
              iVar6 = 1;
            }
            if ((int)uVar11 < iVar6) {
              if (iVar6 == 0) {
                lVar27 = 0;
              }
              else {
                gNumAlignedAllocs = gNumAlignedAllocs + 1;
                lVar27 = (*(code *)PTR_FUN_01048e38)((long)iVar6 * 0x48,0x10);
                uVar11 = *(uint *)(this + 0x3b4);
              }
              if (0 < (int)uVar11) {
                lVar19 = 0;
                do {
                  puVar17 = (undefined8 *)(lVar27 + lVar19);
                  puVar2 = (undefined8 *)(*(long *)(this + 0x3c0) + lVar19);
                  lVar19 = lVar19 + 0x48;
                  uVar22 = *puVar2;
                  puVar17[1] = puVar2[1];
                  *puVar17 = uVar22;
                  uVar40 = puVar2[4];
                  uVar38 = puVar2[7];
                  uVar36 = puVar2[6];
                  uVar22 = puVar2[8];
                  uVar42 = puVar2[3];
                  uVar41 = puVar2[2];
                  puVar17[5] = puVar2[5];
                  puVar17[4] = uVar40;
                  puVar17[7] = uVar38;
                  puVar17[6] = uVar36;
                  puVar17[8] = uVar22;
                  puVar17[3] = uVar42;
                  puVar17[2] = uVar41;
                } while ((ulong)uVar11 * 0x48 - lVar19 != 0);
              }
              if ((*(long *)(this + 0x3c0) != 0) && (this[0x3c8] != (btSoftBody)0x0)) {
                gNumAlignedFree = gNumAlignedFree + 1;
                (*(code *)PTR_FUN_01048e40)();
              }
              uVar11 = *(uint *)(this + 0x3b4);
              *(long *)(this + 0x3c0) = lVar27;
              *(int *)(this + 0x3b8) = iVar6;
              this[0x3c8] = (btSoftBody)0x1;
            }
          }
          puVar17 = (undefined8 *)(lVar27 + (long)(int)uVar11 * 0x48);
          *puVar17 = uVar28;
          puVar17[1] = uVar37;
          puVar17[3] = uStack_b8;
          puVar17[2] = local_c0;
          puVar17[5] = uStack_a8;
          puVar17[4] = local_b0;
          lVar16 = alStack_e0[1 - iVar4];
          puVar17[7] = uStack_98;
          puVar17[6] = local_a0;
          lVar27 = alStack_e0[iVar4];
          puVar17[8] = local_90;
          iVar6 = *(int *)(this + 0x3b4);
          lVar19 = *(long *)(this + 0x3c0);
          lVar30 = lVar19 + uVar26 * 0x48;
          uVar33 = 0;
          if (uVar34 + 1 != 3) {
            uVar33 = uVar34 + 1 & 0xffffffff;
          }
          lVar21 = lVar30 + 0x10;
          *(int *)(this + 0x3b4) = iVar6 + 1;
          plVar20 = (long *)(lVar21 + uVar33 * 8);
          *(long *)(lVar21 + uVar34 * 8) = lVar27;
          *(long *)(lVar19 + (long)iVar6 * 0x48 + (uVar14 & 0xffffffff) * 8 + 0x10) = lVar16;
          uVar11 = *(uint *)(this + 0x394);
          uVar14 = (ulong)uVar11;
          lVar27 = *plVar20;
          plVar31 = (long *)(lVar30 + 8);
          lVar16 = *plVar31;
          lVar19 = *(long *)(this + 0x3a0);
          if ((int)uVar11 < 1) {
LAB_00f85d74:
            if (lVar16 == 0) {
              lVar16 = **(long **)(this + 0x480);
            }
            if (uVar11 == *(uint *)(this + 0x398)) {
              iVar6 = uVar11 << 1;
              if (uVar11 == 0) {
                iVar6 = 1;
              }
              if ((int)uVar11 < iVar6) {
                if (iVar6 == 0) {
                  lVar19 = 0;
                }
                else {
                  gNumAlignedAllocs = gNumAlignedAllocs + 1;
                  lVar19 = (*(code *)PTR_FUN_01048e38)((long)iVar6 * 0x48,0x10);
                  uVar11 = *(uint *)(this + 0x394);
                  uVar14 = (ulong)uVar11;
                }
                if (0 < (int)uVar11) {
                  lVar30 = 0;
                  do {
                    puVar17 = (undefined8 *)(lVar19 + lVar30);
                    puVar2 = (undefined8 *)(*(long *)(this + 0x3a0) + lVar30);
                    lVar30 = lVar30 + 0x48;
                    uVar28 = *puVar2;
                    puVar17[1] = puVar2[1];
                    *puVar17 = uVar28;
                    uVar36 = puVar2[4];
                    uVar22 = puVar2[7];
                    uVar37 = puVar2[6];
                    uVar28 = puVar2[8];
                    uVar40 = puVar2[3];
                    uVar38 = puVar2[2];
                    puVar17[5] = puVar2[5];
                    puVar17[4] = uVar36;
                    puVar17[7] = uVar22;
                    puVar17[6] = uVar37;
                    puVar17[8] = uVar28;
                    puVar17[3] = uVar40;
                    puVar17[2] = uVar38;
                  } while (uVar14 * 0x48 - lVar30 != 0);
                }
                if ((*(long *)(this + 0x3a0) != 0) && (this[0x3a8] != (btSoftBody)0x0)) {
                  gNumAlignedFree = gNumAlignedFree + 1;
                  (*(code *)PTR_FUN_01048e40)();
                }
                *(int *)(this + 0x398) = iVar6;
                uVar11 = *(uint *)(this + 0x394);
                *(long *)(this + 0x3a0) = lVar19;
                this[0x3a8] = (btSoftBody)0x1;
              }
            }
            puVar17 = (undefined8 *)(lVar19 + (long)(int)uVar11 * 0x48);
            *puVar17 = 0;
            puVar17[1] = lVar16;
            puVar17[3] = 0;
            puVar17[2] = 0;
            puVar17[5] = 0;
            puVar17[4] = 0;
            puVar17[7] = 0;
            puVar17[6] = 0;
            puVar17[8] = 0;
            uVar11 = *(int *)(this + 0x394) + 1;
            uVar14 = (ulong)uVar11;
            lVar19 = *(long *)(this + 0x3a0) + (long)*(int *)(this + 0x394) * 0x48;
            *(uint *)(this + 0x394) = uVar11;
            *(long *)(lVar19 + 0x10) = lVar15;
            *(long *)(lVar19 + 0x18) = lVar27;
            fVar35 = *(float *)(lVar13 + 0x10) - *(float *)(lVar27 + 0x10);
            fVar39 = *(float *)(lVar13 + 0x14) - *(float *)(lVar27 + 0x14);
            uVar45 = NEON_fmadd(fVar39,fVar39,fVar35 * fVar35);
            fVar35 = *(float *)(lVar13 + 0x18) - *(float *)(lVar27 + 0x18);
            fVar35 = (float)NEON_fmadd(fVar35,fVar35,uVar45);
            *(float *)(lVar19 + 0x20) = SQRT(fVar35);
            this[0x4b4] = (btSoftBody)0x1;
            lVar19 = *(long *)(this + 0x3a0);
            lVar27 = *plVar20;
            lVar16 = *plVar31;
LAB_00f85f14:
            if (0 < (int)uVar14) {
              lVar30 = *(long *)(lVar19 + 0x18);
              lVar21 = *(long *)(lVar19 + 0x10);
              goto LAB_00f85f24;
            }
LAB_00f85f8c:
            uVar11 = (uint)uVar14;
            local_90 = 0;
            uStack_a8 = 0;
            local_b0 = 0;
            uStack_98 = 0;
            local_a0 = 0;
            uStack_b8 = 0;
            local_c0 = 0;
            if (lVar16 == 0) {
              lVar16 = **(long **)(this + 0x480);
            }
            if (uVar11 == *(uint *)(this + 0x398)) {
              iVar6 = uVar11 << 1;
              if (uVar11 == 0) {
                iVar6 = 1;
              }
              if ((int)uVar11 < iVar6) {
                if (iVar6 == 0) {
                  lVar19 = 0;
                }
                else {
                  gNumAlignedAllocs = gNumAlignedAllocs + 1;
                  lVar19 = (*(code *)PTR_FUN_01048e38)((long)iVar6 * 0x48,0x10);
                  uVar11 = *(uint *)(this + 0x394);
                  uVar14 = (ulong)uVar11;
                }
                if (0 < (int)uVar11) {
                  lVar30 = 0;
                  do {
                    puVar17 = (undefined8 *)(lVar19 + lVar30);
                    puVar2 = (undefined8 *)(*(long *)(this + 0x3a0) + lVar30);
                    lVar30 = lVar30 + 0x48;
                    uVar28 = *puVar2;
                    puVar17[1] = puVar2[1];
                    *puVar17 = uVar28;
                    uVar36 = puVar2[4];
                    uVar22 = puVar2[7];
                    uVar37 = puVar2[6];
                    uVar28 = puVar2[8];
                    uVar40 = puVar2[3];
                    uVar38 = puVar2[2];
                    puVar17[5] = puVar2[5];
                    puVar17[4] = uVar36;
                    puVar17[7] = uVar22;
                    puVar17[6] = uVar37;
                    puVar17[8] = uVar28;
                    puVar17[3] = uVar40;
                    puVar17[2] = uVar38;
                  } while (uVar14 * 0x48 - lVar30 != 0);
                }
                if ((*(long *)(this + 0x3a0) != 0) && (this[0x3a8] != (btSoftBody)0x0)) {
                  gNumAlignedFree = gNumAlignedFree + 1;
                  (*(code *)PTR_FUN_01048e40)();
                }
                uVar11 = *(uint *)(this + 0x394);
                *(long *)(this + 0x3a0) = lVar19;
                *(int *)(this + 0x398) = iVar6;
                this[0x3a8] = (btSoftBody)0x1;
              }
            }
            puVar17 = (undefined8 *)(lVar19 + (long)(int)uVar11 * 0x48);
            *puVar17 = 0;
            puVar17[1] = lVar16;
            puVar17[5] = uStack_a8;
            puVar17[4] = local_b0;
            puVar17[7] = uStack_98;
            puVar17[6] = local_a0;
            puVar17[8] = local_90;
            puVar17[3] = uStack_b8;
            puVar17[2] = local_c0;
            lVar19 = *(long *)(this + 0x3a0) + (long)*(int *)(this + 0x394) * 0x48;
            *(int *)(this + 0x394) = *(int *)(this + 0x394) + 1;
            *(long *)(lVar19 + 0x10) = lVar32;
            *(long *)(lVar19 + 0x18) = lVar27;
            fVar35 = *(float *)(lVar29 + 0x10) - *(float *)(lVar27 + 0x10);
            fVar39 = *(float *)(lVar29 + 0x14) - *(float *)(lVar27 + 0x14);
            uVar45 = NEON_fmadd(fVar39,fVar39,fVar35 * fVar35);
            fVar35 = *(float *)(lVar29 + 0x18) - *(float *)(lVar27 + 0x18);
            fVar35 = (float)NEON_fmadd(fVar35,fVar35,uVar45);
            *(float *)(lVar19 + 0x20) = SQRT(fVar35);
            this[0x4b4] = (btSoftBody)0x1;
          }
          else {
            if (((*(long *)(lVar19 + 0x10) != lVar15) ||
                (lVar30 = lVar27, lVar21 = lVar15, *(long *)(lVar19 + 0x18) != lVar27)) &&
               ((*(long *)(lVar19 + 0x10) != lVar27 ||
                (lVar30 = lVar15, lVar21 = lVar27, *(long *)(lVar19 + 0x18) != lVar15)))) {
              plVar18 = (long *)(lVar19 + 0x60);
              uVar33 = 1;
              do {
                uVar23 = uVar33;
                if (uVar14 == uVar23) goto LAB_00f85d74;
                plVar1 = plVar18 + -1;
                lVar30 = *plVar18;
                if ((*plVar1 == lVar15) && (lVar30 == lVar27)) break;
                plVar18 = plVar18 + 9;
                uVar33 = uVar23 + 1;
              } while ((*plVar1 != lVar27) || (lVar30 != lVar15));
              if (uVar14 <= uVar23) goto LAB_00f85d74;
              goto LAB_00f85f14;
            }
LAB_00f85f24:
            if (((lVar21 != lVar32) || (lVar30 != lVar27)) &&
               ((lVar21 != lVar27 || (lVar30 != lVar32)))) {
              plVar20 = (long *)(lVar19 + 0x60);
              uVar33 = 1;
              do {
                uVar23 = uVar33;
                if (uVar14 == uVar23) goto LAB_00f85f8c;
                plVar31 = plVar20 + -1;
                lVar30 = *plVar20;
                if ((*plVar31 == lVar32) && (lVar30 == lVar27)) break;
                plVar20 = plVar20 + 9;
                uVar33 = uVar23 + 1;
              } while ((*plVar31 != lVar27) || (lVar30 != lVar32));
              if (uVar14 <= uVar23) goto LAB_00f85f8c;
            }
          }
        }
        uVar33 = uVar34 + 1;
        uVar14 = uVar34;
        uVar34 = uVar33;
      } while (uVar33 != 3);
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar5);
  }
  if (!bVar10) {
    uVar28 = *(undefined8 *)(lVar12 + (long)iVar7 * 0x78 + 0x68);
    FUN_00f424e4(this + 0x4b8,uVar28);
    if (*(long *)(this + 0x4c0) != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(undefined8 *)(this + 0x4c0) = uVar28;
    *(int *)(this + 0x4cc) = *(int *)(this + 0x4cc) + -1;
    uVar28 = *(undefined8 *)(lVar12 + (long)iVar8 * 0x78 + 0x68);
    FUN_00f424e4(this + 0x4b8,uVar28);
    if (*(long *)(this + 0x4c0) != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(undefined8 *)(this + 0x4c0) = uVar28;
    *(int *)(this + 0x4cc) = *(int *)(this + 0x4cc) + -1;
    *(int *)(this + 0x374) = *(int *)(this + 0x374) + -2;
  }
  if (*(long *)(lVar9 + 0x28) == local_80) {
    return bVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


