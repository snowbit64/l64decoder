// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator*
// Entry Point: 00f9f6d8
// Size: 140 bytes
// Signature: undefined __thiscall operator*(Int128 * this, long param_1)


/* btConvexHullInternal::Int128::TEMPNAMEPLACEHOLDERVALUE(long) const */

undefined  [16] __thiscall btConvexHullInternal::Int128::operator*(Int128 *this,long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined auVar12 [16];
  
  uVar9 = *(ulong *)this;
  uVar4 = *(ulong *)(this + 8);
  uVar8 = -uVar4;
  if (uVar9 != 0) {
    uVar8 = ~uVar4;
  }
  bVar6 = (long)uVar4 < 0;
  if (!bVar6) {
    uVar8 = uVar4;
  }
  uVar4 = -uVar9;
  if (!bVar6) {
    uVar4 = uVar9;
  }
  uVar9 = -param_1;
  if (param_1 >= 0) {
    uVar9 = param_1;
  }
  uVar10 = (uVar4 & 0xffffffff) * (uVar9 >> 0x20);
  uVar11 = (uVar4 >> 0x20) * (uVar9 & 0xffffffff);
  uVar7 = (uVar4 & 0xffffffff) * (uVar9 & 0xffffffff);
  uVar2 = (uVar10 & 0xffffffff) + (uVar11 & 0xffffffff);
  uVar1 = uVar2 << 0x20;
  lVar3 = uVar7 + uVar1;
  uVar8 = uVar8 * uVar9 + (uVar4 >> 0x20) * (uVar9 >> 0x20) + (uVar10 >> 0x20) + (uVar11 >> 0x20) +
          (uVar2 >> 0x20);
  if (CARRY8(uVar7,uVar1)) {
    uVar8 = uVar8 + 1;
  }
  uVar9 = -uVar8;
  if (lVar3 != 0) {
    uVar9 = ~uVar8;
  }
  lVar5 = -lVar3;
  if (param_1 < 0 == bVar6) {
    uVar9 = uVar8;
    lVar5 = lVar3;
  }
  auVar12._8_8_ = uVar9;
  auVar12._0_8_ = lVar5;
  return auVar12;
}


