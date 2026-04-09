// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00b61bf0
// Size: 100 bytes
// Signature: undefined clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BoundingSphere::clone() const */

undefined8 * BoundingSphere::clone(void)

{
  long in_x0;
  undefined8 *this;
  undefined4 uVar1;
  
  this = (undefined8 *)operator_new(0x20);
  uVar1 = *(undefined4 *)(in_x0 + 0x18);
                    /* try { // try from 00b61c14 to 00b61c1b has its CatchHandler @ 00b61c54 */
  BoundingVolume::BoundingVolume((BoundingVolume *)this,0);
  *(undefined4 *)(this + 3) = uVar1;
  uVar1 = *(undefined4 *)(in_x0 + 0x14);
  *(undefined8 *)((long)this + 0xc) = *(undefined8 *)(in_x0 + 0xc);
  *(undefined4 *)((long)this + 0x14) = uVar1;
  *this = &PTR__BoundingSphere_00fea370;
  return this;
}


