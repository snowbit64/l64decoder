// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementRaycastPhysicsMask
// Entry Point: 009e1a2c
// Size: 56 bytes
// Signature: undefined __thiscall ProceduralPlacementRaycastPhysicsMask(ProceduralPlacementRaycastPhysicsMask * this, ProceduralPlacementRaycastPhysicsMask * param_1)


/* ProceduralPlacementRaycastPhysicsMask::ProceduralPlacementRaycastPhysicsMask(ProceduralPlacementRaycastPhysicsMask
   const&) */

void __thiscall
ProceduralPlacementRaycastPhysicsMask::ProceduralPlacementRaycastPhysicsMask
          (ProceduralPlacementRaycastPhysicsMask *this,
          ProceduralPlacementRaycastPhysicsMask *param_1)

{
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,(ProceduralPlacementMask *)param_1);
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined ***)this = &PTR__ProceduralPlacementRaycastPhysicsMask_00fe2800;
  return;
}


