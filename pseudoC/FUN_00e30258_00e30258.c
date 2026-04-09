// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e30258
// Entry Point: 00e30258
// Size: 2540 bytes
// Signature: undefined FUN_00e30258(void)


void * FUN_00e30258(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  void *pvVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  byte local_1e8 [8];
  ulong local_1e0;
  ulong local_1d8;
  undefined8 local_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  code *pcStack_1a8;
  code *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined4 local_178;
  long local_170;
  ulong local_168;
  ulong local_160;
  long local_158;
  ulong local_138;
  ulong local_130;
  ulong local_128 [19];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  ulong local_78;
  ulong local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uStack_188 = 0;
  local_180 = 0;
  if (param_2 == (undefined8 *)0x0) {
    fill_fopen64_filefunc(&local_1d0);
  }
  else {
    pcStack_1a8 = (code *)param_2[5];
    local_1b0 = param_2[4];
    local_198 = param_2[7];
    local_1a0 = (code *)param_2[6];
    uStack_188 = param_2[9];
    local_190 = param_2[8];
    pcStack_1c8 = (code *)param_2[1];
    local_1d0 = *param_2;
    uStack_1b8 = param_2[3];
    uStack_1c0 = param_2[2];
    local_180 = param_2[10];
  }
  local_178 = param_3;
  lVar9 = call_zopen64(&local_1d0,param_1,5);
  local_170 = lVar9;
  if (lVar9 != 0) {
    lVar10 = call_zseek64(&local_1d0,lVar9,0,2);
    if (lVar10 == 0) {
      uVar11 = call_ztell64(&local_1d0,lVar9);
      uVar14 = uVar11;
      if (0xfffe < uVar11) {
        uVar14 = 0xffff;
      }
      pvVar12 = malloc(0x404);
      if (pvVar12 != (void *)0x0) {
        uVar16 = 4;
        do {
          if (uVar14 <= uVar16) {
LAB_00e3057c:
            free(pvVar12);
            break;
          }
          uVar15 = uVar16 + 0x400;
          uVar16 = uVar14;
          if (uVar15 <= uVar14) {
            uVar16 = uVar15;
          }
          uVar15 = uVar16;
          if (0x403 < uVar16) {
            uVar15 = 0x404;
          }
          lVar10 = call_zseek64(&local_1d0,lVar9,uVar11 - uVar16,0);
          if ((lVar10 != 0) ||
             (uVar13 = (*pcStack_1c8)(local_198,lVar9,pvVar12,uVar15), uVar13 != uVar15))
          goto LAB_00e3057c;
          if ((uVar15 & 0x7fc) != 0) {
            uVar15 = (ulong)((int)uVar15 - 4);
            do {
              if ((((*(char *)((long)pvVar12 + uVar15) == 'P') &&
                   (*(char *)((long)pvVar12 + uVar15 + 1) == 'K')) &&
                  (*(char *)((long)pvVar12 + uVar15 + 2) == '\x06')) &&
                 (*(char *)((long)pvVar12 + uVar15 + 3) == '\a')) {
                lVar10 = (uVar11 - uVar16) + (uVar15 & 0xffffffff);
                if (lVar10 != 0) {
                  free(pvVar12);
                  lVar10 = call_zseek64(&local_1d0,lVar9,lVar10,0);
                  if (((((lVar10 != 0) ||
                        (iVar3 = FUN_00e32cbc(&local_1d0,lVar9,&local_70), iVar3 != 0)) ||
                       ((iVar3 = FUN_00e32cbc(&local_1d0,lVar9,&local_70), iVar3 != 0 ||
                        ((local_70 != 0 ||
                         (iVar3 = FUN_00e32e68(&local_1d0,lVar9,&local_78), iVar3 != 0)))))) ||
                      ((iVar3 = FUN_00e32cbc(&local_1d0,lVar9,&local_70), uVar14 = local_78,
                       iVar3 != 0 ||
                       (((local_70 != 1 ||
                         (lVar10 = call_zseek64(&local_1d0,lVar9,local_78,0), lVar10 != 0)) ||
                        (iVar3 = FUN_00e32cbc(&local_1d0,lVar9,&local_70), iVar3 != 0)))))) ||
                     ((local_70 != 0x6064b50 || (uVar14 == 0)))) goto LAB_00e30584;
                  local_84 = 1;
                  lVar10 = call_zseek64(&local_1d0,local_170,uVar14,0);
                  uVar4 = FUN_00e32cbc(&local_1d0,local_170,&local_70);
                  uVar5 = FUN_00e32e68(&local_1d0,local_170,local_1e8);
                  lVar9 = local_170;
                  iVar3 = (*pcStack_1c8)(local_198,local_170,&local_78,1);
                  if (((iVar3 == 1) || (iVar3 = (*local_1a0)(local_198,lVar9), iVar3 == 0)) &&
                     ((iVar3 = (*pcStack_1c8)(local_198,lVar9,&local_78,1), iVar3 == 1 ||
                      (iVar3 = (*local_1a0)(local_198,lVar9), iVar3 == 0)))) {
                    iVar3 = -(uint)((uVar5 | uVar4) != 0 || lVar10 != 0);
                  }
                  else {
                    iVar3 = -1;
                  }
                  lVar9 = local_170;
                  iVar6 = (*pcStack_1c8)(local_198,local_170,&local_78,1);
                  if (((iVar6 != 1) && (iVar6 = (*local_1a0)(local_198,lVar9), iVar6 != 0)) ||
                     ((iVar6 = (*pcStack_1c8)(local_198,lVar9,&local_78,1), iVar6 != 1 &&
                      (iVar6 = (*local_1a0)(local_198,lVar9), iVar6 != 0)))) {
                    iVar3 = -1;
                  }
                  uVar4 = FUN_00e32cbc(&local_1d0,local_170,&local_78);
                  uVar5 = FUN_00e32cbc(&local_1d0,local_170,&local_1d8);
                  uVar7 = FUN_00e32e68(&local_1d0,local_170,&local_168);
                  uVar8 = FUN_00e32e68(&local_1d0,local_170,&local_1e0);
                  if ((uVar8 | uVar7 | uVar5 | uVar4) != 0) {
                    iVar3 = -1;
                  }
                  iVar6 = -0x67;
                  if ((local_78 == 0 && local_1d8 == 0) && local_1e0 == local_168) {
                    iVar6 = iVar3;
                  }
                  uVar4 = FUN_00e32e68(&local_1d0,local_170,&local_130);
                  uVar5 = FUN_00e32e68(&local_1d0,local_170,local_128);
                  local_160 = 0;
                  if ((uVar5 | uVar4) != 0) {
                    iVar6 = -1;
                  }
                  lVar9 = uVar14 - (local_130 + local_128[0]);
                  if (local_130 + local_128[0] <= uVar14) goto LAB_00e30a94;
                  goto LAB_00e30a34;
                }
                break;
              }
              bVar1 = 0 < (long)uVar15;
              uVar15 = uVar15 - 1;
            } while (bVar1);
          }
        } while( true );
      }
    }
LAB_00e30584:
    lVar9 = local_170;
    lVar10 = call_zseek64(&local_1d0,local_170,0,2);
    if (lVar10 == 0) {
      uVar16 = call_ztell64(&local_1d0,lVar9);
      uVar11 = uVar16;
      if (0xfffe < uVar16) {
        uVar11 = 0xffff;
      }
      pvVar12 = malloc(0x404);
      if (pvVar12 != (void *)0x0) {
        uVar15 = 4;
        do {
          if (uVar11 <= uVar15) {
LAB_00e306ac:
            uVar14 = 0;
            iVar3 = -1;
LAB_00e306b4:
            free(pvVar12);
            goto LAB_00e306bc;
          }
          uVar14 = uVar15 + 0x400;
          uVar15 = uVar11;
          if (uVar14 <= uVar11) {
            uVar15 = uVar14;
          }
          uVar14 = uVar15;
          if (0x403 < uVar15) {
            uVar14 = 0x404;
          }
          lVar10 = call_zseek64(&local_1d0,lVar9,uVar16 - uVar15,0);
          if ((lVar10 != 0) ||
             (uVar13 = (*pcStack_1c8)(local_198,lVar9,pvVar12,uVar14), uVar13 != uVar14))
          goto LAB_00e306ac;
          if ((uVar14 & 0x7fc) != 0) {
            uVar14 = (ulong)((int)uVar14 - 4);
            do {
              if ((((*(char *)((long)pvVar12 + uVar14) == 'P') &&
                   (*(char *)((long)pvVar12 + uVar14 + 1) == 'K')) &&
                  (*(char *)((long)pvVar12 + uVar14 + 2) == '\x05')) &&
                 (*(char *)((long)pvVar12 + uVar14 + 3) == '\x06')) {
                uVar14 = (uVar16 - uVar15) + (uVar14 & 0xffffffff);
                if (uVar14 != 0) {
                  iVar3 = 0;
                  goto LAB_00e306b4;
                }
                break;
              }
              bVar1 = 0 < (long)uVar14;
              uVar14 = uVar14 - 1;
            } while (bVar1);
          }
        } while( true );
      }
    }
    uVar14 = 0;
    iVar3 = -1;
LAB_00e306bc:
    local_84 = 0;
    lVar10 = call_zseek64(&local_1d0,local_170,uVar14,0);
    iVar6 = FUN_00e32cbc(&local_1d0,local_170,&local_70);
    lVar9 = local_170;
    if (lVar10 != 0 || iVar6 != 0) {
      iVar3 = -1;
    }
    iVar6 = (*pcStack_1c8)(local_198,local_170,&local_78,1);
    if (iVar6 == 1) {
      uVar11 = local_78 & 0xff;
      uVar16 = uVar11 << 8;
LAB_00e3073c:
      iVar6 = (*pcStack_1c8)(local_198,lVar9,&local_78,1);
      if (iVar6 == 1) {
        uVar16 = (local_78 & 0xff) << 8;
      }
      else {
        iVar6 = (*local_1a0)(local_198,lVar9);
        if (iVar6 != 0) goto LAB_00e3077c;
      }
      uVar16 = uVar16 | uVar11;
    }
    else {
      iVar6 = (*local_1a0)(local_198,lVar9);
      uVar11 = 0;
      if (iVar6 == 0) {
        uVar16 = 0;
        goto LAB_00e3073c;
      }
LAB_00e3077c:
      uVar16 = 0;
      iVar3 = -1;
    }
    lVar9 = local_170;
    local_78 = uVar16;
    iVar6 = (*pcStack_1c8)(local_198,local_170,&local_1d8,1);
    if (iVar6 == 1) {
      uVar11 = local_1d8 & 0xff;
      uVar15 = uVar11 << 8;
LAB_00e307d4:
      iVar6 = (*pcStack_1c8)(local_198,lVar9,&local_1d8,1);
      if (iVar6 == 1) {
        uVar15 = (local_1d8 & 0xff) << 8;
      }
      else {
        iVar6 = (*local_1a0)(local_198,lVar9);
        if (iVar6 != 0) goto LAB_00e30814;
      }
      uVar15 = uVar15 | uVar11;
    }
    else {
      iVar6 = (*local_1a0)(local_198,lVar9);
      uVar11 = 0;
      if (iVar6 == 0) {
        uVar15 = 0;
        goto LAB_00e307d4;
      }
LAB_00e30814:
      uVar15 = 0;
      iVar3 = -1;
    }
    lVar9 = local_170;
    local_1d8 = uVar15;
    iVar6 = (*pcStack_1c8)(local_198,local_170,&local_1e0,1);
    if (iVar6 == 1) {
      uVar11 = local_1e0 & 0xff;
      uVar13 = uVar11 << 8;
LAB_00e3086c:
      iVar6 = (*pcStack_1c8)(local_198,lVar9,&local_1e0,1);
      if (iVar6 == 1) {
        uVar13 = (local_1e0 & 0xff) << 8;
      }
      else {
        iVar6 = (*local_1a0)(local_198,lVar9);
        if (iVar6 != 0) goto LAB_00e308ac;
      }
      local_168 = uVar13 | uVar11;
    }
    else {
      iVar6 = (*local_1a0)(local_198,lVar9);
      uVar11 = 0;
      if (iVar6 == 0) {
        uVar13 = 0;
        goto LAB_00e3086c;
      }
LAB_00e308ac:
      local_168 = 0;
      iVar3 = -1;
    }
    lVar9 = local_170;
    iVar6 = (*pcStack_1c8)(local_198,local_170,&local_1e0,1);
    if (iVar6 == 1) {
      uVar11 = local_1e0 & 0xff;
      uVar13 = uVar11 << 8;
LAB_00e30904:
      iVar6 = (*pcStack_1c8)(local_198,lVar9,&local_1e0,1);
      if (iVar6 == 1) {
        uVar13 = (local_1e0 & 0xff) << 8;
      }
      else {
        iVar6 = (*local_1a0)(local_198,lVar9);
        if (iVar6 != 0) goto LAB_00e30944;
      }
      local_1e0 = uVar13 | uVar11;
    }
    else {
      iVar6 = (*local_1a0)(local_198,lVar9);
      uVar11 = 0;
      if (iVar6 == 0) {
        uVar13 = 0;
        goto LAB_00e30904;
      }
LAB_00e30944:
      local_1e0 = 0;
      iVar3 = -1;
    }
    iVar6 = -0x67;
    if ((uVar16 == 0 && uVar15 == 0) && local_1e0 == local_168) {
      iVar6 = iVar3;
    }
    local_70 = local_1e0;
    uVar4 = FUN_00e32cbc(&local_1d0,local_170,&local_70);
    local_130 = local_70;
    uVar5 = FUN_00e32cbc(&local_1d0,local_170,&local_70);
    lVar9 = local_170;
    if ((uVar5 | uVar4) != 0) {
      iVar6 = -1;
    }
    local_128[0] = local_70;
    iVar3 = (*pcStack_1c8)(local_198,local_170,local_1e8,1);
    if (iVar3 == 1) {
      uVar11 = (ulong)local_1e8[0];
      uVar16 = uVar11 << 8;
LAB_00e309f4:
      iVar3 = (*pcStack_1c8)(local_198,lVar9,local_1e8,1);
      if (iVar3 == 1) {
        uVar16 = (ulong)local_1e8[0] << 8;
      }
      else {
        iVar3 = (*local_1a0)(local_198,lVar9);
        if (iVar3 != 0) goto LAB_00e30a30;
      }
      local_160 = uVar16 | uVar11;
      lVar9 = uVar14 - (local_130 + local_128[0]);
      if (local_130 + local_128[0] <= uVar14) {
LAB_00e30a94:
        if (iVar6 == 0) {
          local_90 = 0;
          local_88 = 0;
          local_158 = lVar9;
          local_138 = uVar14;
          pvVar12 = malloc(0x150);
          if (pvVar12 != (void *)0x0) {
            memcpy(pvVar12,&local_1d0,0x150);
            *(undefined8 *)((long)pvVar12 + 0x80) = 0;
            *(undefined8 *)((long)pvVar12 + 0x88) = *(undefined8 *)((long)pvVar12 + 0xa8);
            iVar3 = FUN_00e30e5c(pvVar12,(long)pvVar12 + 0xb0,(long)pvVar12 + 0x138,0,0,0,0,0,0);
            *(ulong *)((long)pvVar12 + 0x90) = (ulong)(iVar3 == 0);
          }
          goto LAB_00e30a48;
        }
      }
    }
    else {
      iVar3 = (*local_1a0)(local_198,lVar9);
      if (iVar3 == 0) {
        uVar11 = 0;
        uVar16 = 0;
        goto LAB_00e309f4;
      }
LAB_00e30a30:
      local_160 = 0;
    }
LAB_00e30a34:
    (*pcStack_1a8)(local_198,local_170);
  }
  pvVar12 = (void *)0x0;
LAB_00e30a48:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pvVar12;
}


