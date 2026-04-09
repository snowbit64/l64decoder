// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setIsStructBuffer
// Entry Point: 00c52134
// Size: 144 bytes
// Signature: undefined setIsStructBuffer(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Struct::setIsStructBuffer() */

void IR_Struct::setIsStructBuffer(void)

{
  long in_x0;
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(in_x0 + 0x30);
  lVar1 = *(long *)(in_x0 + 0x38);
  *(undefined *)(in_x0 + 0x53) = 1;
  if (lVar1 != lVar2) {
    uVar4 = 0;
    do {
      if (**(int **)(lVar2 + uVar4 * 0x38 + 0x10) == 3) {
        setIsStructBuffer();
        lVar2 = *(long *)(in_x0 + 0x30);
        lVar1 = *(long *)(in_x0 + 0x38);
      }
      uVar4 = (ulong)((int)uVar4 + 1);
      uVar3 = (lVar1 - lVar2 >> 3) * 0x6db6db6db6db6db7;
    } while (uVar4 <= uVar3 && uVar3 - uVar4 != 0);
  }
  return;
}


