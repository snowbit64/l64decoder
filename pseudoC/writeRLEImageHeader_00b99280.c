// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeRLEImageHeader
// Entry Point: 00b99280
// Size: 132 bytes
// Signature: undefined __cdecl writeRLEImageHeader(File * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uchar param_6, bool param_7)


/* RLEUtil::writeRLEImageHeader(File*, unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned char, bool) */

void RLEUtil::writeRLEImageHeader
               (File *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uchar param_6,
               bool param_7)

{
  long lVar1;
  undefined4 local_40;
  uchar local_3c;
  uint local_3b;
  uint local_37;
  uint local_33;
  uint local_2f;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x5a4c5247;
  if (!param_7) {
    local_40 = 0x454c5247;
  }
  local_3c = param_6;
  local_3b = param_2;
  local_37 = param_3;
  local_33 = param_4;
  local_2f = param_5;
  (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_40,0x15);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


