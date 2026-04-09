// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TransferTo2
// Entry Point: 00cd693c
// Size: 84 bytes
// Signature: undefined __thiscall TransferTo2(Filter * this, BufferedTransformation * param_1, ulong * param_2, basic_string * param_3, bool param_4)


/* CryptoPP::Filter::TransferTo2(CryptoPP::BufferedTransformation&, unsigned long&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, bool) */

void __thiscall
CryptoPP::Filter::TransferTo2
          (Filter *this,BufferedTransformation *param_1,ulong *param_2,basic_string *param_3,
          bool param_4)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x160))();
                    /* WARNING: Could not recover jumptable at 0x00cd698c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x118))(plVar1,param_1,param_2,param_3,param_4);
  return;
}


