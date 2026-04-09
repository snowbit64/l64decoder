// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetRetrievalChannel
// Entry Point: 00c7af90
// Size: 88 bytes
// Signature: undefined __thiscall SetRetrievalChannel(BufferedTransformation * this, basic_string * param_1)


/* CryptoPP::BufferedTransformation::SetRetrievalChannel(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
CryptoPP::BufferedTransformation::SetRetrievalChannel
          (BufferedTransformation *this,basic_string *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = (**(code **)(*(long *)this + 0x160))();
  if (lVar1 != 0) {
    plVar2 = (long *)(**(code **)(*(long *)this + 0x160))(this);
                    /* WARNING: Could not recover jumptable at 0x00c7afd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x150))(plVar2,param_1);
    return;
  }
  return;
}


