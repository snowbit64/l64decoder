// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralPlacementObjectDesc
// Entry Point: 009e6eb8
// Size: 116 bytes
// Signature: undefined __thiscall ~ProceduralPlacementObjectDesc(ProceduralPlacementObjectDesc * this)


/* ProceduralPlacementRule::ProceduralPlacementObjectDesc::~ProceduralPlacementObjectDesc() */

void __thiscall
ProceduralPlacementRule::ProceduralPlacementObjectDesc::~ProceduralPlacementObjectDesc
          (ProceduralPlacementObjectDesc *this)

{
  ProceduralPlacementObjectDesc PVar1;
  
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


