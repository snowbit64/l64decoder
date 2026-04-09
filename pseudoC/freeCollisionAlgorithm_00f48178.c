// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: freeCollisionAlgorithm
// Entry Point: 00f48178
// Size: 104 bytes
// Signature: undefined __thiscall freeCollisionAlgorithm(btCollisionDispatcher * this, void * param_1)


/* btCollisionDispatcher::freeCollisionAlgorithm(void*) */

void __thiscall
btCollisionDispatcher::freeCollisionAlgorithm(btCollisionDispatcher *this,void *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != (void *)0x0) {
    piVar2 = *(int **)(this + 0x70);
    if ((param_1 < *(void **)(piVar2 + 6)) ||
       ((void *)((long)*(void **)(piVar2 + 6) + (long)*piVar2 * (long)piVar2[2]) <= param_1)) {
      gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f481dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_FUN_01048e40)(param_1);
      return;
    }
    iVar1 = piVar2[2];
    *(undefined8 *)param_1 = *(undefined8 *)(piVar2 + 4);
    *(void **)(piVar2 + 4) = param_1;
    piVar2[2] = iVar1 + 1;
  }
  return;
}


