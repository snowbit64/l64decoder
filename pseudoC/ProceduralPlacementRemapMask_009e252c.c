// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementRemapMask
// Entry Point: 009e252c
// Size: 56 bytes
// Signature: undefined __thiscall ProceduralPlacementRemapMask(ProceduralPlacementRemapMask * this, ProceduralPlacementRemapMask * param_1)


/* ProceduralPlacementRemapMask::ProceduralPlacementRemapMask(ProceduralPlacementRemapMask const&)
    */

void __thiscall
ProceduralPlacementRemapMask::ProceduralPlacementRemapMask
          (ProceduralPlacementRemapMask *this,ProceduralPlacementRemapMask *param_1)

{
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,(ProceduralPlacementMask *)param_1);
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined ***)this = &PTR__ProceduralPlacementRemapMask_00fe2910;
  return;
}


