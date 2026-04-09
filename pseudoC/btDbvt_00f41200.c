// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btDbvt
// Entry Point: 00f41200
// Size: 280 bytes
// Signature: undefined __thiscall ~btDbvt(btDbvt * this)


/* btDbvt::~btDbvt() */

void __thiscall btDbvt::~btDbvt(btDbvt *this)

{
  if (*(long *)this != 0) {
    FUN_00f41318(this);
  }
  if (*(long *)(this + 8) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  if ((*(long *)(this + 0x30) != 0) && (this[0x38] != (btDbvt)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x38] = (btDbvt)0x1;
  *(undefined4 *)(this + 0x18) = 0;
  if ((*(long *)(this + 0x50) == 0) || (this[0x58] == (btDbvt)0x0)) {
    this[0x58] = (btDbvt)0x1;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined4 *)(this + 0x44) = 0;
    *(undefined4 *)(this + 0x48) = 0;
  }
  else {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined4 *)(this + 0x44) = 0;
    *(undefined4 *)(this + 0x48) = 0;
    this[0x58] = (btDbvt)0x1;
    if ((*(long *)(this + 0x30) != 0) && (this[0x38] != (btDbvt)0x0)) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
  }
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x38] = (btDbvt)0x1;
  return;
}


