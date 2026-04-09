// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCharacterControllerCollisionFlags
// Entry Point: 009aa2ec
// Size: 76 bytes
// Signature: undefined __thiscall getCharacterControllerCollisionFlags(Bt2ScenegraphPhysicsContext * this, uint param_1)


/* Bt2ScenegraphPhysicsContext::getCharacterControllerCollisionFlags(unsigned int) */

undefined8 __thiscall
Bt2ScenegraphPhysicsContext::getCharacterControllerCollisionFlags
          (Bt2ScenegraphPhysicsContext *this,uint param_1)

{
  undefined8 uVar1;
  Bt2ScenegraphPhysicsContext *pBVar2;
  Bt2ScenegraphPhysicsContext *pBVar3;
  
  pBVar3 = *(Bt2ScenegraphPhysicsContext **)(this + 0x330);
  if (pBVar3 != (Bt2ScenegraphPhysicsContext *)0x0) {
    pBVar2 = this + 0x330;
    do {
      if (*(uint *)(pBVar3 + 0x20) >= param_1) {
        pBVar2 = pBVar3;
      }
      pBVar3 = *(Bt2ScenegraphPhysicsContext **)
                (pBVar3 + (ulong)(*(uint *)(pBVar3 + 0x20) < param_1) * 8);
    } while (pBVar3 != (Bt2ScenegraphPhysicsContext *)0x0);
    if ((pBVar2 != this + 0x330) && (*(uint *)(pBVar2 + 0x20) <= param_1)) {
      uVar1 = Bt2PhysicsCharacterController::getCollisionFlags();
      return uVar1;
    }
  }
  return 0;
}


