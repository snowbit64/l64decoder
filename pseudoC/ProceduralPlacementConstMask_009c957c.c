// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementConstMask
// Entry Point: 009c957c
// Size: 60 bytes
// Signature: undefined __thiscall ProceduralPlacementConstMask(ProceduralPlacementConstMask * this, ProceduralPlacementConstMask * param_1)


/* ProceduralPlacementConstMask::ProceduralPlacementConstMask(ProceduralPlacementConstMask const&)
    */

void __thiscall
ProceduralPlacementConstMask::ProceduralPlacementConstMask
          (ProceduralPlacementConstMask *this,ProceduralPlacementConstMask *param_1)

{
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,(ProceduralPlacementMask *)param_1);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined ***)this = &PTR__ProceduralPlacementConstMask_00fe1fe8;
  return;
}


