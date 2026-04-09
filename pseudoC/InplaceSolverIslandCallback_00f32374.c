// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~InplaceSolverIslandCallback
// Entry Point: 00f32374
// Size: 216 bytes
// Signature: undefined __thiscall ~InplaceSolverIslandCallback(InplaceSolverIslandCallback * this)


/* InplaceSolverIslandCallback::~InplaceSolverIslandCallback() */

void __thiscall
InplaceSolverIslandCallback::~InplaceSolverIslandCallback(InplaceSolverIslandCallback *this)

{
  *(undefined ***)this = &PTR__InplaceSolverIslandCallback_01018b70;
  if ((*(long *)(this + 0x88) != 0) && (this[0x90] != (InplaceSolverIslandCallback)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  this[0x90] = (InplaceSolverIslandCallback)0x1;
  if ((*(long *)(this + 0x68) != 0) && (this[0x70] != (InplaceSolverIslandCallback)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x70] = (InplaceSolverIslandCallback)0x1;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  if ((*(long *)(this + 0x48) != 0) && (this[0x50] != (InplaceSolverIslandCallback)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  this[0x50] = (InplaceSolverIslandCallback)0x1;
  return;
}


