// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _process
// Entry Point: 00eb9d88
// Size: 1912 bytes
// Signature: undefined __thiscall _process(CTriangulator * this, vector * param_1)


/* FLOAT_MATH::CTriangulator::_process(std::__ndk1::vector<unsigned int,
   std::__ndk1::allocator<unsigned int> >&) */

void __thiscall FLOAT_MATH::CTriangulator::_process(CTriangulator *this,vector *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  int *__ptr;
  void *pvVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  int *piVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 *puVar25;
  int *piVar26;
  int iVar27;
  int iVar28;
  ulong uVar29;
  void *pvVar30;
  size_t sVar31;
  long lVar32;
  double dVar33;
  undefined8 uVar34;
  byte bVar35;
  int iVar36;
  double dVar37;
  int iVar38;
  int iVar39;
  byte bVar40;
  int iVar41;
  undefined8 uVar42;
  int iVar44;
  undefined8 uVar43;
  int local_80;
  
  lVar32 = *(long *)(this + 0x58);
  uVar29 = (*(long *)(this + 0x60) - lVar32 >> 3) * -0x5555555555555555;
  iVar27 = (int)uVar29;
  if (iVar27 < 3) {
    return;
  }
  __ptr = (int *)malloc(-(uVar29 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar29 & 0xffffffff) << 2);
  dVar33 = 0.0;
  uVar15 = uVar29 & 0xffffffff;
  puVar21 = (undefined8 *)(lVar32 + 8);
  uVar18 = 0;
  uVar24 = uVar29 - 1;
  do {
    uVar23 = uVar18;
    puVar25 = (undefined8 *)(lVar32 + (long)(int)uVar24 * 0x18);
    uVar18 = uVar23 + 1;
    dVar37 = (double)NEON_fmadd(*puVar25,*puVar21,(double)puVar25[1] * -(double)puVar21[-1]);
    dVar33 = dVar33 + dVar37;
    puVar21 = puVar21 + 3;
    uVar24 = uVar23;
  } while (uVar15 != uVar18);
  if (dVar33 * 0.5 <= 0.0) {
    if (uVar15 < 8) {
      lVar19 = 0;
    }
    else {
      lVar19 = uVar15 - (uVar29 & 7);
      uVar42 = 0x300000002;
      uVar34 = 0x100000000;
      puVar21 = (undefined8 *)(__ptr + 4);
      lVar32 = lVar19;
      do {
        bVar35 = (byte)uVar34;
        uVar18 = (ulong)uVar34 >> 8;
        uVar24 = (ulong)uVar34 >> 0x10;
        uVar23 = (ulong)uVar34 >> 0x18;
        uVar3 = (ulong)uVar34 >> 0x20;
        uVar4 = (ulong)uVar34 >> 0x28;
        uVar5 = (ulong)uVar34 >> 0x30;
        uVar6 = (ulong)uVar34 >> 0x38;
        bVar40 = (byte)uVar42;
        uVar7 = (ulong)uVar42 >> 8;
        uVar8 = (ulong)uVar42 >> 0x10;
        uVar9 = (ulong)uVar42 >> 0x18;
        uVar10 = (ulong)uVar42 >> 0x20;
        uVar11 = (ulong)uVar42 >> 0x28;
        uVar12 = (ulong)uVar42 >> 0x30;
        uVar13 = (ulong)uVar42 >> 0x38;
        lVar32 = lVar32 + -8;
        iVar36 = (int)uVar34;
        iVar39 = (int)((ulong)uVar34 >> 0x20);
        iVar41 = (int)uVar42;
        iVar44 = (int)((ulong)uVar42 >> 0x20);
        uVar34 = CONCAT44(iVar39 + 8,iVar36 + 8);
        uVar42 = CONCAT44(iVar44 + 8,iVar41 + 8);
        iVar38 = iVar27 + CONCAT13(~(byte)uVar6,
                                   CONCAT12(~(byte)uVar5,CONCAT11(~(byte)uVar4,~(byte)uVar3)));
        iVar28 = iVar27 + CONCAT13(~(byte)uVar13,
                                   CONCAT12(~(byte)uVar12,CONCAT11(~(byte)uVar11,~(byte)uVar10)));
        puVar21[-1] = CONCAT17((char)((uint)iVar28 >> 0x18),
                               CONCAT16((char)((uint)iVar28 >> 0x10),
                                        CONCAT15((char)((uint)iVar28 >> 8),
                                                 CONCAT14((char)iVar28,
                                                          iVar27 + CONCAT13(~(byte)uVar9,
                                                                            CONCAT12(~(byte)uVar8,
                                                                                     CONCAT11(~(byte
                                                  )uVar7,~bVar40)))))));
        puVar21[-2] = CONCAT17((char)((uint)iVar38 >> 0x18),
                               CONCAT16((char)((uint)iVar38 >> 0x10),
                                        CONCAT15((char)((uint)iVar38 >> 8),
                                                 CONCAT14((char)iVar38,
                                                          iVar27 + CONCAT13(~(byte)uVar23,
                                                                            CONCAT12(~(byte)uVar24,
                                                                                     CONCAT11(~(byte
                                                  )uVar18,~bVar35)))))));
        puVar21[1] = CONCAT44((iVar27 - iVar44) + -5,(iVar27 - iVar41) + -5);
        *puVar21 = CONCAT44((iVar27 - iVar39) + -5,(iVar27 - iVar36) + -5);
        puVar21 = puVar21 + 4;
      } while (lVar32 != 0);
      if ((uVar29 & 7) == 0) goto LAB_00eb9f38;
    }
    iVar38 = ~(uint)lVar19 + iVar27;
    lVar32 = uVar15 - lVar19;
    piVar16 = __ptr + lVar19;
    do {
      *piVar16 = iVar38;
      iVar38 = iVar38 + -1;
      lVar32 = lVar32 + -1;
      piVar16 = piVar16 + 1;
    } while (lVar32 != 0);
  }
  else {
    if (uVar15 < 8) {
      uVar18 = 0;
    }
    else {
      uVar18 = uVar15 - (uVar29 & 7);
      uVar42 = 0x300000002;
      uVar34 = 0x100000000;
      puVar21 = (undefined8 *)(__ptr + 4);
      uVar24 = uVar18;
      do {
        iVar38 = (int)((ulong)uVar34 >> 0x20);
        iVar28 = (int)((ulong)uVar42 >> 0x20);
        uVar24 = uVar24 - 8;
        puVar21[-1] = uVar42;
        puVar21[-2] = uVar34;
        puVar21[1] = CONCAT44(iVar28 + 4,(int)uVar42 + 4);
        *puVar21 = CONCAT44(iVar38 + 4,(int)uVar34 + 4);
        puVar21 = puVar21 + 4;
        uVar34 = CONCAT44(iVar38 + 8,(int)uVar34 + 8);
        uVar42 = CONCAT44(iVar28 + 8,(int)uVar42 + 8);
      } while (uVar24 != 0);
      if ((uVar29 & 7) == 0) goto LAB_00eb9f38;
    }
    do {
      __ptr[uVar18] = (int)uVar18;
      uVar18 = uVar18 + 1;
    } while (uVar15 != uVar18);
  }
LAB_00eb9f38:
  if (2 < iVar27) {
    iVar38 = iVar27 << 1;
    iVar27 = iVar27 + -1;
    do {
      if (iVar38 < 1) {
        return;
      }
      iVar28 = (int)uVar29;
      if (iVar28 <= iVar27) {
        iVar27 = 0;
      }
      iVar36 = 0;
      if (iVar27 + 1 < iVar28) {
        iVar36 = iVar27 + 1;
      }
      iVar39 = iVar36 + 1;
      iVar41 = 0;
      if (iVar39 < iVar28) {
        iVar41 = iVar36 + 1;
      }
      uVar18 = _snip(this,iVar27,iVar36,iVar41,iVar28,__ptr);
      iVar38 = iVar38 + -1;
      if ((uVar18 & 1) != 0) {
        piVar22 = *(int **)(param_1 + 8);
        piVar16 = *(int **)(param_1 + 0x10);
        iVar27 = __ptr[iVar27];
        iVar38 = __ptr[iVar36];
        local_80 = __ptr[iVar41];
        if (dVar33 * 0.5 <= 0.0) {
          if (piVar22 < piVar16) {
            piVar26 = piVar22 + 1;
            *piVar22 = iVar27;
            *(int **)(param_1 + 8) = piVar26;
          }
          else {
            pvVar30 = *(void **)param_1;
            sVar31 = (long)piVar22 - (long)pvVar30;
            lVar32 = (long)sVar31 >> 2;
            uVar29 = lVar32 + 1;
            if (uVar29 >> 0x3e != 0) goto LAB_00eba4e0;
            uVar18 = (long)piVar16 - (long)pvVar30 >> 1;
            if (uVar29 <= uVar18) {
              uVar29 = uVar18;
            }
            if (0x7ffffffffffffffb < (ulong)((long)piVar16 - (long)pvVar30)) {
              uVar29 = 0x3fffffffffffffff;
            }
            if (uVar29 == 0) {
              pvVar14 = (void *)0x0;
              piVar26 = (int *)(lVar32 * 4);
              *piVar26 = iVar27;
            }
            else {
              if (uVar29 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              pvVar14 = operator_new(uVar29 << 2);
              piVar26 = (int *)((long)pvVar14 + lVar32 * 4);
              *piVar26 = iVar27;
            }
            piVar26 = piVar26 + 1;
            if (0 < (long)sVar31) {
              memcpy(pvVar14,pvVar30,sVar31);
            }
            piVar16 = (int *)((long)pvVar14 + uVar29 * 4);
            *(void **)param_1 = pvVar14;
            *(int **)(param_1 + 8) = piVar26;
            *(int **)(param_1 + 0x10) = piVar16;
            if (pvVar30 != (void *)0x0) {
              operator_delete(pvVar30);
              piVar26 = *(int **)(param_1 + 8);
              piVar16 = *(int **)(param_1 + 0x10);
            }
          }
          if (piVar26 < piVar16) {
            piVar22 = piVar26 + 1;
            *piVar26 = iVar38;
            *(int **)(param_1 + 8) = piVar22;
          }
          else {
            pvVar30 = *(void **)param_1;
            sVar31 = (long)piVar26 - (long)pvVar30;
            lVar32 = (long)sVar31 >> 2;
            uVar29 = lVar32 + 1;
            if (uVar29 >> 0x3e != 0) goto LAB_00eba4e0;
            uVar18 = (long)piVar16 - (long)pvVar30 >> 1;
            if (uVar29 <= uVar18) {
              uVar29 = uVar18;
            }
            if (0x7ffffffffffffffb < (ulong)((long)piVar16 - (long)pvVar30)) {
              uVar29 = 0x3fffffffffffffff;
            }
            if (uVar29 == 0) {
              pvVar14 = (void *)0x0;
              piVar22 = (int *)(lVar32 * 4);
              *piVar22 = iVar38;
            }
            else {
              if (uVar29 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              pvVar14 = operator_new(uVar29 << 2);
              piVar22 = (int *)((long)pvVar14 + lVar32 * 4);
              *piVar22 = iVar38;
            }
            piVar22 = piVar22 + 1;
            if (0 < (long)sVar31) {
              memcpy(pvVar14,pvVar30,sVar31);
            }
            piVar16 = (int *)((long)pvVar14 + uVar29 * 4);
            *(void **)param_1 = pvVar14;
            *(int **)(param_1 + 8) = piVar22;
            *(int **)(param_1 + 0x10) = piVar16;
            if (pvVar30 != (void *)0x0) {
              operator_delete(pvVar30);
              piVar22 = *(int **)(param_1 + 8);
              piVar16 = *(int **)(param_1 + 0x10);
            }
          }
          if (piVar16 <= piVar22) {
            pvVar30 = *(void **)param_1;
            sVar31 = (long)piVar22 - (long)pvVar30;
            lVar32 = (long)sVar31 >> 2;
            uVar29 = lVar32 + 1;
            if (uVar29 >> 0x3e != 0) goto LAB_00eba4e0;
            uVar18 = (long)piVar16 - (long)pvVar30 >> 1;
            if (uVar29 <= uVar18) {
              uVar29 = uVar18;
            }
            if (0x7ffffffffffffffb < (ulong)((long)piVar16 - (long)pvVar30)) {
              uVar29 = 0x3fffffffffffffff;
            }
            if (uVar29 != 0) {
              if (uVar29 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              goto LAB_00eba32c;
            }
LAB_00eba43c:
            pvVar14 = (void *)0x0;
            piVar16 = (int *)(lVar32 * 4);
            *piVar16 = local_80;
            goto joined_r0x00eba450;
          }
LAB_00eba2d8:
          *piVar22 = local_80;
          *(int **)(param_1 + 8) = piVar22 + 1;
        }
        else {
          if (piVar22 < piVar16) {
            piVar26 = piVar22 + 1;
            *piVar22 = local_80;
            *(int **)(param_1 + 8) = piVar26;
          }
          else {
            pvVar30 = *(void **)param_1;
            sVar31 = (long)piVar22 - (long)pvVar30;
            lVar32 = (long)sVar31 >> 2;
            uVar29 = lVar32 + 1;
            if (uVar29 >> 0x3e != 0) goto LAB_00eba4e0;
            uVar18 = (long)piVar16 - (long)pvVar30 >> 1;
            if (uVar29 <= uVar18) {
              uVar29 = uVar18;
            }
            if (0x7ffffffffffffffb < (ulong)((long)piVar16 - (long)pvVar30)) {
              uVar29 = 0x3fffffffffffffff;
            }
            if (uVar29 == 0) {
              pvVar14 = (void *)0x0;
              piVar26 = (int *)(lVar32 * 4);
              *piVar26 = local_80;
            }
            else {
              if (uVar29 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              pvVar14 = operator_new(uVar29 << 2);
              piVar26 = (int *)((long)pvVar14 + lVar32 * 4);
              *piVar26 = local_80;
            }
            piVar26 = piVar26 + 1;
            if (0 < (long)sVar31) {
              memcpy(pvVar14,pvVar30,sVar31);
            }
            piVar16 = (int *)((long)pvVar14 + uVar29 * 4);
            *(void **)param_1 = pvVar14;
            *(int **)(param_1 + 8) = piVar26;
            *(int **)(param_1 + 0x10) = piVar16;
            if (pvVar30 != (void *)0x0) {
              operator_delete(pvVar30);
              piVar26 = *(int **)(param_1 + 8);
              piVar16 = *(int **)(param_1 + 0x10);
            }
          }
          if (piVar26 < piVar16) {
            piVar22 = piVar26 + 1;
            *piVar26 = iVar38;
            *(int **)(param_1 + 8) = piVar22;
          }
          else {
            pvVar30 = *(void **)param_1;
            sVar31 = (long)piVar26 - (long)pvVar30;
            lVar32 = (long)sVar31 >> 2;
            uVar29 = lVar32 + 1;
            if (uVar29 >> 0x3e != 0) goto LAB_00eba4e0;
            uVar18 = (long)piVar16 - (long)pvVar30 >> 1;
            if (uVar29 <= uVar18) {
              uVar29 = uVar18;
            }
            if (0x7ffffffffffffffb < (ulong)((long)piVar16 - (long)pvVar30)) {
              uVar29 = 0x3fffffffffffffff;
            }
            if (uVar29 == 0) {
              pvVar14 = (void *)0x0;
              piVar22 = (int *)(lVar32 * 4);
              *piVar22 = iVar38;
            }
            else {
              if (uVar29 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              pvVar14 = operator_new(uVar29 << 2);
              piVar22 = (int *)((long)pvVar14 + lVar32 * 4);
              *piVar22 = iVar38;
            }
            piVar22 = piVar22 + 1;
            if (0 < (long)sVar31) {
              memcpy(pvVar14,pvVar30,sVar31);
            }
            piVar16 = (int *)((long)pvVar14 + uVar29 * 4);
            *(void **)param_1 = pvVar14;
            *(int **)(param_1 + 8) = piVar22;
            *(int **)(param_1 + 0x10) = piVar16;
            if (pvVar30 != (void *)0x0) {
              operator_delete(pvVar30);
              piVar22 = *(int **)(param_1 + 8);
              piVar16 = *(int **)(param_1 + 0x10);
            }
          }
          local_80 = iVar27;
          if (piVar22 < piVar16) goto LAB_00eba2d8;
          pvVar30 = *(void **)param_1;
          sVar31 = (long)piVar22 - (long)pvVar30;
          lVar32 = (long)sVar31 >> 2;
          uVar29 = lVar32 + 1;
          if (uVar29 >> 0x3e != 0) {
LAB_00eba4e0:
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar18 = (long)piVar16 - (long)pvVar30 >> 1;
          if (uVar29 <= uVar18) {
            uVar29 = uVar18;
          }
          if (0x7ffffffffffffffb < (ulong)((long)piVar16 - (long)pvVar30)) {
            uVar29 = 0x3fffffffffffffff;
          }
          if (uVar29 == 0) goto LAB_00eba43c;
          if (uVar29 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
LAB_00eba32c:
          pvVar14 = operator_new(uVar29 << 2);
          piVar16 = (int *)((long)pvVar14 + lVar32 * 4);
          *piVar16 = local_80;
joined_r0x00eba450:
          if (0 < (long)sVar31) {
            memcpy(pvVar14,pvVar30,sVar31);
          }
          *(void **)param_1 = pvVar14;
          *(int **)(param_1 + 8) = piVar16 + 1;
          *(void **)(param_1 + 0x10) = (void *)((long)pvVar14 + uVar29 * 4);
          if (pvVar30 != (void *)0x0) {
            operator_delete(pvVar30);
          }
        }
        if (iVar39 < iVar28) {
          lVar17 = (long)iVar36;
          lVar20 = (long)iVar39;
          uVar1 = (iVar28 - iVar36) - 2;
          uVar29 = (ulong)uVar1;
          lVar32 = lVar17;
          lVar19 = lVar20;
          if ((6 < uVar1) &&
             ((__ptr + uVar29 + lVar20 + 1 <= __ptr + lVar17 ||
              (__ptr + uVar29 + lVar17 + 1 <= __ptr + lVar20)))) {
            uVar24 = uVar29 + 1 & 0x1fffffff8;
            lVar32 = uVar24 + lVar17;
            lVar19 = uVar24 + lVar20;
            puVar21 = (undefined8 *)(__ptr + lVar20 + 4);
            puVar25 = (undefined8 *)(__ptr + lVar17 + 4);
            uVar18 = uVar24;
            do {
              puVar2 = puVar21 + -1;
              uVar34 = puVar21[-2];
              uVar43 = puVar21[1];
              uVar42 = *puVar21;
              uVar18 = uVar18 - 8;
              puVar21 = puVar21 + 4;
              puVar25[-1] = *puVar2;
              puVar25[-2] = uVar34;
              puVar25[1] = uVar43;
              *puVar25 = uVar42;
              puVar25 = puVar25 + 4;
            } while (uVar18 != 0);
            if (uVar29 + 1 == uVar24) goto LAB_00eb9f5c;
          }
          iVar27 = iVar28 - (int)lVar19;
          piVar16 = __ptr + lVar32;
          piVar22 = __ptr + lVar19;
          do {
            iVar27 = iVar27 + -1;
            *piVar16 = *piVar22;
            piVar16 = piVar16 + 1;
            piVar22 = piVar22 + 1;
          } while (iVar27 != 0);
        }
LAB_00eb9f5c:
        uVar29 = (ulong)(iVar28 - 1U);
        iVar38 = (iVar28 - 1U) * 2;
      }
      iVar27 = iVar36;
    } while (2 < (int)uVar29);
  }
  free(__ptr);
  return;
}


