// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateParticles
// Entry Point: 008da434
// Size: 332 bytes
// Signature: undefined __cdecl updateParticles(float param_1)


/* IndexedTriangleSetEmitterShape::updateParticles(float) */

float IndexedTriangleSetEmitterShape::updateParticles(float param_1)

{
  long in_x0;
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  
  if ((*(long *)(in_x0 + 8) != 0) && (*(long *)(*(long *)(in_x0 + 8) + 0x170) != 0)) {
    uVar8 = *(undefined8 *)(in_x0 + 0x1c);
    fVar9 = *(float *)(in_x0 + 0x24);
    lVar1 = Geometry::getBoundingVolume();
    lVar2 = *(long *)(in_x0 + 8);
    RawTransformGroup::updateWorldTransformation();
    uVar3 = NEON_fmadd(*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar2 + 0xb8),
                       *(float *)(lVar1 + 0x10) * *(float *)(lVar2 + 200));
    fVar4 = (float)NEON_fmadd(*(undefined4 *)(lVar1 + 0x14),*(undefined4 *)(lVar2 + 0xd8),uVar3);
    fVar4 = fVar4 + *(float *)(lVar2 + 0xe8);
    *(float *)(in_x0 + 0x1c) = fVar4;
    uVar3 = NEON_fmadd(*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar2 + 0xbc),
                       *(float *)(lVar1 + 0x10) * *(float *)(lVar2 + 0xcc));
    fVar5 = (float)NEON_fmadd(*(undefined4 *)(lVar1 + 0x14),*(undefined4 *)(lVar2 + 0xdc),uVar3);
    fVar5 = fVar5 + *(float *)(lVar2 + 0xec);
    *(float *)(in_x0 + 0x20) = fVar5;
    uVar3 = NEON_fmadd(*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar2 + 0xc0),
                       *(float *)(lVar1 + 0x10) * *(float *)(lVar2 + 0xd0));
    fVar6 = (float)NEON_fmadd(*(undefined4 *)(lVar1 + 0x14),*(undefined4 *)(lVar2 + 0xe0),uVar3);
    fVar7 = *(float *)(lVar2 + 0xf0);
    *(ulong *)(in_x0 + 0x28) = CONCAT44(fVar5 - (float)((ulong)uVar8 >> 0x20),fVar4 - (float)uVar8);
    fVar6 = fVar6 + fVar7;
    *(float *)(in_x0 + 0x24) = fVar6;
    *(float *)(in_x0 + 0x30) = fVar6 - fVar9;
    ScenegraphPhysicsContextManager::getInstance();
    lVar1 = ScenegraphPhysicsContextManager::getContext();
    param_1 = *(float *)(lVar1 + 0x6c);
    if (0.0 < param_1) {
      fVar4 = 0.9 / param_1;
      param_1 = (float)NEON_fmadd(*(undefined4 *)(in_x0 + 0x30),fVar4,*(float *)(in_x0 + 0x3c) * 0.1
                                 );
      *(ulong *)(in_x0 + 0x34) =
           CONCAT44((float)((ulong)*(undefined8 *)(in_x0 + 0x34) >> 0x20) * 0.1 +
                    (float)((ulong)*(undefined8 *)(in_x0 + 0x28) >> 0x20) * fVar4,
                    (float)*(undefined8 *)(in_x0 + 0x34) * 0.1 +
                    (float)*(undefined8 *)(in_x0 + 0x28) * fVar4);
      *(float *)(in_x0 + 0x3c) = param_1;
    }
  }
  return param_1;
}


