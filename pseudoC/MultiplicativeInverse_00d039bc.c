// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MultiplicativeInverse
// Entry Point: 00d039bc
// Size: 808 bytes
// Signature: undefined __thiscall MultiplicativeInverse(MontgomeryRepresentation * this, Integer * param_1)


/* CryptoPP::MontgomeryRepresentation::MultiplicativeInverse(CryptoPP::Integer const&) const */

MontgomeryRepresentation * __thiscall
CryptoPP::MontgomeryRepresentation::MultiplicativeInverse
          (MontgomeryRepresentation *this,Integer *param_1)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  uint *puVar14;
  
  puVar14 = *(uint **)(this + 0xf0);
  puVar12 = *(uint **)(this + 0x68);
  uVar13 = *(ulong *)(this + 0x30);
  if (puVar14 != *(uint **)(param_1 + 0x20)) {
    memcpy(puVar14,*(uint **)(param_1 + 0x20),*(long *)(param_1 + 0x18) << 2);
  }
  lVar7 = *(long *)(param_1 + 0x18);
  if (uVar13 * 2 - lVar7 != 0) {
    memset(puVar14 + lVar7,0,uVar13 * 8 + lVar7 * -4);
  }
  MontgomeryReduce(puVar12,puVar14 + uVar13 * 2,puVar14,*(uint **)(this + 0x38),
                   *(uint **)(this + 200),uVar13);
  uVar6 = AlmostInverse(puVar12,puVar14,puVar12,uVar13,*(uint **)(this + 0x38),uVar13);
  uVar6 = uVar6 & 0xffffffff;
  lVar7 = uVar13 * 0x20 - uVar6;
  if (uVar13 * 0x20 < uVar6) {
    if ((uVar13 != 0) && (lVar7 = uVar6 + uVar13 * -0x20, lVar7 != 0)) {
      puVar14 = *(uint **)(this + 0x38);
      lVar8 = uVar13 - 1;
      if (uVar13 < 3) {
        lVar10 = uVar13 - 2;
        do {
          while( true ) {
            lVar7 = lVar7 + -1;
            if ((*puVar12 & 1) != 0) break;
            uVar9 = puVar12[lVar8];
            puVar12[lVar8] = uVar9 >> 1;
            if (lVar8 != 0) {
              puVar12[lVar10] = (uint)(CONCAT44(uVar9,puVar12[lVar10]) >> 1);
            }
            if (lVar7 == 0) goto LAB_00d03ccc;
          }
          uVar13 = (ulong)*puVar12 + (ulong)*puVar14;
          *puVar12 = (uint)uVar13;
          uVar13 = (ulong)puVar12[1] + (uVar13 >> 0x20) + (ulong)puVar14[1];
          puVar12[1] = (uint)uVar13;
          uVar9 = puVar12[lVar8];
          puVar12[lVar8] = uVar9 >> 1;
          if (lVar8 != 0) {
            puVar12[lVar10] = (uint)(CONCAT44(uVar9,puVar12[lVar10]) >> 1);
          }
          puVar12[lVar8] = puVar12[lVar8] + ((uint)(uVar13 >> 1) & 0x80000000);
        } while (lVar7 != 0);
      }
      else {
        do {
          lVar7 = lVar7 + -1;
          if ((*puVar12 & 1) == 0) {
            uVar9 = 0;
            uVar6 = uVar13;
            do {
              uVar11 = uVar6 - 1;
              uVar3 = uVar9 | puVar12[uVar6 - 1] >> 1;
              uVar9 = puVar12[uVar6 - 1] << 0x1f;
              puVar12[uVar6 - 1] = uVar3;
              uVar6 = uVar11;
            } while (uVar11 != 0);
          }
          else {
            uVar6 = (ulong)*puVar12 + (ulong)*puVar14;
            *puVar12 = (uint)uVar6;
            uVar6 = (ulong)puVar12[1] + (uVar6 >> 0x20) + (ulong)puVar14[1];
            puVar12[1] = (uint)uVar6;
            lVar10 = 0;
            do {
              uVar6 = (uVar6 >> 0x20) + (ulong)puVar12[lVar10 + 2] + (ulong)puVar14[lVar10 + 2];
              uVar11 = lVar10 + 4;
              puVar12[lVar10 + 2] = (uint)uVar6;
              uVar6 = (ulong)puVar12[lVar10 + 3] + (uVar6 >> 0x20) + (ulong)puVar14[lVar10 + 3];
              puVar12[lVar10 + 3] = (uint)uVar6;
              lVar10 = lVar10 + 2;
            } while (uVar11 < uVar13);
            uVar9 = 0;
            uVar11 = uVar13;
            do {
              uVar5 = uVar11 - 1;
              uVar3 = uVar9 | puVar12[uVar11 - 1] >> 1;
              uVar9 = puVar12[uVar11 - 1] << 0x1f;
              puVar12[uVar11 - 1] = uVar3;
              uVar11 = uVar5;
            } while (uVar5 != 0);
            puVar12[lVar8] = puVar12[lVar8] + (int)(uVar6 >> 0x20) * -0x80000000;
          }
        } while (lVar7 != 0);
      }
    }
  }
  else if ((uVar13 != 0) && (lVar7 != 0)) {
    lVar8 = *(long *)(this + 0x38);
    do {
      uVar9 = 0;
      uVar6 = 0;
      do {
        uVar11 = uVar6 + 1;
        uVar3 = puVar12[uVar6];
        uVar4 = uVar9 | uVar3 << 1;
        uVar9 = uVar3 >> 0x1f;
        puVar12[uVar6] = uVar4;
        uVar6 = uVar11;
      } while (uVar13 != uVar11);
      lVar7 = lVar7 + -1;
      uVar6 = uVar13;
      if ((int)uVar3 < 0) {
LAB_00d03bec:
        lVar10 = 0;
        uVar6 = 0;
        do {
          uVar11 = uVar6 + 2;
          puVar14 = puVar12 + uVar6;
          puVar1 = (uint *)(lVar8 + uVar6 * 4);
          lVar10 = (lVar10 + (ulong)*puVar14) - (ulong)*puVar1;
          *puVar14 = (uint)lVar10;
          lVar2 = ((ulong)puVar14[1] - (ulong)puVar1[1]) + (lVar10 >> 0x3f);
          lVar10 = lVar2 >> 0x3f;
          puVar14[1] = (uint)lVar2;
          uVar6 = uVar11;
        } while (uVar11 < uVar13);
      }
      else {
        do {
          if (uVar6 == 0) goto LAB_00d03bec;
          lVar10 = uVar6 - 1;
          uVar9 = *(uint *)(lVar8 + -4 + uVar6 * 4);
          if (uVar9 < puVar12[lVar10]) goto LAB_00d03bec;
          uVar6 = uVar6 - 1;
        } while (uVar9 <= puVar12[lVar10]);
      }
    } while (lVar7 != 0);
  }
LAB_00d03ccc:
  return this + 0x48;
}


