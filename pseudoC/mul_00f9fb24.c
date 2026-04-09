// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mul
// Entry Point: 00f9fb24
// Size: 296 bytes
// Signature: undefined __cdecl mul(Int128 param_1, Int128 param_2, Int128 * param_3, Int128 * param_4)


/* btConvexHullInternal::DMul<btConvexHullInternal::Int128, unsigned
   long>::mul(btConvexHullInternal::Int128, btConvexHullInternal::Int128,
   btConvexHullInternal::Int128&, btConvexHullInternal::Int128&) */

void btConvexHullInternal::DMul<btConvexHullInternal::Int128,unsigned_long>::mul
               (ulong param_1,ulong param_2,ulong param_3,ulong param_4,long *param_5,ulong *param_6
               )

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  
  uVar5 = param_4 >> 0x20;
  uVar8 = param_3 >> 0x20;
  uVar11 = param_1 >> 0x20;
  uVar14 = uVar8 * (param_1 & 0xffffffff);
  uVar15 = (param_3 & 0xffffffff) * uVar11;
  uVar7 = uVar5 * (param_1 & 0xffffffff);
  uVar21 = param_2 >> 0x20;
  uVar1 = (uVar14 & 0xffffffff) + (uVar15 & 0xffffffff);
  uVar16 = (param_4 & 0xffffffff) * uVar11;
  uVar9 = (param_3 & 0xffffffff) * uVar21;
  uVar12 = uVar8 * (param_2 & 0xffffffff);
  uVar2 = (uVar7 & 0xffffffff) + (uVar16 & 0xffffffff);
  uVar18 = (param_3 & 0xffffffff) * (param_1 & 0xffffffff);
  uVar17 = (param_3 & 0xffffffff) * (param_2 & 0xffffffff);
  uVar3 = (uVar12 & 0xffffffff) + (uVar9 & 0xffffffff);
  uVar10 = uVar5 * (param_2 & 0xffffffff);
  uVar13 = (param_4 & 0xffffffff) * uVar21;
  uVar12 = uVar8 * uVar21 + (uVar12 >> 0x20) + (uVar9 >> 0x20) + (uVar3 >> 0x20);
  uVar3 = uVar3 << 0x20;
  uVar19 = uVar17 + uVar3;
  uVar20 = (param_4 & 0xffffffff) * (param_2 & 0xffffffff);
  uVar9 = (uVar10 & 0xffffffff) + (uVar13 & 0xffffffff);
  uVar6 = (param_4 & 0xffffffff) * (param_1 & 0xffffffff);
  if (CARRY8(uVar17,uVar3)) {
    uVar12 = uVar12 + 1;
  }
  lVar4 = uVar5 * uVar21 + (uVar10 >> 0x20) + (uVar13 >> 0x20) + (uVar9 >> 0x20);
  uVar9 = uVar9 << 0x20;
  uVar3 = uVar20 + uVar9;
  if (CARRY8(uVar20,uVar9)) {
    lVar4 = lVar4 + 1;
  }
  uVar9 = uVar2 << 0x20;
  uVar10 = uVar6 + uVar9;
  uVar2 = uVar5 * uVar11 + (uVar7 >> 0x20) + (uVar16 >> 0x20) + (uVar2 >> 0x20) + uVar3;
  if (CARRY8(uVar6,uVar9)) {
    uVar2 = uVar2 + 1;
  }
  uVar9 = uVar19 + uVar10;
  uVar19 = (ulong)CARRY8(uVar19,uVar10);
  if (uVar2 < uVar3) {
    lVar4 = lVar4 + 1;
  }
  if (CARRY8(uVar12,uVar2)) {
    lVar4 = lVar4 + 1;
  }
  uVar3 = uVar12 + uVar2 + uVar19;
  if (CARRY8(uVar12 + uVar2,uVar19)) {
    lVar4 = lVar4 + 1;
  }
  uVar2 = uVar1 << 0x20;
  uVar1 = uVar8 * uVar11 + (uVar14 >> 0x20) + (uVar15 >> 0x20) + (uVar1 >> 0x20) + uVar9;
  if (CARRY8(uVar18,uVar2)) {
    uVar1 = uVar1 + 1;
  }
  uVar12 = uVar3 + 1;
  if (uVar1 >= uVar9) {
    uVar12 = uVar3;
  }
  *param_5 = uVar18 + uVar2;
  param_5[1] = uVar1;
  *param_6 = uVar12;
  param_6[1] = lVar4 + (ulong)(uVar1 < uVar9 && 0xfffffffffffffffe < uVar3);
  return;
}


