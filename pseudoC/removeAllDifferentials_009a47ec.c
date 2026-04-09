// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeAllDifferentials
// Entry Point: 009a47ec
// Size: 132 bytes
// Signature: undefined __cdecl removeAllDifferentials(TransformGroup * param_1)


/* Bt2ScenegraphPhysicsContext::removeAllDifferentials(TransformGroup*) */

void Bt2ScenegraphPhysicsContext::removeAllDifferentials(TransformGroup *param_1)

{
  long lVar1;
  ulong uVar2;
  TransformGroup *pTVar3;
  TransformGroup *pTVar4;
  
  lVar1 = RawTransformGroup::getPhysicsObject();
  uVar2 = *(ulong *)(lVar1 + 0x30);
  if (((uVar2 != 0) && ((*(byte *)(uVar2 + 0xe0) & 3) == 0)) &&
     (pTVar4 = *(TransformGroup **)(param_1 + 400), pTVar4 != (TransformGroup *)0x0)) {
    pTVar3 = param_1 + 400;
    do {
      if (*(ulong *)(pTVar4 + 0x20) >= uVar2) {
        pTVar3 = pTVar4;
      }
      pTVar4 = *(TransformGroup **)(pTVar4 + (ulong)(*(ulong *)(pTVar4 + 0x20) < uVar2) * 8);
    } while (pTVar4 != (TransformGroup *)0x0);
    if ((pTVar3 != param_1 + 400) && (*(ulong *)(pTVar3 + 0x20) <= uVar2)) {
      Bt2RaycastVehicle::removeAllDifferentials();
      return;
    }
  }
  return;
}


