// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: floor1_fit
// Entry Point: 00e12a44
// Size: 2104 bytes
// Signature: undefined floor1_fit(void)


void floor1_fit(undefined8 param_1,undefined4 *param_2,long param_3,long param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  ulong uVar20;
  undefined4 *puVar21;
  uint *puVar22;
  uint uVar23;
  long lVar24;
  undefined8 *puVar25;
  long lVar26;
  int *piVar27;
  long lVar28;
  uint uVar29;
  int *piVar30;
  undefined8 *puVar31;
  int iVar32;
  float *pfVar33;
  long lVar34;
  float *pfVar35;
  long lVar36;
  uint uVar37;
  long lVar38;
  ulong uVar39;
  uint uVar40;
  ulong uVar41;
  undefined *puVar42;
  float fVar43;
  float fVar44;
  uint local_139c;
  int local_1398;
  int local_1394;
  uint local_1390;
  uint local_138c;
  uint uStack_1388;
  int aiStack_1384 [65];
  undefined8 local_1280 [32];
  int aiStack_117c [65];
  undefined8 local_1078;
  undefined8 auStack_1070 [31];
  undefined8 local_f74;
  undefined8 auStack_f6c [31];
  undefined auStack_e70 [3584];
  long local_70;
  
  lVar13 = tpidr_el0;
  local_70 = *(long *)(lVar13 + 0x28);
  uVar8 = param_2[0x141];
  uVar41 = (ulong)(int)uVar8;
  lVar36 = *(long *)(param_2 + 0x144);
  uVar6 = param_2[0x142];
  if ((int)uVar8 < 1) {
LAB_00e12cb8:
    if ((uVar8 == 0) &&
       (iVar14 = FUN_00e1327c(param_4,param_3,0,uVar6,auStack_e70,uVar6,lVar36), iVar14 != 0)) {
LAB_00e12c44:
      local_138c = 0xffffff38;
      uStack_1388 = 0xffffff38;
      FUN_00e133d0(auStack_e70,uVar8 - 1,&uStack_1388,&local_138c,lVar36);
      local_1078._0_4_ = uStack_1388;
      local_1078._4_4_ = local_138c;
      local_f74._0_4_ = uStack_1388;
      local_f74._4_4_ = local_138c;
      if (2 < (int)uVar8) {
        uVar39 = 2;
        do {
          iVar9 = param_2[uVar39 + 0x82];
          lVar24 = (long)iVar9;
          iVar10 = aiStack_117c[lVar24];
          lVar38 = (long)iVar10;
          iVar14 = *(int *)((long)local_1280 + lVar24 * 4);
          if (aiStack_1384[lVar38] != iVar14) {
            lVar34 = (long)iVar14;
            lVar28 = lVar38 * 4;
            lVar26 = lVar34 * 4;
            iVar16 = param_2[lVar38 + 0x82];
            aiStack_1384[lVar38] = iVar14;
            uVar37 = *(uint *)((long)&local_f74 + lVar28);
            iVar17 = param_2[lVar34 + 0x82];
            uVar40 = *(uint *)((long)&local_1078 + lVar28);
            if ((int)uVar37 < 0) {
LAB_00e12d94:
              uVar7 = *(uint *)((long)&local_f74 + lVar26);
              uVar23 = *(uint *)((long)&local_1078 + lVar26);
              uVar37 = uVar40;
            }
            else {
              if (-1 < (int)uVar40) {
                uVar40 = uVar40 + uVar37 >> 1;
                goto LAB_00e12d94;
              }
              uVar7 = *(uint *)((long)&local_f74 + lVar26);
              uVar23 = *(uint *)((long)&local_1078 + lVar26);
            }
            uVar40 = uVar23;
            if ((-1 < (int)uVar7) && (uVar40 = uVar7, -1 < (int)uVar23)) {
              uVar40 = uVar23 + uVar7 >> 1;
            }
            if (uVar37 == 0xffffffff || uVar40 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
              exit(1);
            }
            iVar12 = uVar40 - uVar37;
            uVar7 = *(uint *)(lVar36 + 0x344 + lVar28);
            iVar32 = *(int *)(lVar36 + 0x344 + lVar26);
            fVar43 = *(float *)(param_4 + (long)(int)uVar7 * 4);
            iVar4 = -iVar12;
            if (-1 < iVar12) {
              iVar4 = iVar12;
            }
            uVar23 = iVar32 - uVar7;
            iVar11 = 0;
            if (uVar23 != 0) {
              iVar11 = iVar12 / (int)uVar23;
            }
            fVar44 = (float)NEON_fmadd(fVar43,0x40ea0ea1,0x447fe000);
            iVar15 = iVar11 * uVar23;
            uVar29 = (int)fVar44 & ((int)fVar44 >> 0x1f ^ 0xffffffffU);
            if (0x3fe < uVar29) {
              uVar29 = 0x3ff;
            }
            iVar5 = -iVar15;
            if (-1 < iVar15) {
              iVar5 = iVar15;
            }
            if (fVar43 <= *(float *)(param_3 + (long)(int)uVar7 * 4) + *(float *)(lVar36 + 0x458)) {
              if (((float)uVar29 <= *(float *)(lVar36 + 0x448) + (float)uVar37) &&
                 ((float)uVar37 - *(float *)(lVar36 + 0x44c) <= (float)uVar29)) goto LAB_00e12e4c;
LAB_00e12fd4:
              local_1394 = -200;
              local_1390 = 0xffffff38;
              local_139c = 0xffffff38;
              local_1398 = -200;
              iVar16 = FUN_00e133d0(auStack_e70 + (long)iVar16 * 0x38,iVar9 - iVar16,&local_1390,
                                    &local_1394,lVar36);
              iVar17 = FUN_00e133d0(auStack_e70 + lVar24 * 0x38,iVar17 - iVar9,&local_1398,
                                    &local_139c,lVar36);
              if (iVar16 == 0) {
                if (iVar17 != 0) {
                  local_1398 = local_1394;
                  local_139c = uVar40;
                }
              }
              else {
                local_1394 = local_1398;
                local_1390 = uVar37;
                if (iVar17 != 0) goto LAB_00e13068;
              }
              *(uint *)((long)&local_1078 + lVar38 * 4) = local_1390;
              if (iVar10 == 0) {
                *(uint *)((long)&local_f74 + lVar38 * 4) = local_1390;
              }
              *(int *)((long)&local_f74 + uVar39 * 4) = local_1394;
              *(int *)((long)&local_1078 + uVar39 * 4) = local_1398;
              *(uint *)((long)&local_f74 + lVar34 * 4) = local_139c;
              if (iVar14 == 1) {
                *(uint *)((long)&local_1078 + lVar34 * 4) = local_139c;
              }
              if ((-1 < local_1394) || (-1 < local_1398)) {
                if (0 < iVar9) {
                  uVar20 = (ulong)(iVar9 - 1);
                  do {
                    if (*(int *)((long)local_1280 + uVar20 * 4) != iVar14) break;
                    *(int *)((long)local_1280 + uVar20 * 4) = (int)uVar39;
                    bVar1 = 0 < (long)uVar20;
                    uVar20 = uVar20 - 1;
                  } while (bVar1);
                }
                lVar24 = lVar24 + 1;
                if ((int)lVar24 < (int)uVar8) {
                  lVar38 = uVar41 - lVar24;
                  piVar27 = aiStack_117c + lVar24;
                  do {
                    if (*piVar27 != iVar10) break;
                    lVar38 = lVar38 + -1;
                    *piVar27 = (int)uVar39;
                    piVar27 = piVar27 + 1;
                  } while (lVar38 != 0);
                }
              }
            }
            else {
LAB_00e12e4c:
              uVar2 = uVar7 + 1;
              uVar29 = (uVar37 - uVar29) * (uVar37 - uVar29);
              if ((int)uVar2 < iVar32) {
                uVar20 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
                iVar15 = 0;
                iVar32 = ~uVar7 + iVar32;
                pfVar33 = (float *)(param_3 + uVar20);
                pfVar35 = (float *)(param_4 + uVar20);
                uVar7 = uVar37;
                do {
                  iVar15 = iVar15 + (iVar4 - iVar5);
                  uVar2 = 0;
                  if ((int)uVar23 <= iVar15) {
                    uVar2 = iVar12 >> 0x1f | 1;
                  }
                  uVar7 = uVar7 + iVar11 + uVar2;
                  uVar2 = 0;
                  if ((int)uVar23 <= iVar15) {
                    uVar2 = uVar23;
                  }
                  fVar43 = (float)NEON_fmadd(*pfVar35,0x40ea0ea1,0x447fe000);
                  uVar19 = (uint)fVar43;
                  uVar3 = uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU);
                  bVar1 = 0x3fe < uVar3;
                  if (0x3fe < uVar3) {
                    uVar3 = 0x3ff;
                  }
                  if ((*pfVar35 <= *(float *)(lVar36 + 0x458) + *pfVar33) &&
                     (bVar1 || 0 < (int)uVar19)) {
                    if ((*(float *)(lVar36 + 0x448) + (float)uVar7 < (float)uVar3) ||
                       ((float)uVar3 < (float)uVar7 - *(float *)(lVar36 + 0x44c)))
                    goto LAB_00e12fd4;
                  }
                  iVar15 = iVar15 - uVar2;
                  iVar32 = iVar32 + -1;
                  pfVar33 = pfVar33 + 1;
                  uVar29 = uVar29 + (uVar7 - uVar3) * (uVar7 - uVar3);
                  pfVar35 = pfVar35 + 1;
                } while (iVar32 != 0);
              }
              else {
                uVar23 = 1;
              }
              fVar43 = *(float *)(lVar36 + 0x450);
              if (((*(float *)(lVar36 + 0x448) * *(float *)(lVar36 + 0x448)) / (float)uVar23 <=
                   fVar43) &&
                 ((*(float *)(lVar36 + 0x44c) * *(float *)(lVar36 + 0x44c)) / (float)uVar23 <=
                  fVar43)) {
                uVar7 = 0;
                if (uVar23 != 0) {
                  uVar7 = uVar29 / uVar23;
                }
                if (fVar43 < (float)uVar7) goto LAB_00e12fd4;
              }
LAB_00e13068:
              *(undefined4 *)((long)&local_f74 + uVar39 * 4) = 0xffffff38;
              *(undefined4 *)((long)&local_1078 + uVar39 * 4) = 0xffffff38;
            }
          }
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar41);
      }
      uVar40 = (uint)local_f74;
      uVar37 = (uint)local_1078;
      puVar18 = (uint *)_vorbis_block_alloc(param_1,uVar41 << 2);
      if ((int)uVar40 < 0) {
LAB_00e13164:
        *puVar18 = uVar37;
      }
      else {
        if (-1 < (int)uVar37) {
          uVar37 = uVar37 + uVar40 >> 1;
          goto LAB_00e13164;
        }
        *puVar18 = uVar40;
      }
      uVar37 = local_1078._4_4_;
      if ((-1 < (int)local_f74._4_4_) && (uVar37 = local_f74._4_4_, -1 < (int)local_1078._4_4_)) {
        uVar37 = local_1078._4_4_ + local_f74._4_4_ >> 1;
      }
      puVar18[1] = uVar37;
      if (2 < (int)uVar8) {
        lVar24 = uVar41 - 2;
        puVar25 = auStack_f6c;
        piVar27 = param_2 + 0x102;
        piVar30 = (int *)(lVar36 + 0x34c);
        puVar31 = auStack_1070;
        puVar22 = puVar18 + 2;
        do {
          iVar9 = *(int *)(lVar36 + 0x344 + (long)*piVar27 * 4);
          iVar10 = (puVar18[piVar27[-0x3f]] & 0x7fff) - (puVar18[*piVar27] & 0x7fff);
          iVar17 = *(int *)(lVar36 + 0x344 + (long)piVar27[-0x3f] * 4) - iVar9;
          iVar14 = -iVar10;
          if (-1 < iVar10) {
            iVar14 = iVar10;
          }
          uVar8 = *(uint *)puVar25;
          iVar16 = 0;
          if (iVar17 != 0) {
            iVar16 = (iVar14 * (*piVar30 - iVar9)) / iVar17;
          }
          iVar14 = -iVar16;
          if (-1 < iVar10) {
            iVar14 = iVar16;
          }
          uVar37 = *(uint *)puVar31;
          uVar40 = uVar37;
          if ((-1 < (int)uVar8) && (uVar40 = uVar8, -1 < (int)uVar37)) {
            uVar40 = uVar37 + uVar8 >> 1;
          }
          uVar8 = iVar14 + (puVar18[*piVar27] & 0x7fff);
          puVar25 = (undefined8 *)((long)puVar25 + 4);
          piVar27 = piVar27 + 1;
          piVar30 = piVar30 + 1;
          puVar31 = (undefined8 *)((long)puVar31 + 4);
          uVar37 = uVar8 | 0x8000;
          if (uVar8 != uVar40 && -1 < (int)uVar40) {
            uVar37 = uVar40;
          }
          lVar24 = lVar24 + -1;
          *puVar22 = uVar37;
          puVar22 = puVar22 + 1;
        } while (lVar24 != 0);
      }
      goto LAB_00e12cf4;
    }
  }
  else {
    if (uVar8 < 8) {
      uVar20 = 0;
LAB_00e12ad0:
      lVar24 = uVar41 - uVar20;
      puVar21 = (undefined4 *)((long)&local_f74 + uVar20 * 4);
      do {
        lVar24 = lVar24 + -1;
        *puVar21 = 0xffffff38;
        puVar21 = puVar21 + 1;
      } while (lVar24 != 0);
    }
    else {
      uVar20 = uVar41 & 0xfffffffffffffff8;
      puVar25 = auStack_f6c + 1;
      uVar39 = uVar20;
      do {
        puVar25[-1] = 0xffffff38ffffff38;
        puVar25[-2] = 0xffffff38ffffff38;
        puVar25[1] = 0xffffff38ffffff38;
        *puVar25 = 0xffffff38ffffff38;
        puVar25 = puVar25 + 4;
        uVar39 = uVar39 - 8;
      } while (uVar39 != 0);
      if (uVar20 != uVar41) goto LAB_00e12ad0;
    }
    if ((int)uVar8 < 1) goto LAB_00e12cb8;
    if (uVar8 < 8) {
      uVar20 = 0;
LAB_00e12b30:
      lVar24 = uVar41 - uVar20;
      puVar21 = (undefined4 *)((long)&local_1078 + uVar20 * 4);
      do {
        lVar24 = lVar24 + -1;
        *puVar21 = 0xffffff38;
        puVar21 = puVar21 + 1;
      } while (lVar24 != 0);
    }
    else {
      uVar20 = uVar41 & 0xfffffffffffffff8;
      puVar25 = auStack_1070 + 1;
      uVar39 = uVar20;
      do {
        puVar25[-1] = 0xffffff38ffffff38;
        puVar25[-2] = 0xffffff38ffffff38;
        puVar25[1] = 0xffffff38ffffff38;
        *puVar25 = 0xffffff38ffffff38;
        puVar25 = puVar25 + 4;
        uVar39 = uVar39 - 8;
      } while (uVar39 != 0);
      if (uVar20 != uVar41) goto LAB_00e12b30;
    }
    if ((int)uVar8 < 1) goto LAB_00e12cb8;
    memset(aiStack_117c,0,uVar41 << 2);
    if (uVar8 < 8) {
      uVar20 = 0;
LAB_00e12bb4:
      lVar24 = uVar41 - uVar20;
      puVar21 = (undefined4 *)((long)local_1280 + uVar20 * 4);
      do {
        lVar24 = lVar24 + -1;
        *puVar21 = 1;
        puVar21 = puVar21 + 1;
      } while (lVar24 != 0);
    }
    else {
      uVar20 = uVar41 & 0xfffffffffffffff8;
      puVar25 = local_1280 + 2;
      uVar39 = uVar20;
      do {
        puVar25[-1] = 0x100000001;
        puVar25[-2] = 0x100000001;
        puVar25[1] = 0x100000001;
        *puVar25 = 0x100000001;
        puVar25 = puVar25 + 4;
        uVar39 = uVar39 - 8;
      } while (uVar39 != 0);
      if (uVar20 != uVar41) goto LAB_00e12bb4;
    }
    if ((int)uVar8 < 1) goto LAB_00e12cb8;
    memset(aiStack_1384,0xff,uVar41 << 2);
    if (uVar8 != 1) {
      lVar24 = 0;
      lVar38 = uVar41 - 1;
      puVar42 = auStack_e70;
      puVar21 = param_2;
      do {
        iVar14 = FUN_00e1327c(param_4,param_3,*puVar21,puVar21[1],puVar42,uVar6,lVar36);
        lVar38 = lVar38 + -1;
        lVar24 = lVar24 + iVar14;
        puVar42 = puVar42 + 0x38;
        puVar21 = puVar21 + 1;
      } while (lVar38 != 0);
      if (lVar24 == 0) goto LAB_00e12cf0;
      goto LAB_00e12c44;
    }
  }
LAB_00e12cf0:
  puVar18 = (uint *)0x0;
LAB_00e12cf4:
  if (*(long *)(lVar13 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar18);
}


