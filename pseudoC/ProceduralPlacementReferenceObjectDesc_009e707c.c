// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralPlacementReferenceObjectDesc
// Entry Point: 009e707c
// Size: 148 bytes
// Signature: undefined __thiscall ~ProceduralPlacementReferenceObjectDesc(ProceduralPlacementReferenceObjectDesc * this)


/* ProceduralPlacementRule::ProceduralPlacementReferenceObjectDesc::~ProceduralPlacementReferenceObjectDesc()
    */

void __thiscall
ProceduralPlacementRule::ProceduralPlacementReferenceObjectDesc::
~ProceduralPlacementReferenceObjectDesc(ProceduralPlacementReferenceObjectDesc *this)

{
  ProceduralPlacementReferenceObjectDesc PVar1;
  
  *(undefined ***)this = &PTR__ProceduralPlacementReferenceObjectDesc_00fe2a48;
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


