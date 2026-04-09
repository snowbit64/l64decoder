// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readHeaders
// Entry Point: 00c713f4
// Size: 816 bytes
// Signature: undefined readHeaders(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TheoraVideoDecoder::readHeaders() */

void TheoraVideoDecoder::readHeaders(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  TheoraVideoDecoder *in_x0;
  ulong uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined auStack_b8 [48];
  ogg_page aoStack_88 [32];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar6 = getNextPage(in_x0,aoStack_88);
  if ((uVar6 & 1) != 0) {
    puVar2 = (undefined8 *)(in_x0 + 0x30);
    do {
      iVar5 = ogg_page_serialno(aoStack_88);
      puVar9 = (undefined8 *)*puVar2;
      puVar8 = puVar2;
      puVar10 = puVar9;
      if (puVar9 == (undefined8 *)0x0) {
LAB_00c71498:
        pvVar7 = operator_new(0x3c0);
        *(undefined8 *)((long)pvVar7 + 0x208) = 0;
        *(undefined8 *)((long)pvVar7 + 0x200) = 0;
                    /* try { // try from 00c714b0 to 00c714bf has its CatchHandler @ 00c71734 */
        th_info_init((long)pvVar7 + 0x1a0);
        th_comment_init((long)pvVar7 + 0x1e0);
                    /* try { // try from 00c714c4 to 00c714cf has its CatchHandler @ 00c71724 */
        vorbis_info_init((long)pvVar7 + 0x210);
        vorbis_comment_init((long)pvVar7 + 0x248);
        *(undefined *)((long)pvVar7 + 0x3b8) = 0;
        *(undefined4 *)((long)pvVar7 + 0x198) = 2;
        ogg_stream_init(pvVar7,iVar5);
        puVar10 = (undefined8 *)*puVar2;
        puVar8 = puVar2;
        puVar9 = puVar2;
        while (puVar10 != (undefined8 *)0x0) {
          while (puVar9 = puVar10, iVar5 < *(int *)(puVar9 + 4)) {
            puVar8 = puVar9;
            puVar10 = (undefined8 *)*puVar9;
            if ((undefined8 *)*puVar9 == (undefined8 *)0x0) {
              puVar10 = (undefined8 *)*puVar9;
              goto joined_r0x00c715f0;
            }
          }
          if (iVar5 <= *(int *)(puVar9 + 4)) break;
          puVar8 = puVar9 + 1;
          puVar10 = (undefined8 *)*puVar8;
        }
        puVar10 = (undefined8 *)*puVar8;
joined_r0x00c715f0:
        if (puVar10 == (undefined8 *)0x0) {
          puVar10 = (undefined8 *)operator_new(0x30);
          *(int *)(puVar10 + 4) = iVar5;
          puVar10[5] = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = puVar9;
          *puVar8 = puVar10;
          puVar9 = puVar10;
          if (**(long **)(in_x0 + 0x28) != 0) {
            *(long *)(in_x0 + 0x28) = **(long **)(in_x0 + 0x28);
            puVar9 = (undefined8 *)*puVar8;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(in_x0 + 0x30),(__tree_node_base *)puVar9);
          *(long *)(in_x0 + 0x38) = *(long *)(in_x0 + 0x38) + 1;
        }
        puVar10[5] = pvVar7;
      }
      else {
        do {
          if (iVar5 <= *(int *)(puVar10 + 4)) {
            puVar8 = puVar10;
          }
          puVar1 = puVar10 + (*(int *)(puVar10 + 4) < iVar5);
          puVar10 = (undefined8 *)*puVar1;
        } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
        if ((puVar8 == puVar2) || (puVar10 = puVar2, iVar5 < *(int *)(puVar8 + 4)))
        goto LAB_00c71498;
        do {
          puVar8 = puVar9;
          if (iVar5 < *(int *)(puVar8 + 4)) {
            puVar9 = (undefined8 *)*puVar8;
            puVar10 = puVar8;
          }
          else {
            if (iVar5 <= *(int *)(puVar8 + 4)) break;
            puVar10 = puVar8 + 1;
            puVar9 = (undefined8 *)*puVar10;
          }
        } while (puVar9 != (undefined8 *)0x0);
        puVar9 = (undefined8 *)*puVar10;
        if (puVar9 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)operator_new(0x30);
          *(int *)(puVar9 + 4) = iVar5;
          puVar9[5] = 0;
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = puVar8;
          *puVar10 = puVar9;
          puVar8 = puVar9;
          if (**(long **)(in_x0 + 0x28) != 0) {
            *(long *)(in_x0 + 0x28) = **(long **)(in_x0 + 0x28);
            puVar8 = (undefined8 *)*puVar10;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(in_x0 + 0x30),(__tree_node_base *)puVar8);
          *(long *)(in_x0 + 0x38) = *(long *)(in_x0 + 0x38) + 1;
        }
        pvVar7 = (void *)puVar9[5];
      }
      ogg_stream_pagein(pvVar7,aoStack_88);
      iVar5 = ogg_stream_packetpeek(pvVar7,auStack_b8);
      if (iVar5 != 0) {
        do {
          iVar5 = th_decode_headerin((long)pvVar7 + 0x1a0,(long)pvVar7 + 0x1e0,(long)pvVar7 + 0x200,
                                     auStack_b8);
          if (iVar5 != -0x15) {
            if (iVar5 < 1) goto LAB_00c716f0;
            *(undefined4 *)((long)pvVar7 + 0x198) = 1;
          }
          iVar5 = vorbis_synthesis_headerin((long)pvVar7 + 0x210,(long)pvVar7 + 0x248,auStack_b8);
          bVar4 = *(int *)((long)pvVar7 + 0x198) == 0;
          if ((!bVar4 || iVar5 != -0x84) && (iVar5 == 0)) {
            *(undefined4 *)((long)pvVar7 + 0x198) = 0;
          }
          if (bVar4 && iVar5 == -0x84) goto LAB_00c716f0;
          ogg_stream_packetout(pvVar7,auStack_b8);
          iVar5 = ogg_stream_packetpeek(pvVar7,auStack_b8);
        } while (iVar5 != 0);
      }
      uVar6 = getNextPage(in_x0,aoStack_88);
    } while ((uVar6 & 1) != 0);
  }
LAB_00c716f0:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


