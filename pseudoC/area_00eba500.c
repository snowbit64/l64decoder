// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _area
// Entry Point: 00eba500
// Size: 124 bytes
// Signature: undefined _area(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FLOAT_MATH::CTriangulator::_area() */

undefined  [16] FLOAT_MATH::CTriangulator::_area(void)

{
  ulong uVar1;
  long lVar2;
  long in_x0;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  double dVar8;
  undefined auVar9 [16];
  double dVar10;
  ulong uVar7;
  
  lVar2 = *(long *)(in_x0 + 0x58);
  uVar3 = (*(long *)(in_x0 + 0x60) - lVar2 >> 3) * -0x5555555555555555;
  if (0 < (int)uVar3) {
    dVar8 = 0.0;
    puVar4 = (undefined8 *)(lVar2 + 8);
    uVar1 = 0;
    uVar7 = uVar3 - 1;
    do {
      uVar5 = uVar1;
      puVar6 = (undefined8 *)(lVar2 + (long)(int)uVar7 * 0x18);
      uVar1 = uVar5 + 1;
      dVar10 = (double)NEON_fmadd(*puVar6,*puVar4,(double)puVar6[1] * -(double)puVar4[-1]);
      dVar8 = dVar8 + dVar10;
      puVar4 = puVar4 + 3;
      uVar7 = uVar5;
    } while ((uVar3 & 0xffffffff) != uVar1);
    auVar9._0_8_ = dVar8 * 0.5;
    auVar9._8_8_ = 0;
    return auVar9;
  }
  return ZEXT816(0);
}


