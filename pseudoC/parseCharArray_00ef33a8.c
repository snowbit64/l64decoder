// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseCharArray
// Entry Point: 00ef33a8
// Size: 440 bytes
// Signature: undefined parseCharArray(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseCharArray() */

void Luau::Parser::parseCharArray(void)

{
  basic_string *pbVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long in_x0;
  ulong uVar6;
  ulong *in_x8;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  pbVar1 = (basic_string *)(in_x0 + 0x310);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)pbVar1,*(ulong *)(in_x0 + 0x40));
  if ((*(int *)(in_x0 + 0x28) == 0x115) || (*(int *)(in_x0 + 0x28) == 0x10c)) {
    uVar6 = Lexer::fixupQuotedString(pbVar1);
    if ((uVar6 & 1) == 0) {
      nextLexeme();
      *(undefined *)in_x8 = 0;
      *(undefined *)(in_x8 + 2) = 0;
      return;
    }
  }
  else {
    Lexer::fixupMultilineString(pbVar1);
  }
  bVar3 = *(byte *)(in_x0 + 0x310);
  uVar7 = *(ulong *)(in_x0 + 0x318);
  uVar12 = *(ulong *)(in_x0 + 800);
  uVar6 = (ulong)(bVar3 >> 1);
  uVar5 = uVar7;
  if ((bVar3 & 1) == 0) {
    uVar12 = in_x0 + 0x311;
    uVar5 = uVar6;
  }
  uVar2 = uVar5 + 1;
  if (uVar5 == 0xffffffffffffffff) {
    uVar14 = 0;
    goto LAB_00ef34b8;
  }
  uVar14 = Allocator::allocate(*(Allocator **)(in_x0 + 0x80),uVar2);
  if ((uVar2 < 8) || ((uVar14 < uVar12 + uVar2 && (uVar12 < uVar14 + uVar2)))) {
    uVar6 = 0;
LAB_00ef3488:
    lVar13 = (uVar5 - uVar6) + 1;
    puVar8 = (undefined *)(uVar14 + uVar6);
    puVar10 = (undefined *)(uVar12 + uVar6);
    do {
      lVar13 = lVar13 + -1;
      *puVar8 = *puVar10;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    } while (lVar13 != 0);
  }
  else if (uVar2 < 0x20) {
    uVar7 = 0;
LAB_00ef3530:
    uVar6 = uVar2 & 0xfffffffffffffff8;
    lVar13 = uVar7 - uVar6;
    puVar9 = (undefined8 *)(uVar14 + uVar7);
    puVar11 = (undefined8 *)(uVar12 + uVar7);
    do {
      lVar13 = lVar13 + 8;
      *puVar9 = *puVar11;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    } while (lVar13 != 0);
    if (uVar2 != uVar6) goto LAB_00ef3488;
  }
  else {
    uVar6 = uVar2 & 0xffffffffffffffe0;
    puVar9 = (undefined8 *)(uVar14 + 0x10);
    puVar11 = (undefined8 *)(uVar12 + 0x10);
    uVar7 = uVar6;
    do {
      puVar4 = puVar11 + -1;
      uVar15 = puVar11[-2];
      uVar17 = puVar11[1];
      uVar16 = *puVar11;
      puVar11 = puVar11 + 4;
      uVar7 = uVar7 - 0x20;
      puVar9[-1] = *puVar4;
      puVar9[-2] = uVar15;
      puVar9[1] = uVar17;
      *puVar9 = uVar16;
      puVar9 = puVar9 + 4;
    } while (uVar7 != 0);
    if (uVar2 != uVar6) {
      uVar7 = uVar6;
      if ((uVar2 & 0x18) == 0) goto LAB_00ef3488;
      goto LAB_00ef3530;
    }
  }
  bVar3 = *(byte *)(in_x0 + 0x310);
  uVar7 = *(ulong *)(in_x0 + 0x318);
  uVar6 = (ulong)(bVar3 >> 1);
LAB_00ef34b8:
  if ((bVar3 & 1) != 0) {
    uVar6 = uVar7;
  }
  nextLexeme();
  *in_x8 = uVar14;
  in_x8[1] = uVar6;
  *(undefined *)(in_x8 + 2) = 1;
  return;
}


