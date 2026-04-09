// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementFoliageObjectDesc
// Entry Point: 009e36c8
// Size: 224 bytes
// Signature: undefined __thiscall ProceduralPlacementFoliageObjectDesc(ProceduralPlacementFoliageObjectDesc * this, uint param_1, basic_string * param_2, basic_string * param_3, uint param_4, uint param_5, uint param_6, uint param_7, basic_string * param_8, uint param_9, int param_10)


/* ProceduralPlacementRule::ProceduralPlacementFoliageObjectDesc::ProceduralPlacementFoliageObjectDesc(unsigned
   int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   > const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned int, unsigned int, unsigned int, unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, unsigned int, int) */

void __thiscall
ProceduralPlacementRule::ProceduralPlacementFoliageObjectDesc::ProceduralPlacementFoliageObjectDesc
          (ProceduralPlacementFoliageObjectDesc *this,uint param_1,basic_string *param_2,
          basic_string *param_3,uint param_4,uint param_5,uint param_6,uint param_7,
          basic_string *param_8,uint param_9,int param_10)

{
  undefined8 uVar1;
  
  *(uint *)(this + 0x28) = param_1;
  *(int *)(this + 8) = param_10;
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__ProceduralPlacementObjectDesc_00fe29d0;
                    /* try { // try from 009e3720 to 009e372b has its CatchHandler @ 009e3804 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x30));
                    /* try { // try from 009e3730 to 009e3737 has its CatchHandler @ 009e37d4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x48));
  uVar1 = NEON_fmov(0x3f800000,4);
  *(uint *)(this + 0x6c) = param_7;
  *(uint *)(this + 0x60) = param_4;
  *(uint *)(this + 100) = param_5;
  *(uint *)(this + 0x68) = param_6;
  *(undefined8 *)(this + 0x70) = uVar1;
  *(undefined ***)this = &PTR__ProceduralPlacementFoliageObjectDesc_00fe2a20;
                    /* try { // try from 009e3764 to 009e376b has its CatchHandler @ 009e37c0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x78));
  *(undefined8 *)(this + 0x98) = 0;
  *(uint *)(this + 0x90) = param_9;
  *(undefined4 *)(this + 0xa0) = 0x800;
                    /* try { // try from 009e3780 to 009e378f has its CatchHandler @ 009e37a8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x10),
            (basic_string *)&ProceduralPlacementDistanceMatrix::DEFAULT_FOLIAGE_TYPENAME);
  return;
}


