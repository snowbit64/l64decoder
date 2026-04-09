// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SpirvCompilerDxc
// Entry Point: 00ac45b8
// Size: 188 bytes
// Signature: undefined __thiscall SpirvCompilerDxc(SpirvCompilerDxc * this, uint param_1)


/* SpirvCompilerDxc::SpirvCompilerDxc(unsigned int) */

void __thiscall SpirvCompilerDxc::SpirvCompilerDxc(SpirvCompilerDxc *this,uint param_1)

{
  wchar_t wVar1;
  Platform PVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if (0x400fff < param_1) {
    param_1 = 0x401000;
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  puVar4 = (undefined8 *)(this + 8);
  *puVar4 = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *this = (SpirvCompilerDxc)0x1;
  *(uint *)(this + 4) = param_1;
  this[0x20] = (SpirvCompilerDxc)0x0;
  *(undefined2 *)(this + 0x40) = 1;
                    /* try { // try from 00ac4608 to 00ac465b has its CatchHandler @ 00ac4674 */
  std::__ndk1::
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::append
            ((wchar_t *)puVar4);
  wVar1 = (wchar_t)puVar4;
  std::__ndk1::
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::push_back
            (wVar1);
  std::__ndk1::
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::push_back
            (wVar1);
  std::__ndk1::
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::push_back
            (wVar1);
  PVar2 = DxcManager::getInstance();
  uVar3 = DxcManager::load(PVar2,(char *)0x0);
  if ((uVar3 & 1) == 0) {
    *this = (SpirvCompilerDxc)0x0;
  }
  return;
}


