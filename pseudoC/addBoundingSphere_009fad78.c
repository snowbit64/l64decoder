// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addBoundingSphere
// Entry Point: 009fad78
// Size: 44 bytes
// Signature: undefined __thiscall addBoundingSphere(DeferredDebugRenderer * this, BoundingSphere * param_1, CATEGORY param_2)


/* DeferredDebugRenderer::addBoundingSphere(BoundingSphere const*, DeferredDebugRenderer::CATEGORY)
    */

void __thiscall
DeferredDebugRenderer::addBoundingSphere
          (DeferredDebugRenderer *this,BoundingSphere *param_1,CATEGORY param_2)

{
  addSphere((float *)this,*(float *)(param_1 + 0x18),(float *)(param_1 + 0xc),0x51b128,
            (Matrix4x4 *)(ulong)param_2,0,false,(Vector3 *)0x0);
  return;
}


