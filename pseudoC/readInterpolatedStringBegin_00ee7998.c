// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readInterpolatedStringBegin
// Entry Point: 00ee7998
// Size: 80 bytes
// Signature: undefined readInterpolatedStringBegin(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Lexer::readInterpolatedStringBegin() */

void Luau::Lexer::readInterpolatedStringBegin(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *in_x0;
  undefined8 in_x2;
  
  uVar1 = *(uint *)(in_x0 + 2);
  iVar2 = *(int *)((long)in_x0 + 0x14);
  iVar3 = *(int *)(in_x0 + 3);
  if (*(char *)(*in_x0 + (ulong)uVar1) == '\n') {
    *(int *)((long)in_x0 + 0x14) = iVar2 + 1;
    *(uint *)(in_x0 + 3) = uVar1 + 1;
    *(uint *)(in_x0 + 2) = uVar1 + 1;
    readInterpolatedStringSection(in_x0,CONCAT44(uVar1 - iVar3,iVar2),in_x2,0x10c);
    return;
  }
  *(uint *)(in_x0 + 2) = uVar1 + 1;
  readInterpolatedStringSection(in_x0,CONCAT44(uVar1 - iVar3,iVar2),in_x2,0x10c);
  return;
}


