// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cancelOverlapSphereShapes
// Entry Point: 0099b38c
// Size: 348 bytes
// Signature: undefined __thiscall cancelOverlapSphereShapes(Bt2ScenegraphPhysicsContext * this, IPhysicsEntityReport * param_1)


/* Bt2ScenegraphPhysicsContext::cancelOverlapSphereShapes(IPhysicsEntityReport*) */

void __thiscall
Bt2ScenegraphPhysicsContext::cancelOverlapSphereShapes
          (Bt2ScenegraphPhysicsContext *this,IPhysicsEntityReport *param_1)

{
  bool bVar1;
  IPhysicsEntityReport **ppIVar2;
  IPhysicsEntityReport **ppIVar3;
  IPhysicsEntityReport **ppIVar4;
  IPhysicsEntityReport **ppIVar5;
  IPhysicsEntityReport **ppIVar6;
  
  ppIVar2 = *(IPhysicsEntityReport ***)(this + 0x3e0);
  ppIVar3 = *(IPhysicsEntityReport ***)(this + 1000);
  if (ppIVar2 != ppIVar3) {
    do {
      if (*ppIVar2 == param_1) {
        ppIVar4 = ppIVar3;
        ppIVar5 = ppIVar2;
        ppIVar6 = ppIVar2;
        if (ppIVar2 + 8 == ppIVar3) {
LAB_0099b454:
          do {
            if ((ppIVar4[-5] != (IPhysicsEntityReport *)0x0) && (*(char *)(ppIVar4 + -4) != '\0')) {
                    /* try { // try from 0099b464 to 0099b467 has its CatchHandler @ 0099b4e8 */
              btAlignedFreeInternal(ppIVar4[-5]);
            }
            ppIVar5 = ppIVar4 + -8;
            *(undefined *)(ppIVar4 + -4) = 1;
            ppIVar4[-5] = (IPhysicsEntityReport *)0x0;
            *(undefined8 *)((long)ppIVar4 + -0x34) = 0;
            ppIVar4 = ppIVar5;
            ppIVar3 = ppIVar6;
          } while (ppIVar5 != ppIVar6);
        }
        else {
          do {
            ppIVar6 = ppIVar5 + 8;
            *ppIVar5 = *ppIVar6;
            btAlignedObjectArray<btCollisionObject*>::copyFromArray
                      ((btAlignedObjectArray<btCollisionObject*> *)(ppIVar5 + 1),
                       (btAlignedObjectArray *)(ppIVar5 + 9));
            ppIVar4 = ppIVar5 + 0x10;
            ppIVar5[6] = ppIVar5[0xe];
            ppIVar5[5] = ppIVar5[0xd];
            ppIVar5[7] = ppIVar5[0xf];
            ppIVar5 = ppIVar6;
          } while (ppIVar4 != ppIVar3);
          ppIVar4 = *(IPhysicsEntityReport ***)(this + 1000);
          ppIVar3 = ppIVar6;
          if (ppIVar6 != *(IPhysicsEntityReport ***)(this + 1000)) goto LAB_0099b454;
        }
        *(IPhysicsEntityReport ***)(this + 1000) = ppIVar3;
      }
      else {
        ppIVar2 = ppIVar2 + 8;
      }
    } while (ppIVar2 != ppIVar3);
  }
  ppIVar2 = *(IPhysicsEntityReport ***)(this + 0x400);
  if (*(IPhysicsEntityReport ***)(this + 0x3f8) != ppIVar2) {
    bVar1 = false;
    ppIVar3 = *(IPhysicsEntityReport ***)(this + 0x3f8);
    do {
      while (*ppIVar3 == param_1) {
        bVar1 = true;
        ppIVar4 = ppIVar3 + 8;
        *ppIVar3 = (IPhysicsEntityReport *)0x0;
        ppIVar3 = ppIVar4;
        if (ppIVar4 == ppIVar2) goto LAB_0099b4b4;
      }
      ppIVar3 = ppIVar3 + 8;
    } while (ppIVar3 != ppIVar2);
    if (bVar1) {
LAB_0099b4b4:
      DataMemoryBarrier(2,3);
      while (*(IPhysicsEntityReport **)(this + 0x410) == param_1) {
        Yield();
      }
      DataMemoryBarrier(2,1);
    }
  }
  return;
}


