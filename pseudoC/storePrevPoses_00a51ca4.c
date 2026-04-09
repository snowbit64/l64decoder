// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: storePrevPoses
// Entry Point: 00a51ca4
// Size: 92 bytes
// Signature: undefined storePrevPoses(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GsShape::storePrevPoses() */

void GsShape::storePrevPoses(void)

{
  undefined8 uVar1;
  long in_x0;
  long lVar2;
  
  *(undefined8 *)(in_x0 + 0x1c8) = *(undefined8 *)(in_x0 + 0xb8);
  *(undefined4 *)(in_x0 + 0x1d0) = *(undefined4 *)(in_x0 + 0xc0);
  *(undefined8 *)(in_x0 + 0x1d4) = *(undefined8 *)(in_x0 + 200);
  *(undefined4 *)(in_x0 + 0x1dc) = *(undefined4 *)(in_x0 + 0xd0);
  *(undefined8 *)(in_x0 + 0x1e0) = *(undefined8 *)(in_x0 + 0xd8);
  lVar2 = *(long *)(in_x0 + 0x1f8);
  *(undefined4 *)(in_x0 + 0x1e8) = *(undefined4 *)(in_x0 + 0xe0);
  *(undefined8 *)(in_x0 + 0x1ec) = *(undefined8 *)(in_x0 + 0xe8);
  *(undefined4 *)(in_x0 + 500) = *(undefined4 *)(in_x0 + 0xf0);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar2 + 0x18);
    *(undefined8 *)(lVar2 + 0x18) = uVar1;
  }
  return;
}


