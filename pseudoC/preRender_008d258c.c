// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: preRender
// Entry Point: 008d258c
// Size: 36 bytes
// Signature: undefined __cdecl preRender(RenderArgs * param_1, Matrix4x4 * param_2)


/* FillPlaneGeometry::preRender(RenderArgs const*, Matrix4x4 const&) */

void FillPlaneGeometry::preRender(RenderArgs *param_1,Matrix4x4 *param_2)

{
  skinning();
  updateVertexBuffer();
  return;
}


