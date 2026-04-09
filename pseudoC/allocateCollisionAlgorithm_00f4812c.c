// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocateCollisionAlgorithm
// Entry Point: 00f4812c
// Size: 76 bytes
// Signature: undefined __thiscall allocateCollisionAlgorithm(btCollisionDispatcher * this, int param_1)


/* btCollisionDispatcher::allocateCollisionAlgorithm(int) */

void __thiscall
btCollisionDispatcher::allocateCollisionAlgorithm(btCollisionDispatcher *this,int param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(this + 0x70);
  if (*(int *)(lVar1 + 8) != 0) {
    uVar2 = **(undefined8 **)(lVar1 + 0x10);
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    return;
  }
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
                    /* WARNING: Could not recover jumptable at 0x00f48174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_01048e38)((long)param_1,0x10);
  return;
}


