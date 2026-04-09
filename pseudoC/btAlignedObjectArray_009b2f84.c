// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btAlignedObjectArray
// Entry Point: 009b2f84
// Size: 252 bytes
// Signature: undefined __thiscall btAlignedObjectArray(btAlignedObjectArray<btCollisionObject*> * this, btAlignedObjectArray * param_1)


/* btAlignedObjectArray<btCollisionObject*>::btAlignedObjectArray(btAlignedObjectArray<btCollisionObject*>
   const&) */

void __thiscall
btAlignedObjectArray<btCollisionObject*>::btAlignedObjectArray
          (btAlignedObjectArray<btCollisionObject*> *this,btAlignedObjectArray *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  uVar1 = *(uint *)(param_1 + 4);
  *(undefined8 *)(this + 0x10) = 0;
  this[0x18] = (btAlignedObjectArray<btCollisionObject*>)0x1;
  if ((int)uVar1 < 1) {
    *(uint *)(this + 4) = uVar1;
  }
  else {
    lVar3 = btAlignedAllocInternal((ulong)uVar1 * 8,0x10);
    uVar2 = *(uint *)(this + 4);
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
    lVar4 = 0;
    *(long *)(this + 0x10) = lVar3;
    *(uint *)(this + 8) = uVar1;
    this[0x18] = (btAlignedObjectArray<btCollisionObject*>)0x1;
    do {
      *(undefined8 *)(lVar3 + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
      lVar3 = *(long *)(this + 0x10);
    } while ((int)uVar1 != lVar4);
    *(uint *)(this + 4) = uVar1;
    if (0 < (int)uVar1) {
      lVar4 = 0;
      do {
        *(undefined8 *)(lVar3 + lVar4) = *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar4);
        lVar4 = lVar4 + 8;
      } while ((ulong)uVar1 * 8 - lVar4 != 0);
    }
  }
  return;
}


