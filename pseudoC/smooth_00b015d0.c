// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: smooth
// Entry Point: 00b015d0
// Size: 240 bytes
// Signature: undefined smooth(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProfiledSection::smooth() */

void ProfiledSection::smooth(void)

{
  undefined8 uVar1;
  uint uVar2;
  long in_x0;
  long lVar3;
  
  uVar2 = *(uint *)(in_x0 + 0x128);
  uVar1 = *(undefined8 *)(in_x0 + 0x10);
  lVar3 = (ulong)uVar2 * 8;
  *(undefined8 *)(in_x0 + 0x28 + lVar3) = *(undefined8 *)(in_x0 + 8);
  *(undefined8 *)(in_x0 + 0xa8 + lVar3) = uVar1;
  *(uint *)(in_x0 + 0x128) = uVar2 + 1 & 0xf;
  *(ulong *)(in_x0 + 8) =
       (ulong)(*(long *)(in_x0 + 0xa0) +
              *(long *)(in_x0 + 0x98) +
              *(long *)(in_x0 + 0x90) +
              *(long *)(in_x0 + 0x88) +
              *(long *)(in_x0 + 0x80) +
              *(long *)(in_x0 + 0x78) +
              *(long *)(in_x0 + 0x70) +
              *(long *)(in_x0 + 0x68) +
              *(long *)(in_x0 + 0x60) +
              *(long *)(in_x0 + 0x58) +
              *(long *)(in_x0 + 0x50) +
              *(long *)(in_x0 + 0x48) +
              *(long *)(in_x0 + 0x40) +
              *(long *)(in_x0 + 0x38) + *(long *)(in_x0 + 0x30) + *(long *)(in_x0 + 0x28)) >> 4;
  *(ulong *)(in_x0 + 0x10) =
       (ulong)(*(long *)(in_x0 + 0x120) +
              *(long *)(in_x0 + 0x118) +
              *(long *)(in_x0 + 0x110) +
              *(long *)(in_x0 + 0x108) +
              *(long *)(in_x0 + 0x100) +
              *(long *)(in_x0 + 0xf8) +
              *(long *)(in_x0 + 0xf0) +
              *(long *)(in_x0 + 0xe8) +
              *(long *)(in_x0 + 0xe0) +
              *(long *)(in_x0 + 0xd8) +
              *(long *)(in_x0 + 0xd0) +
              *(long *)(in_x0 + 200) +
              *(long *)(in_x0 + 0xc0) +
              *(long *)(in_x0 + 0xb8) + *(long *)(in_x0 + 0xb0) + *(long *)(in_x0 + 0xa8)) >> 4;
  return;
}


