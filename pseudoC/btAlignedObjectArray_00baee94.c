// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btAlignedObjectArray
// Entry Point: 00baee94
// Size: 172 bytes
// Signature: undefined __thiscall ~btAlignedObjectArray(btAlignedObjectArray<Bt2PhysicsCookingUtil::ConvexFace> * this)


/* btAlignedObjectArray<Bt2PhysicsCookingUtil::ConvexFace>::~btAlignedObjectArray() */

void __thiscall
btAlignedObjectArray<Bt2PhysicsCookingUtil::ConvexFace>::~btAlignedObjectArray
          (btAlignedObjectArray<Bt2PhysicsCookingUtil::ConvexFace> *this)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(this + 4);
  if (0 < (int)uVar2) {
    lVar3 = 0;
    do {
      lVar1 = *(long *)(this + 0x10) + lVar3;
      if (*(void **)(lVar1 + 0x20) != (void *)0x0 && *(char *)(lVar1 + 0x28) != '\0') {
                    /* try { // try from 00baef00 to 00baef03 has its CatchHandler @ 00baef44 */
        btAlignedFreeInternal(*(void **)(lVar1 + 0x20));
      }
      lVar3 = lVar3 + 0x30;
      *(undefined *)(lVar1 + 0x28) = 1;
      *(undefined8 *)(lVar1 + 0x20) = 0;
      *(undefined4 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x18) = 0;
    } while ((ulong)uVar2 * 0x30 - lVar3 != 0);
  }
  if ((*(void **)(this + 0x10) != (void *)0x0) &&
     (this[0x18] != (btAlignedObjectArray<Bt2PhysicsCookingUtil::ConvexFace>)0x0)) {
                    /* try { // try from 00baef18 to 00baef1b has its CatchHandler @ 00baef40 */
    btAlignedFreeInternal(*(void **)(this + 0x10));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0x18] = (btAlignedObjectArray<Bt2PhysicsCookingUtil::ConvexFace>)0x1;
  return;
}


