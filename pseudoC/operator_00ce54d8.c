// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator>>=
// Entry Point: 00ce54d8
// Size: 268 bytes
// Signature: undefined __thiscall operator>>=(PolynomialMod2 * this, uint param_1)


/* CryptoPP::PolynomialMod2::TEMPNAMEPLACEHOLDERVALUE(unsigned int) */

PolynomialMod2 * __thiscall CryptoPP::PolynomialMod2::operator>>=(PolynomialMod2 *this,uint param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar6 = *(ulong *)(this + 0x10);
  if (uVar6 == 0) {
    return this;
  }
  uVar2 = param_1 & 0x1f;
  puVar7 = *(undefined8 **)(this + 0x18);
  if (uVar2 != 0) {
    uVar9 = 0;
    uVar12 = uVar6;
    do {
      lVar15 = uVar12 * 4;
      uVar12 = uVar12 - 1;
      uVar3 = *(uint *)((long)puVar7 + lVar15 + -4);
      uVar4 = uVar3 >> (ulong)uVar2 | uVar9;
      uVar9 = uVar3 << (ulong)(0x20 - uVar2 & 0x1f);
      *(uint *)((long)puVar7 + lVar15 + -4) = uVar4;
    } while (uVar12 != 0);
  }
  if (param_1 < 0x20) {
    return this;
  }
  uVar8 = (ulong)(param_1 >> 5);
  uVar12 = uVar6 - uVar8;
  if (uVar12 != 0) {
    if ((uVar12 < 8) ||
       ((puVar7 < (undefined8 *)((long)puVar7 + uVar6 * 4) &&
        ((long)puVar7 + uVar8 * 4 < (long)puVar7 + uVar12 * 4)))) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar12 & 0xfffffffffffffff8;
      uVar14 = uVar10;
      puVar16 = puVar7;
      do {
        puVar1 = (undefined8 *)((long)puVar16 + uVar8 * 4);
        uVar14 = uVar14 - 8;
        uVar17 = *puVar1;
        uVar19 = puVar1[3];
        uVar18 = puVar1[2];
        puVar16[1] = puVar1[1];
        *puVar16 = uVar17;
        puVar16[3] = uVar19;
        puVar16[2] = uVar18;
        puVar16 = puVar16 + 4;
      } while (uVar14 != 0);
      if (uVar12 == uVar10) goto LAB_00ce558c;
    }
    lVar15 = (uVar10 + uVar8) - uVar6;
    puVar11 = (undefined4 *)((long)puVar7 + uVar10 * 4);
    puVar13 = (undefined4 *)((long)puVar7 + (uVar10 + uVar8) * 4);
    do {
      bVar5 = lVar15 != -1;
      lVar15 = lVar15 + 1;
      *puVar11 = *puVar13;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    } while (bVar5);
  }
LAB_00ce558c:
  if (uVar12 < uVar6) {
    memset((void *)((long)puVar7 + uVar12 * 4),0,uVar8 << 2);
  }
  return this;
}


