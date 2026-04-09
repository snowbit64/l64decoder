// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputePreferredCuttingDirection
// Entry Point: 00ea6318
// Size: 336 bytes
// Signature: undefined __cdecl ComputePreferredCuttingDirection(PrimitiveSet * param_1, Vec3 * param_2)


/* WARNING: Removing unreachable block (ram,0x00ea640c) */
/* WARNING: Removing unreachable block (ram,0x00ea6430) */
/* WARNING: Removing unreachable block (ram,0x00ea638c) */
/* WARNING: Removing unreachable block (ram,0x00ea6398) */
/* WARNING: Removing unreachable block (ram,0x00ea63d0) */
/* WARNING: Removing unreachable block (ram,0x00ea63f0) */
/* VHACD::ComputePreferredCuttingDirection(VHACD::PrimitiveSet const*, VHACD::Vec3<double>&) */

undefined  [16] VHACD::ComputePreferredCuttingDirection(PrimitiveSet *param_1,Vec3 *param_2)

{
  double dVar1;
  double dVar2;
  undefined auVar3 [16];
  double dVar4;
  
  dVar1 = (double)(**(code **)(*(long *)param_1 + 0x30))(param_1,0);
  dVar2 = (double)(**(code **)(*(long *)param_1 + 0x30))(param_1,1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1,2);
  *(undefined8 *)param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0x3ff0000000000000;
  dVar4 = (double)NEON_fmadd(dVar1,dVar1,dVar2 * dVar2);
  if (dVar4 == 0.0) {
    return ZEXT816(0);
  }
  auVar3._0_8_ = 1.0 - ((dVar1 - dVar2) * (dVar1 - dVar2)) / dVar4;
  auVar3._8_8_ = 0;
  return auVar3;
}


