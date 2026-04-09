// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e1f850
// Entry Point: 00e1f850
// Size: 1160 bytes
// Signature: undefined FUN_00e1f850(void)


void FUN_00e1f850(long *param_1,int param_2)

{
  long *plVar1;
  double *pdVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined auStack_b8 [8];
  long local_b0;
  long local_a0;
  ulong local_98;
  undefined auStack_88 [8];
  long local_80;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  plVar12 = param_1 + 0x48;
  plVar1 = param_1 + 0x5a;
  pdVar2 = (double *)(param_1 + 0x13);
  plVar3 = param_1 + 0x15;
  plVar4 = param_1 + 4;
LAB_00e1f898:
  do {
    iVar7 = *(int *)(param_1 + 0x10);
    if (iVar7 == 4) {
LAB_00e1f8e8:
      uVar8 = vorbis_synthesis_halfrate_p(param_1[0xd]);
      iVar7 = ogg_stream_packetout(plVar3,auStack_b8);
      uVar17 = local_98;
      while( true ) {
        if (iVar7 == -1) {
          uVar10 = 0xfffffffd;
          if (*(long *)(lVar6 + 0x28) == local_68) {
            return;
          }
          goto LAB_00e1fcd4;
        }
        local_98 = uVar17;
        if (iVar7 < 1) break;
        iVar7 = vorbis_synthesis(plVar1,auStack_b8);
        if (iVar7 == 0) {
          iVar7 = vorbis_synthesis_pcmout(plVar12,0);
          if (iVar7 != 0) {
            uVar10 = 0xffffff7f;
            if (*(long *)(lVar6 + 0x28) == local_68) {
              return;
            }
            goto LAB_00e1fcd4;
          }
          vorbis_synthesis_blockin(plVar12,plVar1);
          iVar7 = vorbis_synthesis_pcmout(plVar12,0);
          uVar10 = 1;
          param_1[0x14] = (long)((double)param_1[0x14] + (double)(iVar7 << (ulong)(uVar8 & 0x1f)));
          *pdVar2 = *pdVar2 + (double)(local_b0 << 3);
          if ((uVar17 != 0xffffffffffffffff) && (local_a0 == 0)) {
            if (*(int *)(param_1 + 1) == 0) {
              uVar16 = 0;
            }
            else {
              uVar16 = *(uint *)(param_1 + 0x12);
              if (0 < (int)uVar16) {
                uVar17 = uVar17 - *(long *)(param_1[0xc] + (long)(int)uVar16 * 0x10);
              }
            }
            iVar7 = vorbis_synthesis_pcmout(plVar12,0);
            lVar11 = (uVar17 & ((long)uVar17 >> 0x3f ^ 0xffffffffffffffffU)) -
                     (long)(iVar7 << (ulong)(uVar8 & 0x1f));
            if (0 < (int)uVar16) {
              uVar17 = (ulong)uVar16;
              if (uVar16 < 5) {
                lVar14 = 0;
              }
              else {
                lVar13 = 0;
                uVar5 = 4;
                if ((uVar16 & 3) != 0) {
                  uVar5 = uVar17 & 3;
                }
                lVar14 = uVar17 - uVar5;
                lVar18 = 0;
                lVar19 = 0;
                plVar12 = (long *)(param_1[0xc] + 0x28);
                lVar15 = lVar14;
                do {
                  lVar15 = lVar15 + -4;
                  lVar18 = *plVar12 + lVar18;
                  lVar19 = plVar12[2] + lVar19;
                  lVar11 = plVar12[-4] + lVar11;
                  lVar13 = plVar12[-2] + lVar13;
                  plVar12 = plVar12 + 8;
                } while (lVar15 != 0);
                lVar11 = lVar18 + lVar11 + lVar19 + lVar13;
              }
              lVar13 = uVar17 - lVar14;
              plVar12 = (long *)(param_1[0xc] + lVar14 * 0x10 + 8);
              do {
                lVar13 = lVar13 + -1;
                lVar11 = *plVar12 + lVar11;
                plVar12 = plVar12 + 2;
              } while (lVar13 != 0);
            }
            uVar10 = 1;
            param_1[0xf] = lVar11;
          }
          goto LAB_00e1fc90;
        }
        iVar7 = ogg_stream_packetout(plVar3,auStack_b8);
        uVar17 = local_98;
      }
      iVar7 = *(int *)(param_1 + 0x10);
    }
    else if (iVar7 == 3) {
      lVar11 = param_1[0xd];
      if (*(int *)(param_1 + 1) != 0) {
        lVar11 = lVar11 + (long)*(int *)(param_1 + 0x12) * 0x38;
      }
      iVar7 = vorbis_synthesis_init(plVar12,lVar11);
      if (iVar7 == 0) {
        vorbis_block_init(plVar12,plVar1);
        *pdVar2 = 0.0;
        param_1[0x14] = 0;
        *(undefined4 *)(param_1 + 0x10) = 4;
        goto LAB_00e1f8e8;
      }
      uVar10 = 0xffffff77;
      if (*(long *)(lVar6 + 0x28) == local_68) {
        return;
      }
      goto LAB_00e1fcd4;
    }
    if (1 < iVar7) {
      do {
        while( true ) {
          while (lVar11 = ogg_sync_pageseek(plVar4,auStack_88), lVar11 < 0) {
            param_1[2] = param_1[2] - lVar11;
          }
          if (lVar11 != 0) break;
          puVar9 = (undefined4 *)__errno();
          *puVar9 = 0;
          if ((param_1[0x72] == 0) || (*param_1 == 0)) goto LAB_00e1fb48;
          uVar10 = ogg_sync_buffer(plVar4,0x800);
          lVar11 = (*(code *)param_1[0x72])(uVar10,1,0x800,*param_1);
          if (lVar11 < 1) goto LAB_00e1fb48;
          ogg_sync_wrote(plVar4,lVar11);
        }
        lVar13 = param_1[2];
        param_1[2] = lVar13 + lVar11;
        if (lVar13 < 0) goto LAB_00e1fb48;
        iVar7 = *(int *)(param_1 + 0x10);
        param_1[0x13] = (long)((double)param_1[0x13] + (double)(local_80 << 3));
        if (iVar7 != 4) goto LAB_00e1faf0;
        lVar11 = param_1[0x11];
        iVar7 = ogg_page_serialno(auStack_88);
        if (lVar11 == iVar7) goto LAB_00e1fae4;
        iVar7 = ogg_page_bos(auStack_88);
      } while (iVar7 == 0);
      if (param_2 != 0) {
        vorbis_dsp_clear(plVar12);
        vorbis_block_clear(plVar1);
        *(undefined4 *)(param_1 + 0x10) = 2;
        if (*(int *)(param_1 + 1) != 0) goto LAB_00e1f950;
        vorbis_info_clear(param_1[0xd]);
        vorbis_comment_clear(param_1[0xe]);
LAB_00e1fae4:
        iVar7 = *(int *)(param_1 + 0x10);
        if (iVar7 != 4) {
LAB_00e1faf0:
          if (iVar7 < 3) goto LAB_00e1f948;
        }
        goto LAB_00e1faf8;
      }
LAB_00e1fb48:
      uVar10 = 0xfffffffe;
      if (*(long *)(lVar6 + 0x28) == local_68) {
        return;
      }
      goto LAB_00e1fcd4;
    }
LAB_00e1f948:
    if (*(int *)(param_1 + 1) == 0) {
      uVar10 = FUN_00e21660(param_1,param_1[0xd],param_1[0xe],0,0,auStack_88);
      if ((int)uVar10 == 0) {
        param_1[0x11] = param_1[0x44];
        *(int *)(param_1 + 0x12) = *(int *)(param_1 + 0x12) + 1;
        goto LAB_00e1faf8;
      }
LAB_00e1fc90:
      if (*(long *)(lVar6 + 0x28) == local_68) {
        return;
      }
LAB_00e1fcd4:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar10);
    }
LAB_00e1f950:
    iVar7 = ogg_page_serialno(auStack_88);
    uVar8 = *(uint *)(param_1 + 8);
    if ((int)uVar8 < 1) break;
    uVar17 = 0;
    do {
      if (*(long *)(param_1[0xb] + uVar17 * 8) == (long)iVar7) goto LAB_00e1fa8c;
      uVar17 = uVar17 + 1;
    } while (uVar8 != uVar17);
  } while( true );
  uVar17 = 0;
LAB_00e1fa8c:
  if ((uint)uVar17 != uVar8) {
    param_1[0x11] = (long)iVar7;
    *(uint *)(param_1 + 0x12) = (uint)uVar17;
    ogg_stream_reset_serialno(plVar3);
    *(undefined4 *)(param_1 + 0x10) = 3;
LAB_00e1faf8:
    ogg_stream_pagein(plVar3,auStack_88);
  }
  goto LAB_00e1f898;
}


