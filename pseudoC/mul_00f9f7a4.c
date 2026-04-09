// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mul
// Entry Point: 00f9f7a4
// Size: 116 bytes
// Signature: undefined __cdecl mul(long param_1, long param_2)


/* btConvexHullInternal::Int128::mul(long, long) */

undefined  [16] btConvexHullInternal::Int128::mul(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined auVar10 [16];
  
  uVar2 = -param_1;
  if (param_1 >= 0) {
    uVar2 = param_1;
  }
  uVar8 = -param_2;
  if (param_2 >= 0) {
    uVar8 = param_2;
  }
  uVar6 = (uVar8 & 0xffffffff) * (uVar2 & 0xffffffff);
  uVar7 = (uVar8 >> 0x20) * (uVar2 & 0xffffffff);
  uVar9 = (uVar8 & 0xffffffff) * (uVar2 >> 0x20);
  uVar1 = (uVar7 & 0xffffffff) + (uVar9 & 0xffffffff);
  uVar2 = (uVar8 >> 0x20) * (uVar2 >> 0x20) + (uVar7 >> 0x20) + (uVar9 >> 0x20) + (uVar1 >> 0x20);
  uVar1 = uVar1 << 0x20;
  lVar3 = uVar6 + uVar1;
  if (CARRY8(uVar6,uVar1)) {
    uVar2 = uVar2 + 1;
  }
  bVar5 = param_1 < 0 == param_2 < 0;
  uVar8 = -uVar2;
  if (lVar3 != 0) {
    uVar8 = ~uVar2;
  }
  if (bVar5) {
    uVar8 = uVar2;
  }
  lVar4 = -lVar3;
  if (bVar5) {
    lVar4 = lVar3;
  }
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = lVar4;
  return auVar10;
}


