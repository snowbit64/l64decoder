// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CopyAllTo
// Entry Point: 00c7af08
// Size: 136 bytes
// Signature: undefined __cdecl CopyAllTo(BufferedTransformation * param_1, basic_string * param_2)


/* CryptoPP::BufferedTransformation::CopyAllTo(CryptoPP::BufferedTransformation&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) const */

void CryptoPP::BufferedTransformation::CopyAllTo
               (BufferedTransformation *param_1,basic_string *param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)param_1 + 0x168))();
  while (lVar1 != 0) {
    param_1 = (BufferedTransformation *)(**(code **)(*(long *)param_1 + 0x168))(param_1);
    lVar1 = (**(code **)(*(long *)param_1 + 0x168))();
  }
  lVar1 = (**(code **)(*(long *)param_1 + 0x168))(param_1);
  while (lVar1 != 0) {
    param_1 = (BufferedTransformation *)(**(code **)(*(long *)param_1 + 0x168))(param_1);
    lVar1 = (**(code **)(*(long *)param_1 + 0x168))();
  }
  return;
}


