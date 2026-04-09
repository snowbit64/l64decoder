// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: preRender
// Entry Point: 008d7670
// Size: 12 bytes
// Signature: undefined __cdecl preRender(RenderArgs * param_1, Matrix4x4 * param_2)


/* ParticleSystem::preRender(RenderArgs const*, Matrix4x4 const&) */

void ParticleSystem::preRender(RenderArgs *param_1,Matrix4x4 *param_2)

{
  param_1[0xc0] = (RenderArgs)0x1;
  updateParticlesGeometry((ParticleSystem *)param_1,(RenderArgs *)param_2);
  return;
}


