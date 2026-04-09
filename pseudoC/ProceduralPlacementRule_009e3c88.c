// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementRule
// Entry Point: 009e3c88
// Size: 188 bytes
// Signature: undefined __thiscall ProceduralPlacementRule(ProceduralPlacementRule * this, basic_string * param_1, bool param_2, uint param_3, uint param_4, uint param_5)


/* ProceduralPlacementRule::ProceduralPlacementRule(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool, unsigned int,
   unsigned int, unsigned int) */

void __thiscall
ProceduralPlacementRule::ProceduralPlacementRule
          (ProceduralPlacementRule *this,basic_string *param_1,bool param_2,uint param_3,
          uint param_4,uint param_5)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__ProceduralPlacementRule_00fe2a70;
  *(undefined ***)(this + 0x20) = &PTR__ProceduralPlacementRuleDesc_00fe2af8;
                    /* try { // try from 009e3ce0 to 009e3ce3 has its CatchHandler @ 009e3d44 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x28));
  *(undefined8 *)(this + 0xb0) = 0;
  *(uint *)(this + 0x44) = param_3;
  *(uint *)(this + 0x48) = param_4;
  this[0x40] = (ProceduralPlacementRule)param_2;
  *(uint *)(this + 0x4c) = param_5;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x80) = 0x8f60c8c12a4d8903;
  this[0x88] = (ProceduralPlacementRule)param_2;
  *(undefined8 *)(this + 0x98) = 0;
  *(ProceduralPlacementRule **)(this + 0x90) = this + 0x98;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(ProceduralPlacementRule **)(this + 0xa8) = this + 0xb0;
  return;
}


