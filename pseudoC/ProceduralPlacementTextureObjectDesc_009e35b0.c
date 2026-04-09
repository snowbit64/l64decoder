// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementTextureObjectDesc
// Entry Point: 009e35b0
// Size: 184 bytes
// Signature: undefined __thiscall ProceduralPlacementTextureObjectDesc(ProceduralPlacementTextureObjectDesc * this, uint param_1, basic_string * param_2, basic_string * param_3, uint param_4, uint param_5, uint param_6, uint param_7, int param_8)


/* ProceduralPlacementRule::ProceduralPlacementTextureObjectDesc::ProceduralPlacementTextureObjectDesc(unsigned
   int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   > const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned int, unsigned int, unsigned int, unsigned int,
   int) */

void __thiscall
ProceduralPlacementRule::ProceduralPlacementTextureObjectDesc::ProceduralPlacementTextureObjectDesc
          (ProceduralPlacementTextureObjectDesc *this,uint param_1,basic_string *param_2,
          basic_string *param_3,uint param_4,uint param_5,uint param_6,uint param_7,int param_8)

{
  undefined8 uVar1;
  
  *(uint *)(this + 0x28) = param_1;
  *(int *)(this + 8) = param_8;
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__ProceduralPlacementObjectDesc_00fe29d0;
                    /* try { // try from 009e3608 to 009e3613 has its CatchHandler @ 009e36ac */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x30));
                    /* try { // try from 009e3618 to 009e361f has its CatchHandler @ 009e367c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x48));
  uVar1 = NEON_fmov(0x3f800000,4);
  *(uint *)(this + 0x60) = param_4;
  *(uint *)(this + 100) = param_5;
  *(uint *)(this + 0x68) = param_6;
  *(uint *)(this + 0x6c) = param_7;
  *(undefined8 *)(this + 0x70) = uVar1;
  *(undefined ***)this = &PTR__ProceduralPlacementObjectDesc_00fe29f8;
                    /* try { // try from 009e3640 to 009e364f has its CatchHandler @ 009e3668 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x10),
            (basic_string *)&ProceduralPlacementDistanceMatrix::DEFAULT_TEXTURE_TYPENAME);
  return;
}


