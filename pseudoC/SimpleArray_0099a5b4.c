// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SimpleArray
// Entry Point: 0099a5b4
// Size: 8 bytes
// Signature: undefined __thiscall ~SimpleArray(SimpleArray<Bt2D6Joint*,false,16u> * this)


/* Bt2ScenegraphPhysicsContext::SimpleArray<Bt2D6Joint*, false, 16u>::~SimpleArray() */

void __thiscall
Bt2ScenegraphPhysicsContext::SimpleArray<Bt2D6Joint*,false,16u>::~SimpleArray
          (SimpleArray<Bt2D6Joint*,false,16u> *this)

{
  operator_delete__(*(void **)this);
  return;
}


