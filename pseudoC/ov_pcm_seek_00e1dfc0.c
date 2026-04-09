// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_pcm_seek
// Entry Point: 00e1dfc0
// Size: 996 bytes
// Signature: undefined ov_pcm_seek(void)


void ov_pcm_seek(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined auStack_b8 [32];
  undefined auStack_98 [32];
  long local_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar7 = ov_pcm_seek_page();
  if (-1 < (int)uVar7) {
    if (3 < *(int *)(param_1 + 0x80)) {
LAB_00e1e008:
      lVar8 = param_1 + 0xa8;
      lVar1 = param_1 + 0x240;
      lVar2 = param_1 + 0x2d0;
      iVar6 = 0;
LAB_00e1e030:
      while (iVar5 = ogg_stream_packetpeek(lVar8,auStack_98), 0 < iVar5) {
        iVar5 = vorbis_packet_blocksize
                          (*(long *)(param_1 + 0x68) + (long)*(int *)(param_1 + 0x90) * 0x38,
                           auStack_98);
        if (iVar5 < 0) {
          ogg_stream_packetout(lVar8,0);
        }
        else {
          if (iVar6 == 0) {
            lVar14 = *(long *)(param_1 + 0x78);
          }
          else {
            lVar14 = *(long *)(param_1 + 0x78) + (long)(iVar6 + iVar5 >> 2);
            *(long *)(param_1 + 0x78) = lVar14;
          }
          iVar6 = vorbis_info_blocksize(*(undefined8 *)(param_1 + 0x68),1);
          if ((long)param_2 <= lVar14 + (iVar6 + iVar5 >> 2)) goto LAB_00e1e260;
          ogg_stream_packetout(lVar8,0);
          vorbis_synthesis_trackonly(lVar2,auStack_98);
          vorbis_synthesis_blockin(lVar1,lVar2);
          iVar6 = iVar5;
          if (-1 < local_78) {
            uVar3 = *(uint *)(param_1 + 0x90);
            uVar9 = local_78 - *(long *)(*(long *)(param_1 + 0x60) + (long)(int)uVar3 * 0x10);
            uVar9 = uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU);
            *(ulong *)(param_1 + 0x78) = uVar9;
            if (0 < (int)uVar3) {
              uVar10 = (ulong)uVar3;
              plVar11 = (long *)(*(long *)(param_1 + 0x60) + 8);
              do {
                uVar10 = uVar10 - 1;
                uVar9 = uVar9 + *plVar11;
                *(ulong *)(param_1 + 0x78) = uVar9;
                plVar11 = plVar11 + 2;
              } while (uVar10 != 0);
            }
          }
        }
      }
      if (((iVar5 != 0) && (iVar5 != -3)) ||
         (lVar14 = FUN_00e1ee34(param_1,auStack_b8,0xffffffffffffffff), lVar14 < 0))
      goto LAB_00e1e260;
      iVar5 = ogg_page_bos(auStack_b8);
      if (iVar5 == 0) {
        if (*(int *)(param_1 + 0x80) < 3) goto LAB_00e1e174;
      }
      else {
        vorbis_dsp_clear(lVar1);
        vorbis_block_clear(lVar2);
        *(undefined4 *)(param_1 + 0x80) = 2;
LAB_00e1e174:
        iVar5 = ogg_page_serialno(auStack_b8);
        uVar3 = *(uint *)(param_1 + 0x40);
        if (0 < (int)uVar3) {
          uVar9 = 0;
          do {
            if (*(long *)(*(long *)(param_1 + 0x58) + uVar9 * 8) == (long)iVar5) goto LAB_00e1e1b4;
            uVar9 = uVar9 + 1;
          } while (uVar3 != uVar9);
          goto LAB_00e1e030;
        }
        uVar9 = 0;
LAB_00e1e1b4:
        if ((uint)uVar9 == uVar3) goto LAB_00e1e030;
        *(uint *)(param_1 + 0x90) = (uint)uVar9;
        *(undefined4 *)(param_1 + 0x80) = 3;
        iVar6 = ogg_page_serialno(auStack_b8);
        *(long *)(param_1 + 0x88) = (long)iVar6;
        ogg_stream_reset_serialno(lVar8,iVar5);
        if (*(int *)(param_1 + 0x80) < 4) {
          if (*(int *)(param_1 + 0x80) != 3) goto LAB_00e1e344;
          if (*(int *)(param_1 + 8) == 0) {
            iVar6 = vorbis_synthesis_init(lVar1,*(long *)(param_1 + 0x68));
          }
          else {
            iVar6 = vorbis_synthesis_init
                              (lVar1,*(long *)(param_1 + 0x68) +
                                     (long)*(int *)(param_1 + 0x90) * 0x38);
          }
          if (iVar6 != 0) goto LAB_00e1e33c;
          vorbis_block_init(lVar1,lVar2);
          iVar6 = 0;
          *(undefined8 *)(param_1 + 0x98) = 0;
          *(undefined8 *)(param_1 + 0xa0) = 0;
          *(undefined4 *)(param_1 + 0x80) = 4;
        }
        else {
          iVar6 = 0;
        }
      }
      ogg_stream_pagein(lVar8,auStack_b8);
      goto LAB_00e1e030;
    }
    if (*(int *)(param_1 + 0x80) == 3) {
      lVar8 = param_1 + 0x240;
      if (*(int *)(param_1 + 8) == 0) {
        iVar6 = vorbis_synthesis_init(lVar8,*(long *)(param_1 + 0x68));
      }
      else {
        iVar6 = vorbis_synthesis_init
                          (lVar8,*(long *)(param_1 + 0x68) + (long)*(int *)(param_1 + 0x90) * 0x38);
      }
      if (iVar6 == 0) {
        vorbis_block_init(lVar8,param_1 + 0x2d0);
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(undefined8 *)(param_1 + 0xa0) = 0;
        *(undefined4 *)(param_1 + 0x80) = 4;
        goto LAB_00e1e008;
      }
LAB_00e1e33c:
      uVar7 = 0xffffff77;
    }
    else {
LAB_00e1e344:
      uVar7 = 0xffffff7f;
    }
  }
  goto LAB_00e1e348;
LAB_00e1e260:
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  uVar9 = vorbis_synthesis_halfrate_p(*(undefined8 *)(param_1 + 0x68));
  lVar8 = *(long *)(param_1 + 0x78);
  while (lVar8 < (long)(-1L << (uVar9 & 0x3f) & param_2)) {
    uVar12 = (long)(param_2 - lVar8) >> (uVar9 & 0x3f);
    iVar6 = vorbis_synthesis_pcmout(lVar1,0);
    uVar13 = (ulong)iVar6;
    uVar10 = uVar12;
    if ((long)uVar13 <= (long)uVar12) {
      uVar10 = uVar13;
    }
    vorbis_synthesis_read(lVar1,uVar10 & 0xffffffff);
    lVar8 = (uVar10 << (uVar9 & 0x3f)) + *(long *)(param_1 + 0x78);
    *(long *)(param_1 + 0x78) = lVar8;
    if ((long)uVar13 < (long)uVar12) {
      iVar6 = FUN_00e1f850(param_1,1);
      if (iVar6 < 1) {
        lVar8 = ov_pcm_total(param_1,0xffffffff);
        *(long *)(param_1 + 0x78) = lVar8;
      }
      else {
        lVar8 = *(long *)(param_1 + 0x78);
      }
    }
  }
  uVar7 = 0;
LAB_00e1e348:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


