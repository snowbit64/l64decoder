// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCustomResourceReloader
// Entry Point: 00b2b0d0
// Size: 56 bytes
// Signature: undefined __thiscall setCustomResourceReloader(Resource * this, CustomResourceReloader * param_1)


/* Resource::setCustomResourceReloader(Resource::CustomResourceReloader*) */

void __thiscall Resource::setCustomResourceReloader(Resource *this,CustomResourceReloader *param_1)

{
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 0x10))();
  }
  *(CustomResourceReloader **)(this + 0x28) = param_1;
  return;
}


