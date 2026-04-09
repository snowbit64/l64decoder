// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btDbvtNodeEnumerator
// Entry Point: 00f43150
// Size: 108 bytes
// Signature: undefined __thiscall ~btDbvtNodeEnumerator(btDbvtNodeEnumerator * this)


/* btDbvtNodeEnumerator::~btDbvtNodeEnumerator() */

void __thiscall btDbvtNodeEnumerator::~btDbvtNodeEnumerator(btDbvtNodeEnumerator *this)

{
  *(undefined ***)this = &PTR__btDbvtNodeEnumerator_01018db8;
  if ((*(long *)(this + 0x18) != 0) && (this[0x20] != (btDbvtNodeEnumerator)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x20] = (btDbvtNodeEnumerator)0x1;
  return;
}


