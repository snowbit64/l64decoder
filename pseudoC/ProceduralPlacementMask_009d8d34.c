// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementMask
// Entry Point: 009d8d34
// Size: 252 bytes
// Signature: undefined __thiscall ProceduralPlacementMask(ProceduralPlacementMask * this, ProceduralPlacementMask * param_1)


/* ProceduralPlacementMask::ProceduralPlacementMask(ProceduralPlacementMask const&) */

void __thiscall
ProceduralPlacementMask::ProceduralPlacementMask
          (ProceduralPlacementMask *this,ProceduralPlacementMask *param_1)

{
  ProceduralPlacementMask PVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR__ProceduralPlacementMask_00fe24b8;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0x8f60c8c12a4d8903;
  *(undefined8 *)(this + 0xa0) = 0x7fffffff;
  *(undefined4 *)(this + 0xa8) = 0x7fffffff;
  this[0x68] = (ProceduralPlacementMask)0x0;
  *(undefined8 *)(this + 0xac) = 0;
  *(undefined8 *)(this + 0xbc) = 0;
  *(undefined8 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
                    /* try { // try from 009d8dd0 to 009d8e1b has its CatchHandler @ 009d8e30 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 8),(basic_string *)(param_1 + 8));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x20),(basic_string *)(param_1 + 0x20));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x38),(basic_string *)(param_1 + 0x38));
  PVar1 = param_1[0x69];
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  lVar3 = *(long *)param_1;
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  this[0x69] = PVar1;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = uVar2;
  (**(code **)(lVar3 + 0x10))(param_1,this);
  return;
}


