// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CopyRangeTo2
// Entry Point: 00cd68d8
// Size: 100 bytes
// Signature: undefined __thiscall CopyRangeTo2(Filter * this, BufferedTransformation * param_1, ulong * param_2, ulong param_3, basic_string * param_4, bool param_5)


/* CryptoPP::Filter::CopyRangeTo2(CryptoPP::BufferedTransformation&, unsigned long&, unsigned long,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, bool) const */

void __thiscall
CryptoPP::Filter::CopyRangeTo2
          (Filter *this,BufferedTransformation *param_1,ulong *param_2,ulong param_3,
          basic_string *param_4,bool param_5)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x168))();
                    /* WARNING: Could not recover jumptable at 0x00cd6938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x120))(plVar1,param_1,param_2,param_3,param_4,param_5);
  return;
}


