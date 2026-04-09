// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateFlagsFromGeometry
// Entry Point: 00a5173c
// Size: 68 bytes
// Signature: undefined updateFlagsFromGeometry(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GsShape::updateFlagsFromGeometry() */

void GsShape::updateFlagsFromGeometry(void)

{
  uint uVar1;
  GsShape *in_x0;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(in_x0 + 400);
  if (*(long *)(in_x0 + 0x170) == 0) {
    uVar3 = uVar3 & 0xfffffffc;
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(*(long *)(in_x0 + 0x170) + 0x34);
    uVar1 = uVar3 & 0xfffffffc | 1;
    if ((uVar2 & 2) != 0) {
      uVar1 = uVar3 | 3;
    }
    uVar3 = uVar3 & 0xfffffffc;
    if ((uVar2 & 1) != 0) {
      uVar3 = uVar1;
    }
    uVar2 = uVar2 & 0x1c;
  }
  setShapeFlags(in_x0,uVar3 & 0xffffffe3 | uVar2);
  return;
}


