// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compare
// Entry Point: 00f9f818
// Size: 208 bytes
// Signature: undefined __thiscall compare(Rational64 * this, Rational64 * param_1)


/* btConvexHullInternal::Rational64::compare(btConvexHullInternal::Rational64 const&) const */

int __thiscall btConvexHullInternal::Rational64::compare(Rational64 *this,Rational64 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  iVar6 = *(int *)(this + 0x10);
  if (iVar6 - *(int *)(param_1 + 0x10) != 0) {
    return iVar6 - *(int *)(param_1 + 0x10);
  }
  if (iVar6 == 0) {
    return 0;
  }
  uVar2 = *(ulong *)param_1;
  uVar4 = *(ulong *)(param_1 + 8);
  uVar3 = *(ulong *)this;
  uVar5 = *(ulong *)(this + 8);
  uVar8 = (uVar4 & 0xffffffff) * (uVar3 & 0xffffffff);
  uVar9 = (uVar4 >> 0x20) * (uVar3 & 0xffffffff);
  uVar10 = (uVar4 & 0xffffffff) * (uVar3 >> 0x20);
  uVar1 = (uVar9 & 0xffffffff) + (uVar10 & 0xffffffff);
  uVar11 = (uVar2 >> 0x20) * (uVar5 & 0xffffffff);
  uVar12 = (uVar2 & 0xffffffff) * (uVar5 >> 0x20);
  uVar4 = (uVar4 >> 0x20) * (uVar3 >> 0x20) + (uVar9 >> 0x20) + (uVar10 >> 0x20) + (uVar1 >> 0x20);
  uVar1 = uVar1 << 0x20;
  uVar9 = uVar8 + uVar1;
  uVar10 = (uVar2 & 0xffffffff) * (uVar5 & 0xffffffff);
  uVar3 = (uVar11 & 0xffffffff) + (uVar12 & 0xffffffff);
  if (CARRY8(uVar8,uVar1)) {
    uVar4 = uVar4 + 1;
  }
  uVar1 = (uVar2 >> 0x20) * (uVar5 >> 0x20) + (uVar11 >> 0x20) + (uVar12 >> 0x20) + (uVar3 >> 0x20);
  uVar3 = uVar3 << 0x20;
  uVar2 = uVar10 + uVar3;
  if (CARRY8(uVar10,uVar3)) {
    uVar1 = uVar1 + 1;
  }
  if (uVar1 <= uVar4) {
    if (uVar1 < uVar4) {
      uVar7 = 1;
      goto LAB_00f9f8d4;
    }
    if (uVar2 <= uVar9) {
      uVar7 = (uint)(uVar2 < uVar9);
      goto LAB_00f9f8d4;
    }
  }
  uVar7 = 0xffffffff;
LAB_00f9f8d4:
  return uVar7 * iVar6;
}


