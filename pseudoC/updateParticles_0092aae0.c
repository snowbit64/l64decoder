// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateParticles
// Entry Point: 0092aae0
// Size: 324 bytes
// Signature: undefined __cdecl updateParticles(float param_1)


/* DestructionEmitterShape::updateParticles(float) */

void DestructionEmitterShape::updateParticles(float param_1)

{
  long in_x0;
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  fVar5 = (float)ParticleSystem::getCurrentTime();
  puVar1 = *(undefined8 **)(in_x0 + 0x18);
  puVar3 = *(undefined8 **)(in_x0 + 0x20);
  if (puVar1 != puVar3) {
    do {
      while (*(float *)(puVar1 + 6) <= fVar5) {
        uVar8 = *(undefined8 *)((long)puVar3 + -0xc);
        uVar7 = *(undefined8 *)((long)puVar3 + -0x14);
        uVar10 = *(undefined8 *)((long)puVar3 + -0x1c);
        uVar9 = *(undefined8 *)((long)puVar3 + -0x24);
        uVar12 = *(undefined8 *)((long)puVar3 + -0x2c);
        uVar11 = *(undefined8 *)((long)puVar3 + -0x34);
        *(undefined4 *)(puVar1 + 6) = *(undefined4 *)((long)puVar3 + -4);
        puVar1[3] = uVar10;
        puVar1[2] = uVar9;
        puVar1[5] = uVar8;
        puVar1[4] = uVar7;
        puVar1[1] = uVar12;
        *puVar1 = uVar11;
        puVar3 = (undefined8 *)(*(long *)(in_x0 + 0x20) + -0x34);
        if (puVar1 == puVar3) {
          *(undefined8 **)(in_x0 + 0x20) = puVar1;
          lVar2 = *(long *)(in_x0 + 8);
          goto joined_r0x0092ac10;
        }
        *(undefined8 **)(in_x0 + 0x20) = puVar3;
        if (puVar1 == puVar3) goto LAB_0092ab5c;
      }
      puVar1 = (undefined8 *)((long)puVar1 + 0x34);
    } while (puVar1 != puVar3);
  }
LAB_0092ab5c:
  lVar2 = *(long *)(in_x0 + 8);
joined_r0x0092ac10:
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x170) != 0)) {
    lVar2 = Geometry::getBoundingVolume();
    lVar4 = *(long *)(in_x0 + 8);
    RawTransformGroup::updateWorldTransformation();
    uVar6 = NEON_fmadd(*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar4 + 0xb8),
                       *(float *)(lVar2 + 0x10) * *(float *)(lVar4 + 200));
    fVar5 = (float)NEON_fmadd(*(undefined4 *)(lVar2 + 0x14),*(undefined4 *)(lVar4 + 0xd8),uVar6);
    *(float *)(in_x0 + 0x34) = fVar5 + *(float *)(lVar4 + 0xe8);
    uVar6 = NEON_fmadd(*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar4 + 0xbc),
                       *(float *)(lVar2 + 0x10) * *(float *)(lVar4 + 0xcc));
    fVar5 = (float)NEON_fmadd(*(undefined4 *)(lVar2 + 0x14),*(undefined4 *)(lVar4 + 0xdc),uVar6);
    *(float *)(in_x0 + 0x38) = fVar5 + *(float *)(lVar4 + 0xec);
    uVar6 = NEON_fmadd(*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar4 + 0xc0),
                       *(float *)(lVar2 + 0x10) * *(float *)(lVar4 + 0xd0));
    fVar5 = (float)NEON_fmadd(*(undefined4 *)(lVar2 + 0x14),*(undefined4 *)(lVar4 + 0xe0),uVar6);
    *(float *)(in_x0 + 0x3c) = fVar5 + *(float *)(lVar4 + 0xf0);
  }
  return;
}


