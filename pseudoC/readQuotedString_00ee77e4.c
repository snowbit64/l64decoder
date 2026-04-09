// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readQuotedString
// Entry Point: 00ee77e4
// Size: 436 bytes
// Signature: undefined readQuotedString(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Lexer::readQuotedString() */

void Luau::Lexer::readQuotedString(void)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long *in_x0;
  int iVar6;
  undefined4 *in_x8;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  ulong uVar16;
  
  uVar3 = *(uint *)(in_x0 + 2);
  iVar4 = *(int *)((long)in_x0 + 0x14);
  lVar9 = *in_x0;
  uVar11 = in_x0[1];
  iVar5 = *(int *)(in_x0 + 3);
  uVar12 = (uint)*(byte *)(lVar9 + (ulong)uVar3);
  uVar2 = uVar12;
  if (uVar11 <= uVar3) {
    uVar2 = 0;
  }
  if (uVar12 == 10) {
    uVar12 = uVar3 + 1;
    *(int *)((long)in_x0 + 0x14) = iVar4 + 1;
    *(uint *)(in_x0 + 3) = uVar12;
    uVar16 = (ulong)uVar12;
    uVar7 = (ulong)uVar12;
    *(uint *)(in_x0 + 2) = uVar12;
    if (uVar11 <= uVar16) goto LAB_00ee7908;
LAB_00ee7864:
    uVar12 = (uint)*(byte *)(lVar9 + uVar16);
    uVar8 = (ulong)(uVar3 + 1);
    if (*(byte *)(lVar9 + uVar16) != uVar2) {
      uVar8 = (ulong)(uVar3 + 1);
      do {
        iVar6 = (int)uVar8;
        if (uVar12 == 0x5c) {
          readBackslashInString();
          uVar7 = (ulong)*(uint *)(in_x0 + 2);
          uVar11 = in_x0[1];
          uVar8 = uVar7;
          if (uVar11 <= uVar7) goto LAB_00ee7908;
        }
        else {
          if ((uVar12 < 0xe) && ((1 << (ulong)(uVar12 & 0x1f) & 0x2401U) != 0)) goto LAB_00ee790c;
          uVar12 = iVar6 + 1;
          uVar7 = (ulong)uVar12;
          *(uint *)(in_x0 + 2) = uVar12;
          uVar8 = (ulong)uVar12;
          if (uVar11 <= uVar12) goto LAB_00ee7908;
        }
        lVar9 = *in_x0;
        uVar12 = (uint)*(byte *)(lVar9 + uVar8);
      } while (uVar12 != uVar2);
    }
    iVar6 = (int)uVar8;
    if (*(char *)(lVar9 + uVar8) == '\n') goto LAB_00ee78f0;
LAB_00ee7938:
    iVar10 = *(int *)((long)in_x0 + 0x14);
    iVar14 = *(int *)(in_x0 + 3);
    iVar13 = iVar6 + 1;
  }
  else {
    uVar12 = uVar3 + 1;
    uVar16 = (ulong)uVar12;
    uVar7 = (ulong)uVar12;
    *(uint *)(in_x0 + 2) = uVar12;
    if (uVar16 < uVar11) goto LAB_00ee7864;
LAB_00ee7908:
    iVar6 = (int)uVar7;
    if (uVar2 != 0) {
LAB_00ee790c:
      iVar13 = 0;
      lVar9 = 0;
      uVar15 = 0x11a;
      uVar1 = CONCAT44(iVar6 - *(int *)(in_x0 + 3),*(undefined4 *)((long)in_x0 + 0x14));
      goto LAB_00ee7960;
    }
    lVar9 = *in_x0;
    if (*(char *)(lVar9 + uVar7) != '\n') goto LAB_00ee7938;
LAB_00ee78f0:
    iVar14 = iVar6 + 1;
    iVar10 = *(int *)((long)in_x0 + 0x14) + 1;
    *(int *)((long)in_x0 + 0x14) = iVar10;
    *(int *)(in_x0 + 3) = iVar14;
    iVar13 = iVar14;
  }
  lVar9 = lVar9 + uVar16;
  *(int *)(in_x0 + 2) = iVar13;
  uVar1 = CONCAT44(iVar13 - iVar14,iVar10);
  iVar13 = iVar13 + ~(uVar3 + 1);
  uVar15 = 0x115;
LAB_00ee7960:
  *in_x8 = uVar15;
  *(undefined8 *)(in_x8 + 3) = uVar1;
  in_x8[5] = iVar13;
  *(long *)(in_x8 + 6) = lVar9;
  *(ulong *)(in_x8 + 1) = CONCAT44(uVar3 - iVar5,iVar4);
  return;
}


