// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementFoliageObjectDesc
// Entry Point: 009e446c
// Size: 204 bytes
// Signature: undefined __thiscall ProceduralPlacementFoliageObjectDesc(ProceduralPlacementFoliageObjectDesc * this, ProceduralPlacementFoliageObjectDesc * param_1)


/* ProceduralPlacementRule::ProceduralPlacementFoliageObjectDesc::ProceduralPlacementFoliageObjectDesc(ProceduralPlacementRule::ProceduralPlacementFoliageObjectDesc
   const&) */

void __thiscall
ProceduralPlacementRule::ProceduralPlacementFoliageObjectDesc::ProceduralPlacementFoliageObjectDesc
          (ProceduralPlacementFoliageObjectDesc *this,ProceduralPlacementFoliageObjectDesc *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__ProceduralPlacementObjectDesc_00fe29d0;
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0x28) = uVar1;
                    /* try { // try from 009e44c4 to 009e44cb has its CatchHandler @ 009e458c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x30));
                    /* try { // try from 009e44d4 to 009e44d7 has its CatchHandler @ 009e455c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x48));
  *(undefined8 *)(this + 0x70) = uVar5;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x68) = uVar4;
  *(undefined8 *)(this + 0x60) = uVar3;
  *(undefined ***)this = &PTR__ProceduralPlacementFoliageObjectDesc_00fe2a20;
                    /* try { // try from 009e4504 to 009e450b has its CatchHandler @ 009e4538 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x78),(basic_string *)(param_1 + 0x78));
  uVar1 = *(undefined4 *)(param_1 + 0x90);
  *(undefined8 *)(this + 0x98) = 0;
  uVar2 = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this + 0x90) = uVar1;
  *(undefined4 *)(this + 0xa0) = uVar2;
  return;
}


