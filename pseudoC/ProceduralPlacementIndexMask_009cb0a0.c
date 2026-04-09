// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementIndexMask
// Entry Point: 009cb0a0
// Size: 112 bytes
// Signature: undefined __thiscall ProceduralPlacementIndexMask(ProceduralPlacementIndexMask * this, basic_string * param_1, basic_string * param_2, basic_string * param_3)


/* ProceduralPlacementIndexMask::ProceduralPlacementIndexMask(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
ProceduralPlacementIndexMask::ProceduralPlacementIndexMask
          (ProceduralPlacementIndexMask *this,basic_string *param_1,basic_string *param_2,
          basic_string *param_3)

{
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,param_1,param_2,param_3);
  this[0x69] = (ProceduralPlacementIndexMask)0x1;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR__ProceduralPlacementIndexMask_00fe20a8;
                    /* try { // try from 009cb0e0 to 009cb0ff has its CatchHandler @ 009cb110 */
  std::__ndk1::
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  ::__append((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              *)(this + 0xd0),1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(*(char **)(this + 0xd0));
  return;
}


