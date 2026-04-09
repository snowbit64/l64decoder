// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generateBendingConstraints
// Entry Point: 00f809bc
// Size: 2592 bytes
// Signature: undefined __thiscall generateBendingConstraints(btSoftBody * this, int param_1, Material * param_2)


/* btSoftBody::generateBendingConstraints(int, btSoftBody::Material*) */

void __thiscall
btSoftBody::generateBendingConstraints(btSoftBody *this,int param_1,Material *param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  int iVar20;
  long lVar21;
  long *plVar22;
  int *piVar23;
  undefined4 *puVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined4 *puVar27;
  undefined8 uVar28;
  ulong uVar29;
  undefined4 *puVar30;
  uint *puVar31;
  uint *puVar32;
  int iVar33;
  int **ppiVar34;
  uint *puVar35;
  ulong uVar36;
  ulong uVar37;
  uint *puVar38;
  Material *pMVar39;
  int iVar40;
  long lVar41;
  long lVar42;
  float fVar43;
  undefined4 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  float fVar47;
  undefined8 uVar48;
  float fVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 local_98;
  btAlignedObjectArray<NodeLinks> abStack_88 [4];
  ulong local_84;
  long local_78;
  char local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_1 < 2) {
    iVar40 = 0;
    goto LAB_00f813a8;
  }
  uVar16 = *(uint *)(this + 0x374);
  uVar37 = (ulong)uVar16;
  puVar7 = (undefined4 *)operator_new__((ulong)(uVar16 * uVar16) << 2);
  if (0 < (int)uVar16) {
    uVar17 = 0;
    puVar24 = puVar7;
    puVar27 = puVar7;
    do {
      uVar29 = 0;
      puVar30 = puVar27;
      do {
        if (uVar17 == uVar29) {
          puVar7[uVar17 + uVar17 * uVar37] = 0;
        }
        else {
          *puVar30 = 0x7fffffff;
          puVar24[uVar29] = 0x7fffffff;
        }
        uVar29 = uVar29 + 1;
        puVar30 = puVar30 + uVar37;
      } while (uVar37 != uVar29);
      uVar17 = uVar17 + 1;
      puVar27 = puVar27 + 1;
      puVar24 = puVar24 + uVar37;
    } while (uVar17 != uVar37);
  }
  uVar17 = (ulong)*(uint *)(this + 0x394);
  if (0 < (int)*(uint *)(this + 0x394)) {
    lVar21 = *(long *)(this + 0x380);
    plVar22 = (long *)(*(long *)(this + 0x3a0) + 0x18);
    do {
      plVar1 = plVar22 + -1;
      lVar18 = *plVar22;
      uVar17 = uVar17 - 1;
      plVar22 = plVar22 + 9;
      iVar40 = (int)((ulong)(*plVar1 - lVar21) >> 3) * -0x11111111;
      iVar20 = (int)((ulong)(lVar18 - lVar21) >> 3) * -0x11111111;
      puVar7[(int)(iVar40 + uVar16 * iVar20)] = 1;
      puVar7[(int)(iVar20 + uVar16 * iVar40)] = 1;
    } while (uVar17 != 0);
  }
  if (param_1 == 2) {
    local_78 = 0;
    local_84 = 0;
    local_70 = '\x01';
    uStack_a8 = 0;
    local_b0 = 0;
    local_a0 = 0;
    local_98 = 1;
    btAlignedObjectArray<NodeLinks>::resize(abStack_88,uVar16,(NodeLinks *)&local_b0);
    if ((local_a0 != 0) && ((char)local_98 != '\0')) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    if (0 < *(int *)(this + 0x394)) {
      lVar21 = 0;
      do {
        lVar26 = local_78;
        lVar18 = *(long *)(this + 0x3a0) + lVar21 * 0x48;
        lVar41 = (*(long *)(lVar18 + 0x10) - *(long *)(this + 0x380) >> 3) * -0x1111111111111111;
        lVar42 = (*(long *)(lVar18 + 0x18) - *(long *)(this + 0x380) >> 3) * -0x1111111111111111;
        lVar18 = local_78 + ((lVar41 << 0x20) >> 0x1b);
        puVar38 = (uint *)(lVar18 + 4);
        uVar15 = *puVar38;
        uVar29 = (ulong)uVar15;
        ppiVar34 = (int **)(lVar18 + 0x10);
        piVar8 = *ppiVar34;
        iVar40 = (int)lVar41;
        iVar20 = (int)lVar42;
        uVar17 = uVar29;
        piVar9 = piVar8;
        if (0 < (int)uVar15) {
          do {
            if (*piVar9 == iVar20) {
              if ((int)uVar17 != 0) goto LAB_00f80d7c;
              break;
            }
            uVar17 = uVar17 - 1;
            piVar9 = piVar9 + 1;
          } while (uVar17 != 0);
        }
        lVar18 = (long)iVar40;
        puVar35 = (uint *)(local_78 + lVar18 * 0x20 + 8);
        if (uVar15 == *puVar35) {
          uVar3 = uVar15 << 1;
          if (uVar15 == 0) {
            uVar3 = 1;
          }
          if ((int)uVar15 < (int)uVar3) {
            if (uVar3 == 0) {
              piVar9 = (int *)0x0;
              if ((int)uVar15 < 1) goto LAB_00f80e88;
LAB_00f80c94:
              if (((uint)uVar29 < 8) ||
                 ((piVar8 + uVar29 > piVar9 && piVar8 <= piVar9 + uVar29) &&
                  (piVar8 + uVar29 <= piVar9 || piVar9 + uVar29 != piVar8))) {
                uVar17 = 0;
LAB_00f80cf0:
                lVar41 = uVar29 - uVar17;
                piVar8 = piVar8 + uVar17;
                piVar23 = piVar9 + uVar17;
                do {
                  lVar41 = lVar41 + -1;
                  *piVar23 = *piVar8;
                  piVar8 = piVar8 + 1;
                  piVar23 = piVar23 + 1;
                } while (lVar41 != 0);
              }
              else {
                uVar17 = uVar29 & 0xfffffff8;
                puVar19 = (undefined8 *)(piVar8 + 4);
                puVar25 = (undefined8 *)(piVar9 + 4);
                uVar10 = uVar17;
                do {
                  puVar5 = puVar19 + -1;
                  uVar28 = puVar19[-2];
                  uVar46 = puVar19[1];
                  uVar45 = *puVar19;
                  uVar10 = uVar10 - 8;
                  puVar19 = puVar19 + 4;
                  puVar25[-1] = *puVar5;
                  puVar25[-2] = uVar28;
                  puVar25[1] = uVar46;
                  *puVar25 = uVar45;
                  puVar25 = puVar25 + 4;
                } while (uVar10 != 0);
                if (uVar17 != uVar29) goto LAB_00f80cf0;
              }
              piVar8 = piVar9;
              if (*(char *)(lVar26 + lVar18 * 0x20 + 0x18) != '\0') {
LAB_00f80d1c:
                gNumAlignedFree = gNumAlignedFree + 1;
                (*(code *)PTR_FUN_01048e40)();
                piVar8 = piVar9;
              }
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              piVar9 = (int *)(*(code *)PTR_FUN_01048e38)
                                        (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 |
                                         (ulong)uVar3 << 2,0x10);
              uVar29 = (ulong)*puVar38;
              piVar8 = *ppiVar34;
              if (0 < (int)*puVar38) goto LAB_00f80c94;
LAB_00f80e88:
              bVar6 = piVar8 != (int *)0x0;
              piVar8 = piVar9;
              if (bVar6 && *(char *)(lVar26 + lVar18 * 0x20 + 0x18) != '\0') goto LAB_00f80d1c;
            }
            *ppiVar34 = piVar8;
            *(undefined *)(lVar26 + lVar18 * 0x20 + 0x18) = 1;
            *puVar35 = uVar3;
            uVar15 = *puVar38;
          }
        }
        piVar8[(int)uVar15] = iVar20;
        *puVar38 = *puVar38 + 1;
LAB_00f80d7c:
        lVar26 = local_78;
        lVar18 = local_78 + ((lVar42 << 0x20) >> 0x1b);
        puVar38 = (uint *)(lVar18 + 4);
        uVar15 = *puVar38;
        uVar29 = (ulong)uVar15;
        ppiVar34 = (int **)(lVar18 + 0x10);
        piVar8 = *ppiVar34;
        uVar17 = uVar29;
        piVar9 = piVar8;
        if (0 < (int)uVar15) {
          do {
            if (*piVar9 == iVar40) {
              if ((int)uVar17 != 0) goto LAB_00f80b94;
              break;
            }
            uVar17 = uVar17 - 1;
            piVar9 = piVar9 + 1;
          } while (uVar17 != 0);
        }
        lVar18 = (long)iVar20;
        puVar35 = (uint *)(local_78 + lVar18 * 0x20 + 8);
        if (uVar15 == *puVar35) {
          uVar3 = uVar15 << 1;
          if (uVar15 == 0) {
            uVar3 = 1;
          }
          if ((int)uVar15 < (int)uVar3) {
            if (uVar3 == 0) {
              piVar9 = (int *)0x0;
              if ((int)uVar15 < 1) goto LAB_00f80eac;
LAB_00f80e2c:
              if (((uint)uVar29 < 8) || ((piVar9 < piVar8 + uVar29 && (piVar8 < piVar9 + uVar29))))
              {
                uVar17 = 0;
LAB_00f80e58:
                lVar41 = uVar29 - uVar17;
                piVar8 = piVar8 + uVar17;
                piVar23 = piVar9 + uVar17;
                do {
                  lVar41 = lVar41 + -1;
                  *piVar23 = *piVar8;
                  piVar8 = piVar8 + 1;
                  piVar23 = piVar23 + 1;
                } while (lVar41 != 0);
              }
              else {
                uVar17 = uVar29 & 0xfffffff8;
                puVar19 = (undefined8 *)(piVar8 + 4);
                puVar25 = (undefined8 *)(piVar9 + 4);
                uVar10 = uVar17;
                do {
                  puVar5 = puVar19 + -1;
                  uVar28 = puVar19[-2];
                  uVar46 = puVar19[1];
                  uVar45 = *puVar19;
                  uVar10 = uVar10 - 8;
                  puVar19 = puVar19 + 4;
                  puVar25[-1] = *puVar5;
                  puVar25[-2] = uVar28;
                  puVar25[1] = uVar46;
                  *puVar25 = uVar45;
                  puVar25 = puVar25 + 4;
                } while (uVar10 != 0);
                if (uVar17 != uVar29) goto LAB_00f80e58;
              }
LAB_00f80ee4:
              piVar8 = piVar9;
              if (*(char *)(lVar26 + lVar18 * 0x20 + 0x18) != '\0') {
                gNumAlignedFree = gNumAlignedFree + 1;
                (*(code *)PTR_FUN_01048e40)();
              }
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              piVar9 = (int *)(*(code *)PTR_FUN_01048e38)
                                        (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 |
                                         (ulong)uVar3 << 2,0x10);
              uVar29 = (ulong)*puVar38;
              piVar8 = *ppiVar34;
              if (0 < (int)*puVar38) goto LAB_00f80e2c;
LAB_00f80eac:
              bVar6 = piVar8 != (int *)0x0;
              piVar8 = piVar9;
              if (bVar6) goto LAB_00f80ee4;
            }
            uVar15 = *puVar38;
            *ppiVar34 = piVar8;
            *(undefined *)(lVar26 + lVar18 * 0x20 + 0x18) = 1;
            *puVar35 = uVar3;
          }
        }
        piVar8[(int)uVar15] = iVar40;
        *puVar38 = *puVar38 + 1;
LAB_00f80b94:
        lVar21 = lVar21 + 1;
      } while (lVar21 < *(int *)(this + 0x394));
    }
    uVar17 = local_84 & 0xffffffff;
    lVar21 = local_78;
    if (0 < (int)local_84) {
      uVar29 = 0;
      do {
        lVar18 = local_78 + uVar29 * 0x20;
        piVar9 = (int *)(lVar18 + 4);
        iVar40 = *piVar9;
        if (0 < iVar40) {
          iVar20 = (int)uVar29;
          lVar26 = 0;
          lVar18 = *(long *)(lVar18 + 0x10);
          do {
            iVar2 = *(int *)(lVar18 + lVar26 * 4);
            lVar41 = local_78 + (long)iVar2 * 0x20;
            piVar8 = (int *)(lVar41 + 4);
            iVar33 = *piVar8;
            if (0 < iVar33) {
              lVar42 = 0;
              lVar41 = *(long *)(lVar41 + 0x10);
              do {
                uVar15 = *(uint *)(lVar41 + lVar42 * 4);
                if (uVar29 != uVar15) {
                  iVar40 = uVar15 * uVar16 + iVar20;
                  uVar3 = puVar7[(int)(uVar15 * uVar16 + iVar2)] +
                          puVar7[(int)(iVar20 + iVar2 * uVar16)];
                  if (uVar3 < (uint)puVar7[iVar40]) {
                    puVar7[(int)(uVar15 + uVar16 * iVar20)] = uVar3;
                    puVar7[iVar40] = uVar3;
                    iVar33 = *piVar8;
                  }
                }
                lVar42 = lVar42 + 1;
              } while (lVar42 < iVar33);
              iVar40 = *piVar9;
            }
            lVar26 = lVar26 + 1;
          } while (lVar26 < iVar40);
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 != uVar17);
      lVar18 = 0;
      do {
        lVar26 = lVar21 + lVar18;
        if (*(long *)(lVar26 + 0x10) != 0 && *(char *)(lVar26 + 0x18) != '\0') {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)(*(long *)(lVar26 + 0x10));
          lVar21 = local_78;
        }
        lVar18 = lVar18 + 0x20;
        *(undefined *)(lVar26 + 0x18) = 1;
        *(undefined8 *)(lVar26 + 0x10) = 0;
        *(undefined4 *)(lVar26 + 4) = 0;
        *(undefined4 *)(lVar26 + 8) = 0;
      } while (uVar17 * 0x20 - lVar18 != 0);
    }
    if ((lVar21 != 0) && (local_70 != '\0')) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
LAB_00f81158:
    if ((int)uVar16 < 1) goto LAB_00f81390;
    iVar40 = 0;
    uVar17 = 1;
    uVar29 = 0;
    do {
      uVar10 = uVar29 + 1;
      if (uVar10 < uVar37) {
        uVar36 = uVar17;
        do {
          if (puVar7[uVar36 + uVar29 * uVar37] == param_1) {
            pMVar39 = param_2;
            if (param_2 == (Material *)0x0) {
              pMVar39 = **(Material ***)(this + 0x480);
            }
            uVar16 = *(uint *)(this + 0x394);
            lVar21 = *(long *)(this + 0x380);
            if (uVar16 == *(uint *)(this + 0x398)) {
              iVar20 = uVar16 << 1;
              if (uVar16 == 0) {
                iVar20 = 1;
              }
              if ((int)uVar16 < iVar20) {
                if (iVar20 == 0) {
                  lVar18 = 0;
                }
                else {
                  gNumAlignedAllocs = gNumAlignedAllocs + 1;
                  lVar18 = (*(code *)PTR_FUN_01048e38)((long)iVar20 * 0x48,0x10);
                  uVar16 = *(uint *)(this + 0x394);
                }
                if (0 < (int)uVar16) {
                  lVar26 = 0;
                  do {
                    puVar19 = (undefined8 *)(lVar18 + lVar26);
                    puVar25 = (undefined8 *)(*(long *)(this + 0x3a0) + lVar26);
                    lVar26 = lVar26 + 0x48;
                    uVar28 = *puVar25;
                    puVar19[1] = puVar25[1];
                    *puVar19 = uVar28;
                    uVar48 = puVar25[4];
                    uVar46 = puVar25[7];
                    uVar45 = puVar25[6];
                    uVar28 = puVar25[8];
                    uVar51 = puVar25[3];
                    uVar50 = puVar25[2];
                    puVar19[5] = puVar25[5];
                    puVar19[4] = uVar48;
                    puVar19[7] = uVar46;
                    puVar19[6] = uVar45;
                    puVar19[8] = uVar28;
                    puVar19[3] = uVar51;
                    puVar19[2] = uVar50;
                  } while ((ulong)uVar16 * 0x48 - lVar26 != 0);
                }
                if ((*(long *)(this + 0x3a0) != 0) && (this[0x3a8] != (btSoftBody)0x0)) {
                  gNumAlignedFree = gNumAlignedFree + 1;
                  (*(code *)PTR_FUN_01048e40)();
                }
                uVar16 = *(uint *)(this + 0x394);
                *(long *)(this + 0x3a0) = lVar18;
                this[0x3a8] = (btSoftBody)0x1;
                *(int *)(this + 0x398) = iVar20;
              }
            }
            iVar40 = iVar40 + 1;
            lVar42 = lVar21 + uVar29 * 0x78;
            puVar19 = (undefined8 *)(*(long *)(this + 0x3a0) + (long)(int)uVar16 * 0x48);
            *puVar19 = 0;
            puVar19[1] = pMVar39;
            puVar19[3] = 0;
            puVar19[2] = 0;
            puVar19[5] = 0;
            puVar19[4] = 0;
            puVar19[7] = 0;
            puVar19[6] = 0;
            puVar19[8] = 0;
            lVar26 = (long)*(int *)(this + 0x394) * 0x48;
            lVar18 = *(long *)(this + 0x3a0) + lVar26;
            *(int *)(this + 0x394) = *(int *)(this + 0x394) + 1;
            lVar41 = lVar21 + uVar36 * 0x78;
            *(ulong *)(lVar18 + 0x10) = lVar21 + uVar36 * 0x78;
            *(ulong *)(lVar18 + 0x18) = lVar21 + uVar29 * 0x78;
            fVar43 = *(float *)(lVar41 + 0x10) - *(float *)(lVar42 + 0x10);
            fVar47 = *(float *)(lVar41 + 0x14) - *(float *)(lVar42 + 0x14);
            fVar49 = *(float *)(lVar41 + 0x18) - *(float *)(lVar42 + 0x18);
            uVar44 = NEON_fmadd(fVar47,fVar47,fVar43 * fVar43);
            fVar43 = (float)NEON_fmadd(fVar49,fVar49,uVar44);
            *(float *)(lVar18 + 0x20) = SQRT(fVar43);
            this[0x4b4] = (btSoftBody)0x1;
            lVar26 = *(long *)(this + 0x3a0) + lVar26;
            *(byte *)(lVar26 + 0x24) = *(byte *)(lVar26 + 0x24) | 1;
          }
          uVar36 = uVar36 + 1;
        } while (uVar36 != uVar37);
      }
      uVar17 = uVar17 + 1;
      uVar29 = uVar10;
    } while (uVar10 != uVar37);
  }
  else {
    if (0 < (int)uVar16) {
      uVar17 = 0;
      puVar38 = puVar7 + 1;
      do {
        uVar29 = 1;
        uVar10 = 0;
        puVar35 = puVar38;
        puVar31 = puVar7 + 1;
        puVar32 = puVar7 + uVar37;
        do {
          uVar36 = uVar10 + 1;
          if (uVar36 < uVar37) {
            puVar11 = puVar35;
            puVar12 = puVar31;
            puVar13 = puVar32;
            uVar14 = uVar37;
            do {
              uVar15 = puVar7[uVar17 + uVar10 * uVar37] + *puVar11;
              if (uVar15 < *puVar12) {
                *puVar13 = uVar15;
                *puVar12 = uVar15;
              }
              uVar14 = uVar14 - 1;
              puVar13 = puVar13 + uVar37;
              puVar12 = puVar12 + 1;
              puVar11 = puVar11 + 1;
            } while (uVar29 != uVar14);
          }
          uVar29 = uVar29 + 1;
          puVar32 = puVar32 + uVar37 + 1;
          puVar31 = puVar31 + uVar37 + 1;
          puVar35 = puVar35 + 1;
          uVar10 = uVar36;
        } while (uVar36 != uVar37);
        uVar17 = uVar17 + 1;
        puVar38 = puVar38 + uVar37;
      } while (uVar17 != uVar37);
      goto LAB_00f81158;
    }
LAB_00f81390:
    iVar40 = 0;
  }
  operator_delete__(puVar7);
LAB_00f813a8:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar40);
}


