// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compare
// Entry Point: 00f9fa0c
// Size: 280 bytes
// Signature: undefined __thiscall compare(Rational128 * this, long param_1)


/* btConvexHullInternal::Rational128::compare(long) const */

int __thiscall btConvexHullInternal::Rational128::compare(Rational128 *this,long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (this[0x24] != (Rational128)0x0) {
    lVar6 = *(long *)this * (long)*(int *)(this + 0x20);
    iVar5 = -(uint)(lVar6 < param_1);
    if (lVar6 - param_1 != 0 && param_1 <= lVar6) {
      iVar5 = 1;
    }
    return iVar5;
  }
  if (param_1 < 1) {
    iVar5 = *(int *)(this + 0x20);
    if (-1 < param_1) {
      return iVar5;
    }
    if (-1 < iVar5) {
      return 1;
    }
    param_1 = -param_1;
  }
  else {
    iVar5 = *(int *)(this + 0x20);
    if (iVar5 < 1) {
      return -1;
    }
  }
  uVar9 = *(ulong *)(this + 0x10);
  uVar3 = *(ulong *)(this + 0x18);
  uVar8 = -uVar3;
  if (uVar9 != 0) {
    uVar8 = ~uVar3;
  }
  uVar4 = -uVar9;
  if (-1 < (long)uVar3) {
    uVar8 = uVar3;
    uVar4 = uVar9;
  }
  uVar7 = (uVar4 & 0xffffffff) * (param_1 & 0xffffffffU);
  uVar10 = (uVar4 & 0xffffffff) * ((ulong)param_1 >> 0x20);
  uVar11 = (uVar4 >> 0x20) * (param_1 & 0xffffffffU);
  uVar1 = (uVar10 & 0xffffffff) + (uVar11 & 0xffffffff);
  uVar9 = uVar1 << 0x20;
  uVar2 = uVar7 + uVar9;
  uVar8 = (uVar4 >> 0x20) * ((ulong)param_1 >> 0x20) + (uVar10 >> 0x20) + (uVar11 >> 0x20) +
          uVar8 * param_1 + (uVar1 >> 0x20);
  if (CARRY8(uVar7,uVar9)) {
    uVar8 = uVar8 + 1;
  }
  uVar9 = -uVar8;
  if (uVar2 != 0) {
    uVar9 = ~uVar8;
  }
  uVar4 = -uVar2;
  if (-1 < (long)uVar3) {
    uVar9 = uVar8;
    uVar4 = uVar2;
  }
  if (uVar9 <= *(ulong *)(this + 8)) {
    if (uVar9 < *(ulong *)(this + 8)) {
      return iVar5;
    }
    if (uVar4 <= *(ulong *)this) {
      return iVar5 * (uint)(uVar4 < *(ulong *)this);
    }
  }
  return -iVar5;
}


