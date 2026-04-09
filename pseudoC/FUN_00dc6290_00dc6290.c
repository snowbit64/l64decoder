// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00dc6290
// Entry Point: 00dc6290
// Size: 2536 bytes
// Signature: undefined FUN_00dc6290(void)


/* WARNING: Type propagation algorithm not settling */

void FUN_00dc6290(long **param_1)

{
  ushort *puVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  uint uVar5;
  char cVar6;
  ushort uVar7;
  ushort uVar8;
  long lVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  undefined uVar17;
  undefined uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  long *plVar22;
  uint uVar23;
  long *plVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined *puVar29;
  long lVar30;
  long lVar31;
  long **pplVar32;
  uint uVar33;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined auStack_370 [768];
  long local_70;
  
  lVar9 = tpidr_el0;
  local_70 = *(long *)(lVar9 + 0x28);
  pplVar32 = (long **)*param_1;
  uVar5 = *(uint *)((long)pplVar32 + 0x14);
  lVar30 = **pplVar32;
  if ((uVar5 & 0xc) == 4) {
    bVar10 = *(int *)(param_1 + 4) == 0;
  }
  else {
    bVar10 = false;
  }
  lVar31 = (*pplVar32)[1];
  png_set_benign_errors(lVar30,0);
  uVar19 = *(uint *)((long)pplVar32 + 0xc);
  uVar20 = 1;
  if ((*(uint *)((long)pplVar32 + 0x14) & 8) == 0) {
    uVar20 = (*(uint *)((long)pplVar32 + 0x14) & 3) + 1;
  }
  uVar23 = 0;
  if (uVar20 != 0) {
    uVar23 = 0x7fffffff / uVar20;
  }
  if (uVar23 < uVar19) {
                    /* WARNING: Subroutine does not return */
    png_error(**pplVar32,"image row stride too large");
  }
  uVar20 = uVar20 * uVar19;
  uVar23 = *(uint *)(param_1 + 2);
  if (*(uint *)(param_1 + 2) == 0) {
    *(uint *)(param_1 + 2) = uVar20;
    uVar23 = uVar20;
  }
  uVar33 = -uVar23;
  if (-1 < (int)uVar23) {
    uVar33 = uVar23;
  }
  if (uVar33 < uVar20) {
                    /* WARNING: Subroutine does not return */
    png_error(**pplVar32,"supplied row stride too small");
  }
  uVar14 = (ulong)*(uint *)(pplVar32 + 2);
  if ((uVar20 * uVar14 & 0xffffffff00000000) != 0) {
                    /* WARNING: Subroutine does not return */
    png_error(**pplVar32,"memory image too large");
  }
  if ((uVar5 >> 3 & 1) == 0) {
    uVar21 = 0x10;
    if (!bVar10) {
      uVar21 = 8;
    }
    png_set_IHDR(lVar30,lVar31,uVar19,uVar14,uVar21,
                 (((uVar5 & 0xaaaaaaaa) >> 1 | (uVar5 & 0x55555555) << 1) << 0x1e) >> 0x1d,0,0,0);
    if (bVar10) goto LAB_00dc6398;
LAB_00dc6604:
    if ((*(byte *)(pplVar32 + 3) & 1) == 0) {
      png_set_sRGB(lVar30,lVar31,0);
      png_write_info(lVar30,lVar31);
    }
    else {
      png_set_gAMA_fixed(lVar30,lVar31,0xb18f);
      png_write_info(lVar30,lVar31);
    }
  }
  else {
    if ((param_1[3] == (long *)0x0) || (uVar20 = *(uint *)((long)pplVar32 + 0x1c), uVar20 == 0)) {
                    /* WARNING: Subroutine does not return */
      png_error(**pplVar32,"no color-map for color-mapped image");
    }
    if (uVar20 < 0x11) {
      if (uVar20 < 5) {
        uVar21 = 1;
        if (2 < uVar20) {
          uVar21 = 2;
        }
      }
      else {
        uVar21 = 4;
      }
    }
    else {
      uVar21 = 8;
    }
    png_set_IHDR(lVar30,lVar31,uVar19,uVar14,uVar21,3,0,0,0);
    plVar24 = *param_1;
    plVar22 = param_1[3];
    uVar20 = *(uint *)((long)plVar24 + 0x1c);
    uVar19 = *(uint *)((long)plVar24 + 0x14);
    uStack_388 = 0xffffffffffffffff;
    local_390 = 0xffffffffffffffff;
    uStack_378 = 0xffffffffffffffff;
    uStack_380 = 0xffffffffffffffff;
    uStack_3a8 = 0xffffffffffffffff;
    local_3b0 = 0xffffffffffffffff;
    uStack_398 = 0xffffffffffffffff;
    uStack_3a0 = 0xffffffffffffffff;
    if (0xff < uVar20) {
      uVar20 = 0x100;
    }
    uVar14 = (ulong)uVar20;
    uStack_3c8 = 0xffffffffffffffff;
    local_3d0 = 0xffffffffffffffff;
    uStack_3b8 = 0xffffffffffffffff;
    uStack_3c0 = 0xffffffffffffffff;
    uStack_3e8 = 0xffffffffffffffff;
    local_3f0 = 0xffffffffffffffff;
    uStack_3d8 = 0xffffffffffffffff;
    uStack_3e0 = 0xffffffffffffffff;
    uStack_408 = 0xffffffffffffffff;
    local_410 = 0xffffffffffffffff;
    uStack_3f8 = 0xffffffffffffffff;
    uStack_400 = 0xffffffffffffffff;
    uStack_428 = 0xffffffffffffffff;
    local_430 = 0xffffffffffffffff;
    uStack_418 = 0xffffffffffffffff;
    uStack_420 = 0xffffffffffffffff;
    uStack_448 = 0xffffffffffffffff;
    local_450 = 0xffffffffffffffff;
    uStack_438 = 0xffffffffffffffff;
    uStack_440 = 0xffffffffffffffff;
    uStack_468 = 0xffffffffffffffff;
    local_470 = 0xffffffffffffffff;
    uStack_458 = 0xffffffffffffffff;
    uStack_460 = 0xffffffffffffffff;
    memset(auStack_370,0,0x300);
    bVar11 = (uVar19 & 0x21) == 0x21;
    uVar27 = (ulong)bVar11;
    uVar33 = (uint)((ulong)uVar19 & 3);
    uVar23 = 0;
    if (!bVar11) {
      uVar23 = uVar33;
    }
    lVar25 = 1;
    if (bVar11) {
      lVar25 = 2;
    }
    lVar3 = 0;
    if (!bVar11) {
      lVar3 = 3;
    }
    if (uVar20 == 0) {
LAB_00dc65b8:
      iVar12 = 0;
    }
    else {
      uVar2 = ((ulong)uVar19 & 3) + 1;
      uVar28 = (ulong)(uVar19 >> 3) & 2;
      uVar26 = uVar28 | uVar27;
      if ((uVar19 >> 2 & 1) == 0) {
        uVar28 = 0;
        iVar12 = 0;
        puVar29 = (undefined *)((ulong)auStack_370 | 2);
LAB_00dc6568:
        do {
          if (uVar33 == 3) {
            cVar6 = *(char *)((long)plVar22 + lVar3);
            *(char *)((long)&local_470 + uVar28) = cVar6;
            if (cVar6 != -1) {
              iVar12 = (int)uVar28 + 1;
            }
          }
          else if (uVar33 != 2) {
            if ((uVar33 == 1) &&
               (cVar6 = *(char *)((long)plVar22 + (uVar27 ^ 1)),
               *(char *)((long)&local_470 + uVar28) = cVar6, cVar6 != -1)) {
              iVar12 = (int)uVar28 + 1;
            }
            uVar17 = *(undefined *)((long)plVar22 + uVar27);
            puVar29[-1] = uVar17;
            puVar29[-2] = uVar17;
            *puVar29 = uVar17;
            uVar28 = uVar28 + 1;
            plVar22 = (long *)((long)plVar22 + uVar2);
            puVar29 = puVar29 + 3;
            if (uVar14 == uVar28) break;
            goto LAB_00dc6568;
          }
          *puVar29 = *(undefined *)((long)plVar22 + (uVar26 ^ 2));
          puVar29[-1] = *(undefined *)((long)plVar22 + lVar25);
          puVar29[-2] = *(undefined *)((long)plVar22 + uVar26);
          uVar28 = uVar28 + 1;
          plVar22 = (long *)((long)plVar22 + uVar2);
          puVar29 = puVar29 + 3;
        } while (uVar14 != uVar28);
      }
      else {
        if ((uVar2 & 1) != 0) {
          if (uVar33 < 2) {
            puVar29 = (undefined *)((ulong)auStack_370 | 2);
            do {
              uVar7 = *(ushort *)plVar22;
              uVar14 = uVar14 - 1;
              plVar22 = (long *)((long)plVar22 + uVar2 * 2);
              uVar27 = (ulong)uVar7 * 0xff >> 0xf;
              uVar17 = (undefined)
                       ((uint)(ushort)(&png_sRGB_base)[uVar27] +
                        (((uint)((ulong)uVar7 * 0xff) & 0x7fff) *
                         (uint)(byte)(&png_sRGB_delta)[uVar27] >> 0xc) >> 8);
              puVar29[-1] = uVar17;
              puVar29[-2] = uVar17;
              *puVar29 = uVar17;
              puVar29 = puVar29 + 3;
            } while (uVar14 != 0);
          }
          else {
            puVar29 = (undefined *)((ulong)auStack_370 | 2);
            do {
              uVar14 = uVar14 - 1;
              uVar27 = (ulong)*(ushort *)((long)plVar22 + (uVar28 ^ 2) * 2) * 0xff;
              uVar26 = uVar27 >> 0xf;
              *puVar29 = (char)((uint)(ushort)(&png_sRGB_base)[uVar26] +
                                (((uint)uVar27 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar26] >>
                                0xc) >> 8);
              uVar27 = (ulong)*(ushort *)((long)plVar22 + 2) * 0xff;
              uVar26 = uVar27 >> 0xf;
              puVar29[-1] = (char)((uint)(ushort)(&png_sRGB_base)[uVar26] +
                                   (((uint)uVar27 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar26]
                                   >> 0xc) >> 8);
              puVar1 = (ushort *)((long)plVar22 + ((ulong)(uVar19 >> 4) & 1) * 4);
              plVar22 = (long *)((long)plVar22 + uVar2 * 2);
              uVar27 = (ulong)*puVar1 * 0xff;
              uVar26 = uVar27 >> 0xf;
              puVar29[-2] = (char)((uint)(ushort)(&png_sRGB_base)[uVar26] +
                                   (((uint)uVar27 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar26]
                                   >> 0xc) >> 8);
              puVar29 = puVar29 + 3;
            } while (uVar14 != 0);
          }
          goto LAB_00dc65b8;
        }
        if (uVar33 < 2) {
          uVar26 = 0;
          iVar12 = 0;
          puVar29 = (undefined *)((ulong)auStack_370 | 2);
          do {
            uVar7 = *(ushort *)((long)plVar22 + (ulong)uVar23 * 2);
            uVar19 = 0;
            uVar33 = (uint)uVar7;
            if (uVar7 != 0) {
              uVar19 = ((uVar7 >> 1) + 0x7f7f8080) / uVar33;
            }
            uVar16 = ((uint)uVar7 * 0x100 - (uint)uVar7) + 0x807f;
            uVar15 = uVar16 >> 0x10;
            *(char *)((long)&local_470 + uVar26) = (char)(uVar16 >> 0x10);
            uVar26 = uVar26 + 1;
            uVar16 = 0;
            if (uVar15 != 0xff) {
              uVar16 = uVar19;
            }
            uVar19 = 0;
            if (uVar15 != 0) {
              uVar19 = uVar16;
            }
            if (uVar15 != 0xff) {
              iVar12 = (int)uVar26;
            }
            uVar17 = 0xff;
            if (0x7f < uVar33) {
              uVar7 = *(ushort *)((long)plVar22 + uVar27 * 2);
              uVar16 = (uint)uVar7;
              if (uVar16 < uVar33) {
                if (uVar16 == 0) {
                  uVar17 = 0;
                }
                else {
                  uVar19 = uVar19 * uVar7 + 0x40 >> 7;
                  if (0xff7e < uVar33) {
                    uVar19 = (uint)uVar7 * 0x100 - uVar16;
                  }
                  uVar17 = (undefined)
                           ((uint)(ushort)(&png_sRGB_base)[uVar19 >> 0xf] +
                            ((uVar19 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar19 >> 0xf] >> 0xc
                            ) >> 8);
                }
              }
            }
            plVar22 = (long *)((long)plVar22 + uVar2 * 2);
            puVar29[-1] = uVar17;
            puVar29[-2] = uVar17;
            *puVar29 = uVar17;
            puVar29 = puVar29 + 3;
          } while (uVar14 != uVar26);
        }
        else {
          uVar27 = 0;
          iVar12 = 0;
          puVar29 = (undefined *)((ulong)auStack_370 | 2);
          do {
            uVar7 = *(ushort *)((long)plVar22 + (ulong)uVar23 * 2);
            uVar19 = (uint)uVar7 * 0xff + 0x807f;
            uVar33 = uVar19 >> 0x10;
            uVar16 = 0;
            uVar15 = (uint)uVar7;
            if ((uVar33 != 0) && (uVar33 != 0xff)) {
              uVar16 = 0;
              if (uVar7 != 0) {
                uVar16 = ((uVar7 >> 1) + 0x7f7f8080) / uVar15;
              }
            }
            *(char *)((long)&local_470 + uVar27) = (char)(uVar19 >> 0x10);
            uVar27 = uVar27 + 1;
            uVar17 = 0xff;
            if (uVar33 != 0xff) {
              iVar12 = (int)uVar27;
            }
            if (uVar15 < 0x80) {
LAB_00dc6840:
              *puVar29 = uVar17;
            }
            else {
              uVar8 = *(ushort *)((long)plVar22 + (uVar26 ^ 2) * 2);
              if (uVar15 <= uVar8) goto LAB_00dc6840;
              if (uVar8 != 0) {
                uVar19 = uVar16 * uVar8 + 0x40 >> 7;
                if (0xff7e < uVar15) {
                  uVar19 = (uint)uVar8 * 0x100 - (uint)uVar8;
                }
                uVar17 = (undefined)
                         ((uint)(ushort)(&png_sRGB_base)[uVar19 >> 0xf] +
                          ((uVar19 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar19 >> 0xf] >> 0xc)
                         >> 8);
                goto LAB_00dc6840;
              }
              *puVar29 = 0;
            }
            uVar17 = 0xff;
            if (0x7f < uVar15) {
              uVar17 = 0xff;
              uVar8 = *(ushort *)((long)plVar22 + lVar25 * 2);
              if (uVar8 < uVar15) {
                if (uVar8 == 0) {
                  uVar17 = 0;
                }
                else {
                  uVar19 = uVar16 * uVar8 + 0x40 >> 7;
                  if (0xff7e < uVar15) {
                    uVar19 = (uint)uVar8 * 0x100 - (uint)uVar8;
                  }
                  uVar17 = (undefined)
                           ((uint)(ushort)(&png_sRGB_base)[uVar19 >> 0xf] +
                            ((uVar19 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar19 >> 0xf] >> 0xc
                            ) >> 8);
                }
              }
            }
            uVar18 = 0xff;
            puVar29[-1] = uVar17;
            if (0x7f < uVar15) {
              uVar8 = *(ushort *)((long)plVar22 + uVar26 * 2);
              uVar19 = (uint)uVar8;
              if (uVar19 < uVar15) {
                if (uVar19 == 0) {
                  uVar18 = 0;
                }
                else {
                  uVar33 = uVar16 * uVar8 + 0x40 >> 7;
                  if (0xff7e < uVar7) {
                    uVar33 = (uint)uVar8 * 0x100 - uVar19;
                  }
                  uVar18 = (undefined)
                           ((uint)(ushort)(&png_sRGB_base)[uVar33 >> 0xf] +
                            ((uVar33 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar33 >> 0xf] >> 0xc
                            ) >> 8);
                }
              }
            }
            puVar29[-2] = uVar18;
            plVar22 = (long *)((long)plVar22 + uVar2 * 2);
            puVar29 = puVar29 + 3;
          } while (uVar14 != uVar27);
        }
      }
    }
    png_set_PLTE(*(undefined8 *)*plVar24,((undefined8 *)*plVar24)[1],auStack_370,uVar20);
    if (0 < iVar12) {
      png_set_tRNS(*(undefined8 *)*plVar24,((undefined8 *)*plVar24)[1],&local_470,iVar12,0);
    }
    *(uint *)((long)plVar24 + 0x1c) = uVar20;
    if (!bVar10) goto LAB_00dc6604;
LAB_00dc6398:
    png_set_gAMA_fixed(lVar30,lVar31,100000);
    if ((*(byte *)(pplVar32 + 3) & 1) == 0) {
      png_set_cHRM_fixed(lVar30,lVar31,0x7a26,0x8084,64000,33000,30000,60000,15000,6000);
    }
    png_write_info(lVar30,lVar31);
    png_set_swap(lVar30);
  }
  uVar20 = uVar5;
  if ((uVar5 >> 4 & 1) != 0) {
    if ((uVar5 & 10) == 2) {
      png_set_bgr(lVar30);
    }
    uVar20 = uVar5 & 0xffffffef;
  }
  if ((uVar5 >> 5 & 1) != 0) {
    if (((uVar5 >> 3 & 1) == 0) && ((uVar20 & 1) != 0)) {
      png_set_swap_alpha(lVar30);
    }
    uVar20 = uVar20 & 0xffffffdf;
  }
  if (((uVar5 >> 3 & 1) != 0) && (*(uint *)((long)pplVar32 + 0x1c) < 0x11)) {
    png_set_packing(lVar30);
  }
  if (0xf < uVar20) {
                    /* WARNING: Subroutine does not return */
    png_error(lVar30,"png_write_image: unsupported transformation");
  }
  plVar22 = (long *)((long)*(int *)(param_1 + 2) << ((uVar5 & 0xc) == 4));
  plVar24 = param_1[1];
  if ((long)plVar22 < 0) {
    plVar24 = (long *)((long)plVar24 - (long)plVar22 * (ulong)(*(int *)(pplVar32 + 2) - 1));
  }
  param_1[5] = plVar24;
  param_1[6] = plVar22;
  if (((*(byte *)(pplVar32 + 3) >> 1 & 1) != 0) && (lVar30 != 0)) {
    *(undefined *)(lVar30 + 0x29e) = 8;
    if (*(long *)(lVar30 + 0x260) != 0) {
      uVar14 = (ulong)*(byte *)(lVar30 + 0x2a1) * (ulong)*(byte *)(lVar30 + 0x2a4);
      if ((uint)uVar14 < 8) {
        uVar14 = uVar14 * *(uint *)(lVar30 + 0x230) + 7 >> 3;
        lVar25 = *(long *)(lVar30 + 0x268);
      }
      else {
        uVar14 = (uVar14 >> 3) * (ulong)*(uint *)(lVar30 + 0x230);
        lVar25 = *(long *)(lVar30 + 0x268);
      }
      if (lVar25 == 0) {
        uVar13 = png_malloc(lVar30,uVar14 + 1);
        *(undefined8 *)(lVar30 + 0x268) = uVar13;
      }
    }
    *(undefined *)(lVar30 + 0x29e) = 0;
    *(undefined4 *)(lVar30 + 500) = 3;
  }
  if (((uVar5 & 0xd) == 5) || (((uVar5 >> 3 & 1) == 0 && (*(int *)(param_1 + 4) != 0)))) {
    uVar13 = png_get_rowbytes(lVar30,lVar31);
    plVar22 = (long *)png_malloc(lVar30,uVar13);
    pcVar4 = FUN_00dc6eb0;
    if (!bVar10) {
      pcVar4 = FUN_00dc709c;
    }
    param_1[7] = plVar22;
    iVar12 = png_safe_execute(pplVar32,pcVar4,param_1);
    param_1[7] = (long *)0x0;
    png_free(lVar30,plVar22);
    if (iVar12 == 0) {
      uVar13 = 0;
      goto LAB_00dc69c4;
    }
  }
  else {
    iVar12 = *(int *)(pplVar32 + 2);
    if (iVar12 != 0) {
      plVar22 = param_1[5];
      plVar24 = param_1[6];
      do {
        png_write_row(lVar30,plVar22);
        plVar22 = (long *)((long)plVar22 + (long)plVar24);
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
  }
  png_write_end(lVar30,lVar31);
  uVar13 = 1;
LAB_00dc69c4:
  if (*(long *)(lVar9 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar13);
}


