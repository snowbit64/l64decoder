// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00a5ce4c
// Size: 128 bytes
// Signature: undefined clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TransformGroup::clone() */

undefined8 * TransformGroup::clone(void)

{
  TransformGroup *in_x0;
  undefined8 *this;
  undefined8 uVar1;
  
  this = (undefined8 *)operator_new(0x158);
                    /* try { // try from 00a5ce6c to 00a5ce6f has its CatchHandler @ 00a5cecc */
  RawTransformGroup::RawTransformGroup((RawTransformGroup *)this,*(char **)(in_x0 + 8));
  uVar1 = NEON_fmov(0x3f800000,4);
  this[0x27] = 0;
  this[0x28] = 0;
  *(undefined4 *)(this + 0x2a) = 0x3f800000;
  this[0x26] = 0;
  this[0x29] = uVar1;
  *this = &PTR__TransformGroup_00fe3a08;
  this[2] = this[2] | 0x20;
  *(uint *)(this + 8) = *(uint *)(this + 8) & 0xfffff7ff;
  copyTransformGroupPropertiesFrom((TransformGroup *)this,in_x0);
  return this;
}


