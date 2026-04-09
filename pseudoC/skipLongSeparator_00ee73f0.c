// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: skipLongSeparator
// Entry Point: 00ee73f0
// Size: 196 bytes
// Signature: undefined skipLongSeparator(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Lexer::skipLongSeparator() */

uint Luau::Lexer::skipLongSeparator(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  long *in_x0;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar7 = *(uint *)(in_x0 + 2);
  uVar6 = (ulong)uVar7;
  lVar3 = *in_x0;
  uVar4 = in_x0[1];
  cVar5 = *(char *)(lVar3 + uVar6);
  if (cVar5 == '\n') {
    *(int *)((long)in_x0 + 0x14) = *(int *)((long)in_x0 + 0x14) + 1;
    *(uint *)(in_x0 + 3) = uVar7 + 1;
    *(uint *)(in_x0 + 2) = uVar7 + 1;
  }
  else {
    *(uint *)(in_x0 + 2) = uVar7 + 1;
  }
  uVar7 = uVar7 + 1;
  uVar9 = (ulong)uVar7;
  if (uVar4 <= uVar9) {
    uVar7 = 0;
    if (uVar4 <= uVar6) {
      cVar5 = '\0';
    }
    if (cVar5 != '\0') {
      uVar7 = 0xffffffff;
    }
    return uVar7;
  }
  uVar8 = 0;
  do {
    if (*(char *)(lVar3 + uVar9) != '=') {
      if (uVar4 <= uVar6) {
        cVar5 = '\0';
      }
      if (cVar5 != *(char *)(lVar3 + (ulong)(uVar7 + uVar8))) {
        uVar8 = ~uVar8;
      }
      return uVar8;
    }
    iVar2 = uVar7 + uVar8;
    uVar8 = uVar8 + 1;
    uVar1 = iVar2 + 1;
    uVar9 = (ulong)uVar1;
    *(uint *)(in_x0 + 2) = uVar1;
  } while (uVar9 < uVar4);
  if (uVar4 <= uVar6) {
    cVar5 = '\0';
  }
  if (cVar5 != '\0') {
    uVar8 = ~uVar8;
  }
  return uVar8;
}


