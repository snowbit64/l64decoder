// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyFromArray
// Entry Point: 009b2b8c
// Size: 340 bytes
// Signature: undefined __thiscall copyFromArray(btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData> * this, btAlignedObjectArray * param_1)


/* btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData>::copyFromArray(btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData>
   const&) */

void __thiscall
btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData>::copyFromArray
          (btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData> *this,
          btAlignedObjectArray *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar3 = *(uint *)(param_1 + 4);
  uVar4 = *(uint *)(this + 4);
  if ((int)uVar4 < (int)uVar3) {
    lVar8 = (long)(int)uVar4;
    if (*(int *)(this + 8) < (int)uVar3) {
      if (uVar3 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = btAlignedAllocInternal((long)(int)uVar3 * 0x28,0x10);
        uVar4 = *(uint *)(this + 4);
      }
      if (0 < (int)uVar4) {
        lVar6 = 0;
        do {
          puVar1 = (undefined8 *)(lVar5 + lVar6);
          puVar2 = (undefined8 *)(*(long *)(this + 0x10) + lVar6);
          lVar6 = lVar6 + 0x28;
          uVar11 = *puVar2;
          uVar10 = puVar2[3];
          uVar9 = puVar2[2];
          uVar7 = puVar2[4];
          puVar1[1] = puVar2[1];
          *puVar1 = uVar11;
          puVar1[3] = uVar10;
          puVar1[2] = uVar9;
          puVar1[4] = uVar7;
        } while ((ulong)uVar4 * 0x28 - lVar6 != 0);
      }
      if ((*(void **)(this + 0x10) != (void *)0x0) &&
         (this[0x18] !=
          (btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData>)0x0)) {
        btAlignedFreeInternal(*(void **)(this + 0x10));
      }
      *(long *)(this + 0x10) = lVar5;
      *(uint *)(this + 8) = uVar3;
      this[0x18] = (btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData>)0x1;
    }
    lVar5 = (int)uVar3 - lVar8;
    lVar8 = lVar8 * 0x28;
    do {
      lVar5 = lVar5 + -1;
      puVar1 = (undefined8 *)(*(long *)(this + 0x10) + lVar8);
      lVar8 = lVar8 + 0x28;
      puVar1[4] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
    } while (lVar5 != 0);
  }
  *(uint *)(this + 4) = uVar3;
  if (0 < (int)uVar3) {
    lVar8 = 0;
    lVar5 = *(long *)(this + 0x10);
    do {
      puVar1 = (undefined8 *)(lVar5 + lVar8);
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar8);
      lVar8 = lVar8 + 0x28;
      uVar11 = *puVar2;
      uVar10 = puVar2[3];
      uVar9 = puVar2[2];
      uVar7 = puVar2[4];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar11;
      puVar1[3] = uVar10;
      puVar1[2] = uVar9;
      puVar1[4] = uVar7;
    } while ((ulong)uVar3 * 0x28 - lVar8 != 0);
  }
  return;
}


