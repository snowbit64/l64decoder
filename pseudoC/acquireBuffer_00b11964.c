// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: acquireBuffer
// Entry Point: 00b11964
// Size: 128 bytes
// Signature: undefined acquireBuffer(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftAudioStreamedReader::acquireBuffer() */

undefined8 SoftAudioStreamedReader::acquireBuffer(void)

{
  long in_x0;
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(in_x0 + 0x68) == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(ulong *)(in_x0 + 0x60);
    lVar2 = *(long *)((long)*(void ***)(in_x0 + 0x48) + (uVar1 >> 6 & 0x3fffffffffffff8));
    *(ulong *)(in_x0 + 0x60) = uVar1 + 1;
    *(long *)(in_x0 + 0x68) = *(long *)(in_x0 + 0x68) + -1;
    uVar3 = *(undefined8 *)(lVar2 + (uVar1 & 0x1ff) * 8);
    if (0x3ff < uVar1 + 1) {
      operator_delete(**(void ***)(in_x0 + 0x48));
      *(long *)(in_x0 + 0x48) = *(long *)(in_x0 + 0x48) + 8;
      *(long *)(in_x0 + 0x60) = *(long *)(in_x0 + 0x60) + -0x200;
    }
  }
  return uVar3;
}


