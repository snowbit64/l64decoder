// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateWorldTransformation
// Entry Point: 00a5ac18
// Size: 172 bytes
// Signature: undefined updateWorldTransformation(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RawTransformGroup::updateWorldTransformation() */

void RawTransformGroup::updateWorldTransformation(void)

{
  long in_x0;
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(in_x0 + 0x40);
  if ((uVar1 >> 8 & 1) != 0) {
    lVar2 = *(long *)(in_x0 + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)(in_x0 + 0xc0) = *(undefined8 *)(in_x0 + 0x80);
      *(undefined8 *)(in_x0 + 0xb8) = *(undefined8 *)(in_x0 + 0x78);
      *(undefined8 *)(in_x0 + 0xd0) = *(undefined8 *)(in_x0 + 0x90);
      *(undefined8 *)(in_x0 + 200) = *(undefined8 *)(in_x0 + 0x88);
      *(undefined8 *)(in_x0 + 0xe0) = *(undefined8 *)(in_x0 + 0xa0);
      *(undefined8 *)(in_x0 + 0xd8) = *(undefined8 *)(in_x0 + 0x98);
      *(undefined8 *)(in_x0 + 0xf0) = *(undefined8 *)(in_x0 + 0xb0);
      *(undefined8 *)(in_x0 + 0xe8) = *(undefined8 *)(in_x0 + 0xa8);
    }
    else {
      updateWorldTransformation();
      *(undefined8 *)(in_x0 + 0xc0) = 0;
      *(undefined8 *)(in_x0 + 0xb8) = 0x3f800000;
      *(undefined8 *)(in_x0 + 0xd0) = 0;
      *(undefined8 *)(in_x0 + 200) = 0x3f80000000000000;
      *(undefined8 *)(in_x0 + 0xe0) = 0x3f800000;
      *(undefined8 *)(in_x0 + 0xd8) = 0;
      *(undefined8 *)(in_x0 + 0xf0) = 0x3f80000000000000;
      *(undefined8 *)(in_x0 + 0xe8) = 0;
      Matrix4x4::mult3x4((Matrix4x4 *)(undefined8 *)(in_x0 + 0xb8),(Matrix4x4 *)(lVar2 + 0xb8),
                         (Matrix4x4 *)(in_x0 + 0x78));
      uVar1 = *(uint *)(in_x0 + 0x40);
    }
    *(uint *)(in_x0 + 0x40) = uVar1 & 0xfffffeff;
  }
  return;
}


