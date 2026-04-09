// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ChannelPutWord16
// Entry Point: 00c7afe8
// Size: 48 bytes
// Signature: undefined __cdecl ChannelPutWord16(basic_string * param_1, ushort param_2, ByteOrder param_3, bool param_4)


/* CryptoPP::BufferedTransformation::ChannelPutWord16(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned short,
   CryptoPP::ByteOrder, bool) */

void CryptoPP::BufferedTransformation::ChannelPutWord16
               (basic_string *param_1,ushort param_2,ByteOrder param_3,bool param_4)

{
  ushort uVar1;
  undefined4 in_w4;
  
  uVar1 = (ushort)param_3;
  if (param_4) {
    uVar1 = (ushort)(param_3 >> 8) & 0xff | (ushort)((param_3 & 0xff00ff) << 8);
  }
  *(ushort *)(param_1 + 4) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00c7b014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x130))(param_1,param_2,param_1 + 4,2,0,in_w4);
  return;
}


