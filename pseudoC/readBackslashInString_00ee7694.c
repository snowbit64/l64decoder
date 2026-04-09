// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readBackslashInString
// Entry Point: 00ee7694
// Size: 336 bytes
// Signature: undefined readBackslashInString(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Lexer::readBackslashInString() */

void Luau::Lexer::readBackslashInString(void)

{
  byte bVar1;
  long *in_x0;
  long lVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(in_x0 + 2);
  lVar2 = *in_x0;
  if (*(char *)(lVar2 + (ulong)uVar6) == '\n') {
    uVar6 = uVar6 + 1;
    *(int *)((long)in_x0 + 0x14) = *(int *)((long)in_x0 + 0x14) + 1;
    *(uint *)(in_x0 + 3) = uVar6;
    uVar3 = in_x0[1];
    uVar5 = (ulong)uVar6;
    *(uint *)(in_x0 + 2) = uVar6;
    if (uVar3 <= uVar5) {
      return;
    }
  }
  else {
    uVar3 = in_x0[1];
    uVar5 = (ulong)(uVar6 + 1);
    *(uint *)(in_x0 + 2) = uVar6 + 1;
    if (uVar3 <= uVar5) {
      return;
    }
  }
  bVar1 = *(byte *)(lVar2 + uVar5);
  iVar4 = (int)uVar5;
  if (bVar1 < 0xd) {
    if (bVar1 != 0) {
      if (bVar1 == 10) {
        *(int *)((long)in_x0 + 0x14) = *(int *)((long)in_x0 + 0x14) + 1;
        *(int *)(in_x0 + 3) = iVar4 + 1;
        *(int *)(in_x0 + 2) = iVar4 + 1;
        return;
      }
LAB_00ee775c:
      *(int *)(in_x0 + 2) = iVar4 + 1;
      return;
    }
  }
  else if (bVar1 == 0x7a) {
    uVar6 = iVar4 + 1;
    *(uint *)(in_x0 + 2) = uVar6;
    while (uVar5 = (ulong)uVar6, uVar5 < uVar3) {
      while( true ) {
        bVar1 = *(byte *)(lVar2 + uVar5);
        if (0x20 < bVar1) {
          return;
        }
        if ((1L << ((ulong)bVar1 & 0x3f) & 0x100003a00U) != 0) break;
        if ((ulong)bVar1 != 10) {
          return;
        }
        uVar6 = uVar6 + 1;
        *(int *)((long)in_x0 + 0x14) = *(int *)((long)in_x0 + 0x14) + 1;
        *(uint *)(in_x0 + 3) = uVar6;
        uVar5 = (ulong)uVar6;
        *(uint *)(in_x0 + 2) = uVar6;
        if (uVar3 <= uVar5) {
          return;
        }
      }
      uVar6 = uVar6 + 1;
      *(uint *)(in_x0 + 2) = uVar6;
    }
  }
  else {
    if (bVar1 != 0xd) goto LAB_00ee775c;
    uVar6 = iVar4 + 1;
    *(uint *)(in_x0 + 2) = uVar6;
    if ((uVar6 < uVar3) && (*(char *)(lVar2 + (ulong)uVar6) == '\n')) {
      *(int *)((long)in_x0 + 0x14) = *(int *)((long)in_x0 + 0x14) + 1;
      *(int *)(in_x0 + 3) = iVar4 + 2;
      *(int *)(in_x0 + 2) = iVar4 + 2;
      return;
    }
  }
  return;
}


