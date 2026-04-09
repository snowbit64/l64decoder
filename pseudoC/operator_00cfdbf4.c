// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator>>=
// Entry Point: 00cfdbf4
// Size: 436 bytes
// Signature: undefined __thiscall operator>>=(Integer * this, ulong param_1)


/* CryptoPP::Integer::TEMPNAMEPLACEHOLDERVALUE(unsigned long) */

Integer * __thiscall CryptoPP::Integer::operator>>=(Integer *this,ulong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  puVar5 = *(undefined8 **)(this + 0x20);
  uVar3 = *(ulong *)(this + 0x18);
  do {
    uVar10 = uVar3;
    if (uVar10 == 0) break;
    uVar3 = uVar10 - 1;
  } while (*(int *)((long)puVar5 + uVar10 * 4 + -4) == 0);
  uVar20 = uVar10 & 0xffffffff;
  uVar21 = param_1 >> 5;
  uVar3 = uVar20;
  if (uVar21 <= uVar20) {
    uVar3 = uVar21;
  }
  if (uVar3 == 0) goto LAB_00cfdcb4;
  if (uVar21 < uVar20) {
    uVar16 = uVar20 - uVar3;
    if ((uVar16 < 8) ||
       ((puVar5 < (undefined8 *)((long)puVar5 + uVar20 * 4) &&
        ((long)puVar5 + uVar3 * 4 < (long)puVar5 + uVar16 * 4)))) {
      uVar12 = 0;
      uVar13 = uVar3;
    }
    else {
      uVar15 = uVar10 & 0xffffffff;
      uVar12 = uVar16 & 0xfffffffffffffff8;
      uVar4 = uVar21;
      if (uVar15 <= uVar21) {
        uVar4 = uVar15;
      }
      uVar13 = uVar3 + uVar12;
      uVar15 = uVar15 - uVar4 & 0xfffffffffffffff8;
      puVar19 = puVar5;
      do {
        puVar1 = (undefined8 *)((long)puVar19 + uVar4 * 4);
        uVar15 = uVar15 - 8;
        uVar22 = *puVar1;
        uVar24 = puVar1[3];
        uVar23 = puVar1[2];
        puVar19[1] = puVar1[1];
        *puVar19 = uVar22;
        puVar19[3] = uVar24;
        puVar19[2] = uVar23;
        puVar19 = puVar19 + 4;
      } while (uVar15 != 0);
      if (uVar16 == uVar12) goto LAB_00cfdca0;
    }
    uVar10 = uVar10 & 0xffffffff;
    uVar16 = uVar21;
    if (uVar10 <= uVar21) {
      uVar16 = uVar10;
    }
    lVar11 = (uVar12 + uVar16) - uVar10;
    puVar17 = (undefined4 *)((long)puVar5 + uVar12 * 4);
    do {
      lVar14 = uVar13 * 4;
      uVar12 = uVar12 + 1;
      uVar13 = uVar12 + uVar3;
      bVar8 = lVar11 != -1;
      lVar11 = lVar11 + 1;
      *puVar17 = *(undefined4 *)((long)puVar5 + lVar14);
      puVar17 = puVar17 + 1;
    } while (bVar8);
  }
LAB_00cfdca0:
  memset((void *)((long)puVar5 + uVar3 * -4 + uVar20 * 4),0,uVar3 * 4);
LAB_00cfdcb4:
  lVar11 = uVar20 - uVar21;
  if (((uVar21 <= uVar20 && lVar11 != 0) && (uVar2 = (uint)param_1 & 0x1f, (param_1 & 0x1f) != 0))
     && (lVar11 != 0)) {
    lVar14 = *(long *)(this + 0x20);
    uVar9 = 0;
    do {
      lVar18 = lVar11 * 4;
      lVar11 = lVar11 + -1;
      uVar6 = *(uint *)(lVar14 + -4 + lVar18);
      uVar7 = uVar6 >> (ulong)uVar2 | uVar9;
      uVar9 = uVar6 << (ulong)(0x20 - uVar2 & 0x1f);
      *(uint *)(lVar14 + -4 + lVar18) = uVar7;
    } while (lVar11 != 0);
  }
  if (*(int *)(this + 0x28) == 1) {
    lVar11 = *(long *)(this + 0x18);
    do {
      if (lVar11 == 0) goto LAB_00cfdd40;
      lVar18 = lVar11 + -1;
      lVar14 = lVar11 * 4;
      lVar11 = lVar18;
    } while (*(int *)(*(long *)(this + 0x20) + -4 + lVar14) == 0);
    if ((int)lVar18 == -1) {
LAB_00cfdd40:
      operator=(this,(Integer *)&DAT_02120810);
      return this;
    }
  }
  return this;
}


