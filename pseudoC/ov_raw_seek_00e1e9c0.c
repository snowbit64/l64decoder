// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_raw_seek
// Entry Point: 00e1e9c0
// Size: 1140 bytes
// Signature: undefined ov_raw_seek(void)


void ov_raw_seek(long *param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  int local_264;
  int iStack_25c;
  undefined auStack_258 [32];
  long local_238;
  undefined auStack_228 [32];
  undefined auStack_208 [408];
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  if (1 < (int)*(uint *)(param_1 + 0x10)) {
    if (*(int *)(param_1 + 1) == 0) {
      uVar8 = 0xffffff76;
      goto LAB_00e1ed78;
    }
    if ((-1 < param_2) && (param_2 <= param_1[3])) {
      if (2 < *(uint *)(param_1 + 0x10)) {
        if ((param_2 < *(long *)(param_1[9] + (long)*(int *)(param_1 + 0x12) * 8)) ||
           (*(long *)(param_1[9] + (long)*(int *)(param_1 + 0x12) * 8 + 8) <= param_2)) {
          vorbis_dsp_clear(param_1 + 0x48);
          vorbis_block_clear(param_1 + 0x5a);
          *(undefined4 *)(param_1 + 0x10) = 2;
        }
      }
      plVar10 = param_1 + 0x15;
      param_1[0xf] = -1;
      ogg_stream_reset_serialno(plVar10,*(undefined4 *)(param_1 + 0x11));
      plVar2 = param_1 + 0x48;
      vorbis_synthesis_restart(plVar2);
      if (*param_1 != 0) {
        if (param_1[2] == param_2) {
LAB_00e1eac4:
          ogg_stream_init(auStack_208,*(undefined4 *)(param_1 + 0x11));
          ogg_stream_reset(auStack_208);
          iVar7 = 0;
          local_264 = 0;
          bVar1 = false;
          iStack_25c = 0;
LAB_00e1eaec:
          iVar4 = *(int *)(param_1 + 0x10);
          iVar16 = iVar7;
joined_r0x00e1eaf8:
          if ((2 < iVar4) && (iVar7 = ogg_stream_packetout(auStack_208,auStack_258), 0 < iVar7)) {
            if (*(long *)(param_1[0xd] + (long)*(int *)(param_1 + 0x12) * 0x38 + 0x30) != 0)
            goto LAB_00e1ec7c;
            ogg_stream_packetout(plVar10,0);
          }
          if (iVar16 != 0) {
            uVar15 = 0xffffffffffffffff;
            goto LAB_00e1ed64;
          }
          lVar9 = FUN_00e1ee34(param_1,auStack_228,0xffffffffffffffff);
          if (lVar9 < 0) {
            uVar15 = ov_pcm_total(param_1,0xffffffff);
            goto LAB_00e1ed64;
          }
          if (*(int *)(param_1 + 0x10) < 3) {
LAB_00e1ebc8:
            iVar7 = ogg_page_serialno(auStack_228);
            uVar5 = *(uint *)(param_1 + 8);
            if ((int)uVar5 < 1) {
              uVar15 = 0;
            }
            else {
              uVar15 = 0;
              do {
                if (*(long *)(param_1[0xb] + uVar15 * 8) == (long)iVar7) goto LAB_00e1eb04;
                uVar15 = uVar15 + 1;
              } while (uVar5 != uVar15);
              uVar15 = (ulong)uVar5;
            }
LAB_00e1eb04:
            iVar16 = 0;
            if ((uint)uVar15 != uVar5) {
              *(uint *)(param_1 + 0x12) = (uint)uVar15;
              param_1[0x11] = (long)iVar7;
              ogg_stream_reset_serialno(plVar10,iVar7);
              ogg_stream_reset_serialno(auStack_208,iVar7);
              *(undefined4 *)(param_1 + 0x10) = 3;
              bVar1 = lVar9 <= *(long *)(param_1[10] + (uVar15 & 0xffffffff) * 8);
              goto LAB_00e1ec44;
            }
            iVar4 = *(int *)(param_1 + 0x10);
          }
          else {
            lVar14 = param_1[0x11];
            iVar7 = ogg_page_serialno(auStack_228);
            if ((lVar14 != iVar7) && (iVar7 = ogg_page_bos(auStack_228), iVar7 != 0)) {
              vorbis_dsp_clear(plVar2);
              vorbis_block_clear(param_1 + 0x5a);
              *(undefined4 *)(param_1 + 0x10) = 2;
              ogg_stream_clear(auStack_208);
            }
            if (*(int *)(param_1 + 0x10) < 3) goto LAB_00e1ebc8;
LAB_00e1ec44:
            ogg_stream_pagein(plVar10,auStack_228);
            ogg_stream_pagein(auStack_208,auStack_228);
            iStack_25c = ogg_page_eos(auStack_228);
            iVar4 = *(int *)(param_1 + 0x10);
            iVar16 = 0;
          }
          goto joined_r0x00e1eaf8;
        }
        if (((code *)param_1[0x73] != (code *)0x0) &&
           (iVar7 = (*(code *)param_1[0x73])(*param_1,param_2,0), iVar7 != -1)) {
          param_1[2] = param_2;
          ogg_sync_reset(param_1 + 4);
          goto LAB_00e1eac4;
        }
      }
      param_1[0xf] = -1;
      ogg_stream_clear(auStack_208);
      vorbis_dsp_clear(plVar2);
      vorbis_block_clear(param_1 + 0x5a);
      uVar8 = 0xffffff77;
      *(undefined4 *)(param_1 + 0x10) = 2;
      goto LAB_00e1ed78;
    }
  }
  uVar8 = 0xffffff7d;
  goto LAB_00e1ed78;
LAB_00e1ec7c:
  iVar7 = vorbis_packet_blocksize(param_1[0xd] + (long)*(int *)(param_1 + 0x12) * 0x38,auStack_258);
  if (iVar7 < 0) {
    ogg_stream_packetout(plVar10,0);
    iVar7 = 0;
  }
  else if ((iStack_25c == 0) || (bVar1)) {
    if (iVar16 != 0) {
      local_264 = local_264 + ((uint)(iVar16 + iVar7) >> 2);
    }
  }
  else {
    ogg_stream_packetout(plVar10,0);
    bVar1 = false;
  }
  if (local_238 != -1) goto code_r0x00e1ece8;
  goto LAB_00e1eaec;
code_r0x00e1ece8:
  uVar5 = *(uint *)(param_1 + 0x12);
  lVar9 = param_1[0xc];
  uVar15 = local_238 - *(long *)(lVar9 + (long)(int)uVar5 * 0x10);
  uVar15 = uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU);
  if (0 < (int)uVar5) {
    uVar11 = (ulong)uVar5;
    if (uVar5 < 5) {
      lVar12 = 0;
    }
    else {
      lVar14 = 0;
      uVar3 = 4;
      if ((uVar5 & 3) != 0) {
        uVar3 = uVar11 & 3;
      }
      lVar12 = uVar11 - uVar3;
      lVar17 = 0;
      lVar18 = 0;
      plVar10 = (long *)(lVar9 + 0x28);
      lVar13 = lVar12;
      do {
        lVar13 = lVar13 + -4;
        lVar17 = *plVar10 + lVar17;
        lVar18 = plVar10[2] + lVar18;
        uVar15 = plVar10[-4] + uVar15;
        lVar14 = plVar10[-2] + lVar14;
        plVar10 = plVar10 + 8;
      } while (lVar13 != 0);
      uVar15 = lVar17 + uVar15 + lVar18 + lVar14;
    }
    lVar14 = uVar11 - lVar12;
    plVar10 = (long *)(lVar9 + lVar12 * 0x10 + 8);
    do {
      lVar14 = lVar14 + -1;
      uVar15 = *plVar10 + uVar15;
      plVar10 = plVar10 + 2;
    } while (lVar14 != 0);
  }
  uVar15 = uVar15 - (long)local_264 &
           ((long)(uVar15 - (long)local_264) >> 0x3f ^ 0xffffffffffffffffU);
LAB_00e1ed64:
  param_1[0xf] = uVar15;
  ogg_stream_clear(auStack_208);
  uVar8 = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
LAB_00e1ed78:
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


