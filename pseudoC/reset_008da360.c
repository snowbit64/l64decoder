// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 008da360
// Size: 212 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IndexedTriangleSetEmitterShape::reset() */

void IndexedTriangleSetEmitterShape::reset(void)

{
  long in_x0;
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  
  if ((*(long *)(in_x0 + 8) != 0) && (*(long *)(*(long *)(in_x0 + 8) + 0x170) != 0)) {
    lVar1 = Geometry::getBoundingVolume();
    lVar2 = *(long *)(in_x0 + 8);
    RawTransformGroup::updateWorldTransformation();
    uVar3 = NEON_fmadd(*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar2 + 0xb8),
                       *(float *)(lVar1 + 0x10) * *(float *)(lVar2 + 200));
    fVar4 = (float)NEON_fmadd(*(undefined4 *)(lVar1 + 0x14),*(undefined4 *)(lVar2 + 0xd8),uVar3);
    *(float *)(in_x0 + 0x1c) = fVar4 + *(float *)(lVar2 + 0xe8);
    uVar3 = NEON_fmadd(*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar2 + 0xbc),
                       *(float *)(lVar1 + 0x10) * *(float *)(lVar2 + 0xcc));
    fVar4 = (float)NEON_fmadd(*(undefined4 *)(lVar1 + 0x14),*(undefined4 *)(lVar2 + 0xdc),uVar3);
    *(float *)(in_x0 + 0x20) = fVar4 + *(float *)(lVar2 + 0xec);
    uVar3 = NEON_fmadd(*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar2 + 0xc0),
                       *(float *)(lVar1 + 0x10) * *(float *)(lVar2 + 0xd0));
    fVar4 = (float)NEON_fmadd(*(undefined4 *)(lVar1 + 0x14),*(undefined4 *)(lVar2 + 0xe0),uVar3);
    *(float *)(in_x0 + 0x24) = fVar4 + *(float *)(lVar2 + 0xf0);
  }
  *(undefined8 *)(in_x0 + 0x28) = 0;
  *(undefined8 *)(in_x0 + 0x30) = 0;
  *(undefined8 *)(in_x0 + 0x38) = 0;
  return;
}


