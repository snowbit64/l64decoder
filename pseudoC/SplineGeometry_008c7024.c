// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SplineGeometry
// Entry Point: 008c7024
// Size: 108 bytes
// Signature: undefined __thiscall ~SplineGeometry(SplineGeometry * this)


/* non-virtual thunk to SplineGeometry::~SplineGeometry() */

void __thiscall SplineGeometry::~SplineGeometry(SplineGeometry *this)

{
  undefined8 *this_00;
  
  this_00 = (undefined8 *)(this + -200);
  *this_00 = &PTR__SplineGeometry_00fdded8;
  *(undefined ***)(this + -0xb8) = &PTR__SplineGeometry_00fddf30;
  *(undefined ***)this = &PTR__SplineGeometry_00fddf50;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  *(undefined8 *)(this + 0x10) = 0;
  Streamable::~Streamable((Streamable *)this);
  VertexBufferGeometry::~VertexBufferGeometry((VertexBufferGeometry *)this_00);
  operator_delete(this_00);
  return;
}


