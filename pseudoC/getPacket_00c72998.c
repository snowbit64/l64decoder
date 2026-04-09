// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPacket
// Entry Point: 00c72998
// Size: 404 bytes
// Signature: undefined __thiscall getPacket(TheoraVideoDecoder * this, Stream * param_1, ogg_packet * param_2)


/* TheoraVideoDecoder::getPacket(TheoraVideoDecoder::Stream*, ogg_packet&) */

bool __thiscall
TheoraVideoDecoder::getPacket(TheoraVideoDecoder *this,Stream *param_1,ogg_packet *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ogg_page aoStack_88 [32];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar4 = ogg_stream_packetout(param_1,param_2);
  bVar3 = iVar4 == 1;
  if (!bVar3) {
    puVar1 = (undefined8 *)(this + 0x30);
    do {
      uVar5 = getNextPage(this,aoStack_88);
      if ((uVar5 & 1) == 0) break;
      iVar4 = ogg_page_serialno(aoStack_88);
      puVar9 = (undefined8 *)*puVar1;
      puVar7 = puVar1;
      puVar6 = puVar1;
      while (puVar9 != (undefined8 *)0x0) {
        while (puVar8 = puVar9, puVar6 = puVar8, iVar4 < *(int *)(puVar8 + 4)) {
          puVar7 = puVar8;
          puVar9 = (undefined8 *)*puVar8;
          if ((undefined8 *)*puVar8 == (undefined8 *)0x0) {
            puVar7 = (undefined8 *)*puVar8;
            if (puVar7 != (undefined8 *)0x0) goto LAB_00c72b10;
            goto LAB_00c72ab0;
          }
        }
        if (iVar4 <= *(int *)(puVar8 + 4)) break;
        puVar7 = puVar8 + 1;
        puVar9 = (undefined8 *)*puVar7;
      }
      puVar8 = puVar7;
      puVar7 = (undefined8 *)*puVar8;
      if (puVar7 == (undefined8 *)0x0) {
LAB_00c72ab0:
        puVar7 = (undefined8 *)operator_new(0x30);
        *(int *)(puVar7 + 4) = iVar4;
        puVar7[5] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = puVar6;
        *puVar8 = puVar7;
        puVar6 = puVar7;
        if (**(long **)(this + 0x28) != 0) {
          *(long *)(this + 0x28) = **(long **)(this + 0x28);
          puVar6 = (undefined8 *)*puVar8;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 0x30),(__tree_node_base *)puVar6);
        *(long *)(this + 0x38) = *(long *)(this + 0x38) + 1;
      }
LAB_00c72b10:
      if (*(char *)(puVar7[5] + 0x3b8) != '\0') {
        ogg_stream_pagein(puVar7[5],aoStack_88);
      }
      iVar4 = ogg_stream_packetout(param_1,param_2);
      bVar3 = iVar4 == 1;
    } while (!bVar3);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


