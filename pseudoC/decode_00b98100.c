// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decode
// Entry Point: 00b98100
// Size: 140 bytes
// Signature: undefined __cdecl decode(File * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uchar * param_6)


/* RLEUtil::decode(File*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */

void RLEUtil::decode(File *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                    uchar *param_6)

{
  long lVar1;
  File *local_38;
  uint local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_3 == 1) {
    uStack_2c = 0;
    local_38 = param_1;
    local_30 = param_2;
    _decode<unsigned_char,unsigned_char,CompressedIoUtil::CompressedFileInput<unsigned_char,File>>
              ((CompressedFileInput *)&local_38,param_4,param_5,param_6);
  }
  else {
    DebugUtil::message("Error",
                       "RLEUtil: decoding to char array is only supported with input char width 1",
                       (char *)0x0,"T:/src/base/misc/RLEUtil.cpp",0x7e);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


