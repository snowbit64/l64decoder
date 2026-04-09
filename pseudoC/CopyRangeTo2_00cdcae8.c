// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CopyRangeTo2
// Entry Point: 00cdcae8
// Size: 128 bytes
// Signature: undefined __cdecl CopyRangeTo2(BufferedTransformation * param_1, ulong * param_2, ulong param_3, basic_string * param_4, bool param_5)


/* CryptoPP::StringStore::CopyRangeTo2(CryptoPP::BufferedTransformation&, unsigned long&, unsigned
   long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool) const */

void CryptoPP::StringStore::CopyRangeTo2
               (BufferedTransformation *param_1,ulong *param_2,ulong param_3,basic_string *param_4,
               bool param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x28);
  uVar1 = *(long *)param_3 + *(long *)(param_1 + 0x30);
  uVar4 = (long)param_4 - *(long *)param_3;
  if (uVar2 <= uVar1) {
    uVar1 = uVar2;
  }
  if (uVar2 - uVar1 <= uVar4) {
    uVar4 = uVar2 - uVar1;
  }
  lVar3 = (**(code **)(*param_2 + 0x130))(param_2,param_5,*(long *)(param_1 + 0x20) + uVar1,uVar4,0)
  ;
  if (lVar3 != 0) {
    return;
  }
  *(ulong *)param_3 = *(long *)param_3 + uVar4;
  return;
}


