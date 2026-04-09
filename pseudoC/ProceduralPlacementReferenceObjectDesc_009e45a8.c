// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementReferenceObjectDesc
// Entry Point: 009e45a8
// Size: 192 bytes
// Signature: undefined __thiscall ProceduralPlacementReferenceObjectDesc(ProceduralPlacementReferenceObjectDesc * this, ProceduralPlacementReferenceObjectDesc * param_1)


/* ProceduralPlacementRule::ProceduralPlacementReferenceObjectDesc::ProceduralPlacementReferenceObjectDesc(ProceduralPlacementRule::ProceduralPlacementReferenceObjectDesc
   const&) */

void __thiscall
ProceduralPlacementRule::ProceduralPlacementReferenceObjectDesc::
ProceduralPlacementReferenceObjectDesc
          (ProceduralPlacementReferenceObjectDesc *this,
          ProceduralPlacementReferenceObjectDesc *param_1)

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
                    /* try { // try from 009e4600 to 009e4607 has its CatchHandler @ 009e46bc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x30));
                    /* try { // try from 009e4610 to 009e4613 has its CatchHandler @ 009e468c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x48));
  *(undefined8 *)(this + 0x70) = uVar5;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x68) = uVar4;
  *(undefined8 *)(this + 0x60) = uVar3;
  *(undefined ***)this = &PTR__ProceduralPlacementReferenceObjectDesc_00fe2a48;
                    /* try { // try from 009e4640 to 009e4647 has its CatchHandler @ 009e4668 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x78),(basic_string *)(param_1 + 0x78));
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(param_1 + 0x90);
  return;
}


