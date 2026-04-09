// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ChannelPutModifiable2
// Entry Point: 00c7a110
// Size: 72 bytes
// Signature: undefined __thiscall ChannelPutModifiable2(BufferedTransformation * this, basic_string * param_1, uchar * param_2, ulong param_3, int param_4, bool param_5)


/* CryptoPP::BufferedTransformation::ChannelPutModifiable2(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned char*, unsigned
   long, int, bool) */

void __thiscall
CryptoPP::BufferedTransformation::ChannelPutModifiable2
          (BufferedTransformation *this,basic_string *param_1,uchar *param_2,ulong param_3,
          int param_4,bool param_5)

{
  ulong uVar1;
  
  uVar1 = (ulong)(*(byte *)param_1 >> 1);
  if ((*(byte *)param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 2);
  }
  if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00c7a134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x130))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c7a154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x40))(this,param_2,param_3,param_4,param_5);
  return;
}


