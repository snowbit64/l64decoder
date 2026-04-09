// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementSignedDistanceMask
// Entry Point: 009e9144
// Size: 80 bytes
// Signature: undefined __thiscall ProceduralPlacementSignedDistanceMask(ProceduralPlacementSignedDistanceMask * this, ProceduralPlacementSignedDistanceMask * param_1)


/* ProceduralPlacementSignedDistanceMask::ProceduralPlacementSignedDistanceMask(ProceduralPlacementSignedDistanceMask
   const&) */

void __thiscall
ProceduralPlacementSignedDistanceMask::ProceduralPlacementSignedDistanceMask
          (ProceduralPlacementSignedDistanceMask *this,
          ProceduralPlacementSignedDistanceMask *param_1)

{
  undefined8 uVar1;
  
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,(ProceduralPlacementMask *)param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xcc);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined8 *)(this + 0xcc) = uVar1;
  *(undefined ***)this = &PTR__ProceduralPlacementSignedDistanceMask_00fe2be8;
                    /* try { // try from 009e9184 to 009e9187 has its CatchHandler @ 009e9194 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x70),(basic_string *)(param_1 + 0x70));
  return;
}


