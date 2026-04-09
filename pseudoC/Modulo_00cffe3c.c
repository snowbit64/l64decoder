// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Modulo
// Entry Point: 00cffe3c
// Size: 384 bytes
// Signature: undefined __thiscall Modulo(Integer * this, uint param_1)


/* CryptoPP::Integer::Modulo(unsigned int) const */

uint __thiscall CryptoPP::Integer::Modulo(Integer *this,uint param_1)

{
  uint *puVar1;
  undefined (*pauVar2) [16];
  uint uVar3;
  int iVar4;
  DivideByZero *this_00;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined (*pauVar11) [16];
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined auVar21 [16];
  undefined auVar22 [16];
  
  if (param_1 == 0) {
    this_00 = (DivideByZero *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cfffa0 to 00cfffa3 has its CatchHandler @ 00cfffbc */
    DivideByZero::DivideByZero(this_00);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&DivideByZero::typeinfo,Exception::~Exception);
  }
  if ((param_1 & param_1 - 1) == 0) {
    uVar6 = **(uint **)(this + 0x20) & param_1 - 1;
    goto LAB_00cfff74;
  }
  lVar5 = *(long *)(this + 0x20) + -4;
  uVar10 = *(ulong *)(this + 0x18);
  do {
    uVar7 = uVar10;
    if (uVar7 == 0) break;
    uVar10 = uVar7 - 1;
  } while (*(int *)(lVar5 + uVar7 * 4) == 0);
  if (5 < param_1) {
    if ((int)uVar7 == 0) {
      uVar6 = 0;
    }
    else {
      lVar8 = 0;
      uVar10 = (ulong)param_1;
      lVar12 = (uVar7 & 0xffffffff) << 2;
      do {
        puVar1 = (uint *)(lVar5 + lVar12);
        lVar12 = lVar12 + -4;
        uVar7 = (ulong)*puVar1 | lVar8 << 0x20;
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = uVar7 / uVar10;
        }
        lVar8 = uVar7 - uVar13 * uVar10;
        uVar6 = (uint)lVar8;
      } while (lVar12 != 0);
    }
    goto LAB_00cfff74;
  }
  if ((int)uVar7 == 0) {
    uVar10 = 0;
  }
  else {
    uVar13 = uVar7 & 0xffffffff;
    if (uVar13 < 8) {
      uVar10 = 0;
      uVar9 = uVar13;
    }
    else {
      uVar9 = uVar7 & 7;
      lVar8 = 0;
      lVar14 = 0;
      pauVar11 = (undefined (*) [16])(*(long *)(this + 0x20) + (uVar7 & 0xffffffff) * 4 + -0x10);
      lVar15 = 0;
      lVar16 = 0;
      lVar12 = uVar13 - (uVar7 & 7);
      lVar17 = 0;
      lVar18 = 0;
      lVar19 = 0;
      lVar20 = 0;
      do {
        pauVar2 = pauVar11 + -1;
        auVar21 = *pauVar11;
        pauVar11 = pauVar11 + -2;
        lVar12 = lVar12 + -8;
        auVar22 = NEON_rev64(*pauVar2,4);
        auVar21 = NEON_rev64(auVar21,4);
        auVar22 = NEON_ext(auVar22,auVar22,8,1);
        auVar21 = NEON_ext(auVar21,auVar21,8,1);
        lVar19 = lVar19 + (auVar22._8_8_ & 0xffffffff);
        lVar20 = lVar20 + (auVar22._8_8_ >> 0x20);
        lVar17 = lVar17 + (ulong)auVar22._0_4_;
        lVar18 = lVar18 + (ulong)auVar22._4_4_;
        lVar15 = lVar15 + (auVar21._8_8_ & 0xffffffff);
        lVar16 = lVar16 + (auVar21._8_8_ >> 0x20);
        lVar8 = lVar8 + (ulong)auVar21._0_4_;
        lVar14 = lVar14 + (ulong)auVar21._4_4_;
      } while (lVar12 != 0);
      uVar10 = lVar17 + lVar8 + lVar19 + lVar15 + lVar18 + lVar14 + lVar20 + lVar16;
      if (uVar9 == 0) goto LAB_00cfff68;
    }
    do {
      lVar12 = uVar9 * 4;
      uVar9 = uVar9 - 1;
      uVar10 = uVar10 + *(uint *)(lVar5 + lVar12);
    } while (uVar9 != 0);
  }
LAB_00cfff68:
  iVar4 = 0;
  if ((ulong)param_1 != 0) {
    iVar4 = (int)(uVar10 / param_1);
  }
  uVar6 = (int)uVar10 - iVar4 * param_1;
LAB_00cfff74:
  uVar3 = param_1 - uVar6;
  if (uVar6 == 0 || *(int *)(this + 0x28) != 1) {
    uVar3 = uVar6;
  }
  return uVar3;
}


