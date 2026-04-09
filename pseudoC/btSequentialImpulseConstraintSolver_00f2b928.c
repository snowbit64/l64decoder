// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btSequentialImpulseConstraintSolver
// Entry Point: 00f2b928
// Size: 520 bytes
// Signature: undefined __thiscall ~btSequentialImpulseConstraintSolver(btSequentialImpulseConstraintSolver * this)


/* btSequentialImpulseConstraintSolver::~btSequentialImpulseConstraintSolver() */

void __thiscall
btSequentialImpulseConstraintSolver::~btSequentialImpulseConstraintSolver
          (btSequentialImpulseConstraintSolver *this)

{
  *(undefined ***)this = &PTR__btSequentialImpulseConstraintSolver_01018920;
  if ((*(long *)(this + 0x118) != 0) && (this[0x120] != (btSequentialImpulseConstraintSolver)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  this[0x120] = (btSequentialImpulseConstraintSolver)0x1;
  *(undefined4 *)(this + 0x10c) = 0;
  if ((*(long *)(this + 0xf8) != 0) && (this[0x100] != (btSequentialImpulseConstraintSolver)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x100] = (btSequentialImpulseConstraintSolver)0x1;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  if ((*(long *)(this + 0xd8) != 0) && (this[0xe0] != (btSequentialImpulseConstraintSolver)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  this[0xe0] = (btSequentialImpulseConstraintSolver)0x1;
  if ((*(long *)(this + 0xb8) != 0) && (this[0xc0] != (btSequentialImpulseConstraintSolver)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0xc0] = (btSequentialImpulseConstraintSolver)0x1;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  if ((*(long *)(this + 0x98) != 0) && (this[0xa0] != (btSequentialImpulseConstraintSolver)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  this[0xa0] = (btSequentialImpulseConstraintSolver)0x1;
  if ((*(long *)(this + 0x78) != 0) && (this[0x80] != (btSequentialImpulseConstraintSolver)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x80] = (btSequentialImpulseConstraintSolver)0x1;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  if ((*(long *)(this + 0x58) != 0) && (this[0x60] != (btSequentialImpulseConstraintSolver)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x60] = (btSequentialImpulseConstraintSolver)0x1;
  if ((*(long *)(this + 0x38) != 0) && (this[0x40] != (btSequentialImpulseConstraintSolver)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x40] = (btSequentialImpulseConstraintSolver)0x1;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  if ((*(long *)(this + 0x18) != 0) && (this[0x20] != (btSequentialImpulseConstraintSolver)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x20] = (btSequentialImpulseConstraintSolver)0x1;
  return;
}


