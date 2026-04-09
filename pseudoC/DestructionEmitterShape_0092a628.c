// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DestructionEmitterShape
// Entry Point: 0092a628
// Size: 132 bytes
// Signature: undefined __thiscall ~DestructionEmitterShape(DestructionEmitterShape * this)


/* DestructionEmitterShape::~DestructionEmitterShape() */

void __thiscall DestructionEmitterShape::~DestructionEmitterShape(DestructionEmitterShape *this)

{
  void *pvVar1;
  uint uVar2;
  
  *(undefined ***)this = &PTR__DestructionEmitterShape_00fe0080;
  if (*(DestructionShape **)(this + 8) != (DestructionShape *)0x0) {
    uVar2 = *(uint *)(this + 0x30);
    if ((uVar2 & 1) != 0) {
                    /* try { // try from 0092a658 to 0092a687 has its CatchHandler @ 0092a6ac */
      DestructionShape::removeJointBreakEmitterShape(*(DestructionShape **)(this + 8),this);
      uVar2 = *(uint *)(this + 0x30);
    }
    if ((uVar2 >> 1 & 1) != 0) {
      DestructionShape::removeCollisionEmitterShape(*(DestructionShape **)(this + 8),this);
      uVar2 = *(uint *)(this + 0x30);
    }
    if ((uVar2 >> 2 & 1) != 0) {
      DestructionShape::removeChunkDeleteEmitterShape(*(DestructionShape **)(this + 8),this);
    }
  }
  pvVar1 = *(void **)(this + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


