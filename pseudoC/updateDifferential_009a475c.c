// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateDifferential
// Entry Point: 009a475c
// Size: 144 bytes
// Signature: undefined __thiscall updateDifferential(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, UpdateDifferential * param_2)


/* Bt2ScenegraphPhysicsContext::updateDifferential(TransformGroup*,
   Bt2ScenegraphPhysicsContext::UpdateDifferential const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::updateDifferential
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,UpdateDifferential *param_2)

{
  long lVar1;
  ulong uVar2;
  Bt2ScenegraphPhysicsContext *pBVar3;
  Bt2ScenegraphPhysicsContext *pBVar4;
  
  lVar1 = RawTransformGroup::getPhysicsObject();
  uVar2 = *(ulong *)(lVar1 + 0x30);
  if (((uVar2 != 0) && ((*(byte *)(uVar2 + 0xe0) & 3) == 0)) &&
     (pBVar4 = *(Bt2ScenegraphPhysicsContext **)(this + 400),
     pBVar4 != (Bt2ScenegraphPhysicsContext *)0x0)) {
    pBVar3 = this + 400;
    do {
      if (*(ulong *)(pBVar4 + 0x20) >= uVar2) {
        pBVar3 = pBVar4;
      }
      pBVar4 = *(Bt2ScenegraphPhysicsContext **)
                (pBVar4 + (ulong)(*(ulong *)(pBVar4 + 0x20) < uVar2) * 8);
    } while (pBVar4 != (Bt2ScenegraphPhysicsContext *)0x0);
    if ((pBVar3 != this + 400) && (*(ulong *)(pBVar3 + 0x20) <= uVar2)) {
      Bt2RaycastVehicle::updateDifferential
                (*(Bt2RaycastVehicle **)(pBVar3 + 0x28),*(uint *)param_2,*(float *)(param_2 + 4),
                 *(float *)(param_2 + 8));
      return;
    }
  }
  return;
}


