// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CompileError
// Entry Point: 00ecf6f4
// Size: 60 bytes
// Signature: undefined __thiscall CompileError(CompileError * this, Location * param_1, basic_string * param_2)


/* Luau::CompileError::CompileError(Luau::Location const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
Luau::CompileError::CompileError(CompileError *this,Location *param_1,basic_string *param_2)

{
  undefined8 uVar1;
  
  *(undefined ***)this = &PTR__CompileError_01014948;
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 8) = uVar1;
                    /* try { // try from 00ecf71c to 00ecf723 has its CatchHandler @ 00ecf730 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x18));
  return;
}


