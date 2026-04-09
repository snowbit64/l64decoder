// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeTileLods
// Entry Point: 0095e3d4
// Size: 1680 bytes
// Signature: undefined __cdecl computeTileLods(CameraInfo * param_1)


/* MultiresTexture::computeTileLods(PlayerCenteredSystem::CameraInfo const&) */

void MultiresTexture::computeTileLods(CameraInfo *param_1)

{
  void **ppvVar1;
  long lVar2;
  uint *puVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  bool bVar9;
  ulong uVar10;
  void *pvVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  uint uVar24;
  void *pvVar25;
  uint uVar26;
  size_t sVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  char local_dc;
  
  lVar8 = tpidr_el0;
  lVar14 = *(long *)(lVar8 + 0x28);
  Watch::getCurrentTicks();
  lVar21 = *(long *)(param_1 + 400);
  if (*(long *)(param_1 + 0x198) - lVar21 != 0) {
    uVar30 = 0;
    bVar9 = false;
    uVar26 = 0;
    uVar15 = (*(long *)(param_1 + 0x198) - lVar21 >> 4) * -0x1111111111111111;
    ppvVar1 = (void **)(param_1 + 0x108);
    do {
      lVar18 = lVar21 + (uVar15 + ~uVar30) * 0xf0;
      if (*(uint *)(lVar18 + 0x14) != 0) {
        uVar24 = 0;
        do {
          uVar29 = 0;
          do {
            if (*(char *)(*(long *)(lVar18 + 0x68) +
                         (ulong)(uVar29 + uVar24 * *(int *)(lVar18 + 0x58))) == '\x01') {
              uVar17 = *(uint *)(*(long *)(lVar18 + 0x80) +
                                (ulong)(uVar29 + uVar24 * *(int *)(lVar18 + 0x70)) * 4);
              uVar28 = uVar17 >> 0x10;
              if (uVar26 == 0) {
                uVar13 = uVar29 + *(int *)(lVar18 + 0x4c);
                uVar12 = *(int *)(lVar18 + 0x50) + uVar24;
LAB_0095e658:
                if ((uVar13 < *(uint *)(lVar18 + 8)) && (uVar12 < *(uint *)(lVar18 + 8))) {
                  uVar16 = *(undefined8 *)
                            (*(long *)(lVar18 + 0x98) +
                            (ulong)(uVar29 + uVar24 * *(int *)(lVar18 + 0x88)) * 8);
                  uVar10 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
                  if ((uVar10 & 1) == 0) {
                    if ((param_1[0x1b9] != (CameraInfo)0x0) && (uVar28 != 0)) {
                      puVar3 = *(uint **)(param_1 + 0x110);
                      if (puVar3 < *(uint **)(param_1 + 0x118)) {
                        *puVar3 = uVar28;
                        bVar9 = true;
                        uVar28 = 0;
                        *(uint **)(param_1 + 0x110) = puVar3 + 1;
                      }
                      else {
                        pvVar25 = *ppvVar1;
                        sVar27 = (long)puVar3 - (long)pvVar25;
                        uVar10 = ((long)sVar27 >> 2) + 1;
                        if (uVar10 >> 0x3e != 0) goto LAB_0095ea4c;
                        uVar20 = (long)*(uint **)(param_1 + 0x118) - (long)pvVar25;
                        uVar22 = (long)uVar20 >> 1;
                        if (uVar10 <= uVar22) {
                          uVar10 = uVar22;
                        }
                        if (0x7ffffffffffffffb < uVar20) {
                          uVar10 = 0x3fffffffffffffff;
                        }
                        if (uVar10 == 0) {
                          pvVar11 = (void *)0x0;
                        }
                        else {
                          if (uVar10 >> 0x3e != 0) goto LAB_0095ea54;
                          pvVar11 = operator_new(uVar10 << 2);
                        }
                        puVar3 = (uint *)((long)pvVar11 + ((long)sVar27 >> 2) * 4);
                        *puVar3 = uVar28;
                        if (0 < (long)sVar27) {
                          memcpy(pvVar11,pvVar25,sVar27);
                        }
                        *(void **)(param_1 + 0x108) = pvVar11;
                        *(uint **)(param_1 + 0x110) = puVar3 + 1;
                        *(void **)(param_1 + 0x118) = (void *)((long)pvVar11 + uVar10 * 4);
                        if (pvVar25 != (void *)0x0) {
                          operator_delete(pvVar25);
                        }
                        uVar28 = 0;
                        bVar9 = true;
                      }
                    }
                    uVar13 = uVar17 & 0xfa;
                  }
                  else {
                    uVar13 = 5;
                    if (local_dc == '\0') {
                      uVar13 = 1;
                    }
                    uVar13 = uVar13 | uVar17;
                  }
                  *(undefined8 *)
                   (*(long *)(lVar18 + 0x98) +
                   (ulong)(uVar29 + uVar24 * *(int *)(lVar18 + 0x88)) * 8) = uVar16;
                }
                else {
                  if ((param_1[0x1b9] != (CameraInfo)0x0) && (uVar28 != 0)) {
                    puVar3 = *(uint **)(param_1 + 0x110);
                    if (puVar3 < *(uint **)(param_1 + 0x118)) {
                      *puVar3 = uVar28;
                      bVar9 = true;
                      uVar28 = 0;
                      *(uint **)(param_1 + 0x110) = puVar3 + 1;
                    }
                    else {
                      pvVar25 = *ppvVar1;
                      sVar27 = (long)puVar3 - (long)pvVar25;
                      uVar10 = ((long)sVar27 >> 2) + 1;
                      if (uVar10 >> 0x3e != 0) {
LAB_0095ea4c:
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__vector_base_common<true>::__throw_length_error();
                      }
                      uVar20 = (long)*(uint **)(param_1 + 0x118) - (long)pvVar25;
                      uVar22 = (long)uVar20 >> 1;
                      if (uVar10 <= uVar22) {
                        uVar10 = uVar22;
                      }
                      if (0x7ffffffffffffffb < uVar20) {
                        uVar10 = 0x3fffffffffffffff;
                      }
                      if (uVar10 == 0) {
                        pvVar11 = (void *)0x0;
                      }
                      else {
                        if (uVar10 >> 0x3e != 0) {
LAB_0095ea54:
                    /* WARNING: Subroutine does not return */
                          FUN_006d1f18(
                                      "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                      );
                        }
                        pvVar11 = operator_new(uVar10 << 2);
                      }
                      puVar3 = (uint *)((long)pvVar11 + ((long)sVar27 >> 2) * 4);
                      *puVar3 = uVar28;
                      if (0 < (long)sVar27) {
                        memcpy(pvVar11,pvVar25,sVar27);
                      }
                      *(void **)(param_1 + 0x108) = pvVar11;
                      *(uint **)(param_1 + 0x110) = puVar3 + 1;
                      *(void **)(param_1 + 0x118) = (void *)((long)pvVar11 + uVar10 * 4);
                      if (pvVar25 != (void *)0x0) {
                        operator_delete(pvVar25);
                      }
                      uVar28 = 0;
                      bVar9 = true;
                    }
                  }
                  uVar13 = uVar17 & 0xfa;
                }
                uVar17 = uVar17 & 0xff00 | uVar28 << 0x10 | uVar13 & 0xff;
              }
              else {
                lVar2 = *(long *)(param_1 + 400);
                lVar19 = (*(long *)(param_1 + 0x198) - lVar2 >> 4) * -0x1111111111111111 - uVar30;
                lVar23 = lVar2 + lVar19 * 0xf0;
                uVar13 = *(int *)(lVar18 + 0x4c) + uVar29;
                iVar6 = (uVar13 >> 1) - *(int *)(lVar23 + 0x4c);
                uVar12 = *(int *)(lVar18 + 0x50) + uVar24;
                if ((iVar6 < 0) || (iVar7 = (uVar12 >> 1) - *(int *)(lVar23 + 0x50), iVar7 < 0)) {
LAB_0095e604:
                  bVar5 = *(byte *)(lVar2 + lVar19 * 0xf0 + 0x78);
                }
                else {
                  lVar23 = lVar2 + lVar19 * 0xf0;
                  iVar4 = *(int *)(lVar23 + 0x70);
                  if ((iVar4 <= iVar6) || (*(int *)(lVar23 + 0x74) <= iVar7)) goto LAB_0095e604;
                  bVar5 = *(byte *)(*(long *)(lVar2 + lVar19 * 0xf0 + 0x80) +
                                   (ulong)(uint)(iVar6 + iVar4 * iVar7) * 4);
                }
                if ((bVar5 & 1) != 0) goto LAB_0095e658;
                if ((param_1[0x1b9] != (CameraInfo)0x0) && (uVar28 != 0)) {
                  puVar3 = *(uint **)(param_1 + 0x110);
                  if (puVar3 < *(uint **)(param_1 + 0x118)) {
                    *puVar3 = uVar28;
                    bVar9 = true;
                    uVar28 = 0;
                    *(uint **)(param_1 + 0x110) = puVar3 + 1;
                  }
                  else {
                    pvVar25 = *ppvVar1;
                    sVar27 = (long)puVar3 - (long)pvVar25;
                    uVar10 = ((long)sVar27 >> 2) + 1;
                    if (uVar10 >> 0x3e != 0) goto LAB_0095ea4c;
                    uVar20 = (long)*(uint **)(param_1 + 0x118) - (long)pvVar25;
                    uVar22 = (long)uVar20 >> 1;
                    if (uVar10 <= uVar22) {
                      uVar10 = uVar22;
                    }
                    if (0x7ffffffffffffffb < uVar20) {
                      uVar10 = 0x3fffffffffffffff;
                    }
                    if (uVar10 == 0) {
                      pvVar11 = (void *)0x0;
                    }
                    else {
                      if (uVar10 >> 0x3e != 0) goto LAB_0095ea54;
                      pvVar11 = operator_new(uVar10 << 2);
                    }
                    puVar3 = (uint *)((long)pvVar11 + ((long)sVar27 >> 2) * 4);
                    *puVar3 = uVar28;
                    if (0 < (long)sVar27) {
                      memcpy(pvVar11,pvVar25,sVar27);
                    }
                    *(void **)(param_1 + 0x108) = pvVar11;
                    *(uint **)(param_1 + 0x110) = puVar3 + 1;
                    *(void **)(param_1 + 0x118) = (void *)((long)pvVar11 + uVar10 * 4);
                    if (pvVar25 != (void *)0x0) {
                      operator_delete(pvVar25);
                    }
                    uVar28 = 0;
                    bVar9 = true;
                  }
                }
                uVar17 = uVar17 & 0xff00 | uVar28 << 0x10 | uVar17 & 0xfe;
              }
              *(uint *)(*(long *)(lVar18 + 0x80) +
                       (ulong)(uVar29 + uVar24 * *(int *)(lVar18 + 0x70)) * 4) = uVar17;
            }
            uVar17 = *(uint *)(lVar18 + 0x14);
            uVar29 = uVar29 + 1;
          } while (uVar29 < uVar17);
          uVar24 = uVar24 + 1;
        } while (uVar24 < uVar17);
      }
      if (bVar9) {
        *(undefined *)(lVar21 + (uVar15 + ~uVar30) * 0xf0 + 0xe8) = 1;
      }
      lVar21 = *(long *)(param_1 + 400);
      uVar26 = uVar26 + 1;
      uVar30 = (ulong)uVar26;
      uVar15 = (*(long *)(param_1 + 0x198) - lVar21 >> 4) * -0x1111111111111111;
    } while (uVar30 <= uVar15 && uVar15 - uVar30 != 0);
  }
  Watch::getCurrentTicks();
  if (*(long *)(lVar8 + 0x28) == lVar14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


