// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resetVehicle
// Entry Point: 0099f6e4
// Size: 80 bytes
// Signature: undefined __thiscall resetVehicle(Bt2ScenegraphPhysicsContext * this, btRigidBody * param_1)


/* Bt2ScenegraphPhysicsContext::resetVehicle(btRigidBody*) */

void __thiscall
Bt2ScenegraphPhysicsContext::resetVehicle(Bt2ScenegraphPhysicsContext *this,btRigidBody *param_1)

{
  Bt2ScenegraphPhysicsContext *pBVar1;
  Bt2ScenegraphPhysicsContext *pBVar2;
  
  pBVar2 = *(Bt2ScenegraphPhysicsContext **)(this + 400);
  if (pBVar2 != (Bt2ScenegraphPhysicsContext *)0x0) {
    pBVar1 = this + 400;
    do {
      if (*(btRigidBody **)(pBVar2 + 0x20) >= param_1) {
        pBVar1 = pBVar2;
      }
      pBVar2 = *(Bt2ScenegraphPhysicsContext **)
                (pBVar2 + (ulong)(*(btRigidBody **)(pBVar2 + 0x20) < param_1) * 8);
    } while (pBVar2 != (Bt2ScenegraphPhysicsContext *)0x0);
    if ((pBVar1 != this + 400) && (*(btRigidBody **)(pBVar1 + 0x20) <= param_1)) {
      Bt2RaycastVehicle::resetSuspension(*(Bt2World **)(pBVar1 + 0x28));
      return;
    }
  }
  return;
}


