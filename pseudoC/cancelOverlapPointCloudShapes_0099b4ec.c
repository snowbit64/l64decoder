// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cancelOverlapPointCloudShapes
// Entry Point: 0099b4ec
// Size: 440 bytes
// Signature: undefined __thiscall cancelOverlapPointCloudShapes(Bt2ScenegraphPhysicsContext * this, IPhysicsEntityReport * param_1)


/* Bt2ScenegraphPhysicsContext::cancelOverlapPointCloudShapes(IPhysicsEntityReport*) */

void __thiscall
Bt2ScenegraphPhysicsContext::cancelOverlapPointCloudShapes
          (Bt2ScenegraphPhysicsContext *this,IPhysicsEntityReport *param_1)

{
  IPhysicsEntityReport **ppIVar1;
  bool bVar2;
  IPhysicsEntityReport *pIVar3;
  IPhysicsEntityReport **ppIVar4;
  IPhysicsEntityReport **ppIVar5;
  IPhysicsEntityReport **ppIVar6;
  IPhysicsEntityReport **ppIVar7;
  IPhysicsEntityReport *pIVar8;
  
  ppIVar5 = *(IPhysicsEntityReport ***)(this + 0x418);
  ppIVar4 = *(IPhysicsEntityReport ***)(this + 0x420);
  if (ppIVar5 != ppIVar4) {
    do {
      if (*ppIVar5 == param_1) {
        ppIVar6 = ppIVar5;
        ppIVar7 = ppIVar5;
        if (ppIVar5 + 0x16 == ppIVar4) {
LAB_0099b604:
          do {
            ppIVar4 = ppIVar4 + -0x16;
            FUN_009b213c(this + 0x428,ppIVar4);
          } while (ppIVar4 != ppIVar7);
        }
        else {
          do {
            *ppIVar6 = ppIVar6[0x16];
            btAlignedObjectArray<btCollisionObject*>::copyFromArray
                      ((btAlignedObjectArray<btCollisionObject*> *)(ppIVar6 + 1),
                       (btAlignedObjectArray *)(ppIVar6 + 0x17));
            btAlignedObjectArray<btCollisionObject*>::copyFromArray
                      ((btAlignedObjectArray<btCollisionObject*> *)(ppIVar6 + 5),
                       (btAlignedObjectArray *)(ppIVar6 + 0x1b));
            pIVar3 = ppIVar6[0x12];
            ppIVar6[10] = ppIVar6[0x20];
            ppIVar6[9] = ppIVar6[0x1f];
            ppIVar6[0xc] = ppIVar6[0x22];
            ppIVar6[0xb] = ppIVar6[0x21];
            ppIVar6[0xe] = ppIVar6[0x24];
            ppIVar6[0xd] = ppIVar6[0x23];
            ppIVar6[0x10] = ppIVar6[0x26];
            ppIVar6[0xf] = ppIVar6[0x25];
            *(undefined4 *)(ppIVar6 + 0x11) = *(undefined4 *)(ppIVar6 + 0x27);
            if (pIVar3 != (IPhysicsEntityReport *)0x0) {
              ppIVar6[0x13] = pIVar3;
              operator_delete(pIVar3);
              ppIVar6[0x13] = (IPhysicsEntityReport *)0x0;
              ppIVar6[0x14] = (IPhysicsEntityReport *)0x0;
            }
            pIVar8 = ppIVar6[0x29];
            pIVar3 = ppIVar6[0x28];
            ppIVar7 = ppIVar6 + 0x16;
            ppIVar6[0x28] = (IPhysicsEntityReport *)0x0;
            ppIVar6[0x29] = (IPhysicsEntityReport *)0x0;
            ppIVar6[0x14] = ppIVar6[0x2a];
            ppIVar6[0x2a] = (IPhysicsEntityReport *)0x0;
            ppIVar6[0x13] = pIVar8;
            ppIVar6[0x12] = pIVar3;
            *(undefined4 *)(ppIVar6 + 0x15) = *(undefined4 *)(ppIVar6 + 0x2b);
            ppIVar1 = ppIVar6 + 0x2c;
            *(undefined4 *)((long)ppIVar6 + 0xab) = *(undefined4 *)((long)ppIVar6 + 0x15b);
            ppIVar6 = ppIVar7;
          } while (ppIVar1 != ppIVar4);
          ppIVar4 = *(IPhysicsEntityReport ***)(this + 0x420);
          if (ppIVar7 != ppIVar4) goto LAB_0099b604;
        }
        ppIVar4 = ppIVar7;
        *(IPhysicsEntityReport ***)(this + 0x420) = ppIVar4;
      }
      else {
        ppIVar5 = ppIVar5 + 0x16;
      }
    } while (ppIVar5 != ppIVar4);
  }
  ppIVar5 = *(IPhysicsEntityReport ***)(this + 0x438);
  if (*(IPhysicsEntityReport ***)(this + 0x430) != ppIVar5) {
    bVar2 = false;
    ppIVar4 = *(IPhysicsEntityReport ***)(this + 0x430);
    do {
      while (*ppIVar4 == param_1) {
        bVar2 = true;
        ppIVar7 = ppIVar4 + 0x16;
        *ppIVar4 = (IPhysicsEntityReport *)0x0;
        ppIVar4 = ppIVar7;
        if (ppIVar7 == ppIVar5) goto LAB_0099b670;
      }
      ppIVar4 = ppIVar4 + 0x16;
    } while (ppIVar4 != ppIVar5);
    if (bVar2) {
LAB_0099b670:
      DataMemoryBarrier(2,3);
      while (*(IPhysicsEntityReport **)(this + 0x448) == param_1) {
        Yield();
      }
      DataMemoryBarrier(2,1);
    }
  }
  return;
}


