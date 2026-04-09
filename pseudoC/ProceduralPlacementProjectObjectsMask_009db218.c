// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementProjectObjectsMask
// Entry Point: 009db218
// Size: 80 bytes
// Signature: undefined __thiscall ProceduralPlacementProjectObjectsMask(ProceduralPlacementProjectObjectsMask * this, ProceduralPlacementProjectObjectsMask * param_1)


/* ProceduralPlacementProjectObjectsMask::ProceduralPlacementProjectObjectsMask(ProceduralPlacementProjectObjectsMask
   const&) */

void __thiscall
ProceduralPlacementProjectObjectsMask::ProceduralPlacementProjectObjectsMask
          (ProceduralPlacementProjectObjectsMask *this,
          ProceduralPlacementProjectObjectsMask *param_1)

{
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,(ProceduralPlacementMask *)param_1);
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(ProceduralPlacementProjectObjectsMask **)(this + 0xd8) = this + 0xe0;
  *(undefined ***)this = &PTR__ProceduralPlacementProjectObjectsMask_00fe2630;
  *(undefined ***)(this + 200) = &PTR__IRaycastReport_00fe26d8;
  *(undefined8 *)(this + 0xd0) = 0;
  return;
}


