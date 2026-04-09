// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VoxelSet
// Entry Point: 00ec9fd4
// Size: 224 bytes
// Signature: undefined __thiscall VoxelSet(VoxelSet * this)


/* VHACD::VoxelSet::VoxelSet() */

void __thiscall VHACD::VoxelSet::VoxelSet(VoxelSet *this)

{
  undefined auVar1 [16];
  
  this[8] = (VoxelSet)0x0;
  *(undefined ***)this = &PTR__PrimitiveSet_010148a8;
  Mesh::Mesh((Mesh *)(this + 0x10));
  *(undefined8 *)(this + 0xa10) = 8;
  *(undefined4 *)(this + 0xa58) = 0x10001;
  *(undefined8 *)(this + 0x9a0) = 0;
  auVar1 = NEON_fmov(0x3ff0000000000000,8);
  *(undefined8 *)(this + 0x9b0) = 0;
  *(undefined8 *)(this + 0x9a8) = 0;
  *(undefined8 *)(this + 0xa30) = 0;
  *(undefined8 *)(this + 0xa28) = 0;
  *(undefined ***)this = &PTR__VoxelSet_010147e0;
  *(long *)(this + 0xa40) = auVar1._8_8_;
  *(long *)(this + 0xa38) = auVar1._0_8_;
  *(undefined8 *)(this + 0xa48) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0xa08) = 0;
  *(undefined8 *)(this + 0xa00) = 0;
  *(undefined8 *)(this + 0xa20) = 0;
  *(undefined4 *)(this + 0xa5e) = 0;
  *(undefined8 *)(this + 0xa50) = 0x1000000000000;
  *(undefined2 *)(this + 0xa5c) = 0;
  *(undefined8 *)(this + 0xb00) = 0;
  *(undefined8 *)(this + 0xaf8) = 0;
  *(undefined8 *)(this + 0xb08) = 0;
  *(undefined8 *)(this + 0x9b8) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0xa18) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0x998) = 0;
  *(undefined8 *)(this + 0x990) = 0;
  *(undefined8 *)(this + 0xab8) = 0;
  *(undefined8 *)(this + 0xab0) = 0;
  *(undefined8 *)(this + 0xac8) = 0;
  *(undefined8 *)(this + 0xac0) = 0;
  *(undefined8 *)(this + 0xad8) = 0;
  *(undefined8 *)(this + 0xad0) = 0;
  *(undefined8 *)(this + 0xae8) = 0;
  *(undefined8 *)(this + 0xae0) = 0;
  *(undefined8 *)(this + 0xaf0) = 0;
  *(undefined8 *)(this + 0xa70) = 0;
  *(undefined8 *)(this + 0xa68) = 0;
  *(undefined8 *)(this + 0xa80) = 0;
  *(undefined8 *)(this + 0xa78) = 0;
  *(undefined8 *)(this + 0xa90) = 0;
  *(undefined8 *)(this + 0xa88) = 0;
  *(undefined8 *)(this + 0xaa0) = 0;
  *(undefined8 *)(this + 0xa98) = 0;
  *(undefined8 *)(this + 0xaa8) = 0;
  return;
}


