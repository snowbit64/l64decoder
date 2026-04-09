// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CopyRangeTo2
// Entry Point: 00cdcd14
// Size: 168 bytes
// Signature: undefined __thiscall CopyRangeTo2(NullStore * this, BufferedTransformation * param_1, ulong * param_2, ulong param_3, basic_string * param_4, bool param_5)


/* CryptoPP::NullStore::CopyRangeTo2(CryptoPP::BufferedTransformation&, unsigned long&, unsigned
   long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool) const */

long __thiscall
CryptoPP::NullStore::CopyRangeTo2
          (NullStore *this,BufferedTransformation *param_1,ulong *param_2,ulong param_3,
          basic_string *param_4,bool param_5)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  while( true ) {
    if (param_3 <= uVar2) {
      return 0;
    }
    uVar2 = param_3 - uVar2;
    if (0x7f < uVar2) {
      uVar2 = 0x80;
    }
    lVar1 = (**(code **)(*(long *)param_1 + 0x130))(param_1,param_4,&DAT_0054364b,uVar2,0,param_5);
    if (lVar1 != 0) break;
    uVar2 = *param_2 + uVar2;
    *param_2 = uVar2;
  }
  return lVar1;
}


