// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralPlacementFoliageObjectDesc
// Entry Point: 009e6fa8
// Size: 168 bytes
// Signature: undefined __thiscall ~ProceduralPlacementFoliageObjectDesc(ProceduralPlacementFoliageObjectDesc * this)


/* ProceduralPlacementRule::ProceduralPlacementFoliageObjectDesc::~ProceduralPlacementFoliageObjectDesc()
    */

void __thiscall
ProceduralPlacementRule::ProceduralPlacementFoliageObjectDesc::~ProceduralPlacementFoliageObjectDesc
          (ProceduralPlacementFoliageObjectDesc *this)

{
  ProceduralPlacementFoliageObjectDesc PVar1;
  
  *(undefined ***)this = &PTR__ProceduralPlacementFoliageObjectDesc_00fe2a20;
  if (*(long **)(this + 0x98) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x98) + 8))();
  }
  if (((byte)this[0x78] & 1) != 0) {
    operator_delete(*(void **)(this + 0x88));
  }
  *(undefined ***)this = &PTR__ProceduralPlacementObjectDesc_00fe29d0;
  if (((byte)this[0x48] & 1) == 0) {
    PVar1 = this[0x30];
  }
  else {
    operator_delete(*(void **)(this + 0x58));
    PVar1 = this[0x30];
  }
  if (((byte)PVar1 & 1) == 0) {
    PVar1 = this[0x10];
  }
  else {
    operator_delete(*(void **)(this + 0x40));
    PVar1 = this[0x10];
  }
  if (((byte)PVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x20));
  return;
}


