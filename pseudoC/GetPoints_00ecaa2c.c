// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetPoints
// Entry Point: 00ecaa2c
// Size: 444 bytes
// Signature: undefined __thiscall GetPoints(VoxelSet * this, Voxel * param_1, Vec3 * param_2)


/* VHACD::VoxelSet::GetPoints(VHACD::Voxel const&, VHACD::Vec3<double>*) const */

void __thiscall VHACD::VoxelSet::GetPoints(VoxelSet *this,Voxel *param_1,Vec3 *param_2)

{
  short sVar1;
  short sVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  
  sVar1 = *(short *)(param_1 + 2);
  dVar4 = (double)(int)*(short *)param_1 + -0.5;
  uVar5 = NEON_fmadd(dVar4,*(undefined8 *)(this + 0x9b8),*(undefined8 *)(this + 0x9a0));
  dVar3 = (double)(int)*(short *)param_1 + 0.5;
  *(undefined8 *)param_2 = uVar5;
  uVar5 = NEON_fmadd(dVar3,*(undefined8 *)(this + 0x9b8),*(undefined8 *)(this + 0x9a0));
  *(undefined8 *)(param_2 + 0x18) = uVar5;
  uVar5 = NEON_fmadd(dVar3,*(undefined8 *)(this + 0x9b8),*(undefined8 *)(this + 0x9a0));
  *(undefined8 *)(param_2 + 0x30) = uVar5;
  uVar5 = NEON_fmadd(dVar4,*(undefined8 *)(this + 0x9b8),*(undefined8 *)(this + 0x9a0));
  *(undefined8 *)(param_2 + 0x48) = uVar5;
  uVar5 = NEON_fmadd(dVar4,*(undefined8 *)(this + 0x9b8),*(undefined8 *)(this + 0x9a0));
  *(undefined8 *)(param_2 + 0x60) = uVar5;
  uVar5 = NEON_fmadd(dVar3,*(undefined8 *)(this + 0x9b8),*(undefined8 *)(this + 0x9a0));
  *(undefined8 *)(param_2 + 0x78) = uVar5;
  uVar5 = NEON_fmadd(dVar3,*(undefined8 *)(this + 0x9b8),*(undefined8 *)(this + 0x9a0));
  *(undefined8 *)(param_2 + 0x90) = uVar5;
  uVar5 = NEON_fmadd(dVar4,*(undefined8 *)(this + 0x9b8),*(undefined8 *)(this + 0x9a0));
  sVar2 = *(short *)(param_1 + 4);
  *(undefined8 *)(param_2 + 0xa8) = uVar5;
  dVar3 = (double)(int)sVar1 + -0.5;
  dVar4 = (double)(int)sVar1 + 0.5;
  uVar5 = NEON_fmadd(dVar3,*(undefined8 *)(this + 0x9b8),*(undefined8 *)(this + 0x9a8));
  *(undefined8 *)(param_2 + 8) = uVar5;
  uVar5 = NEON_fmadd(dVar3,*(undefined8 *)(this + 0x9b8),*(undefined8 *)(this + 0x9a8));
  *(undefined8 *)(param_2 + 0x20) = uVar5;
  uVar5 = NEON_fmadd(dVar4,*(undefined8 *)(this + 0x9b8),*(undefined8 *)(this + 0x9a8));
  *(undefined8 *)(param_2 + 0x38) = uVar5;
  uVar5 = NEON_fmadd(dVar4,*(undefined8 *)(this + 0x9b8),*(undefined8 *)(this + 0x9a8));
  *(undefined8 *)(param_2 + 0x50) = uVar5;
  uVar5 = NEON_fmadd(dVar3,*(undefined8 *)(this + 0x9b8),*(undefined8 *)(this + 0x9a8));
  *(undefined8 *)(param_2 + 0x68) = uVar5;
  uVar5 = NEON_fmadd(dVar3,*(undefined8 *)(this + 0x9b8),*(undefined8 *)(this + 0x9a8));
  *(undefined8 *)(param_2 + 0x80) = uVar5;
  uVar5 = NEON_fmadd(dVar4,*(undefined8 *)(this + 0x9b8),*(undefined8 *)(this + 0x9a8));
  *(undefined8 *)(param_2 + 0x98) = uVar5;
  uVar5 = NEON_fmadd(dVar4,*(undefined8 *)(this + 0x9b8),*(undefined8 *)(this + 0x9a8));
  *(undefined8 *)(param_2 + 0xb0) = uVar5;
  dVar4 = (double)(int)sVar2 + -0.5;
  dVar3 = (double)(int)sVar2 + 0.5;
  uVar5 = NEON_fmadd(dVar4,*(undefined8 *)(this + 0x9b8),*(undefined8 *)(this + 0x9b0));
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar5 = NEON_fmadd(dVar4,*(undefined8 *)(this + 0x9b8),*(undefined8 *)(this + 0x9b0));
  *(undefined8 *)(param_2 + 0x28) = uVar5;
  uVar5 = NEON_fmadd(dVar4,*(undefined8 *)(this + 0x9b8),*(undefined8 *)(this + 0x9b0));
  *(undefined8 *)(param_2 + 0x40) = uVar5;
  uVar5 = NEON_fmadd(dVar4,*(undefined8 *)(this + 0x9b8),*(undefined8 *)(this + 0x9b0));
  *(undefined8 *)(param_2 + 0x58) = uVar5;
  uVar5 = NEON_fmadd(dVar3,*(undefined8 *)(this + 0x9b8),*(undefined8 *)(this + 0x9b0));
  *(undefined8 *)(param_2 + 0x70) = uVar5;
  uVar5 = NEON_fmadd(dVar3,*(undefined8 *)(this + 0x9b8),*(undefined8 *)(this + 0x9b0));
  *(undefined8 *)(param_2 + 0x88) = uVar5;
  uVar5 = NEON_fmadd(dVar3,*(undefined8 *)(this + 0x9b8),*(undefined8 *)(this + 0x9b0));
  *(undefined8 *)(param_2 + 0xa0) = uVar5;
  uVar5 = NEON_fmadd(dVar3,*(undefined8 *)(this + 0x9b8),*(undefined8 *)(this + 0x9b0));
  *(undefined8 *)(param_2 + 0xb8) = uVar5;
  return;
}


