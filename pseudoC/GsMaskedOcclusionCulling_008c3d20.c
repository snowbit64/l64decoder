// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GsMaskedOcclusionCulling
// Entry Point: 008c3d20
// Size: 24 bytes
// Signature: undefined __thiscall ~GsMaskedOcclusionCulling(GsMaskedOcclusionCulling * this)


/* GsMaskedOcclusionCulling::~GsMaskedOcclusionCulling() */

void __thiscall GsMaskedOcclusionCulling::~GsMaskedOcclusionCulling(GsMaskedOcclusionCulling *this)

{
                    /* try { // try from 008c3d2c to 008c3d2f has its CatchHandler @ 008c3d38 */
  MaskedOcclusionCulling::Destroy(*(MaskedOcclusionCulling **)(this + 0x10));
  return;
}


