// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btAlignedObjectArray
// Entry Point: 009b2a54
// Size: 312 bytes
// Signature: undefined __thiscall btAlignedObjectArray(btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData> * this, btAlignedObjectArray * param_1)


/* btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData>::btAlignedObjectArray(btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData>
   const&) */

void __thiscall
btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData>::btAlignedObjectArray
          (btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData> *this,
          btAlignedObjectArray *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  uVar3 = *(uint *)(param_1 + 4);
  *(undefined8 *)(this + 0x10) = 0;
  this[0x18] = (btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData>)0x1;
  if ((int)uVar3 < 1) {
    *(uint *)(this + 4) = uVar3;
  }
  else {
    lVar5 = btAlignedAllocInternal((ulong)uVar3 * 0x28,0x10);
    uVar4 = *(uint *)(this + 4);
    if (0 < (int)uVar4) {
      lVar6 = 0;
      do {
        puVar1 = (undefined8 *)(lVar5 + lVar6);
        puVar2 = (undefined8 *)(*(long *)(this + 0x10) + lVar6);
        lVar6 = lVar6 + 0x28;
        uVar11 = *puVar2;
        uVar10 = puVar2[3];
        uVar9 = puVar2[2];
        uVar8 = puVar2[4];
        puVar1[1] = puVar2[1];
        *puVar1 = uVar11;
        puVar1[3] = uVar10;
        puVar1[2] = uVar9;
        puVar1[4] = uVar8;
      } while ((ulong)uVar4 * 0x28 - lVar6 != 0);
    }
    lVar6 = (long)(int)uVar3;
    if ((*(void **)(this + 0x10) != (void *)0x0) &&
       (this[0x18] !=
        (btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData>)0x0)) {
      btAlignedFreeInternal(*(void **)(this + 0x10));
    }
    lVar7 = 0;
    *(long *)(this + 0x10) = lVar5;
    *(uint *)(this + 8) = uVar3;
    this[0x18] = (btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData>)0x1;
    do {
      puVar1 = (undefined8 *)(lVar5 + lVar7);
      lVar6 = lVar6 + -1;
      lVar7 = lVar7 + 0x28;
      puVar1[4] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      lVar5 = *(long *)(this + 0x10);
    } while (lVar6 != 0);
    *(uint *)(this + 4) = uVar3;
    if (0 < (int)uVar3) {
      lVar6 = 0;
      do {
        puVar1 = (undefined8 *)(lVar5 + lVar6);
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar6);
        lVar6 = lVar6 + 0x28;
        uVar11 = *puVar2;
        uVar10 = puVar2[3];
        uVar9 = puVar2[2];
        uVar8 = puVar2[4];
        puVar1[1] = puVar2[1];
        *puVar1 = uVar11;
        puVar1[3] = uVar10;
        puVar1[2] = uVar9;
        puVar1[4] = uVar8;
      } while ((ulong)uVar3 * 0x28 - lVar6 != 0);
    }
  }
  return;
}


