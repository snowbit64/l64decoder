// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setFocusPoint
// Entry Point: 0095dd38
// Size: 1520 bytes
// Signature: undefined __thiscall setFocusPoint(MultiresTexture * this, float param_1, float param_2)


/* MultiresTexture::setFocusPoint(float, float) */

void __thiscall MultiresTexture::setFocusPoint(MultiresTexture *this,float param_1,float param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  void *pvVar20;
  size_t __n;
  long lVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  undefined8 uVar25;
  int iVar26;
  
  lVar21 = *(long *)(this + 400);
  lVar5 = *(long *)(this + 0x198);
  if (lVar21 != lVar5) {
    do {
      if (*(char *)(lVar21 + 0xc) != '\0') {
        iVar24 = *(int *)(lVar21 + 8) + -1;
        uVar25 = NEON_smin(CONCAT44(iVar24,iVar24),
                           CONCAT44((int)(float)(int)(param_2 / *(float *)(lVar21 + 0x20)),
                                    (int)(float)(int)(param_1 / *(float *)(lVar21 + 0x20))),4);
        uVar25 = NEON_smax(uVar25,0,4);
        iVar24 = (int)uVar25 - *(int *)(lVar21 + 0x10);
        iVar26 = (int)((ulong)uVar25 >> 0x20) - *(int *)(lVar21 + 0x10);
        if (*(char *)(lVar21 + 0x54) == '\0') {
          *(ulong *)(lVar21 + 0x4c) = CONCAT44(iVar26,iVar24);
          *(undefined *)(lVar21 + 0x54) = 1;
        }
        else {
          uVar12 = iVar26 - *(int *)(lVar21 + 0x50);
          uVar10 = iVar24 - *(int *)(lVar21 + 0x4c);
          if ((uVar10 | uVar12) == 0) goto LAB_0095dd9c;
          iVar16 = *(int *)(lVar21 + 0x14);
          if (iVar16 < 1) {
LAB_0095e220:
            uVar12 = *(uint *)(lVar21 + 0xbc);
          }
          else {
            iVar19 = 0;
            pcVar1 = (char *)(lVar21 + 0x60);
            iVar15 = *(int *)(lVar21 + 0x50) - iVar26;
            iVar6 = *(int *)(lVar21 + 0x4c) - iVar24;
            do {
              if (0 < iVar16) {
                iVar23 = 0;
                do {
                  iVar16 = *(int *)(lVar21 + 0x58);
                  if (*(char *)(*(long *)(lVar21 + 0x68) + (ulong)(uint)(iVar23 + iVar19 * iVar16))
                      == '\x01') {
                    iVar2 = iVar6 + iVar23;
                    pcVar13 = pcVar1;
                    if ((((-1 < iVar2) && (-1 < (int)(iVar19 - uVar12))) && (iVar2 < iVar16)) &&
                       ((int)(iVar19 - uVar12) < *(int *)(lVar21 + 0x5c))) {
                      pcVar13 = (char *)(*(long *)(lVar21 + 0x68) +
                                        (ulong)(uint)(iVar6 + iVar23 + iVar15 * iVar16));
                    }
                    if (*pcVar13 == '\0') {
                      uVar11 = *(uint *)(*(long *)(lVar21 + 0x80) +
                                        (ulong)(uint)(iVar23 + iVar19 * *(int *)(lVar21 + 0x70)) * 4
                                        );
                      uVar7 = uVar11 >> 8 & 0xff;
                      uVar22 = uVar11 >> 0x10;
                      if (uVar7 == 0) {
                        if (uVar11 < 0x10000) {
                          uVar22 = 0;
                        }
                        else {
                          puVar4 = *(uint **)(this + 0x110);
                          if (puVar4 < *(uint **)(this + 0x118)) {
                            *puVar4 = uVar22;
                            uVar22 = 0;
                            *(uint **)(this + 0x110) = puVar4 + 1;
                          }
                          else {
                            pvVar20 = *(void **)(this + 0x108);
                            __n = (long)puVar4 - (long)pvVar20;
                            uVar18 = ((long)__n >> 2) + 1;
                            if (uVar18 >> 0x3e != 0) goto LAB_0095e314;
                            uVar17 = (long)*(uint **)(this + 0x118) - (long)pvVar20;
                            uVar14 = (long)uVar17 >> 1;
                            if (uVar18 <= uVar14) {
                              uVar18 = uVar14;
                            }
                            if (0x7ffffffffffffffb < uVar17) {
                              uVar18 = 0x3fffffffffffffff;
                            }
                            if (uVar18 == 0) {
                              pvVar9 = (void *)0x0;
                            }
                            else {
                              if (uVar18 >> 0x3e != 0) goto LAB_0095e31c;
                              pvVar9 = operator_new(uVar18 << 2);
                            }
                            puVar4 = (uint *)((long)pvVar9 + ((long)__n >> 2) * 4);
                            *puVar4 = uVar22;
                            if (0 < (long)__n) {
                              memcpy(pvVar9,pvVar20,__n);
                            }
                            *(void **)(this + 0x108) = pvVar9;
                            *(uint **)(this + 0x110) = puVar4 + 1;
                            *(void **)(this + 0x118) = (void *)((long)pvVar9 + uVar18 * 4);
                            if (pvVar20 != (void *)0x0) {
                              operator_delete(pvVar20);
                            }
                            uVar22 = 0;
                          }
                        }
                      }
                      else {
                        uVar8 = MultiresTextureGpuUpdater::cancelUpdateAndReturnTileIndex
                                          (*(MultiresTextureGpuUpdater **)(this + 0x1b0),uVar7);
                        puVar3 = *(undefined4 **)(this + 0x110);
                        if (puVar3 == *(undefined4 **)(this + 0x118)) {
                          pvVar20 = *(void **)(this + 0x108);
                          uVar17 = (long)puVar3 - (long)pvVar20;
                          uVar18 = ((long)uVar17 >> 2) + 1;
                          if (uVar18 >> 0x3e != 0) {
LAB_0095e314:
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__vector_base_common<true>::__throw_length_error();
                          }
                          if (uVar18 <= (ulong)((long)uVar17 >> 1)) {
                            uVar18 = (long)uVar17 >> 1;
                          }
                          if (0x7ffffffffffffffb < uVar17) {
                            uVar18 = 0x3fffffffffffffff;
                          }
                          if (uVar18 == 0) {
                            pvVar9 = (void *)0x0;
                          }
                          else {
                            if (uVar18 >> 0x3e != 0) {
LAB_0095e31c:
                    /* WARNING: Subroutine does not return */
                              FUN_006d1f18(
                                          "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                          );
                            }
                            pvVar9 = operator_new(uVar18 << 2);
                          }
                          puVar3 = (undefined4 *)((long)pvVar9 + ((long)uVar17 >> 2) * 4);
                          *puVar3 = uVar8;
                          if (0 < (long)uVar17) {
                            memcpy(pvVar9,pvVar20,uVar17);
                          }
                          *(void **)(this + 0x108) = pvVar9;
                          *(undefined4 **)(this + 0x110) = puVar3 + 1;
                          *(void **)(this + 0x118) = (void *)((long)pvVar9 + uVar18 * 4);
                          if (pvVar20 != (void *)0x0) {
                            operator_delete(pvVar20);
                          }
                        }
                        else {
                          *puVar3 = uVar8;
                          *(undefined4 **)(this + 0x110) = puVar3 + 1;
                        }
                      }
                      *(uint *)(*(long *)(lVar21 + 0x80) +
                               (ulong)(uint)(iVar23 + iVar19 * *(int *)(lVar21 + 0x70)) * 4) =
                           uVar22 << 0x10;
                      if (*(long *)(*(long *)(lVar21 + 0x98) +
                                   (ulong)(uint)(iVar23 + iVar19 * *(int *)(lVar21 + 0x88)) * 8) !=
                          0) {
                        (**(code **)(*(long *)this + 0x20))(this);
                        *(undefined8 *)
                         (*(long *)(lVar21 + 0x98) +
                         (ulong)(uint)(iVar23 + iVar19 * *(int *)(lVar21 + 0x88)) * 8) = 0;
                      }
                    }
                  }
                  iVar16 = *(int *)(lVar21 + 0x14);
                  iVar23 = iVar23 + 1;
                } while (iVar23 < iVar16);
              }
              iVar19 = iVar19 + 1;
              iVar15 = iVar15 + 1;
            } while (iVar19 < iVar16);
            if (0 < iVar16) {
              iVar19 = 0;
              uVar11 = uVar12;
              do {
                if (0 < iVar16) {
                  iVar15 = 0;
                  do {
                    iVar16 = *(int *)(lVar21 + 0x58);
                    if (*(char *)(*(long *)(lVar21 + 0x68) + (ulong)(uint)(iVar15 + iVar19 * iVar16)
                                 ) == '\x01') {
                      pcVar13 = pcVar1;
                      if (((-1 < (int)(uVar10 + iVar15)) && (-1 < (int)(iVar19 + uVar12))) &&
                         (((int)(uVar10 + iVar15) < iVar16 &&
                          ((int)(iVar19 + uVar12) < *(int *)(lVar21 + 0x5c))))) {
                        pcVar13 = (char *)(*(long *)(lVar21 + 0x68) +
                                          (ulong)(uVar10 + iVar15 + uVar11 * iVar16));
                      }
                      if (*pcVar13 == '\x01') {
                        *(undefined4 *)
                         (*(long *)(lVar21 + 200) +
                         (ulong)(uint)(iVar15 + iVar19 * *(int *)(lVar21 + 0xb8)) * 4) =
                             *(undefined4 *)
                              (*(long *)(lVar21 + 0x80) +
                              (ulong)(uVar10 + iVar15 + uVar11 * *(int *)(lVar21 + 0x70)) * 4);
                        uVar25 = *(undefined8 *)
                                  (*(long *)(lVar21 + 0x98) +
                                  (ulong)(uVar10 + iVar15 + uVar11 * *(int *)(lVar21 + 0x88)) * 8);
                      }
                      else {
                        uVar25 = 0;
                        *(undefined4 *)
                         (*(long *)(lVar21 + 200) +
                         (ulong)(uint)(iVar15 + iVar19 * *(int *)(lVar21 + 0xb8)) * 4) = 0;
                      }
                      *(undefined8 *)
                       (*(long *)(lVar21 + 0xe0) +
                       (ulong)(uint)(iVar15 + iVar19 * *(int *)(lVar21 + 0xd0)) * 8) = uVar25;
                    }
                    iVar16 = *(int *)(lVar21 + 0x14);
                    iVar15 = iVar15 + 1;
                  } while (iVar15 < iVar16);
                }
                iVar19 = iVar19 + 1;
                uVar11 = uVar11 + 1;
              } while (iVar19 < iVar16);
              goto LAB_0095e220;
            }
            uVar12 = *(uint *)(lVar21 + 0xbc);
          }
          if (uVar12 != 0) {
            uVar10 = 0;
            uVar11 = *(uint *)(lVar21 + 0xb8);
            do {
              if (uVar11 != 0) {
                uVar12 = 0;
                do {
                  uVar11 = uVar12 + uVar10 * uVar11;
                  uVar22 = uVar12 + uVar10 * *(int *)(lVar21 + 0x70);
                  uVar12 = uVar12 + 1;
                  *(undefined4 *)(*(long *)(lVar21 + 0x80) + (ulong)uVar22 * 4) =
                       *(undefined4 *)(*(long *)(lVar21 + 200) + (ulong)uVar11 * 4);
                  uVar11 = *(uint *)(lVar21 + 0xb8);
                } while (uVar12 < uVar11);
                uVar12 = *(uint *)(lVar21 + 0xbc);
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar12);
          }
          iVar16 = *(int *)(lVar21 + 0xd4);
          if (iVar16 != 0) {
            uVar12 = 0;
            iVar19 = 0;
            uVar10 = *(uint *)(lVar21 + 0xd0);
            do {
              if (uVar10 != 0) {
                uVar22 = *(int *)(lVar21 + 0x88) * iVar19;
                uVar18 = (ulong)uVar10;
                uVar11 = uVar12;
                do {
                  uVar17 = (ulong)uVar11;
                  uVar18 = uVar18 - 1;
                  uVar11 = uVar11 + 1;
                  *(undefined8 *)(*(long *)(lVar21 + 0x98) + (ulong)uVar22 * 8) =
                       *(undefined8 *)(*(long *)(lVar21 + 0xe0) + uVar17 * 8);
                  uVar22 = uVar22 + 1;
                } while (uVar18 != 0);
              }
              iVar19 = iVar19 + 1;
              uVar12 = uVar12 + uVar10;
            } while (iVar19 != iVar16);
          }
          *(ulong *)(lVar21 + 0x4c) = CONCAT44(iVar26,iVar24);
        }
        *(undefined *)(lVar21 + 0xe8) = 1;
      }
LAB_0095dd9c:
      lVar21 = lVar21 + 0xf0;
    } while (lVar21 != lVar5);
  }
  return;
}


