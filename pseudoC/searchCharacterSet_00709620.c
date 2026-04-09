// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: searchCharacterSet
// Entry Point: 00709620
// Size: 104 bytes
// Signature: undefined __thiscall searchCharacterSet(AnimalLocomotionSystem * this, TransformGroup * param_1)


/* AnimalLocomotionSystem::searchCharacterSet(TransformGroup*) */

long __thiscall
AnimalLocomotionSystem::searchCharacterSet(AnimalLocomotionSystem *this,TransformGroup *param_1)

{
  long lVar1;
  TransformGroup **ppTVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x110) == 0) {
    ppTVar2 = *(TransformGroup ***)(param_1 + 0x28);
    if ((int)((ulong)(*(long *)(param_1 + 0x30) - (long)ppTVar2) >> 3) != 0) {
      uVar3 = (ulong)(*(long *)(param_1 + 0x30) - (long)ppTVar2) >> 3 & 0xffffffff;
      do {
        lVar1 = searchCharacterSet(this,*ppTVar2);
        if (lVar1 != 0) {
          return lVar1;
        }
        ppTVar2 = ppTVar2 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x110) + -0x20;
  }
  return lVar1;
}


