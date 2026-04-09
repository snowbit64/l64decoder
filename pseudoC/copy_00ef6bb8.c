// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copy
// Entry Point: 00ef6bb8
// Size: 320 bytes
// Signature: undefined __thiscall copy(Parser * this, basic_string * param_1)


/* Luau::Parser::copy(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

undefined  [16] __thiscall Luau::Parser::copy(Parser *this,basic_string *param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined auVar5 [16];
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined auVar17 [16];
  
  bVar3 = *(byte *)param_1;
  uVar2 = *(ulong *)(param_1 + 4);
  uVar6 = *(ulong *)(param_1 + 2);
  if ((bVar3 & 1) == 0) {
    uVar2 = (long)param_1 + 1;
    uVar6 = (ulong)(bVar3 >> 1);
  }
  uVar1 = uVar6 + 1;
  if (uVar6 == 0xffffffffffffffff) {
    uVar2 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 2);
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar2;
    return auVar5 << 0x40;
  }
  auVar17._0_8_ = Allocator::allocate(*(Allocator **)(this + 0x80),uVar1);
  if ((uVar1 < 8) || ((auVar17._0_8_ < uVar2 + uVar1 && (uVar2 < auVar17._0_8_ + uVar1)))) {
    uVar7 = 0;
  }
  else {
    if (uVar1 < 0x20) {
      uVar9 = 0;
    }
    else {
      uVar7 = uVar1 & 0xffffffffffffffe0;
      puVar10 = (undefined8 *)(auVar17._0_8_ + 0x10);
      puVar12 = (undefined8 *)(uVar2 + 0x10);
      uVar9 = uVar7;
      do {
        puVar4 = puVar12 + -1;
        uVar14 = puVar12[-2];
        uVar16 = puVar12[1];
        uVar15 = *puVar12;
        puVar12 = puVar12 + 4;
        uVar9 = uVar9 - 0x20;
        puVar10[-1] = *puVar4;
        puVar10[-2] = uVar14;
        puVar10[1] = uVar16;
        *puVar10 = uVar15;
        puVar10 = puVar10 + 4;
      } while (uVar9 != 0);
      if (uVar1 == uVar7) goto LAB_00ef6c58;
      uVar9 = uVar7;
      if ((uVar1 & 0x18) == 0) goto LAB_00ef6c38;
    }
    uVar7 = uVar1 & 0xfffffffffffffff8;
    lVar13 = uVar9 - uVar7;
    puVar10 = (undefined8 *)(auVar17._0_8_ + uVar9);
    puVar12 = (undefined8 *)(uVar2 + uVar9);
    do {
      lVar13 = lVar13 + 8;
      *puVar10 = *puVar12;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    } while (lVar13 != 0);
    if (uVar1 == uVar7) goto LAB_00ef6c58;
  }
LAB_00ef6c38:
  lVar13 = (uVar6 - uVar7) + 1;
  puVar8 = (undefined *)(auVar17._0_8_ + uVar7);
  puVar11 = (undefined *)(uVar2 + uVar7);
  do {
    lVar13 = lVar13 + -1;
    *puVar8 = *puVar11;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  } while (lVar13 != 0);
LAB_00ef6c58:
  uVar2 = (ulong)(*(byte *)param_1 >> 1);
  if ((*(byte *)param_1 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 2);
  }
  auVar17._8_8_ = uVar2;
  return auVar17;
}


