// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SplineGeometry
// Entry Point: 008c6fb4
// Size: 112 bytes
// Signature: undefined __thiscall ~SplineGeometry(SplineGeometry * this)


/* non-virtual thunk to SplineGeometry::~SplineGeometry() */

void __thiscall SplineGeometry::~SplineGeometry(SplineGeometry *this)

{
  undefined8 *this_00;
  
  *(undefined ***)this = &PTR__SplineGeometry_00fddf30;
  this_00 = (undefined8 *)(this + -0x10);
  *this_00 = &PTR__SplineGeometry_00fdded8;
  *(undefined ***)(this + 0xb8) = &PTR__SplineGeometry_00fddf50;
  if (*(long **)(this + 200) != (long *)0x0) {
    (**(code **)(**(long **)(this + 200) + 8))();
  }
  *(undefined8 *)(this + 200) = 0;
  Streamable::~Streamable((Streamable *)(this + 0xb8));
  VertexBufferGeometry::~VertexBufferGeometry((VertexBufferGeometry *)this_00);
  operator_delete(this_00);
  return;
}


