// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e21660
// Entry Point: 00e21660
// Size: 1048 bytes
// Signature: undefined FUN_00e21660(void)


int FUN_00e21660(long param_1,undefined8 param_2,undefined8 param_3,long **param_4,int *param_5,
                undefined *param_6)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  undefined auStack_b8 [48];
  undefined auStack_88 [32];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_6 == (undefined *)0x0) {
    lVar7 = FUN_00e1ee34(param_1,auStack_88,0x10000);
    if (lVar7 == -0x80) {
      iVar3 = -0x80;
      goto LAB_00e21a40;
    }
    if (lVar7 < 0) {
      iVar3 = -0x84;
      goto LAB_00e21a40;
    }
    param_6 = auStack_88;
  }
  vorbis_info_init(param_2);
  vorbis_comment_init(param_3);
  lVar7 = param_1 + 0xa8;
  *(undefined4 *)(param_1 + 0x80) = 2;
  iVar3 = ogg_page_bos(param_6);
  if (iVar3 != 0) {
    if (param_4 == (long **)0x0) {
      do {
        if (*(int *)(param_1 + 0x80) < 3) {
          uVar4 = ogg_page_serialno(param_6);
          ogg_stream_reset_serialno(lVar7,uVar4);
          ogg_stream_pagein(lVar7,param_6);
          iVar3 = ogg_stream_packetout(lVar7,auStack_b8);
          if ((0 < iVar3) && (iVar3 = vorbis_synthesis_idheader(auStack_b8), iVar3 != 0)) {
            *(undefined4 *)(param_1 + 0x80) = 3;
            iVar3 = vorbis_synthesis_headerin(param_2,param_3,auStack_b8);
            if (iVar3 != 0) goto LAB_00e21a04;
          }
        }
        lVar6 = FUN_00e1ee34(param_1,param_6,0x10000);
        if (lVar6 == -0x80) goto LAB_00e21a14;
        if (lVar6 < 0) goto LAB_00e219d4;
        if ((*(int *)(param_1 + 0x80) == 3) &&
           (lVar6 = *(long *)(param_1 + 0x220), iVar3 = ogg_page_serialno(param_6), lVar6 == iVar3))
        goto LAB_00e218d8;
        iVar3 = ogg_page_bos(param_6);
      } while (iVar3 != 0);
    }
    else {
      do {
        plVar8 = *param_4;
        iVar3 = *param_5;
        iVar5 = ogg_page_serialno(param_6);
        if ((plVar8 != (long *)0x0) && (iVar3 != 0)) {
          do {
            if (*plVar8 == (long)iVar5) {
              if (*param_4 != (long *)0x0) {
                free(*param_4);
              }
              iVar3 = -0x85;
              *param_4 = (long *)0x0;
              *param_5 = 0;
              goto LAB_00e21a28;
            }
            iVar3 = iVar3 + -1;
            plVar8 = plVar8 + 1;
          } while (iVar3 != 0);
        }
        iVar5 = ogg_page_serialno(param_6);
        iVar3 = *param_5;
        iVar9 = (int)((long)iVar3 + 1);
        *param_5 = iVar9;
        if (*param_4 == (long *)0x0) {
          plVar8 = (long *)malloc(8);
          *param_4 = plVar8;
          iVar3 = *(int *)(param_1 + 0x80);
          plVar8[iVar9 + -1] = (long)iVar5;
        }
        else {
          plVar8 = (long *)realloc(*param_4,((long)iVar3 + 1) * 8);
          *param_4 = plVar8;
          iVar3 = *(int *)(param_1 + 0x80);
          plVar8[*param_5 + -1] = (long)iVar5;
        }
        if (iVar3 < 3) {
          uVar4 = ogg_page_serialno(param_6);
          ogg_stream_reset_serialno(lVar7,uVar4);
          ogg_stream_pagein(lVar7,param_6);
          iVar3 = ogg_stream_packetout(lVar7,auStack_b8);
          if ((0 < iVar3) && (iVar3 = vorbis_synthesis_idheader(auStack_b8), iVar3 != 0)) {
            *(undefined4 *)(param_1 + 0x80) = 3;
            iVar3 = vorbis_synthesis_headerin(param_2,param_3,auStack_b8);
            if (iVar3 != 0) goto LAB_00e21a04;
          }
        }
        lVar6 = FUN_00e1ee34(param_1,param_6,0x10000);
        if (lVar6 == -0x80) goto LAB_00e21a14;
        if (lVar6 < 0) goto LAB_00e219d4;
        if ((*(int *)(param_1 + 0x80) == 3) &&
           (lVar6 = *(long *)(param_1 + 0x220), iVar3 = ogg_page_serialno(param_6), lVar6 == iVar3))
        goto LAB_00e218d8;
        iVar3 = ogg_page_bos(param_6);
      } while (iVar3 != 0);
    }
  }
  goto LAB_00e218e4;
LAB_00e21a14:
  iVar3 = -0x80;
  goto LAB_00e21a28;
LAB_00e218d8:
  ogg_stream_pagein(lVar7,param_6);
LAB_00e218e4:
  if (*(int *)(param_1 + 0x80) == 3) {
    iVar5 = 0;
    bVar2 = false;
    do {
      while( true ) {
        iVar3 = ogg_stream_packetout(lVar7,auStack_b8);
        if (iVar3 == -1) goto LAB_00e21a04;
        if (iVar3 == 0) break;
        iVar3 = vorbis_synthesis_headerin(param_2,param_3,auStack_b8);
        if (iVar3 != 0) goto LAB_00e21a28;
        iVar5 = iVar5 + 1;
        if (iVar5 == 2) {
LAB_00e21a1c:
          iVar3 = 0;
          goto LAB_00e21a40;
        }
      }
      if (1 < iVar5) goto LAB_00e21a1c;
      lVar6 = FUN_00e1ee34(param_1,param_6,0x10000);
      if (lVar6 < 0) goto LAB_00e21a04;
      while (lVar6 = *(long *)(param_1 + 0x220), iVar3 = ogg_page_serialno(param_6), lVar6 != iVar3)
      {
        iVar3 = ogg_page_bos(param_6);
        if (iVar3 != 0) {
          if (bVar2) goto LAB_00e21a04;
          bVar2 = true;
        }
        lVar6 = FUN_00e1ee34(param_1,param_6,0x10000);
        iVar3 = -0x85;
        if (lVar6 < 0) goto LAB_00e21a28;
      }
      ogg_stream_pagein(lVar7,param_6);
      iVar3 = 0;
    } while (iVar5 < 2);
    goto LAB_00e21a40;
  }
LAB_00e219d4:
  iVar3 = -0x84;
  goto LAB_00e21a28;
LAB_00e21a04:
  iVar3 = -0x85;
LAB_00e21a28:
  vorbis_info_clear(param_2);
  vorbis_comment_clear(param_3);
  *(undefined4 *)(param_1 + 0x80) = 2;
LAB_00e21a40:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


