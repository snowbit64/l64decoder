// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementObjectDesc
// Entry Point: 009e34a0
// Size: 160 bytes
// Signature: undefined __thiscall ProceduralPlacementObjectDesc(ProceduralPlacementObjectDesc * this, uint param_1, basic_string * param_2, basic_string * param_3, uint param_4, uint param_5, uint param_6, uint param_7, int param_8, float param_9, float param_10)


/* ProceduralPlacementRule::ProceduralPlacementObjectDesc::ProceduralPlacementObjectDesc(unsigned
   int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   > const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned int, unsigned int, unsigned int, unsigned int,
   int, float, float) */

void __thiscall
ProceduralPlacementRule::ProceduralPlacementObjectDesc::ProceduralPlacementObjectDesc
          (ProceduralPlacementObjectDesc *this,uint param_1,basic_string *param_2,
          basic_string *param_3,uint param_4,uint param_5,uint param_6,uint param_7,int param_8,
          float param_9,float param_10)

{
  *(undefined2 *)(this + 0x10) = 0;
  *(uint *)(this + 0x28) = param_1;
  *(int *)(this + 8) = param_8;
  *(undefined ***)this = &PTR__ProceduralPlacementObjectDesc_00fe29d0;
                    /* try { // try from 009e3500 to 009e350b has its CatchHandler @ 009e3570 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x30));
                    /* try { // try from 009e3510 to 009e3517 has its CatchHandler @ 009e3540 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x48));
  *(uint *)(this + 0x60) = param_4;
  *(uint *)(this + 100) = param_5;
  *(uint *)(this + 0x68) = param_6;
  *(uint *)(this + 0x6c) = param_7;
  *(float *)(this + 0x70) = param_9;
  *(float *)(this + 0x74) = param_10;
  return;
}


