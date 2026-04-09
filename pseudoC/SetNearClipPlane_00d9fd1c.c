// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetNearClipPlane
// Entry Point: 00d9fd1c
// Size: 36 bytes
// Signature: undefined __thiscall SetNearClipPlane(MaskedOcclusionCullingPrivate * this, float param_1)


/* MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::SetNearClipPlane(float) */

void __thiscall
MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::SetNearClipPlane
          (MaskedOcclusionCullingPrivate *this,float param_1)

{
  *(float *)(this + 0x120) = param_1;
  *(ulong *)(this + 0xa8) = CONCAT44(-param_1,0x3f800000);
  *(undefined8 *)(this + 0xa0) = 0;
  return;
}


