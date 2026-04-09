// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00a58a24
// Size: 332 bytes
// Signature: undefined clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LODTransformGroup::clone() */

undefined8 * LODTransformGroup::clone(void)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  TransformGroup *in_x0;
  undefined8 *this;
  int iVar4;
  
  this = (undefined8 *)operator_new(0x168);
  if (*(float *)(in_x0 + 0x158) == 0.0) {
    bVar3 = false;
    bVar2 = true;
    iVar4 = 1;
  }
  else {
    if (*(float *)(in_x0 + 0x15c) == 0.0) {
      iVar4 = 2;
    }
    else {
      if (*(float *)(in_x0 + 0x160) != 0.0) {
        bVar2 = false;
        iVar4 = 4;
        bVar3 = true;
        goto LAB_00a58a94;
      }
      iVar4 = 3;
    }
    bVar3 = true;
    bVar2 = true;
  }
LAB_00a58a94:
  uVar1 = *(uint *)(in_x0 + 0x40);
                    /* try { // try from 00a58a98 to 00a58a9f has its CatchHandler @ 00a58b70 */
  TransformGroup::TransformGroup((TransformGroup *)this,*(char **)(in_x0 + 8));
  *this = &PTR__LODTransformGroup_00fe37e8;
  this[2] = this[2] | 0x40;
  if ((uVar1 >> 0xc & 1) != 0) {
    *(uint *)(this + 8) = *(uint *)(this + 8) | 0x1000;
  }
  if (bVar3) {
    if (!bVar2) {
      iVar4 = 4;
    }
    __memcpy_chk((long)this + 0x154,in_x0 + 0x154,iVar4 * 4,0x14);
    if (bVar2) {
      memset((void *)((long)this + (ulong)(iVar4 * 4 + 0x154)),0,(ulong)(3 - iVar4) * 4 + 4);
    }
  }
  else {
    *(undefined8 *)((long)this + 0x15c) = 0;
    *(undefined8 *)((long)this + 0x154) = 0x42c8000000000000;
  }
  *(uint *)(this + 8) = *(uint *)(this + 8) | 8;
  TransformGroup::copyTransformGroupPropertiesFrom((TransformGroup *)this,in_x0);
  return this;
}


