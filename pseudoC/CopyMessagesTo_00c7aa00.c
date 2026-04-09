// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CopyMessagesTo
// Entry Point: 00c7aa00
// Size: 84 bytes
// Signature: undefined __cdecl CopyMessagesTo(BufferedTransformation * param_1, uint param_2, basic_string * param_3)


/* CryptoPP::BufferedTransformation::CopyMessagesTo(CryptoPP::BufferedTransformation&, unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) const */

undefined8
CryptoPP::BufferedTransformation::CopyMessagesTo
          (BufferedTransformation *param_1,uint param_2,basic_string *param_3)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)param_1 + 0x168))(param_1,param_2);
  while (lVar1 != 0) {
    param_1 = (BufferedTransformation *)(**(code **)(*(long *)param_1 + 0x168))(param_1);
    lVar1 = (**(code **)(*(long *)param_1 + 0x168))();
  }
  return 0;
}


