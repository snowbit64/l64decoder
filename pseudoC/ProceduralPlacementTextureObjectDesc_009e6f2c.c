// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralPlacementTextureObjectDesc
// Entry Point: 009e6f2c
// Size: 116 bytes
// Signature: undefined __thiscall ~ProceduralPlacementTextureObjectDesc(ProceduralPlacementTextureObjectDesc * this)


/* ProceduralPlacementRule::ProceduralPlacementTextureObjectDesc::~ProceduralPlacementTextureObjectDesc()
    */

void __thiscall
ProceduralPlacementRule::ProceduralPlacementTextureObjectDesc::~ProceduralPlacementTextureObjectDesc
          (ProceduralPlacementTextureObjectDesc *this)

{
  ProceduralPlacementTextureObjectDesc PVar1;
  
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
  if (((byte)PVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  operator_delete(this);
  return;
}


