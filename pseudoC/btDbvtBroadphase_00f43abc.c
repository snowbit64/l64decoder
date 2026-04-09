// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btDbvtBroadphase
// Entry Point: 00f43abc
// Size: 132 bytes
// Signature: undefined __thiscall ~btDbvtBroadphase(btDbvtBroadphase * this)


/* btDbvtBroadphase::~btDbvtBroadphase() */

void __thiscall btDbvtBroadphase::~btDbvtBroadphase(btDbvtBroadphase *this)

{
  *(undefined ***)this = &PTR__btDbvtBroadphase_01018e18;
  if (this[0x11c] != (btDbvtBroadphase)0x0) {
    (**(code **)**(undefined8 **)(this + 0xe0))();
    if (*(long *)(this + 0xe0) != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
  }
  btDbvt::~btDbvt((btDbvt *)(this + 0x68));
  btDbvt::~btDbvt((btDbvt *)(this + 8));
  operator_delete(this);
  return;
}


