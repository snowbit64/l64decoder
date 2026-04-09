// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generateClusters
// Entry Point: 00f81b98
// Size: 7228 bytes
// Signature: undefined __thiscall generateClusters(btSoftBody * this, int param_1, int param_2)


/* btSoftBody::generateClusters(int, int) */

void __thiscall btSoftBody::generateClusters(btSoftBody *this,int param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  void *__s;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  ulong uVar17;
  undefined *puVar18;
  uint uVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  undefined8 *puVar24;
  long lVar25;
  long lVar26;
  undefined uVar27;
  ulong uVar28;
  long *plVar29;
  ulong uVar30;
  uint uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  ulong local_d0;
  int local_b4 [3];
  long local_a8;
  
  lVar3 = tpidr_el0;
  local_a8 = *(long *)(lVar3 + 0x28);
  iVar10 = *(int *)(this + 0x5dc);
  while (0 < iVar10) {
    releaseCluster(this,0);
    iVar10 = *(int *)(this + 0x5dc);
  }
  if ((int)*(uint *)(this + 0x374) <= param_1) {
    param_1 = *(uint *)(this + 0x374);
  }
  if (iVar10 < param_1) {
    if (*(int *)(this + 0x5e0) < param_1) {
      if (param_1 == 0) {
        lVar7 = 0;
        lVar11 = *(long *)(this + 0x5e8);
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar7 = (*(code *)PTR_FUN_01048e38)
                          (-(ulong)((uint)param_1 >> 0x1f) & 0xfffffff800000000 |
                           (ulong)(uint)param_1 << 3,0x10);
        uVar19 = *(uint *)(this + 0x5dc);
        if (0 < (int)uVar19) {
          lVar11 = 0;
          do {
            *(undefined8 *)(lVar7 + lVar11) = *(undefined8 *)(*(long *)(this + 0x5e8) + lVar11);
            lVar11 = lVar11 + 8;
          } while ((ulong)uVar19 * 8 - lVar11 != 0);
        }
        lVar11 = *(long *)(this + 0x5e8);
      }
      if ((lVar11 != 0) && (this[0x5f0] != (btSoftBody)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(long *)(this + 0x5e8) = lVar7;
      *(int *)(this + 0x5e0) = param_1;
      this[0x5f0] = (btSoftBody)0x1;
    }
    lVar7 = (long)iVar10;
    do {
      *(undefined8 *)(*(long *)(this + 0x5e8) + lVar7 * 8) = 0;
      lVar7 = lVar7 + 1;
    } while (param_1 != lVar7);
  }
  *(int *)(this + 0x5dc) = param_1;
  if (0 < param_1) {
    lVar7 = 0;
    do {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      lVar11 = (*(code *)PTR_FUN_01048e38)(0x1a8,0x10);
      lVar12 = lVar7 * 8;
      *(undefined *)(lVar11 + 0x18) = 1;
      lVar7 = lVar7 + 1;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined *)(lVar11 + 0x38) = 1;
      *(undefined8 *)(lVar11 + 4) = 0;
      *(undefined8 *)(lVar11 + 0x30) = 0;
      *(undefined8 *)(lVar11 + 0x24) = 0;
      *(undefined *)(lVar11 + 0x58) = 1;
      *(undefined8 *)(lVar11 + 0x50) = 0;
      *(undefined8 *)(lVar11 + 0x44) = 0;
      *(undefined8 *)(lVar11 + 0x188) = 0;
      *(undefined8 *)(lVar11 + 400) = 0;
      *(undefined8 *)(lVar11 + 0x180) = 0;
      *(undefined8 *)(lVar11 + 0x198) = 0x3c23d70a42c80000;
      *(undefined *)(lVar11 + 0x1a0) = 0;
      *(long *)(*(long *)(this + 0x5e8) + lVar12) = lVar11;
      lVar11 = *(long *)(this + 0x5e8);
      *(undefined *)(*(long *)(lVar11 + lVar12) + 0x1a1) = 1;
      param_1 = *(int *)(this + 0x5dc);
    } while (lVar7 < param_1);
    if (0 < param_1) {
      iVar10 = *(int *)(this + 0x374);
      uVar30 = (ulong)(uint)param_1;
      if (iVar10 < 1) {
        local_d0 = 0;
        fVar37 = 0.0;
        fVar38 = 0.0;
      }
      else {
        fVar36 = 0.0;
        fVar37 = 0.0;
        fVar38 = 0.0;
        lVar7 = 0;
        uVar19 = param_1;
        while( true ) {
          iVar15 = (int)lVar7 * 0x74b1;
          iVar14 = 0;
          if (uVar19 != 0) {
            iVar14 = iVar15 / (int)uVar19;
          }
          lVar12 = *(long *)(this + 0x380) + lVar7 * 0x78;
          lVar11 = *(long *)(lVar11 + (ulong)(iVar15 - iVar14 * uVar19) * 8);
          fVar41 = *(float *)(lVar12 + 0x10);
          fVar40 = *(float *)(lVar12 + 0x14);
          uVar19 = *(uint *)(lVar11 + 0x24);
          fVar39 = *(float *)(lVar12 + 0x18);
          if (uVar19 == *(uint *)(lVar11 + 0x28)) {
            uVar31 = uVar19 << 1;
            if (uVar19 == 0) {
              uVar31 = 1;
            }
            if ((int)uVar19 < (int)uVar31) {
              if (uVar31 == 0) {
                lVar8 = 0;
              }
              else {
                gNumAlignedAllocs = gNumAlignedAllocs + 1;
                lVar8 = (*(code *)PTR_FUN_01048e38)
                                  (-(ulong)(uVar31 >> 0x1f) & 0xfffffff800000000 |
                                   (ulong)uVar31 << 3,0x10);
                uVar19 = *(uint *)(lVar11 + 0x24);
              }
              if (0 < (int)uVar19) {
                lVar25 = 0;
                do {
                  *(undefined8 *)(lVar8 + lVar25) =
                       *(undefined8 *)(*(long *)(lVar11 + 0x30) + lVar25);
                  lVar25 = lVar25 + 8;
                } while ((ulong)uVar19 * 8 - lVar25 != 0);
              }
              if ((*(long *)(lVar11 + 0x30) != 0) && (*(char *)(lVar11 + 0x38) != '\0')) {
                gNumAlignedFree = gNumAlignedFree + 1;
                (*(code *)PTR_FUN_01048e40)();
                uVar19 = *(uint *)(lVar11 + 0x24);
              }
              *(long *)(lVar11 + 0x30) = lVar8;
              *(uint *)(lVar11 + 0x28) = uVar31;
              *(undefined *)(lVar11 + 0x38) = 1;
              iVar10 = *(int *)(this + 0x374);
            }
          }
          fVar38 = fVar41 + fVar38;
          fVar37 = fVar40 + fVar37;
          fVar36 = fVar39 + fVar36;
          lVar7 = lVar7 + 1;
          *(long *)(*(long *)(lVar11 + 0x30) + (long)(int)uVar19 * 8) = lVar12;
          *(uint *)(lVar11 + 0x24) = uVar19 + 1;
          if (iVar10 <= lVar7) break;
          uVar19 = *(uint *)(this + 0x5dc);
          lVar11 = *(long *)(this + 0x5e8);
        }
        fVar39 = 1.0 / (float)iVar10;
        fVar38 = fVar39 * fVar38;
        fVar37 = fVar39 * fVar37;
        local_d0 = (ulong)(uint)(fVar39 * fVar36);
      }
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      pfVar9 = (float *)(*(code *)PTR_FUN_01048e38)(uVar30 << 4,0x10);
      if ((uint)param_1 < 8) {
        uVar13 = 0;
LAB_00f8259c:
        lVar7 = uVar30 - uVar13;
        pfVar16 = pfVar9 + uVar13 * 4 + 2;
        do {
          pfVar16[-2] = fVar38;
          lVar7 = lVar7 + -1;
          pfVar16[-1] = fVar37;
          *pfVar16 = (float)local_d0;
          pfVar16[1] = 0.0;
          pfVar16 = pfVar16 + 4;
        } while (lVar7 != 0);
      }
      else {
        uVar13 = uVar30 & 0xfffffff8;
        puVar22 = (undefined8 *)(pfVar9 + 0x10);
        uVar33 = CONCAT44(fVar37,fVar38);
        uVar28 = uVar13;
        do {
          puVar22[-7] = local_d0;
          puVar22[-8] = uVar33;
          puVar22[-5] = local_d0;
          puVar22[-6] = uVar33;
          uVar28 = uVar28 - 8;
          puVar22[-3] = local_d0;
          puVar22[-4] = uVar33;
          puVar22[-1] = local_d0;
          puVar22[-2] = uVar33;
          puVar22[1] = local_d0;
          *puVar22 = uVar33;
          puVar22[3] = local_d0;
          puVar22[2] = uVar33;
          puVar22[5] = local_d0;
          puVar22[4] = uVar33;
          puVar22[7] = local_d0;
          puVar22[6] = uVar33;
          puVar22 = puVar22 + 0x10;
        } while (uVar28 != 0);
        if (uVar13 != uVar30) goto LAB_00f8259c;
      }
      iVar10 = 0;
      do {
        uVar28 = 0;
        bVar5 = 0;
        fVar38 = (float)NEON_fminnm((float)iVar10 * 0.0625,0x3f800000);
        fVar38 = 2.0 - fVar38;
        do {
          lVar7 = *(long *)(*(long *)(this + 0x5e8) + uVar28 * 8);
          uVar19 = *(uint *)(lVar7 + 0x24);
          uVar13 = (ulong)uVar19;
          if ((int)uVar19 < 1) {
            fVar37 = 0.0;
            fVar36 = 0.0;
            fVar39 = 0.0;
          }
          else {
            lVar7 = *(long *)(lVar7 + 0x30);
            if (uVar19 == 1) {
              fVar37 = 0.0;
              fVar36 = 0.0;
              fVar39 = 0.0;
              uVar20 = 0;
            }
            else {
              uVar20 = uVar13 & 0xfffffffe;
              fVar37 = 0.0;
              fVar36 = 0.0;
              fVar40 = 0.0;
              fVar39 = 0.0;
              fVar41 = 0.0;
              fVar34 = 0.0;
              plVar29 = (long *)(lVar7 + 8);
              uVar17 = uVar20;
              do {
                plVar21 = plVar29 + -1;
                lVar11 = *plVar29;
                uVar17 = uVar17 - 2;
                plVar29 = plVar29 + 2;
                uVar33 = *(undefined8 *)(*plVar21 + 0x10);
                uVar35 = *(undefined8 *)(lVar11 + 0x10);
                fVar41 = (float)uVar33 + fVar41;
                fVar34 = (float)((ulong)uVar33 >> 0x20) + fVar34;
                fVar37 = (float)uVar35 + fVar37;
                fVar36 = (float)((ulong)uVar35 >> 0x20) + fVar36;
                fVar40 = *(float *)(*plVar21 + 0x18) + fVar40;
                fVar39 = *(float *)(lVar11 + 0x18) + fVar39;
              } while (uVar17 != 0);
              fVar37 = fVar37 + fVar41;
              fVar36 = fVar36 + fVar34;
              fVar39 = fVar39 + fVar40;
              if (uVar20 == uVar13) goto LAB_00f826fc;
            }
            lVar11 = uVar13 - uVar20;
            plVar29 = (long *)(lVar7 + uVar20 * 8);
            do {
              lVar11 = lVar11 + -1;
              uVar33 = *(undefined8 *)(*plVar29 + 0x10);
              fVar37 = (float)uVar33 + fVar37;
              fVar36 = (float)((ulong)uVar33 >> 0x20) + fVar36;
              fVar39 = *(float *)(*plVar29 + 0x18) + fVar39;
              plVar29 = plVar29 + 1;
            } while (lVar11 != 0);
          }
LAB_00f826fc:
          if (uVar19 != 0) {
            puVar22 = (undefined8 *)(pfVar9 + uVar28 * 4);
            *(undefined4 *)((long)puVar22 + 0xc) = 0;
            fVar40 = 1.0 / (float)uVar19;
            fVar41 = (float)*puVar22;
            fVar34 = (float)((ulong)*puVar22 >> 0x20);
            fVar39 = (float)NEON_fnmsub(fVar40,fVar39,*(float *)(puVar22 + 1));
            fVar37 = (-fVar41 + fVar37 * fVar40) * fVar38;
            fVar36 = (-fVar34 + fVar36 * fVar40) * fVar38;
            fVar39 = fVar39 * fVar38;
            *puVar22 = CONCAT44(fVar36 + fVar34,fVar37 + fVar41);
            *(float *)(puVar22 + 1) = fVar39 + *(float *)(puVar22 + 1);
            fVar37 = (float)NEON_fmadd(fVar39,fVar39,fVar37 * fVar37 + fVar36 * fVar36);
            lVar11 = *(long *)(*(long *)(this + 0x5e8) + uVar28 * 8);
            lVar7 = (long)*(int *)(lVar11 + 0x24);
            if (*(int *)(lVar11 + 0x24) < 0) {
              if (*(int *)(lVar11 + 0x28) < 0) {
                if ((*(long *)(lVar11 + 0x30) != 0) && (*(char *)(lVar11 + 0x38) != '\0')) {
                  gNumAlignedFree = gNumAlignedFree + 1;
                  (*(code *)PTR_FUN_01048e40)();
                }
                *(undefined8 *)(lVar11 + 0x30) = 0;
                *(undefined4 *)(lVar11 + 0x28) = 0;
                *(undefined *)(lVar11 + 0x38) = 1;
              }
              do {
                *(undefined8 *)(*(long *)(lVar11 + 0x30) + lVar7 * 8) = 0;
                bVar6 = lVar7 != -1;
                lVar7 = lVar7 + 1;
              } while (bVar6);
            }
            bVar5 = bVar5 | 1.192093e-07 < fVar37;
            *(undefined4 *)(lVar11 + 0x24) = 0;
          }
          uVar28 = uVar28 + 1;
        } while (uVar28 != uVar30);
        uVar19 = *(uint *)(this + 0x374);
        if (0 < (int)uVar19) {
          lVar7 = 0;
          do {
            lVar11 = *(long *)(this + 0x380) + lVar7 * 0x78;
            if (param_1 < 2) {
              iVar15 = 0;
            }
            else {
              uVar28 = 1;
              fVar38 = ABS(pfVar9[1] - *(float *)(lVar11 + 0x14)) +
                       ABS(*pfVar9 - *(float *)(lVar11 + 0x10)) +
                       ABS(pfVar9[2] - *(float *)(lVar11 + 0x18));
              pfVar16 = pfVar9 + 6;
              iVar14 = 0;
              do {
                fVar37 = ABS(pfVar16[-1] - *(float *)(lVar11 + 0x14)) +
                         ABS(pfVar16[-2] - *(float *)(lVar11 + 0x10)) +
                         ABS(*pfVar16 - *(float *)(lVar11 + 0x18));
                bVar6 = fVar38 <= fVar37;
                fVar38 = (float)NEON_fminnm(fVar37,fVar38);
                iVar15 = (int)uVar28;
                if (bVar6) {
                  iVar15 = iVar14;
                }
                uVar28 = uVar28 + 1;
                pfVar16 = pfVar16 + 4;
                iVar14 = iVar15;
              } while (uVar30 != uVar28);
            }
            lVar12 = *(long *)(*(long *)(this + 0x5e8) + (long)iVar15 * 8);
            uVar31 = *(uint *)(lVar12 + 0x24);
            if (uVar31 == *(uint *)(lVar12 + 0x28)) {
              uVar2 = uVar31 << 1;
              if (uVar31 == 0) {
                uVar2 = 1;
              }
              if ((int)uVar31 < (int)uVar2) {
                if (uVar2 == 0) {
                  lVar8 = 0;
                }
                else {
                  gNumAlignedAllocs = gNumAlignedAllocs + 1;
                  lVar8 = (*(code *)PTR_FUN_01048e38)
                                    (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 |
                                     (ulong)uVar2 << 3,0x10);
                  uVar31 = *(uint *)(lVar12 + 0x24);
                }
                if (0 < (int)uVar31) {
                  lVar25 = 0;
                  do {
                    *(undefined8 *)(lVar8 + lVar25) =
                         *(undefined8 *)(*(long *)(lVar12 + 0x30) + lVar25);
                    lVar25 = lVar25 + 8;
                  } while ((ulong)uVar31 * 8 - lVar25 != 0);
                }
                if ((*(long *)(lVar12 + 0x30) != 0) && (*(char *)(lVar12 + 0x38) != '\0')) {
                  gNumAlignedFree = gNumAlignedFree + 1;
                  (*(code *)PTR_FUN_01048e40)();
                  uVar31 = *(uint *)(lVar12 + 0x24);
                }
                *(long *)(lVar12 + 0x30) = lVar8;
                *(uint *)(lVar12 + 0x28) = uVar2;
                *(undefined *)(lVar12 + 0x38) = 1;
                uVar19 = *(uint *)(this + 0x374);
              }
            }
            lVar7 = lVar7 + 1;
            *(long *)(*(long *)(lVar12 + 0x30) + (long)(int)uVar31 * 8) = lVar11;
            *(uint *)(lVar12 + 0x24) = uVar31 + 1;
          } while (lVar7 < (int)uVar19);
        }
        iVar10 = iVar10 + 1;
      } while ((bool)(bVar5 & iVar10 < param_2));
      if ((int)uVar19 < 1) {
        __s = (void *)0x0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        __s = (void *)(*(code *)PTR_FUN_01048e38)((ulong)uVar19 << 2,0x10);
        memset(__s,0xff,(ulong)uVar19 << 2);
      }
      iVar10 = *(int *)(this + 0x5dc);
      if (0 < iVar10) {
        lVar7 = 0;
        lVar11 = *(long *)(this + 0x5e8);
        do {
          lVar12 = *(long *)(lVar11 + lVar7 * 8);
          if (0 < *(int *)(lVar12 + 0x24)) {
            lVar8 = 0;
            lVar25 = *(long *)(this + 0x380);
            lVar26 = *(long *)(lVar12 + 0x30);
            do {
              lVar1 = lVar8 * 8;
              lVar8 = lVar8 + 1;
              uVar19 = (int)((ulong)(*(long *)(lVar26 + lVar1) - lVar25) >> 3) * -0x11111111;
              *(int *)((long)__s +
                      (-(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar19 << 2)) =
                   (int)lVar7;
            } while (lVar8 < *(int *)(lVar12 + 0x24));
            iVar10 = *(int *)(this + 0x5dc);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar10);
      }
      if (0 < *(int *)(this + 0x3b4)) {
        lVar7 = 0;
LAB_00f82a68:
        lVar11 = *(long *)(this + 0x3c0) + lVar7 * 0x48;
        lVar12 = *(long *)(this + 0x380);
        iVar10 = (int)((ulong)(*(long *)(lVar11 + 0x10) - lVar12) >> 3) * -0x11111111;
        local_b4[0] = iVar10;
        local_b4[1] = (int)((ulong)(*(long *)(lVar11 + 0x18) - lVar12) >> 3) * -0x11111111;
        local_b4[2] = (int)((ulong)(*(long *)(lVar11 + 0x20) - lVar12) >> 3) * -0x11111111;
        lVar11 = 0;
        do {
          lVar12 = lVar11 + 1;
          iVar10 = *(int *)((long)__s + (long)iVar10 * 4);
          lVar8 = 0;
          if (lVar12 != 3) {
            lVar8 = lVar11 + 1;
          }
          if (*(int *)((long)__s + (long)local_b4[lVar8] * 4) != iVar10) {
            lVar25 = *(long *)(*(long *)(this + 0x5e8) + (long)iVar10 * 8);
            lVar8 = *(long *)(this + 0x380) + (long)local_b4[lVar8] * 0x78;
            uVar19 = *(uint *)(lVar25 + 0x24);
            uVar28 = (ulong)uVar19;
            plVar29 = *(long **)(lVar25 + 0x30);
            uVar30 = uVar28;
            plVar21 = plVar29;
            if (0 < (int)uVar19) {
              do {
                if (*plVar21 == lVar8) {
                  if ((int)uVar30 != 0) goto LAB_00f82c14;
                  break;
                }
                uVar30 = uVar30 - 1;
                plVar21 = plVar21 + 1;
              } while (uVar30 != 0);
            }
            if (uVar19 == *(uint *)(lVar25 + 0x28)) {
              uVar31 = uVar19 << 1;
              if (uVar19 == 0) {
                uVar31 = 1;
              }
              if ((int)uVar19 < (int)uVar31) {
                if (uVar31 == 0) {
                  plVar29 = (long *)0x0;
                }
                else {
                  gNumAlignedAllocs = gNumAlignedAllocs + 1;
                  plVar29 = (long *)(*(code *)PTR_FUN_01048e38)
                                              (-(ulong)(uVar31 >> 0x1f) & 0xfffffff800000000 |
                                               (ulong)uVar31 << 3,0x10);
                  uVar19 = *(uint *)(lVar25 + 0x24);
                  uVar28 = (ulong)uVar19;
                }
                if (0 < (int)uVar19) {
                  uVar19 = (uint)uVar28;
                  lVar26 = 0;
                  do {
                    *(undefined8 *)((long)plVar29 + lVar26) =
                         *(undefined8 *)(*(long *)(lVar25 + 0x30) + lVar26);
                    lVar26 = lVar26 + 8;
                  } while (uVar28 * 8 - lVar26 != 0);
                }
                if ((*(long *)(lVar25 + 0x30) != 0) && (*(char *)(lVar25 + 0x38) != '\0')) {
                  gNumAlignedFree = gNumAlignedFree + 1;
                  (*(code *)PTR_FUN_01048e40)();
                  uVar19 = *(uint *)(lVar25 + 0x24);
                }
                *(long **)(lVar25 + 0x30) = plVar29;
                *(undefined *)(lVar25 + 0x38) = 1;
                *(uint *)(lVar25 + 0x28) = uVar31;
              }
            }
            plVar29[(int)uVar19] = lVar8;
            *(uint *)(lVar25 + 0x24) = uVar19 + 1;
          }
LAB_00f82c14:
          uVar19 = (int)lVar11 + 2;
          if (*(int *)((long)__s +
                      (long)local_b4[uVar19 - (uVar19 / 3 +
                                              ((uint)((ulong)uVar19 * 0xaaaaaaab >> 0x20) &
                                              0xfffffffe))] * 4) != iVar10) {
            lVar11 = *(long *)(*(long *)(this + 0x5e8) + (long)iVar10 * 8);
            lVar8 = *(long *)(this + 0x380) +
                    (long)local_b4[uVar19 - (uVar19 / 3 +
                                            ((uint)((ulong)uVar19 * 0xaaaaaaab >> 0x20) & 0xfffffffe
                                            ))] * 0x78;
            uVar19 = *(uint *)(lVar11 + 0x24);
            uVar28 = (ulong)uVar19;
            plVar29 = *(long **)(lVar11 + 0x30);
            uVar30 = uVar28;
            plVar21 = plVar29;
            if (0 < (int)uVar19) {
              do {
                if (*plVar21 == lVar8) {
                  if ((int)uVar30 != 0) goto LAB_00f82d70;
                  break;
                }
                uVar30 = uVar30 - 1;
                plVar21 = plVar21 + 1;
              } while (uVar30 != 0);
            }
            if (uVar19 == *(uint *)(lVar11 + 0x28)) {
              uVar31 = uVar19 << 1;
              if (uVar19 == 0) {
                uVar31 = 1;
              }
              if ((int)uVar19 < (int)uVar31) {
                if (uVar31 == 0) {
                  plVar29 = (long *)0x0;
                }
                else {
                  gNumAlignedAllocs = gNumAlignedAllocs + 1;
                  plVar29 = (long *)(*(code *)PTR_FUN_01048e38)
                                              (-(ulong)(uVar31 >> 0x1f) & 0xfffffff800000000 |
                                               (ulong)uVar31 << 3,0x10);
                  uVar19 = *(uint *)(lVar11 + 0x24);
                  uVar28 = (ulong)uVar19;
                }
                if (0 < (int)uVar19) {
                  uVar19 = (uint)uVar28;
                  lVar25 = 0;
                  do {
                    *(undefined8 *)((long)plVar29 + lVar25) =
                         *(undefined8 *)(*(long *)(lVar11 + 0x30) + lVar25);
                    lVar25 = lVar25 + 8;
                  } while (uVar28 * 8 - lVar25 != 0);
                }
                if ((*(long *)(lVar11 + 0x30) != 0) && (*(char *)(lVar11 + 0x38) != '\0')) {
                  gNumAlignedFree = gNumAlignedFree + 1;
                  (*(code *)PTR_FUN_01048e40)();
                  uVar19 = *(uint *)(lVar11 + 0x24);
                }
                *(long **)(lVar11 + 0x30) = plVar29;
                *(undefined *)(lVar11 + 0x38) = 1;
                *(uint *)(lVar11 + 0x28) = uVar31;
              }
            }
            plVar29[(int)uVar19] = lVar8;
            *(uint *)(lVar11 + 0x24) = uVar19 + 1;
          }
LAB_00f82d70:
          if (lVar12 == 3) goto LAB_00f82a54;
          iVar10 = local_b4[lVar12];
          lVar11 = lVar12;
        } while( true );
      }
      goto LAB_00f82d94;
    }
  }
  iVar10 = *(int *)(this + 0x3d4);
  if (iVar10 == 0) {
    iVar10 = *(int *)(this + 0x3b4);
    if (param_1 < iVar10) {
      if (*(int *)(this + 0x5e0) < iVar10) {
        if (iVar10 == 0) {
          lVar7 = 0;
        }
        else {
          gNumAlignedAllocs = gNumAlignedAllocs + 1;
          lVar7 = (*(code *)PTR_FUN_01048e38)((long)iVar10 << 3,0x10);
          uVar19 = *(uint *)(this + 0x5dc);
          if (0 < (int)uVar19) {
            lVar11 = 0;
            do {
              *(undefined8 *)(lVar7 + lVar11) = *(undefined8 *)(*(long *)(this + 0x5e8) + lVar11);
              lVar11 = lVar11 + 8;
            } while ((ulong)uVar19 * 8 - lVar11 != 0);
          }
        }
        if ((*(long *)(this + 0x5e8) != 0) && (this[0x5f0] != (btSoftBody)0x0)) {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)();
        }
        *(long *)(this + 0x5e8) = lVar7;
        *(int *)(this + 0x5e0) = iVar10;
        this[0x5f0] = (btSoftBody)0x1;
      }
      lVar7 = (long)param_1;
      do {
        *(undefined8 *)(*(long *)(this + 0x5e8) + lVar7 * 8) = 0;
        lVar7 = lVar7 + 1;
      } while (iVar10 != lVar7);
    }
    *(int *)(this + 0x5dc) = iVar10;
    if (0 < iVar10) {
      lVar7 = 0;
      do {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar11 = (*(code *)PTR_FUN_01048e38)(0x1a8,0x10);
        lVar12 = lVar7 * 8;
        *(undefined *)(lVar11 + 0x18) = 1;
        lVar7 = lVar7 + 1;
        *(undefined8 *)(lVar11 + 0x10) = 0;
        *(undefined *)(lVar11 + 0x38) = 1;
        *(undefined8 *)(lVar11 + 4) = 0;
        *(undefined8 *)(lVar11 + 0x30) = 0;
        *(undefined8 *)(lVar11 + 0x24) = 0;
        *(undefined *)(lVar11 + 0x58) = 1;
        *(undefined8 *)(lVar11 + 0x50) = 0;
        *(undefined8 *)(lVar11 + 0x44) = 0;
        *(undefined8 *)(lVar11 + 0x188) = 0;
        *(undefined8 *)(lVar11 + 400) = 0;
        *(undefined8 *)(lVar11 + 0x180) = 0;
        *(undefined8 *)(lVar11 + 0x198) = 0x3c23d70a42c80000;
        *(undefined *)(lVar11 + 0x1a0) = 0;
        *(long *)(*(long *)(this + 0x5e8) + lVar12) = lVar11;
        *(undefined *)(*(long *)(*(long *)(this + 0x5e8) + lVar12) + 0x1a1) = 1;
      } while (lVar7 < *(int *)(this + 0x5dc));
    }
    if (0 < *(int *)(this + 0x3b4)) {
      lVar7 = 0;
      do {
        lVar12 = *(long *)(this + 0x3c0);
        lVar11 = *(long *)(*(long *)(this + 0x5e8) + lVar7 * 8);
        uVar19 = *(uint *)(lVar11 + 0x24);
        if (uVar19 == *(uint *)(lVar11 + 0x28)) {
          uVar31 = uVar19 << 1;
          if (uVar19 == 0) {
            uVar31 = 1;
          }
          if ((int)uVar19 < (int)uVar31) {
            if (uVar31 == 0) {
              lVar8 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              lVar8 = (*(code *)PTR_FUN_01048e38)
                                (-(ulong)(uVar31 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar31 << 3,
                                 0x10);
              uVar19 = *(uint *)(lVar11 + 0x24);
            }
            if (0 < (int)uVar19) {
              lVar25 = 0;
              do {
                *(undefined8 *)(lVar8 + lVar25) = *(undefined8 *)(*(long *)(lVar11 + 0x30) + lVar25)
                ;
                lVar25 = lVar25 + 8;
              } while ((ulong)uVar19 * 8 - lVar25 != 0);
            }
            if ((*(long *)(lVar11 + 0x30) != 0) && (*(char *)(lVar11 + 0x38) != '\0')) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
              uVar19 = *(uint *)(lVar11 + 0x24);
            }
            *(undefined *)(lVar11 + 0x38) = 1;
            *(long *)(lVar11 + 0x30) = lVar8;
            *(uint *)(lVar11 + 0x28) = uVar31;
          }
        }
        *(undefined8 *)(*(long *)(lVar11 + 0x30) + (long)(int)uVar19 * 8) =
             *(undefined8 *)(lVar12 + lVar7 * 0x48 + 0x10);
        *(uint *)(lVar11 + 0x24) = uVar19 + 1;
        lVar12 = *(long *)(this + 0x3c0);
        lVar11 = *(long *)(*(long *)(this + 0x5e8) + lVar7 * 8);
        uVar19 = *(uint *)(lVar11 + 0x24);
        if (uVar19 == *(uint *)(lVar11 + 0x28)) {
          uVar31 = uVar19 << 1;
          if (uVar19 == 0) {
            uVar31 = 1;
          }
          if ((int)uVar19 < (int)uVar31) {
            if (uVar31 == 0) {
              lVar8 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              lVar8 = (*(code *)PTR_FUN_01048e38)
                                (-(ulong)(uVar31 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar31 << 3,
                                 0x10);
              uVar19 = *(uint *)(lVar11 + 0x24);
            }
            if (0 < (int)uVar19) {
              lVar25 = 0;
              do {
                *(undefined8 *)(lVar8 + lVar25) = *(undefined8 *)(*(long *)(lVar11 + 0x30) + lVar25)
                ;
                lVar25 = lVar25 + 8;
              } while ((ulong)uVar19 * 8 - lVar25 != 0);
            }
            if ((*(long *)(lVar11 + 0x30) != 0) && (*(char *)(lVar11 + 0x38) != '\0')) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
              uVar19 = *(uint *)(lVar11 + 0x24);
            }
            *(undefined *)(lVar11 + 0x38) = 1;
            *(long *)(lVar11 + 0x30) = lVar8;
            *(uint *)(lVar11 + 0x28) = uVar31;
          }
        }
        *(undefined8 *)(*(long *)(lVar11 + 0x30) + (long)(int)uVar19 * 8) =
             *(undefined8 *)(lVar12 + lVar7 * 0x48 + 0x18);
        *(uint *)(lVar11 + 0x24) = uVar19 + 1;
        lVar12 = *(long *)(this + 0x3c0);
        lVar11 = *(long *)(*(long *)(this + 0x5e8) + lVar7 * 8);
        uVar19 = *(uint *)(lVar11 + 0x24);
        if (uVar19 == *(uint *)(lVar11 + 0x28)) {
          uVar31 = uVar19 << 1;
          if (uVar19 == 0) {
            uVar31 = 1;
          }
          if ((int)uVar19 < (int)uVar31) {
            if (uVar31 == 0) {
              lVar8 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              lVar8 = (*(code *)PTR_FUN_01048e38)
                                (-(ulong)(uVar31 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar31 << 3,
                                 0x10);
              uVar19 = *(uint *)(lVar11 + 0x24);
            }
            if (0 < (int)uVar19) {
              lVar25 = 0;
              do {
                *(undefined8 *)(lVar8 + lVar25) = *(undefined8 *)(*(long *)(lVar11 + 0x30) + lVar25)
                ;
                lVar25 = lVar25 + 8;
              } while ((ulong)uVar19 * 8 - lVar25 != 0);
            }
            if ((*(long *)(lVar11 + 0x30) != 0) && (*(char *)(lVar11 + 0x38) != '\0')) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
              uVar19 = *(uint *)(lVar11 + 0x24);
            }
            *(undefined *)(lVar11 + 0x38) = 1;
            *(long *)(lVar11 + 0x30) = lVar8;
            *(uint *)(lVar11 + 0x28) = uVar31;
          }
        }
        lVar8 = lVar7 * 0x48;
        lVar7 = lVar7 + 1;
        *(undefined8 *)(*(long *)(lVar11 + 0x30) + (long)(int)uVar19 * 8) =
             *(undefined8 *)(lVar12 + lVar8 + 0x20);
        *(uint *)(lVar11 + 0x24) = uVar19 + 1;
      } while (lVar7 < *(int *)(this + 0x3b4));
    }
  }
  else {
    if (param_1 < iVar10) {
      if (*(int *)(this + 0x5e0) < iVar10) {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar7 = (*(code *)PTR_FUN_01048e38)((long)iVar10 << 3,0x10);
        uVar19 = *(uint *)(this + 0x5dc);
        if (0 < (int)uVar19) {
          lVar11 = 0;
          do {
            *(undefined8 *)(lVar7 + lVar11) = *(undefined8 *)(*(long *)(this + 0x5e8) + lVar11);
            lVar11 = lVar11 + 8;
          } while ((ulong)uVar19 * 8 - lVar11 != 0);
        }
        if ((*(long *)(this + 0x5e8) != 0) && (this[0x5f0] != (btSoftBody)0x0)) {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)();
        }
        *(long *)(this + 0x5e8) = lVar7;
        *(int *)(this + 0x5e0) = iVar10;
        this[0x5f0] = (btSoftBody)0x1;
      }
      lVar7 = (long)param_1;
      do {
        *(undefined8 *)(*(long *)(this + 0x5e8) + lVar7 * 8) = 0;
        lVar7 = lVar7 + 1;
      } while (iVar10 != lVar7);
    }
    *(int *)(this + 0x5dc) = iVar10;
    if (0 < iVar10) {
      lVar7 = 0;
      do {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar11 = (*(code *)PTR_FUN_01048e38)(0x1a8,0x10);
        lVar12 = lVar7 * 8;
        *(undefined *)(lVar11 + 0x18) = 1;
        lVar7 = lVar7 + 1;
        *(undefined8 *)(lVar11 + 0x10) = 0;
        *(undefined *)(lVar11 + 0x38) = 1;
        *(undefined8 *)(lVar11 + 4) = 0;
        *(undefined8 *)(lVar11 + 0x30) = 0;
        *(undefined8 *)(lVar11 + 0x24) = 0;
        *(undefined *)(lVar11 + 0x58) = 1;
        *(undefined8 *)(lVar11 + 0x50) = 0;
        *(undefined8 *)(lVar11 + 0x44) = 0;
        *(undefined8 *)(lVar11 + 0x188) = 0;
        *(undefined8 *)(lVar11 + 400) = 0;
        *(undefined8 *)(lVar11 + 0x180) = 0;
        *(undefined8 *)(lVar11 + 0x198) = 0x3c23d70a42c80000;
        *(undefined *)(lVar11 + 0x1a0) = 0;
        *(long *)(*(long *)(this + 0x5e8) + lVar12) = lVar11;
        *(undefined *)(*(long *)(*(long *)(this + 0x5e8) + lVar12) + 0x1a1) = 1;
      } while (lVar7 < *(int *)(this + 0x5dc));
    }
    if (0 < *(int *)(this + 0x3d4)) {
      lVar7 = 0;
      do {
        lVar12 = *(long *)(this + 0x3e0);
        lVar11 = *(long *)(*(long *)(this + 0x5e8) + lVar7 * 8);
        uVar19 = *(uint *)(lVar11 + 0x24);
        if (uVar19 == *(uint *)(lVar11 + 0x28)) {
          uVar31 = uVar19 << 1;
          if (uVar19 == 0) {
            uVar31 = 1;
          }
          if ((int)uVar19 < (int)uVar31) {
            if (uVar31 == 0) {
              lVar8 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              lVar8 = (*(code *)PTR_FUN_01048e38)
                                (-(ulong)(uVar31 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar31 << 3,
                                 0x10);
              uVar19 = *(uint *)(lVar11 + 0x24);
            }
            if (0 < (int)uVar19) {
              lVar25 = 0;
              do {
                *(undefined8 *)(lVar8 + lVar25) = *(undefined8 *)(*(long *)(lVar11 + 0x30) + lVar25)
                ;
                lVar25 = lVar25 + 8;
              } while ((ulong)uVar19 * 8 - lVar25 != 0);
            }
            if ((*(long *)(lVar11 + 0x30) != 0) && (*(char *)(lVar11 + 0x38) != '\0')) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
              uVar19 = *(uint *)(lVar11 + 0x24);
            }
            *(undefined *)(lVar11 + 0x38) = 1;
            *(long *)(lVar11 + 0x30) = lVar8;
            *(uint *)(lVar11 + 0x28) = uVar31;
          }
        }
        *(undefined8 *)(*(long *)(lVar11 + 0x30) + (long)(int)uVar19 * 8) =
             *(undefined8 *)(lVar12 + lVar7 * 0x88 + 0x10);
        *(uint *)(lVar11 + 0x24) = uVar19 + 1;
        lVar12 = *(long *)(this + 0x3e0);
        lVar11 = *(long *)(*(long *)(this + 0x5e8) + lVar7 * 8);
        uVar19 = *(uint *)(lVar11 + 0x24);
        if (uVar19 == *(uint *)(lVar11 + 0x28)) {
          uVar31 = uVar19 << 1;
          if (uVar19 == 0) {
            uVar31 = 1;
          }
          if ((int)uVar19 < (int)uVar31) {
            if (uVar31 == 0) {
              lVar8 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              lVar8 = (*(code *)PTR_FUN_01048e38)
                                (-(ulong)(uVar31 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar31 << 3,
                                 0x10);
              uVar19 = *(uint *)(lVar11 + 0x24);
            }
            if (0 < (int)uVar19) {
              lVar25 = 0;
              do {
                *(undefined8 *)(lVar8 + lVar25) = *(undefined8 *)(*(long *)(lVar11 + 0x30) + lVar25)
                ;
                lVar25 = lVar25 + 8;
              } while ((ulong)uVar19 * 8 - lVar25 != 0);
            }
            if ((*(long *)(lVar11 + 0x30) != 0) && (*(char *)(lVar11 + 0x38) != '\0')) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
              uVar19 = *(uint *)(lVar11 + 0x24);
            }
            *(undefined *)(lVar11 + 0x38) = 1;
            *(long *)(lVar11 + 0x30) = lVar8;
            *(uint *)(lVar11 + 0x28) = uVar31;
          }
        }
        *(undefined8 *)(*(long *)(lVar11 + 0x30) + (long)(int)uVar19 * 8) =
             *(undefined8 *)(lVar12 + lVar7 * 0x88 + 0x18);
        *(uint *)(lVar11 + 0x24) = uVar19 + 1;
        lVar12 = *(long *)(this + 0x3e0);
        lVar11 = *(long *)(*(long *)(this + 0x5e8) + lVar7 * 8);
        uVar19 = *(uint *)(lVar11 + 0x24);
        if (uVar19 == *(uint *)(lVar11 + 0x28)) {
          uVar31 = uVar19 << 1;
          if (uVar19 == 0) {
            uVar31 = 1;
          }
          if ((int)uVar19 < (int)uVar31) {
            if (uVar31 == 0) {
              lVar8 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              lVar8 = (*(code *)PTR_FUN_01048e38)
                                (-(ulong)(uVar31 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar31 << 3,
                                 0x10);
              uVar19 = *(uint *)(lVar11 + 0x24);
            }
            if (0 < (int)uVar19) {
              lVar25 = 0;
              do {
                *(undefined8 *)(lVar8 + lVar25) = *(undefined8 *)(*(long *)(lVar11 + 0x30) + lVar25)
                ;
                lVar25 = lVar25 + 8;
              } while ((ulong)uVar19 * 8 - lVar25 != 0);
            }
            if ((*(long *)(lVar11 + 0x30) != 0) && (*(char *)(lVar11 + 0x38) != '\0')) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
              uVar19 = *(uint *)(lVar11 + 0x24);
            }
            *(undefined *)(lVar11 + 0x38) = 1;
            *(long *)(lVar11 + 0x30) = lVar8;
            *(uint *)(lVar11 + 0x28) = uVar31;
          }
        }
        *(undefined8 *)(*(long *)(lVar11 + 0x30) + (long)(int)uVar19 * 8) =
             *(undefined8 *)(lVar12 + lVar7 * 0x88 + 0x20);
        *(uint *)(lVar11 + 0x24) = uVar19 + 1;
        lVar12 = *(long *)(this + 0x3e0);
        lVar11 = *(long *)(*(long *)(this + 0x5e8) + lVar7 * 8);
        uVar19 = *(uint *)(lVar11 + 0x24);
        if (uVar19 == *(uint *)(lVar11 + 0x28)) {
          uVar31 = uVar19 << 1;
          if (uVar19 == 0) {
            uVar31 = 1;
          }
          if ((int)uVar19 < (int)uVar31) {
            if (uVar31 == 0) {
              lVar8 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              lVar8 = (*(code *)PTR_FUN_01048e38)
                                (-(ulong)(uVar31 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar31 << 3,
                                 0x10);
              uVar19 = *(uint *)(lVar11 + 0x24);
            }
            if (0 < (int)uVar19) {
              lVar25 = 0;
              do {
                *(undefined8 *)(lVar8 + lVar25) = *(undefined8 *)(*(long *)(lVar11 + 0x30) + lVar25)
                ;
                lVar25 = lVar25 + 8;
              } while ((ulong)uVar19 * 8 - lVar25 != 0);
            }
            if ((*(long *)(lVar11 + 0x30) != 0) && (*(char *)(lVar11 + 0x38) != '\0')) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
              uVar19 = *(uint *)(lVar11 + 0x24);
            }
            *(undefined *)(lVar11 + 0x38) = 1;
            *(long *)(lVar11 + 0x30) = lVar8;
            *(uint *)(lVar11 + 0x28) = uVar31;
          }
        }
        lVar8 = lVar7 * 0x88;
        lVar7 = lVar7 + 1;
        *(undefined8 *)(*(long *)(lVar11 + 0x30) + (long)(int)uVar19 * 8) =
             *(undefined8 *)(lVar12 + lVar8 + 0x28);
        *(uint *)(lVar11 + 0x24) = uVar19 + 1;
      } while (lVar7 < *(int *)(this + 0x3d4));
    }
  }
LAB_00f83528:
  if (*(int *)(this + 0x5dc) == 0) {
    uVar30 = 0;
    goto LAB_00f83714;
  }
  initializeClusters();
  updateClusters();
  uVar31 = *(uint *)(this + 0x5dc);
  uVar19 = *(uint *)(this + 0x5fc);
  uVar2 = uVar31 * uVar31;
  if ((int)uVar19 < (int)uVar2) {
    lVar7 = (long)(int)uVar19;
    if (*(int *)(this + 0x600) < (int)uVar2) {
      if (uVar2 == 0) {
        uVar30 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        uVar30 = (*(code *)PTR_FUN_01048e38)((ulong)uVar2,0x10);
        uVar19 = *(uint *)(this + 0x5fc);
      }
      uVar28 = *(ulong *)(this + 0x608);
      if ((int)uVar19 < 1) {
        if (uVar28 != 0) goto LAB_00f83608;
      }
      else {
        uVar13 = (ulong)uVar19;
        if ((uVar19 < 8) || ((uVar30 < uVar28 + uVar13 && (uVar28 < uVar30 + uVar13)))) {
          uVar17 = 0;
        }
        else {
          if (uVar19 < 0x20) {
            uVar20 = 0;
          }
          else {
            uVar17 = uVar13 & 0xffffffe0;
            puVar22 = (undefined8 *)(uVar28 + 0x10);
            puVar24 = (undefined8 *)(uVar30 + 0x10);
            uVar20 = uVar17;
            do {
              puVar4 = puVar22 + -1;
              uVar33 = puVar22[-2];
              uVar32 = puVar22[1];
              uVar35 = *puVar22;
              uVar20 = uVar20 - 0x20;
              puVar22 = puVar22 + 4;
              puVar24[-1] = *puVar4;
              puVar24[-2] = uVar33;
              puVar24[1] = uVar32;
              *puVar24 = uVar35;
              puVar24 = puVar24 + 4;
            } while (uVar20 != 0);
            if (uVar17 == uVar13) goto LAB_00f83608;
            uVar20 = uVar17;
            if ((uVar19 & 0x18) == 0) goto LAB_00f835e4;
          }
          uVar17 = uVar13 & 0xfffffff8;
          lVar11 = uVar20 - uVar17;
          puVar22 = (undefined8 *)(uVar28 + uVar20);
          puVar24 = (undefined8 *)(uVar30 + uVar20);
          do {
            lVar11 = lVar11 + 8;
            *puVar24 = *puVar22;
            puVar22 = puVar22 + 1;
            puVar24 = puVar24 + 1;
          } while (lVar11 != 0);
          if (uVar17 == uVar13) goto LAB_00f83608;
        }
LAB_00f835e4:
        lVar11 = uVar13 - uVar17;
        puVar18 = (undefined *)(uVar30 + uVar17);
        puVar23 = (undefined *)(uVar28 + uVar17);
        do {
          lVar11 = lVar11 + -1;
          *puVar18 = *puVar23;
          puVar18 = puVar18 + 1;
          puVar23 = puVar23 + 1;
        } while (lVar11 != 0);
LAB_00f83608:
        if (this[0x610] != (btSoftBody)0x0) {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)();
        }
      }
      *(ulong *)(this + 0x608) = uVar30;
      *(uint *)(this + 0x600) = uVar2;
      this[0x610] = (btSoftBody)0x1;
    }
    else {
      uVar30 = *(ulong *)(this + 0x608);
    }
    memset((void *)(uVar30 + lVar7),0,(ulong)uVar2 - lVar7);
    uVar31 = *(uint *)(this + 0x5dc);
  }
  uVar30 = (ulong)uVar31;
  *(uint *)(this + 0x5fc) = uVar2;
  if (0 < (int)uVar31) {
    uVar28 = 0;
    lVar7 = *(long *)(this + 0x5e8);
    do {
      lVar11 = *(long *)(lVar7 + uVar28 * 8);
      uVar13 = 0;
      uVar31 = *(uint *)(lVar11 + 0x24);
      *(int *)(lVar11 + 0x1a4) = (int)uVar28;
      lVar12 = *(long *)(this + 0x608);
      uVar19 = uVar31;
      if ((int)uVar31 < 1) {
        uVar19 = 0;
      }
      do {
        if (0 < (int)uVar31) {
          lVar8 = *(long *)(lVar7 + uVar13 * 8);
          uVar17 = 0;
          uVar2 = *(uint *)(lVar8 + 0x24);
          do {
            if (0 < (int)uVar2) {
              plVar29 = *(long **)(lVar8 + 0x30);
              uVar20 = (ulong)uVar2;
              do {
                if (*(long *)(*(long *)(lVar11 + 0x30) + uVar17 * 8) == *plVar29) {
                  uVar27 = 1;
                  goto LAB_00f836a0;
                }
                uVar20 = uVar20 - 1;
                plVar29 = plVar29 + 1;
              } while (uVar20 != 0);
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 != uVar19);
        }
        uVar27 = 0;
LAB_00f836a0:
        lVar8 = uVar13 * uVar30;
        uVar13 = uVar13 + 1;
        *(undefined *)(lVar12 + uVar28 + lVar8) = uVar27;
      } while (uVar13 != uVar30);
      uVar28 = uVar28 + 1;
    } while (uVar28 != uVar30);
  }
LAB_00f83714:
  if (*(long *)(lVar3 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar30);
  }
  return;
LAB_00f82a54:
  lVar7 = lVar7 + 1;
  if (*(int *)(this + 0x3b4) <= lVar7) goto LAB_00f82d84;
  goto LAB_00f82a68;
LAB_00f82d84:
  iVar10 = *(int *)(this + 0x5dc);
LAB_00f82d94:
  if (1 < iVar10) {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    lVar7 = (*(code *)PTR_FUN_01048e38)(0x1a8,0x10);
    *(undefined8 *)(lVar7 + 0x10) = 0;
    *(undefined8 *)(lVar7 + 0x30) = 0;
    *(undefined *)(lVar7 + 0x18) = 1;
    *(undefined *)(lVar7 + 0x38) = 1;
    *(undefined8 *)(lVar7 + 4) = 0;
    *(undefined8 *)(lVar7 + 0x24) = 0;
    *(undefined *)(lVar7 + 0x58) = 1;
    *(undefined8 *)(lVar7 + 0x50) = 0;
    *(undefined8 *)(lVar7 + 0x44) = 0;
    *(undefined8 *)(lVar7 + 0x188) = 0;
    *(undefined8 *)(lVar7 + 400) = 0;
    *(undefined8 *)(lVar7 + 0x180) = 0;
    *(undefined8 *)(lVar7 + 0x198) = 0x3c23d70a42c80000;
    *(undefined2 *)(lVar7 + 0x1a0) = 0;
    uVar19 = *(uint *)(this + 0x374);
    uVar30 = (ulong)uVar19;
    if (0 < (int)uVar19) {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      lVar11 = (*(code *)PTR_FUN_01048e38)(uVar30 << 3,0x10);
      uVar31 = *(uint *)(lVar7 + 0x24);
      if (0 < (int)uVar31) {
        lVar12 = 0;
        do {
          *(undefined8 *)(lVar11 + lVar12) = *(undefined8 *)(*(long *)(lVar7 + 0x30) + lVar12);
          lVar12 = lVar12 + 8;
        } while ((ulong)uVar31 * 8 - lVar12 != 0);
      }
      if ((*(long *)(lVar7 + 0x30) != 0) && (*(char *)(lVar7 + 0x38) != '\0')) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(long *)(lVar7 + 0x30) = lVar11;
      *(uint *)(lVar7 + 0x28) = uVar19;
      *(undefined *)(lVar7 + 0x38) = 1;
      iVar10 = *(int *)(this + 0x374);
      if (0 < iVar10) {
        lVar11 = 0;
        uVar19 = *(uint *)(lVar7 + 0x24);
        do {
          lVar12 = *(long *)(this + 0x380);
          uVar31 = (uint)uVar30;
          if (uVar19 == uVar31) {
            uVar2 = uVar31 * 2;
            uVar19 = uVar31;
            if (0 < (int)uVar31 != SBORROW4(uVar31,uVar2)) {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              lVar8 = (*(code *)PTR_FUN_01048e38)
                                (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3,
                                 0x10);
              uVar19 = *(uint *)(lVar7 + 0x24);
              if (0 < (int)uVar19) {
                lVar25 = 0;
                do {
                  *(undefined8 *)(lVar8 + lVar25) =
                       *(undefined8 *)(*(long *)(lVar7 + 0x30) + lVar25);
                  lVar25 = lVar25 + 8;
                } while ((ulong)uVar19 * 8 - lVar25 != 0);
              }
              if ((*(long *)(lVar7 + 0x30) != 0) && (*(char *)(lVar7 + 0x38) != '\0')) {
                gNumAlignedFree = gNumAlignedFree + 1;
                (*(code *)PTR_FUN_01048e40)();
                uVar19 = *(uint *)(lVar7 + 0x24);
              }
              *(undefined *)(lVar7 + 0x38) = 1;
              *(long *)(lVar7 + 0x30) = lVar8;
              *(uint *)(lVar7 + 0x28) = uVar2;
              iVar10 = *(int *)(this + 0x374);
              uVar30 = (ulong)uVar2;
            }
          }
          lVar8 = lVar11 * 0x78;
          lVar11 = lVar11 + 1;
          *(long *)(*(long *)(lVar7 + 0x30) + (long)(int)uVar19 * 8) = lVar12 + lVar8;
          uVar19 = uVar19 + 1;
          *(uint *)(lVar7 + 0x24) = uVar19;
        } while (lVar11 < iVar10);
      }
    }
    uVar19 = *(uint *)(this + 0x5dc);
    uVar30 = (ulong)uVar19;
    if (uVar19 == *(uint *)(this + 0x5e0)) {
      uVar31 = uVar19 << 1;
      if (uVar19 == 0) {
        uVar31 = 1;
      }
      if ((int)uVar19 < (int)uVar31) {
        if (uVar31 == 0) {
          lVar11 = 0;
        }
        else {
          gNumAlignedAllocs = gNumAlignedAllocs + 1;
          lVar11 = (*(code *)PTR_FUN_01048e38)
                             (-(ulong)(uVar31 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar31 << 3,
                              0x10);
          uVar30 = (ulong)*(uint *)(this + 0x5dc);
        }
        if (0 < (int)uVar30) {
          lVar12 = 0;
          do {
            *(undefined8 *)(lVar11 + lVar12) = *(undefined8 *)(*(long *)(this + 0x5e8) + lVar12);
            lVar12 = lVar12 + 8;
          } while (uVar30 * 8 - lVar12 != 0);
        }
        if ((*(long *)(this + 0x5e8) != 0) && (this[0x5f0] != (btSoftBody)0x0)) {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)();
          uVar30 = (ulong)*(uint *)(this + 0x5dc);
        }
        *(long *)(this + 0x5e8) = lVar11;
        *(uint *)(this + 0x5e0) = uVar31;
        this[0x5f0] = (btSoftBody)0x1;
      }
    }
    uVar28 = -(uVar30 >> 0x1f) & 0xfffffff800000000 | uVar30 << 3;
    iVar10 = (int)uVar30 + 1;
    *(long *)(*(long *)(this + 0x5e8) + uVar28) = lVar7;
    puVar22 = *(undefined8 **)(this + 0x5e8);
    *(int *)(this + 0x5dc) = iVar10;
    uVar33 = *puVar22;
    *puVar22 = *(undefined8 *)((long)puVar22 + uVar28);
    *(undefined8 *)((long)puVar22 + uVar28) = uVar33;
  }
  if (0 < iVar10) {
    iVar15 = 0;
    do {
      iVar14 = iVar15;
      if (*(int *)(*(long *)(*(long *)(this + 0x5e8) + (long)iVar15 * 8) + 0x24) == 0) {
        iVar14 = iVar15 + -1;
        releaseCluster(this,iVar15);
        iVar10 = *(int *)(this + 0x5dc);
      }
      iVar15 = iVar14 + 1;
    } while (iVar15 < iVar10);
  }
  if (__s != (void *)0x0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)(__s);
  }
  if (pfVar9 != (float *)0x0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  goto LAB_00f83528;
}


