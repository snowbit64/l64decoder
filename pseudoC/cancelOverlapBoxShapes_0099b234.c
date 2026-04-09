// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cancelOverlapBoxShapes
// Entry Point: 0099b234
// Size: 344 bytes
// Signature: undefined __thiscall cancelOverlapBoxShapes(Bt2ScenegraphPhysicsContext * this, IPhysicsEntityReport * param_1)


/* Bt2ScenegraphPhysicsContext::cancelOverlapBoxShapes(IPhysicsEntityReport*) */

void __thiscall
Bt2ScenegraphPhysicsContext::cancelOverlapBoxShapes
          (Bt2ScenegraphPhysicsContext *this,IPhysicsEntityReport *param_1)

{
  bool bVar1;
  IPhysicsEntityReport **ppIVar2;
  IPhysicsEntityReport **ppIVar3;
  IPhysicsEntityReport **ppIVar4;
  IPhysicsEntityReport **ppIVar5;
  
  ppIVar4 = *(IPhysicsEntityReport ***)(this + 0x3a8);
  ppIVar5 = *(IPhysicsEntityReport ***)(this + 0x3b0);
  if (ppIVar4 != ppIVar5) {
    do {
      if (*ppIVar4 == param_1) {
        ppIVar3 = ppIVar4 + 0x14;
        ppIVar2 = ppIVar4;
        while (ppIVar3 != ppIVar5) {
          *ppIVar2 = ppIVar2[0x14];
          btAlignedObjectArray<btCollisionObject*>::copyFromArray
                    ((btAlignedObjectArray<btCollisionObject*> *)(ppIVar2 + 1),
                     (btAlignedObjectArray *)(ppIVar2 + 0x15));
          btAlignedObjectArray<btCollisionObject*>::copyFromArray
                    ((btAlignedObjectArray<btCollisionObject*> *)(ppIVar2 + 5),
                     (btAlignedObjectArray *)(ppIVar2 + 0x19));
          ppIVar2[10] = ppIVar2[0x1e];
          ppIVar2[9] = ppIVar2[0x1d];
          ppIVar2[0xc] = ppIVar2[0x20];
          ppIVar2[0xb] = ppIVar2[0x1f];
          ppIVar2[0xe] = ppIVar2[0x22];
          ppIVar2[0xd] = ppIVar2[0x21];
          ppIVar2[0x10] = ppIVar2[0x24];
          ppIVar2[0xf] = ppIVar2[0x23];
          ppIVar2[0x12] = ppIVar2[0x26];
          ppIVar2[0x11] = ppIVar2[0x25];
          *(undefined4 *)(ppIVar2 + 0x13) = *(undefined4 *)(ppIVar2 + 0x27);
          ppIVar3 = ppIVar2 + 0x28;
          ppIVar2 = ppIVar2 + 0x14;
        }
        FUN_009b3254(this + 0x3a8,ppIVar2);
        ppIVar5 = *(IPhysicsEntityReport ***)(this + 0x3b0);
      }
      else {
        ppIVar4 = ppIVar4 + 0x14;
      }
    } while (ppIVar4 != ppIVar5);
  }
  ppIVar4 = *(IPhysicsEntityReport ***)(this + 0x3c8);
  if (*(IPhysicsEntityReport ***)(this + 0x3c0) != ppIVar4) {
    bVar1 = false;
    ppIVar5 = *(IPhysicsEntityReport ***)(this + 0x3c0);
    do {
      while (*ppIVar5 == param_1) {
        bVar1 = true;
        ppIVar3 = ppIVar5 + 0x14;
        *ppIVar5 = (IPhysicsEntityReport *)0x0;
        ppIVar5 = ppIVar3;
        if (ppIVar3 == ppIVar4) goto LAB_0099b358;
      }
      ppIVar5 = ppIVar5 + 0x14;
    } while (ppIVar5 != ppIVar4);
    if (!bVar1) {
      return;
    }
LAB_0099b358:
    DataMemoryBarrier(2,3);
    while (*(IPhysicsEntityReport **)(this + 0x3d8) == param_1) {
      Yield();
    }
    DataMemoryBarrier(2,1);
  }
  return;
}


