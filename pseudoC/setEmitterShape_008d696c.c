// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setEmitterShape
// Entry Point: 008d696c
// Size: 188 bytes
// Signature: undefined __thiscall setEmitterShape(ParticleSystem * this, GsShape * param_1, bool param_2)


/* ParticleSystem::setEmitterShape(GsShape*, bool) */

void __thiscall ParticleSystem::setEmitterShape(ParticleSystem *this,GsShape *param_1,bool param_2)

{
  IndexedTriangleSetEmitterShape *this_00;
  long lVar1;
  undefined4 uVar2;
  
  if (*(long **)(this + 0x1a0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a0) + 8))();
  }
  *(undefined8 *)(this + 0x19c) = 0;
  *(undefined8 *)(this + 0x194) = 0;
  *(undefined4 *)(this + 0x1a4) = 0;
  if ((param_1 != (GsShape *)0x0) && (((byte)param_1[0x11] >> 3 & 1) != 0)) {
    *(GsShape **)(this + 0x198) = param_1;
    this_00 = (IndexedTriangleSetEmitterShape *)operator_new(0x40);
                    /* try { // try from 008d69e0 to 008d69ef has its CatchHandler @ 008d6a28 */
    IndexedTriangleSetEmitterShape::IndexedTriangleSetEmitterShape
              (this_00,param_1,this,*(uint *)(this + 400),param_2);
    *(IndexedTriangleSetEmitterShape **)(this + 0x1a0) = this_00;
    if (*(long *)(this + 0x198) == 0) {
      uVar2 = 0;
    }
    else {
      lVar1 = Geometry::getBoundingVolume();
      uVar2 = *(undefined4 *)(lVar1 + 0x18);
    }
    *(undefined4 *)(this + 0x194) = uVar2;
    updateBoundingVolume();
    return;
  }
  return;
}


