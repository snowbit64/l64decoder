// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ClearAndScatterCallScatterObjectsInMask
// Entry Point: 009d6b20
// Size: 92 bytes
// Signature: undefined __thiscall ~ClearAndScatterCallScatterObjectsInMask(ClearAndScatterCallScatterObjectsInMask * this)


/* ProceduralPlacementManager::ClearAndScatterCallScatterObjectsInMask::~ClearAndScatterCallScatterObjectsInMask()
    */

void __thiscall
ProceduralPlacementManager::ClearAndScatterCallScatterObjectsInMask::
~ClearAndScatterCallScatterObjectsInMask(ClearAndScatterCallScatterObjectsInMask *this)

{
  *(undefined ***)this = &PTR_apply_00fe22e8;
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x28));
  }
  if (((byte)this[0x48] & 1) != 0) {
    operator_delete(*(void **)(this + 0x58));
  }
  if (((byte)this[8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
  }
  operator_delete(this);
  return;
}


