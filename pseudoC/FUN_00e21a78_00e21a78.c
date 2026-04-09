// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e21a78
// Entry Point: 00e21a78
// Size: 300 bytes
// Signature: undefined FUN_00e21a78(void)


void FUN_00e21a78(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined auStack_a8 [48];
  undefined auStack_78 [32];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  iVar2 = *(int *)(param_1 + 0x220);
  lVar5 = FUN_00e1ee34(param_1,auStack_78,0xffffffffffffffff);
  if (lVar5 < 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    lVar5 = -1;
    do {
      iVar4 = ogg_page_bos(auStack_78);
      if (iVar4 != 0) break;
      iVar4 = ogg_page_serialno(auStack_78);
      if (iVar4 == iVar2) {
        ogg_stream_pagein(param_1 + 0xa8,auStack_78);
        while (iVar4 = ogg_stream_packetout(param_1 + 0xa8,auStack_a8), iVar4 != 0) {
          if ((0 < iVar4) && (lVar6 = vorbis_packet_blocksize(param_2,auStack_a8), -1 < lVar6)) {
            lVar1 = 0;
            if (lVar5 != -1) {
              lVar1 = lVar6 + lVar5 >> 2;
            }
            uVar7 = lVar1 + uVar7;
            lVar5 = lVar6;
          }
        }
        lVar6 = ogg_page_granulepos(auStack_78);
        if (lVar6 != -1) {
          lVar5 = ogg_page_granulepos(auStack_78);
          uVar7 = lVar5 - uVar7;
          break;
        }
      }
      lVar6 = FUN_00e1ee34(param_1,auStack_78,0xffffffffffffffff);
    } while (-1 < lVar6);
    uVar7 = uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


