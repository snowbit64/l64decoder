// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: encode
// Entry Point: 00b96480
// Size: 180 bytes
// Signature: undefined __cdecl encode(BitVector * param_1, uint param_2, uint param_3, uint param_4, uchar * * param_5, uint * param_6, bool param_7)


/* RLEUtil::encode(BitVector const*, unsigned int, unsigned int, unsigned int, unsigned char*&,
   unsigned int&, bool) */

void RLEUtil::encode(BitVector *param_1,uint param_2,uint param_3,uint param_4,uchar **param_5,
                    uint *param_6,bool param_7)

{
  long lVar1;
  uchar *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_4 < 9) {
    local_48 = (uchar *)0x0;
    local_40 = 0;
    _encode<BitVector,unsigned_char,CompressedIoUtil::CompressedBufferOutput<unsigned_char>>
              (param_1,param_2,param_3,param_4,(CompressedBufferOutput *)&local_48,param_7);
    *param_5 = local_48;
    *param_6 = (uint)local_40;
  }
  else if (param_4 < 0x11) {
    local_48 = (uchar *)0x0;
    local_40 = 0;
    _encode<BitVector,unsigned_short,CompressedIoUtil::CompressedBufferOutput<unsigned_short>>
              (param_1,param_2,param_3,param_4,(CompressedBufferOutput *)&local_48,param_7);
    *param_5 = local_48;
    *param_6 = (uint)local_40 << 1;
  }
  else {
    *param_6 = 0;
    *param_5 = (uchar *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


