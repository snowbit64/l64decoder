// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: propagateTowardsChildren
// Entry Point: 00925220
// Size: 388 bytes
// Signature: undefined __thiscall propagateTowardsChildren(DestructionShape * this, uint param_1, uint param_2)


/* DestructionShape::propagateTowardsChildren(unsigned int, unsigned int) */

void __thiscall
DestructionShape::propagateTowardsChildren(DestructionShape *this,uint param_1,uint param_2)

{
  long lVar1;
  Bt2ScenegraphPhysicsContext *pBVar2;
  
  GsShape::propagateTowardsChildren((GsShape *)this,param_1,param_2);
  if (((param_1 & 1) != 0) &&
     (RawTransformGroup::updateWorldTransformation(),
     1e-05 < ABS(*(float *)(this + 0xb8) - *(float *)(this + 0x300)) +
             ABS(*(float *)(this + 0xbc) - *(float *)(this + 0x304)) +
             ABS(*(float *)(this + 0xc0) - *(float *)(this + 0x308)) +
             ABS(*(float *)(this + 0xc4) - *(float *)(this + 0x30c)) +
             ABS(*(float *)(this + 200) - *(float *)(this + 0x310)) +
             ABS(*(float *)(this + 0xcc) - *(float *)(this + 0x314)) +
             ABS(*(float *)(this + 0xd0) - *(float *)(this + 0x318)) +
             ABS(*(float *)(this + 0xd4) - *(float *)(this + 0x31c)) +
             ABS(*(float *)(this + 0xd8) - *(float *)(this + 800)) +
             ABS(*(float *)(this + 0xdc) - *(float *)(this + 0x324)) +
             ABS(*(float *)(this + 0xe0) - *(float *)(this + 0x328)) +
             ABS(*(float *)(this + 0xe4) - *(float *)(this + 0x32c)) +
             ABS(*(float *)(this + 0xe8) - *(float *)(this + 0x330)) +
             ABS(*(float *)(this + 0xec) - *(float *)(this + 0x334)) +
             ABS(*(float *)(this + 0xf0) - *(float *)(this + 0x338)) +
             ABS(*(float *)(this + 0xf4) - *(float *)(this + 0x33c)))) {
    RawTransformGroup::updateWorldTransformation();
    *(undefined8 *)(this + 0x308) = *(undefined8 *)(this + 0xc0);
    *(undefined8 *)(this + 0x300) = *(undefined8 *)(this + 0xb8);
    *(undefined8 *)(this + 0x318) = *(undefined8 *)(this + 0xd0);
    *(undefined8 *)(this + 0x310) = *(undefined8 *)(this + 200);
    *(undefined8 *)(this + 0x328) = *(undefined8 *)(this + 0xe0);
    *(undefined8 *)(this + 800) = *(undefined8 *)(this + 0xd8);
    *(undefined8 *)(this + 0x338) = *(undefined8 *)(this + 0xf0);
    *(undefined8 *)(this + 0x330) = *(undefined8 *)(this + 0xe8);
    Matrix4x4::invert3x4((Matrix4x4 *)(this + 0x2c0),(Matrix4x4 *)(this + 0x300));
    removeInterShapeJoints();
    lVar1 = RawTransformGroup::getPhysicsObject();
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      pBVar2 = *(Bt2ScenegraphPhysicsContext **)(this + 0x290);
      removeFromScene();
      addToScene(this,pBVar2);
      return;
    }
  }
  return;
}


