// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: seekpos
// Entry Point: 0075e664
// Size: 112 bytes
// Signature: undefined __thiscall seekpos(basic_filebuf<char,std::__ndk1::char_traits<char>> * this, fpos param_1, uint param_2)


/* std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char>
   >::seekpos(std::__ndk1::fpos<mbstate_t>, unsigned int) */

undefined  [16] __thiscall
std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::seekpos
          (basic_filebuf<char,std::__ndk1::char_traits<char>> *this,fpos param_1,uint param_2)

{
  int iVar1;
  ulong __off;
  ulong uVar2;
  undefined auVar3 [16];
  
  __off = (ulong)param_2;
  uVar2 = (ulong)param_1;
  if (((*(long *)(this + 0x78) == 0) || (iVar1 = (**(code **)(*(long *)this + 0x30))(), iVar1 != 0))
     || (iVar1 = fseeko(*(FILE **)(this + 0x78),__off,0), iVar1 != 0)) {
    uVar2 = 0;
    __off = 0xffffffffffffffff;
  }
  else {
    *(ulong *)(this + 0x88) = uVar2;
  }
  auVar3._8_8_ = __off;
  auVar3._0_8_ = uVar2;
  return auVar3;
}


