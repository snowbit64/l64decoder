// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Create
// Entry Point: 00ece828
// Size: 224 bytes
// Signature: undefined Create(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VHACD::VoxelSet::Create() const */

undefined8 * VHACD::VoxelSet::Create(void)

{
  undefined8 *puVar1;
  undefined auVar2 [16];
  
  puVar1 = (undefined8 *)operator_new(0xb10);
  *(undefined *)(puVar1 + 1) = 0;
  *puVar1 = &PTR__PrimitiveSet_010148a8;
  Mesh::Mesh((Mesh *)(puVar1 + 2));
  puVar1[0x142] = 8;
  *(undefined4 *)(puVar1 + 0x14b) = 0x10001;
  puVar1[0x134] = 0;
  auVar2 = NEON_fmov(0x3ff0000000000000,8);
  puVar1[0x136] = 0;
  puVar1[0x135] = 0;
  puVar1[0x146] = 0;
  puVar1[0x145] = 0;
  *puVar1 = &PTR__VoxelSet_010147e0;
  puVar1[0x148] = auVar2._8_8_;
  puVar1[0x147] = auVar2._0_8_;
  puVar1[0x149] = 0x3ff0000000000000;
  puVar1[0x141] = 0;
  puVar1[0x140] = 0;
  puVar1[0x144] = 0;
  *(undefined4 *)((long)puVar1 + 0xa5e) = 0;
  puVar1[0x14a] = 0x1000000000000;
  *(undefined2 *)((long)puVar1 + 0xa5c) = 0;
  puVar1[0x160] = 0;
  puVar1[0x15f] = 0;
  puVar1[0x161] = 0;
  puVar1[0x137] = 0x3ff0000000000000;
  puVar1[0x143] = 0x3ff0000000000000;
  puVar1[0x133] = 0;
  puVar1[0x132] = 0;
  puVar1[0x14e] = 0;
  puVar1[0x14d] = 0;
  puVar1[0x150] = 0;
  puVar1[0x14f] = 0;
  puVar1[0x152] = 0;
  puVar1[0x151] = 0;
  puVar1[0x154] = 0;
  puVar1[0x153] = 0;
  puVar1[0x156] = 0;
  puVar1[0x155] = 0;
  puVar1[0x158] = 0;
  puVar1[0x157] = 0;
  puVar1[0x15a] = 0;
  puVar1[0x159] = 0;
  puVar1[0x15c] = 0;
  puVar1[0x15b] = 0;
  puVar1[0x15e] = 0;
  puVar1[0x15d] = 0;
  return puVar1;
}


