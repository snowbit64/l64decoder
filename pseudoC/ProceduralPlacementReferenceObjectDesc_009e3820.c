// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementReferenceObjectDesc
// Entry Point: 009e3820
// Size: 220 bytes
// Signature: undefined __thiscall ProceduralPlacementReferenceObjectDesc(ProceduralPlacementReferenceObjectDesc * this, uint param_1, basic_string * param_2, basic_string * param_3, uint param_4, uint param_5, uint param_6, uint param_7, basic_string * param_8, float param_9, float param_10, int param_11)


/* ProceduralPlacementRule::ProceduralPlacementReferenceObjectDesc::ProceduralPlacementReferenceObjectDesc(unsigned
   int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   > const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned int, unsigned int, unsigned int, unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, float, float, int) */

void __thiscall
ProceduralPlacementRule::ProceduralPlacementReferenceObjectDesc::
ProceduralPlacementReferenceObjectDesc
          (ProceduralPlacementReferenceObjectDesc *this,uint param_1,basic_string *param_2,
          basic_string *param_3,uint param_4,uint param_5,uint param_6,uint param_7,
          basic_string *param_8,float param_9,float param_10,int param_11)

{
  *(uint *)(this + 0x28) = param_1;
  *(int *)(this + 8) = param_11;
  *(undefined ***)this = &PTR__ProceduralPlacementObjectDesc_00fe29d0;
  *(undefined2 *)(this + 0x10) = 0;
                    /* try { // try from 009e3884 to 009e388f has its CatchHandler @ 009e3958 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x30));
                    /* try { // try from 009e3894 to 009e389b has its CatchHandler @ 009e3928 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x48));
  *(uint *)(this + 0x68) = param_6;
  *(uint *)(this + 0x6c) = param_7;
  *(uint *)(this + 0x60) = param_4;
  *(uint *)(this + 100) = param_5;
  *(float *)(this + 0x70) = param_9;
  *(float *)(this + 0x74) = param_10;
  *(undefined ***)this = &PTR__ProceduralPlacementReferenceObjectDesc_00fe2a48;
                    /* try { // try from 009e38c4 to 009e38cb has its CatchHandler @ 009e3914 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x78));
  *(undefined8 *)(this + 0x90) = 0;
                    /* try { // try from 009e38d0 to 009e38df has its CatchHandler @ 009e38fc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x10),
            (basic_string *)&ProceduralPlacementDistanceMatrix::DEFAULT_REFERENCE_TYPENAME);
  return;
}


