// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SplineGeometry
// Entry Point: 008c6e18
// Size: 100 bytes
// Signature: undefined __thiscall ~SplineGeometry(SplineGeometry * this)


/* SplineGeometry::~SplineGeometry() */

void __thiscall SplineGeometry::~SplineGeometry(SplineGeometry *this)

{
  *(undefined ***)this = &PTR__SplineGeometry_00fdded8;
  *(undefined ***)(this + 0x10) = &PTR__SplineGeometry_00fddf30;
  *(undefined ***)(this + 200) = &PTR__SplineGeometry_00fddf50;
  if (*(long **)(this + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xd8) + 8))();
  }
  *(undefined8 *)(this + 0xd8) = 0;
  Streamable::~Streamable((Streamable *)(this + 200));
  VertexBufferGeometry::~VertexBufferGeometry((VertexBufferGeometry *)this);
  return;
}


