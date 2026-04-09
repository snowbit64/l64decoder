// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ChannelPutWord32
// Entry Point: 00c7b018
// Size: 44 bytes
// Signature: undefined __cdecl ChannelPutWord32(basic_string * param_1, uint param_2, ByteOrder param_3, bool param_4)


/* CryptoPP::BufferedTransformation::ChannelPutWord32(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned int,
   CryptoPP::ByteOrder, bool) */

void CryptoPP::BufferedTransformation::ChannelPutWord32
               (basic_string *param_1,uint param_2,ByteOrder param_3,bool param_4)

{
  uint uVar1;
  undefined4 in_w4;
  
  uVar1 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
  if (param_4) {
    param_3 = uVar1 >> 0x10 | uVar1 << 0x10;
  }
  param_1[4] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00c7b040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x130))(param_1,param_2,param_1 + 4,4,0,in_w4);
  return;
}


