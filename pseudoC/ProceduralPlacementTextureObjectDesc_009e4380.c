// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementTextureObjectDesc
// Entry Point: 009e4380
// Size: 160 bytes
// Signature: undefined __thiscall ProceduralPlacementTextureObjectDesc(ProceduralPlacementTextureObjectDesc * this, ProceduralPlacementTextureObjectDesc * param_1)


/* ProceduralPlacementRule::ProceduralPlacementTextureObjectDesc::ProceduralPlacementTextureObjectDesc(ProceduralPlacementRule::ProceduralPlacementTextureObjectDesc
   const&) */

void __thiscall
ProceduralPlacementRule::ProceduralPlacementTextureObjectDesc::ProceduralPlacementTextureObjectDesc
          (ProceduralPlacementTextureObjectDesc *this,ProceduralPlacementTextureObjectDesc *param_1)

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
                    /* try { // try from 009e43d8 to 009e43df has its CatchHandler @ 009e4450 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x30));
                    /* try { // try from 009e43e8 to 009e43eb has its CatchHandler @ 009e4420 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x48));
  *(undefined8 *)(this + 0x70) = uVar5;
  *(undefined8 *)(this + 0x68) = uVar4;
  *(undefined8 *)(this + 0x60) = uVar3;
  *(undefined ***)this = &PTR__ProceduralPlacementObjectDesc_00fe29f8;
  return;
}


