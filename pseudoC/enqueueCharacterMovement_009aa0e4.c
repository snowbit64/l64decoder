// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueCharacterMovement
// Entry Point: 009aa0e4
// Size: 80 bytes
// Signature: undefined __thiscall enqueueCharacterMovement(Bt2ScenegraphPhysicsContext * this, uint param_1, Vector3 * param_2, uint param_3)


/* Bt2ScenegraphPhysicsContext::enqueueCharacterMovement(unsigned int, Vector3 const&, unsigned int)
    */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueCharacterMovement
          (Bt2ScenegraphPhysicsContext *this,uint param_1,Vector3 *param_2,uint param_3)

{
  Bt2ScenegraphPhysicsContext *pBVar1;
  Bt2ScenegraphPhysicsContext *pBVar2;
  
  pBVar2 = *(Bt2ScenegraphPhysicsContext **)(this + 0x330);
  if (pBVar2 != (Bt2ScenegraphPhysicsContext *)0x0) {
    pBVar1 = this + 0x330;
    do {
      if (*(uint *)(pBVar2 + 0x20) >= param_1) {
        pBVar1 = pBVar2;
      }
      pBVar2 = *(Bt2ScenegraphPhysicsContext **)
                (pBVar2 + (ulong)(*(uint *)(pBVar2 + 0x20) < param_1) * 8);
    } while (pBVar2 != (Bt2ScenegraphPhysicsContext *)0x0);
    if ((pBVar1 != this + 0x330) && (*(uint *)(pBVar1 + 0x20) <= param_1)) {
      Bt2PhysicsCharacterController::enqueueCharacterMovement
                (*(Bt2PhysicsCharacterController **)(pBVar1 + 0x28),param_2,param_3);
      return;
    }
  }
  return;
}


