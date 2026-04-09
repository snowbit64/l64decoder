// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MaskedOcclusionCullingPrivate
// Entry Point: 00da086c
// Size: 64 bytes
// Signature: undefined __thiscall ~MaskedOcclusionCullingPrivate(MaskedOcclusionCullingPrivate * this)


/* MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::~MaskedOcclusionCullingPrivate() */

void __thiscall
MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::~MaskedOcclusionCullingPrivate
          (MaskedOcclusionCullingPrivate *this)

{
  *(undefined ***)this = &PTR_SetResolution_01013000;
  if (*(long *)(this + 0x138) != 0) {
    (**(code **)(this + 0x10))();
  }
  operator_delete(this);
  return;
}


