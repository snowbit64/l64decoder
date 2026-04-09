// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setup
// Entry Point: 00f37718
// Size: 344 bytes
// Signature: undefined __thiscall setup(InplaceSolverIslandCallback * this, btContactSolverInfo * param_1, btTypedConstraint * * param_2, int param_3, btIDebugDraw * param_4)


/* InplaceSolverIslandCallback::setup(btContactSolverInfo*, btTypedConstraint**, int, btIDebugDraw*)
    */

void __thiscall
InplaceSolverIslandCallback::setup
          (InplaceSolverIslandCallback *this,btContactSolverInfo *param_1,
          btTypedConstraint **param_2,int param_3,btIDebugDraw *param_4)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = (long)*(int *)(this + 0x3c);
  *(btContactSolverInfo **)(this + 8) = param_1;
  *(btTypedConstraint ***)(this + 0x18) = param_2;
  *(int *)(this + 0x20) = param_3;
  *(btIDebugDraw **)(this + 0x28) = param_4;
  if (*(int *)(this + 0x3c) < 0) {
    if (*(int *)(this + 0x40) < 0) {
      if ((*(long *)(this + 0x48) != 0) && (this[0x50] != (InplaceSolverIslandCallback)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(undefined8 *)(this + 0x48) = 0;
      *(undefined4 *)(this + 0x40) = 0;
      this[0x50] = (InplaceSolverIslandCallback)0x1;
    }
    do {
      *(undefined8 *)(*(long *)(this + 0x48) + lVar2 * 8) = 0;
      bVar1 = lVar2 != -1;
      lVar2 = lVar2 + 1;
    } while (bVar1);
  }
  lVar2 = (long)*(int *)(this + 0x5c);
  *(undefined4 *)(this + 0x3c) = 0;
  if (*(int *)(this + 0x5c) < 0) {
    if (*(int *)(this + 0x60) < 0) {
      if ((*(long *)(this + 0x68) != 0) && (this[0x70] != (InplaceSolverIslandCallback)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(undefined8 *)(this + 0x68) = 0;
      *(undefined4 *)(this + 0x60) = 0;
      this[0x70] = (InplaceSolverIslandCallback)0x1;
    }
    do {
      *(undefined8 *)(*(long *)(this + 0x68) + lVar2 * 8) = 0;
      bVar1 = lVar2 != -1;
      lVar2 = lVar2 + 1;
    } while (bVar1);
  }
  lVar2 = (long)*(int *)(this + 0x7c);
  *(undefined4 *)(this + 0x5c) = 0;
  if (*(int *)(this + 0x7c) < 0) {
    if (*(int *)(this + 0x80) < 0) {
      if ((*(long *)(this + 0x88) != 0) && (this[0x90] != (InplaceSolverIslandCallback)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(undefined8 *)(this + 0x88) = 0;
      *(undefined4 *)(this + 0x80) = 0;
      this[0x90] = (InplaceSolverIslandCallback)0x1;
    }
    do {
      *(undefined8 *)(*(long *)(this + 0x88) + lVar2 * 8) = 0;
      bVar1 = lVar2 != -1;
      lVar2 = lVar2 + 1;
    } while (bVar1);
  }
  *(undefined4 *)(this + 0x7c) = 0;
  return;
}


