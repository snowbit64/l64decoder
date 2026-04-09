// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementRaycastObjectsMask
// Entry Point: 009dddbc
// Size: 80 bytes
// Signature: undefined __thiscall ProceduralPlacementRaycastObjectsMask(ProceduralPlacementRaycastObjectsMask * this, ProceduralPlacementRaycastObjectsMask * param_1)


/* ProceduralPlacementRaycastObjectsMask::ProceduralPlacementRaycastObjectsMask(ProceduralPlacementRaycastObjectsMask
   const&) */

void __thiscall
ProceduralPlacementRaycastObjectsMask::ProceduralPlacementRaycastObjectsMask
          (ProceduralPlacementRaycastObjectsMask *this,
          ProceduralPlacementRaycastObjectsMask *param_1)

{
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,(ProceduralPlacementMask *)param_1);
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(ProceduralPlacementRaycastObjectsMask **)(this + 0xe8) = this + 0xf0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined ***)this = &PTR__ProceduralPlacementRaycastObjectsMask_00fe2740;
  *(undefined8 *)(this + 0xf8) = 0;
  *(ProceduralPlacementRaycastObjectsMask **)(this + 0x100) = this + 0x108;
  return;
}


