// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralPlacementMask
// Entry Point: 009c9128
// Size: 184 bytes
// Signature: undefined __thiscall ~ProceduralPlacementMask(ProceduralPlacementMask * this)


/* ProceduralPlacementMask::~ProceduralPlacementMask() */

void __thiscall ProceduralPlacementMask::~ProceduralPlacementMask(ProceduralPlacementMask *this)

{
  ProceduralPlacementMask PVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__ProceduralPlacementMask_00fe24b8;
  if (*(void **)(this + 0x58) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x58));
  }
  if (((byte)this[0xb0] & 1) != 0) {
    operator_delete(*(void **)(this + 0xc0));
  }
  pvVar2 = *(void **)(this + 0x88);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x90) = pvVar2;
    operator_delete(pvVar2);
  }
  if (((byte)this[0x70] & 1) == 0) {
    PVar1 = this[0x38];
  }
  else {
    operator_delete(*(void **)(this + 0x80));
    PVar1 = this[0x38];
  }
  if (((byte)PVar1 & 1) == 0) {
    PVar1 = this[0x20];
  }
  else {
    operator_delete(*(void **)(this + 0x48));
    PVar1 = this[0x20];
  }
  if (((byte)PVar1 & 1) == 0) {
    PVar1 = this[8];
  }
  else {
    operator_delete(*(void **)(this + 0x30));
    PVar1 = this[8];
  }
  if (((byte)PVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
    return;
  }
  return;
}


