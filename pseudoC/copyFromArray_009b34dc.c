// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyFromArray
// Entry Point: 009b34dc
// Size: 276 bytes
// Signature: undefined __thiscall copyFromArray(btAlignedObjectArray<btCollisionObject*> * this, btAlignedObjectArray * param_1)


/* btAlignedObjectArray<btCollisionObject*>::copyFromArray(btAlignedObjectArray<btCollisionObject*>
   const&) */

void __thiscall
btAlignedObjectArray<btCollisionObject*>::copyFromArray
          (btAlignedObjectArray<btCollisionObject*> *this,btAlignedObjectArray *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = *(uint *)(this + 4);
  if ((int)uVar2 < (int)uVar1) {
    lVar5 = (long)(int)uVar2;
    if (*(int *)(this + 8) < (int)uVar1) {
      if (uVar1 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = btAlignedAllocInternal((long)(int)uVar1 << 3,0x10);
        uVar2 = *(uint *)(this + 4);
      }
      if (0 < (int)uVar2) {
        lVar4 = 0;
        do {
          *(undefined8 *)(lVar3 + lVar4) = *(undefined8 *)(*(long *)(this + 0x10) + lVar4);
          lVar4 = lVar4 + 8;
        } while ((ulong)uVar2 * 8 - lVar4 != 0);
      }
      if ((*(void **)(this + 0x10) != (void *)0x0) &&
         (this[0x18] != (btAlignedObjectArray<btCollisionObject*>)0x0)) {
        btAlignedFreeInternal(*(void **)(this + 0x10));
      }
      *(long *)(this + 0x10) = lVar3;
      *(uint *)(this + 8) = uVar1;
      this[0x18] = (btAlignedObjectArray<btCollisionObject*>)0x1;
    }
    do {
      *(undefined8 *)(*(long *)(this + 0x10) + lVar5 * 8) = 0;
      lVar5 = lVar5 + 1;
    } while ((int)uVar1 != lVar5);
  }
  *(uint *)(this + 4) = uVar1;
  if (0 < (int)uVar1) {
    lVar5 = 0;
    lVar3 = *(long *)(this + 0x10);
    do {
      *(undefined8 *)(lVar3 + lVar5) = *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar5);
      lVar5 = lVar5 + 8;
    } while ((ulong)uVar1 * 8 - lVar5 != 0);
  }
  return;
}


