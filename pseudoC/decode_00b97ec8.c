// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decode
// Entry Point: 00b97ec8
// Size: 140 bytes
// Signature: undefined __cdecl decode(uchar * param_1, uint param_2, uint param_3, uint param_4, uint param_5, basic_string * param_6)


/* RLEUtil::decode(unsigned char const*, unsigned int, unsigned int, unsigned int, unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&)
    */

void RLEUtil::decode(uchar *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                    basic_string *param_6)

{
  long lVar1;
  uchar *local_38;
  uint local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_3 == 1) {
    uStack_2c = 0;
    local_38 = param_1;
    local_30 = param_2;
    _decode<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_char,CompressedIoUtil::CompressedBufferInput<unsigned_char>>
              ((CompressedBufferInput *)&local_38,param_4,param_5,param_6);
  }
  else {
    DebugUtil::message("Error",
                       "RLEUtil: decoding to string is only supported with input char width 1",
                       (char *)0x0,"T:/src/base/misc/RLEUtil.cpp",0x74);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


