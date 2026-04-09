// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Camera
// Entry Point: 00a4fe78
// Size: 36 bytes
// Signature: undefined __thiscall ~Camera(Camera * this)


/* Camera::~Camera() */

void __thiscall Camera::~Camera(Camera *this)

{
  TransformGroup::~TransformGroup((TransformGroup *)this);
  operator_delete(this);
  return;
}


