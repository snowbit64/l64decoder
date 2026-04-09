// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MultiresTextureGpuUpdaterDesc
// Entry Point: 0095f378
// Size: 212 bytes
// Signature: undefined __thiscall MultiresTextureGpuUpdaterDesc(MultiresTextureGpuUpdaterDesc * this, MultiresTextureGpuUpdaterDesc * param_1)


/* MultiresTextureGpuUpdaterDesc::MultiresTextureGpuUpdaterDesc(MultiresTextureGpuUpdaterDesc
   const&) */

void __thiscall
MultiresTextureGpuUpdaterDesc::MultiresTextureGpuUpdaterDesc
          (MultiresTextureGpuUpdaterDesc *this,MultiresTextureGpuUpdaterDesc *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 8));
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x20) = uVar4;
  *(undefined8 *)(this + 0x38) = uVar3;
  *(undefined8 *)(this + 0x30) = uVar2;
  *(undefined8 *)(this + 0x40) = uVar1;
                    /* try { // try from 0095f3c0 to 0095f3c7 has its CatchHandler @ 0095f44c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x48));
                    /* try { // try from 0095f3d0 to 0095f437 has its CatchHandler @ 0095f468 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x60));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x78));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x90));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xa8));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xc0));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xd8));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xf0));
  return;
}


