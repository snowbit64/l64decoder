// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralPlacementScriptArgDesc
// Entry Point: 009d6f64
// Size: 100 bytes
// Signature: undefined __thiscall ~ProceduralPlacementScriptArgDesc(ProceduralPlacementScriptArgDesc * this)


/* ProceduralPlacementRule::ProceduralPlacementScriptArgDesc::~ProceduralPlacementScriptArgDesc() */

void __thiscall
ProceduralPlacementRule::ProceduralPlacementScriptArgDesc::~ProceduralPlacementScriptArgDesc
          (ProceduralPlacementScriptArgDesc *this)

{
  ProceduralPlacementScriptArgDesc PVar1;
  
  if (((byte)this[0x30] & 1) == 0) {
    PVar1 = this[0x18];
  }
  else {
    operator_delete(*(void **)(this + 0x40));
    PVar1 = this[0x18];
  }
  if (((byte)PVar1 & 1) == 0) {
    PVar1 = *this;
  }
  else {
    operator_delete(*(void **)(this + 0x28));
    PVar1 = *this;
  }
  if (((byte)PVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


