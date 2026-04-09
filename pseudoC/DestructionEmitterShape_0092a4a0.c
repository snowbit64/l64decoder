// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DestructionEmitterShape
// Entry Point: 0092a4a0
// Size: 336 bytes
// Signature: undefined __thiscall DestructionEmitterShape(DestructionEmitterShape * this, GsShape * param_1, ParticleSystem * param_2, uint param_3)


/* DestructionEmitterShape::DestructionEmitterShape(GsShape*, ParticleSystem*, unsigned int) */

void __thiscall
DestructionEmitterShape::DestructionEmitterShape
          (DestructionEmitterShape *this,GsShape *param_1,ParticleSystem *param_2,uint param_3)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(ParticleSystem **)(this + 0x10) = param_2;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__DestructionEmitterShape_00fe0080;
  *(GsShape **)(this + 8) = param_1;
                    /* try { // try from 0092a4dc to 0092a4e3 has its CatchHandler @ 0092a5f4 */
  pvVar1 = operator_new(0x1450);
  *(void **)(this + 0x18) = pvVar1;
  *(void **)(this + 0x20) = pvVar1;
  *(uint *)(this + 0x30) = param_3;
  *(long *)(this + 0x28) = (long)pvVar1 + 0x1450;
  if (param_1 != (GsShape *)0x0) {
    if (*(long *)(param_1 + 0x170) != 0) {
                    /* try { // try from 0092a504 to 0092a517 has its CatchHandler @ 0092a5f0 */
      lVar2 = Geometry::getBoundingVolume();
      lVar4 = *(long *)(this + 8);
      RawTransformGroup::updateWorldTransformation();
      uVar5 = NEON_fmadd(*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar4 + 0xb8),
                         *(float *)(lVar2 + 0x10) * *(float *)(lVar4 + 200));
      fVar6 = (float)NEON_fmadd(*(undefined4 *)(lVar2 + 0x14),*(undefined4 *)(lVar4 + 0xd8),uVar5);
      *(float *)(this + 0x34) = fVar6 + *(float *)(lVar4 + 0xe8);
      uVar5 = NEON_fmadd(*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar4 + 0xbc),
                         *(float *)(lVar2 + 0x10) * *(float *)(lVar4 + 0xcc));
      fVar6 = (float)NEON_fmadd(*(undefined4 *)(lVar2 + 0x14),*(undefined4 *)(lVar4 + 0xdc),uVar5);
      *(float *)(this + 0x38) = fVar6 + *(float *)(lVar4 + 0xec);
      uVar5 = NEON_fmadd(*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar4 + 0xc0),
                         *(float *)(lVar2 + 0x10) * *(float *)(lVar4 + 0xd0));
      param_1 = *(GsShape **)(this + 8);
      fVar6 = (float)NEON_fmadd(*(undefined4 *)(lVar2 + 0x14),*(undefined4 *)(lVar4 + 0xe0),uVar5);
      *(float *)(this + 0x3c) = fVar6 + *(float *)(lVar4 + 0xf0);
      if (param_1 == (GsShape *)0x0) {
        return;
      }
    }
    uVar3 = *(uint *)(this + 0x30);
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 0092a5ac to 0092a5df has its CatchHandler @ 0092a5f4 */
      DestructionShape::addJointBreakEmitterShape((DestructionShape *)param_1,this);
      uVar3 = *(uint *)(this + 0x30);
    }
    if ((uVar3 >> 1 & 1) != 0) {
      DestructionShape::addCollisionEmitterShape(*(DestructionShape **)(this + 8),this);
      uVar3 = *(uint *)(this + 0x30);
    }
    if ((uVar3 >> 2 & 1) != 0) {
      DestructionShape::addChunkDeleteEmitterShape(*(DestructionShape **)(this + 8),this);
    }
  }
  return;
}


