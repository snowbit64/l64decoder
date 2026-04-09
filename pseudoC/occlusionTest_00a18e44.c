// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: occlusionTest
// Entry Point: 00a18e44
// Size: 32 bytes
// Signature: undefined __cdecl occlusionTest(GsShape * param_1, float param_2, float * param_3, float * param_4)


/* RenderList::occlusionTest(GsShape const*, float, float const*, float const*) */

void RenderList::occlusionTest(GsShape *param_1,float param_2,float *param_3,float *param_4)

{
  float *in_x3;
  
  GsMaskedOcclusionCulling::testSphere
            (*(GsMaskedOcclusionCulling **)(param_1 + 8),param_3[0x69],param_3[0x6a],param_3[0x6b],
             param_3[0x6c],param_4,in_x3);
  return;
}


