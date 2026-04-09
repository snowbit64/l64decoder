// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reserve
// Entry Point: 00baf144
// Size: 296 bytes
// Signature: undefined __thiscall reserve(btAlignedObjectArray<Bt2PhysicsCookingUtil::ConvexFace> * this, int param_1)


/* btAlignedObjectArray<Bt2PhysicsCookingUtil::ConvexFace>::reserve(int) */

void __thiscall
btAlignedObjectArray<Bt2PhysicsCookingUtil::ConvexFace>::reserve
          (btAlignedObjectArray<Bt2PhysicsCookingUtil::ConvexFace> *this,int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (*(int *)(this + 8) < param_1) {
    if (param_1 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = btAlignedAllocInternal((long)param_1 * 0x30,0x10);
    }
    uVar4 = *(uint *)(this + 4);
    if (0 < (int)uVar4) {
      lVar6 = 0;
      do {
        puVar1 = (undefined8 *)(lVar5 + lVar6);
        puVar2 = (undefined8 *)(*(long *)(this + 0x10) + lVar6);
        uVar7 = *puVar2;
        puVar1[1] = puVar2[1];
        *puVar1 = uVar7;
        btAlignedObjectArray<int>::btAlignedObjectArray
                  ((btAlignedObjectArray<int> *)(puVar1 + 2),(btAlignedObjectArray *)(puVar2 + 2));
        lVar6 = lVar6 + 0x30;
      } while ((ulong)uVar4 * 0x30 - lVar6 != 0);
      uVar4 = *(uint *)(this + 4);
      if (0 < (int)uVar4) {
        lVar6 = 0;
        do {
          lVar3 = *(long *)(this + 0x10) + lVar6;
          if (*(void **)(lVar3 + 0x20) != (void *)0x0 && *(char *)(lVar3 + 0x28) != '\0') {
                    /* try { // try from 00baf228 to 00baf22b has its CatchHandler @ 00baf26c */
            btAlignedFreeInternal(*(void **)(lVar3 + 0x20));
          }
          lVar6 = lVar6 + 0x30;
          *(undefined *)(lVar3 + 0x28) = 1;
          *(undefined8 *)(lVar3 + 0x20) = 0;
          *(undefined4 *)(lVar3 + 0x14) = 0;
          *(undefined4 *)(lVar3 + 0x18) = 0;
        } while ((ulong)uVar4 * 0x30 - lVar6 != 0);
      }
    }
    if ((*(void **)(this + 0x10) != (void *)0x0) &&
       (this[0x18] != (btAlignedObjectArray<Bt2PhysicsCookingUtil::ConvexFace>)0x0)) {
      btAlignedFreeInternal(*(void **)(this + 0x10));
    }
    *(long *)(this + 0x10) = lVar5;
    *(int *)(this + 8) = param_1;
    this[0x18] = (btAlignedObjectArray<Bt2PhysicsCookingUtil::ConvexFace>)0x1;
  }
  return;
}


