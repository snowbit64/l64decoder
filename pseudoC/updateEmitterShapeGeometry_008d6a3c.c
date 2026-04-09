// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateEmitterShapeGeometry
// Entry Point: 008d6a3c
// Size: 64 bytes
// Signature: undefined updateEmitterShapeGeometry(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ParticleSystem::updateEmitterShapeGeometry() */

void ParticleSystem::updateEmitterShapeGeometry(void)

{
  long in_x0;
  long lVar1;
  undefined4 uVar2;
  
  if (*(long *)(in_x0 + 0x198) == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = Geometry::getBoundingVolume();
    uVar2 = *(undefined4 *)(lVar1 + 0x18);
  }
  *(undefined4 *)(in_x0 + 0x194) = uVar2;
  updateBoundingVolume();
  return;
}


