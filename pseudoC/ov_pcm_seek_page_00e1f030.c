// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_pcm_seek_page
// Entry Point: 00e1f030
// Size: 2080 bytes
// Signature: undefined ov_pcm_seek_page(void)


ulong ov_pcm_seek_page(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong local_118;
  long local_108;
  long local_e8;
  undefined auStack_e0 [32];
  long local_c0;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined auStack_90 [32];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  lVar7 = ov_pcm_total(param_1,0xffffffff);
  if (*(int *)(param_1 + 0x10) < 2) {
    uVar17 = 0xffffff7d;
    goto LAB_00e1f7c4;
  }
  if (*(int *)(param_1 + 1) == 0) {
    uVar17 = 0xffffff76;
    goto LAB_00e1f7c4;
  }
  uVar17 = 0xffffff7d;
  if ((param_2 < 0) || (lVar7 < param_2)) goto LAB_00e1f7c4;
  iVar6 = *(int *)(param_1 + 8);
  lVar13 = (long)iVar6;
  iVar10 = iVar6 << 1;
  if (-1 < iVar6) {
    iVar6 = 0;
  }
  iVar12 = iVar6 + -1;
  do {
    if (lVar13 < 1) {
      lVar11 = param_1[0xc];
      uVar3 = iVar12 * 2 | 1;
      iVar10 = iVar12 * 2;
      goto LAB_00e1f104;
    }
    uVar3 = iVar10 - 1;
    lVar11 = param_1[0xc];
    lVar13 = lVar13 + -1;
    iVar10 = iVar10 + -2;
    lVar7 = lVar7 - *(long *)(lVar11 + (long)(int)uVar3 * 8);
  } while (param_2 < lVar7);
  iVar12 = (int)lVar13;
  iVar6 = iVar12 + 1;
LAB_00e1f104:
  local_108 = *(long *)(lVar11 + (long)(int)uVar3 * 8);
  uVar18 = *(ulong *)(param_1[9] + (long)iVar6 * 8);
  uVar16 = *(ulong *)(param_1[10] + (long)iVar12 * 8);
  local_e8 = *(long *)(lVar11 + (long)iVar10 * 8);
  if (uVar16 == uVar18) {
    if (*param_1 == 0) goto LAB_00e1f7a0;
    if (param_1[2] == uVar18) {
LAB_00e1f160:
      bVar5 = true;
      uVar17 = FUN_00e1ee34(param_1,auStack_90,1);
      if (-1 < (long)uVar17) goto joined_r0x00e1f1a8;
    }
    else {
      if (((code *)param_1[0x73] != (code *)0x0) &&
         (iVar6 = (*(code *)param_1[0x73])(*param_1,uVar18,0), iVar6 != -1)) {
        param_1[2] = uVar18;
        ogg_sync_reset(param_1 + 4);
        goto LAB_00e1f160;
      }
LAB_00e1f6d4:
      uVar17 = 0xffffffffffffff80;
    }
  }
  else {
    bVar5 = false;
    uVar17 = 0;
joined_r0x00e1f1a8:
    if ((long)uVar16 < (long)uVar18) {
      lVar11 = (long)iVar12;
      plVar1 = param_1 + 4;
      local_108 = local_108 + local_e8;
      lVar13 = local_e8 + (param_2 - lVar7);
      local_118 = 0xffffffffffffffff;
      do {
        while( true ) {
          uVar15 = uVar16;
          if ((0xffff < (long)(uVar18 - uVar16)) &&
             (uVar17 = (uVar16 + (long)(((double)(uVar18 - uVar16) * (double)(lVar13 - local_e8)) /
                                       (double)(local_108 - local_e8))) - 0x10000,
             (long)(uVar16 + 0x10000) <= (long)uVar17)) {
            uVar15 = uVar17;
          }
          if (*param_1 == 0) goto LAB_00e1f7a0;
          if (param_1[2] != uVar15) {
            if (((code *)param_1[0x73] == (code *)0x0) ||
               (iVar6 = (*(code *)param_1[0x73])(*param_1,uVar15,0), iVar6 == -1))
            goto LAB_00e1f6d4;
            param_1[2] = uVar15;
            ogg_sync_reset(plVar1);
          }
          if ((long)uVar18 <= (long)uVar16) break;
          do {
            uVar17 = FUN_00e1ee34(param_1,auStack_90,uVar18 - param_1[2]);
            if (uVar17 == 0xffffffffffffff80) goto LAB_00e1f7a4;
            if (-1 < (long)uVar17) {
              do {
                iVar6 = ogg_page_serialno(auStack_90);
                if ((*(long *)(param_1[0xb] + lVar11 * 8) == (long)iVar6) &&
                   (lVar8 = ogg_page_granulepos(auStack_90), lVar8 != -1)) {
                  uVar9 = uVar17;
                  if (lVar8 < lVar13) {
                    uVar16 = param_1[2];
                    bVar5 = true;
                    uVar15 = uVar16;
                    local_118 = uVar17;
                    local_e8 = lVar8;
                    if (0xac44 < lVar13 - lVar8) goto LAB_00e1f410;
                    goto LAB_00e1f33c;
                  }
                  if ((long)uVar15 <= (long)(uVar16 + 1)) {
                    bVar5 = true;
                    goto joined_r0x00e1f6ec;
                  }
                  if (uVar18 != param_1[2]) {
                    bVar5 = true;
                    uVar18 = uVar15;
                    local_108 = lVar8;
                    goto LAB_00e1f410;
                  }
                  uVar14 = uVar15 - 0x10000;
                  if ((long)(uVar15 - 0x10000) <= (long)uVar16) {
                    uVar14 = uVar16 + 1;
                  }
                  if (*param_1 == 0) goto LAB_00e1f7a0;
                  if (uVar18 == uVar14) {
                    uVar9 = 0;
                    bVar5 = true;
                    uVar15 = uVar18;
                    uVar18 = uVar17;
                    goto LAB_00e1f33c;
                  }
                  if (((code *)param_1[0x73] == (code *)0x0) ||
                     (iVar6 = (*(code *)param_1[0x73])(*param_1,uVar14,0), iVar6 == -1))
                  goto LAB_00e1f6d4;
                  bVar5 = true;
                  goto LAB_00e1f328;
                }
                uVar17 = FUN_00e1ee34(param_1,auStack_90,uVar18 - param_1[2]);
                if (uVar17 == 0xffffffffffffff80) goto LAB_00e1f7a4;
              } while (-1 < (long)uVar17);
              bVar5 = true;
            }
            if ((long)uVar15 <= (long)(uVar16 + 1)) goto joined_r0x00e1f6ec;
            if (uVar15 == 0) goto LAB_00e1f7a4;
            uVar14 = uVar15 - 0x10000;
            if ((long)(uVar15 - 0x10000) <= (long)uVar16) {
              uVar14 = uVar16 + 1;
            }
            if (*param_1 == 0) goto LAB_00e1f7a0;
            uVar17 = uVar18;
            if (param_1[2] != uVar14) {
              if (((code *)param_1[0x73] == (code *)0x0) ||
                 (iVar6 = (*(code *)param_1[0x73])(*param_1,uVar14,0), iVar6 == -1))
              goto LAB_00e1f6d4;
LAB_00e1f328:
              param_1[2] = uVar14;
              ogg_sync_reset(plVar1);
            }
            uVar9 = 0;
            uVar15 = uVar14;
            uVar18 = uVar17;
LAB_00e1f33c:
          } while ((long)uVar16 < (long)uVar18);
LAB_00e1f410:
          uVar17 = uVar9;
          if ((long)uVar18 <= (long)uVar16) goto joined_r0x00e1f6ec;
        }
        uVar17 = 0;
      } while ((long)uVar16 < (long)uVar18);
joined_r0x00e1f6ec:
      if (local_118 != 0xffffffffffffffff) {
        if (*param_1 == 0) {
          uVar17 = 0xffffffffffffff7f;
LAB_00e1f4d8:
          param_1[0xf] = -1;
        }
        else {
          if (param_1[2] != local_118) {
            if (((code *)param_1[0x73] == (code *)0x0) ||
               (iVar6 = (*(code *)param_1[0x73])(*param_1,local_118,0), iVar6 == -1)) {
              uVar17 = 0xffffffffffffff80;
              goto LAB_00e1f4d8;
            }
            param_1[2] = local_118;
            ogg_sync_reset(plVar1);
          }
          param_1[0xf] = -1;
          uVar17 = FUN_00e1ee34(param_1,&local_b0,0xffffffffffffffff);
          if (-1 < (long)uVar17) {
            if (iVar12 == *(int *)(param_1 + 0x12)) {
              vorbis_synthesis_restart();
              lVar13 = param_1[0x11];
            }
            else {
              vorbis_dsp_clear(param_1 + 0x48);
              vorbis_block_clear(param_1 + 0x5a);
              *(int *)(param_1 + 0x12) = iVar12;
              lVar13 = *(long *)(param_1[0xb] + lVar11 * 8);
              *(undefined4 *)(param_1 + 0x10) = 3;
              param_1[0x11] = lVar13;
            }
            plVar2 = param_1 + 0x15;
            ogg_stream_reset_serialno(plVar2,lVar13);
            ogg_stream_pagein(plVar2,&local_b0);
            iVar6 = ogg_stream_packetpeek(plVar2,auStack_e0);
            if (iVar6 == 0) goto LAB_00e1f568;
LAB_00e1f538:
            uVar17 = (long)iVar6;
            while (-1 < (long)uVar17) {
              while( true ) {
                if (local_c0 != -1) {
                  uVar17 = local_c0 -
                           *(long *)(param_1[0xc] + (long)*(int *)(param_1 + 0x12) * 0x10);
                  lVar7 = (uVar17 & ((long)uVar17 >> 0x3f ^ 0xffffffffffffffffU)) + lVar7;
                  param_1[0xf] = lVar7;
                  goto joined_r0x00e1f830;
                }
                ogg_stream_packetout(plVar2,0);
                iVar6 = ogg_stream_packetpeek(plVar2,auStack_e0);
                if (iVar6 != 0) goto LAB_00e1f538;
LAB_00e1f568:
                uVar17 = local_118;
                uVar16 = local_118;
                if ((long)local_118 <= *(long *)(param_1[10] + lVar11 * 8)) break;
LAB_00e1f598:
                do {
                  if ((long)uVar17 < 0x10001) {
                    uVar17 = 0x10000;
                  }
                  if (*param_1 == 0) goto LAB_00e1f7a0;
                  uVar17 = uVar17 - 0x10000;
                  uVar18 = uVar17;
                  if (param_1[2] != uVar17) {
                    if (((code *)param_1[0x73] == (code *)0x0) ||
                       (iVar6 = (*(code *)param_1[0x73])(*param_1,uVar17,0), iVar6 == -1))
                    goto LAB_00e1f6d4;
                    param_1[2] = uVar17;
                    ogg_sync_reset(plVar1);
                    uVar18 = param_1[2];
                  }
                  uVar15 = 0xffffffffffffffff;
                  if ((long)uVar18 < (long)uVar16) {
                    do {
                      lStack_a8 = 0;
                      local_b0 = 0;
                      uStack_98 = 0;
                      uStack_a0 = 0;
                      uVar9 = FUN_00e1ee34(param_1,&local_b0,uVar16 - uVar18);
                      if (uVar9 == 0xffffffffffffff80) goto LAB_00e1f6d4;
                      if ((long)uVar9 < 0) goto LAB_00e1f58c;
                      uVar18 = param_1[2];
                      uVar15 = uVar9;
                    } while ((long)uVar18 < (long)uVar16);
                  }
                  else {
LAB_00e1f58c:
                    uVar9 = uVar15;
                    if (uVar9 == 0xffffffffffffffff) goto LAB_00e1f598;
                  }
                  if (lStack_a8 == 0) {
                    if (*param_1 == 0) goto LAB_00e1f7a0;
                    if (param_1[2] != uVar9) {
                      if (((code *)param_1[0x73] == (code *)0x0) ||
                         (iVar6 = (*(code *)param_1[0x73])(*param_1,uVar9,0), iVar6 == -1))
                      goto LAB_00e1f6d4;
                      param_1[2] = uVar9;
                      ogg_sync_reset(plVar1);
                    }
                    lVar13 = FUN_00e1ee34(param_1,&local_b0,0x10000);
                    if (lVar13 < 0) goto LAB_00e1f7a0;
                  }
                  iVar6 = ogg_page_serialno(&local_b0);
                  if ((param_1[0x11] == (long)iVar6) &&
                     ((lVar13 = ogg_page_granulepos(&local_b0), -1 < lVar13 ||
                      (iVar6 = ogg_page_continued(&local_b0), iVar6 == 0)))) {
                    uVar17 = ov_raw_seek(param_1,uVar9);
                    uVar17 = uVar17 & 0xffffffff;
                    goto LAB_00e1f7c4;
                  }
                  uVar17 = uVar9;
                  uVar16 = uVar9;
                } while (*(long *)(param_1[10] + lVar11 * 8) < (long)uVar9);
              }
            }
            uVar17 = 0xffffffffffffff78;
          }
        }
        goto LAB_00e1f7a4;
      }
    }
    lVar13 = (long)iVar12;
    if (((bVar5) && (uVar16 == *(ulong *)(param_1[10] + lVar13 * 8))) &&
       (iVar6 = ogg_page_serialno(auStack_90), *(long *)(param_1[0xb] + lVar13 * 8) == (long)iVar6))
    {
      param_1[0xf] = lVar7;
      if (iVar12 == *(int *)(param_1 + 0x12)) {
        vorbis_synthesis_restart();
        lVar7 = param_1[0x11];
      }
      else {
        vorbis_dsp_clear(param_1 + 0x48);
        vorbis_block_clear(param_1 + 0x5a);
        *(int *)(param_1 + 0x12) = iVar12;
        lVar7 = *(long *)(param_1[0xb] + lVar13 * 8);
        *(undefined4 *)(param_1 + 0x10) = 3;
        param_1[0x11] = lVar7;
      }
      ogg_stream_reset_serialno(param_1 + 0x15,lVar7);
      ogg_stream_pagein(param_1 + 0x15,auStack_90);
      lVar7 = param_1[0xf];
joined_r0x00e1f830:
      if ((lVar7 <= param_2) && (lVar7 = ov_pcm_total(param_1,0xffffffff), param_2 <= lVar7)) {
        uVar17 = 0;
        param_1[0x13] = 0;
        param_1[0x14] = 0;
        goto LAB_00e1f7c4;
      }
LAB_00e1f7a0:
      uVar17 = 0xffffffffffffff7f;
    }
  }
LAB_00e1f7a4:
  param_1[0xf] = -1;
  vorbis_dsp_clear(param_1 + 0x48);
  vorbis_block_clear(param_1 + 0x5a);
  *(undefined4 *)(param_1 + 0x10) = 2;
LAB_00e1f7c4:
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar17 & 0xffffffff;
}


