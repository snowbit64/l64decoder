// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cancelRaycastShapes
// Entry Point: 0099b0d8
// Size: 344 bytes
// Signature: undefined __thiscall cancelRaycastShapes(Bt2ScenegraphPhysicsContext * this, IRaycastReport * param_1)


/* Bt2ScenegraphPhysicsContext::cancelRaycastShapes(IRaycastReport*) */

void __thiscall
Bt2ScenegraphPhysicsContext::cancelRaycastShapes
          (Bt2ScenegraphPhysicsContext *this,IRaycastReport *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar5 = *(undefined8 **)(this + 0x450);
  puVar6 = *(undefined8 **)(this + 0x458);
  if (puVar5 != puVar6) {
    do {
      if ((IRaycastReport *)puVar5[3] == param_1) {
        puVar7 = puVar5;
        puVar8 = puVar5;
        if (puVar5 + 10 == puVar6) {
LAB_0099b1a4:
          do {
            if (((void *)puVar6[-2] != (void *)0x0) && (*(char *)(puVar6 + -1) != '\0')) {
                    /* try { // try from 0099b1b4 to 0099b1b7 has its CatchHandler @ 0099b230 */
              btAlignedFreeInternal((void *)puVar6[-2]);
            }
            puVar8 = puVar6 + -10;
            *(undefined *)(puVar6 + -1) = 1;
            puVar6[-2] = 0;
            *(undefined8 *)((long)puVar6 + -0x1c) = 0;
            puVar6 = puVar8;
          } while (puVar8 != puVar7);
        }
        else {
          do {
            puVar7 = puVar8 + 10;
            puVar8[1] = puVar8[0xb];
            *puVar8 = puVar8[10];
            puVar8[3] = puVar8[0xd];
            puVar8[2] = puVar8[0xc];
            *(undefined8 *)((long)puVar8 + 0x24) = *(undefined8 *)((long)puVar8 + 0x74);
            *(undefined8 *)((long)puVar8 + 0x1c) = *(undefined8 *)((long)puVar8 + 0x6c);
            btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData>::
            copyFromArray((btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData>
                           *)(puVar8 + 6),(btAlignedObjectArray *)(puVar8 + 0x10));
            puVar1 = puVar8 + 0x14;
            puVar8 = puVar7;
          } while (puVar1 != puVar6);
          puVar6 = *(undefined8 **)(this + 0x458);
          if (puVar7 != *(undefined8 **)(this + 0x458)) goto LAB_0099b1a4;
        }
        puVar6 = puVar7;
        *(undefined8 **)(this + 0x458) = puVar6;
      }
      else {
        puVar5 = puVar5 + 10;
      }
    } while (puVar5 != puVar6);
  }
  lVar3 = *(long *)(this + 0x468);
  lVar4 = *(long *)(this + 0x470);
  if (lVar3 != lVar4) {
    bVar2 = false;
    do {
      while (*(IRaycastReport **)(lVar3 + 0x18) == param_1) {
        *(undefined8 *)(lVar3 + 0x18) = 0;
        lVar3 = lVar3 + 0x50;
        bVar2 = true;
        if (lVar3 == lVar4) goto LAB_0099b208;
      }
      lVar3 = lVar3 + 0x50;
    } while (lVar3 != lVar4);
    if (bVar2) {
LAB_0099b208:
      do {
      } while (*(IRaycastReport **)(this + 0x480) == param_1);
    }
  }
  return;
}


