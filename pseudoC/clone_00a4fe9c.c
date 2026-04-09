// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00a4fe9c
// Size: 176 bytes
// Signature: undefined clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Camera::clone() */

undefined8 * Camera::clone(void)

{
  TransformGroup TVar1;
  undefined2 uVar2;
  TransformGroup *in_x0;
  undefined8 *this;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  this = (undefined8 *)operator_new(0x170);
  uVar4 = *(undefined4 *)(in_x0 + 0x15c);
  TVar1 = in_x0[0x16c];
  uVar5 = *(undefined8 *)(in_x0 + 0x154);
  uVar3 = *(undefined4 *)(in_x0 + 0x168);
  uVar2 = *(undefined2 *)(in_x0 + 0x16e);
                    /* try { // try from 00a4fee0 to 00a4fee3 has its CatchHandler @ 00a4ff4c */
  TransformGroup::TransformGroup((TransformGroup *)this,*(char **)(in_x0 + 8));
  *(undefined8 *)((long)this + 0x154) = uVar5;
  *(undefined4 *)((long)this + 0x15c) = uVar4;
  this[0x2c] = 0;
  *(TransformGroup *)((long)this + 0x16c) = TVar1;
  *(undefined4 *)(this + 0x2d) = uVar3;
  *(undefined2 *)((long)this + 0x16e) = uVar2;
  *this = &PTR__Camera_00fe35b8;
  this[2] = this[2] | 0x8000;
  *(byte *)((long)this + 0x16d) = (byte)TVar1 ^ 1;
  TransformGroup::copyTransformGroupPropertiesFrom((TransformGroup *)this,in_x0);
  return this;
}


