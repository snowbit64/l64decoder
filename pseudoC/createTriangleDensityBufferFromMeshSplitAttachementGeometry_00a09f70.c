// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createTriangleDensityBufferFromMeshSplitAttachementGeometry
// Entry Point: 00a09f70
// Size: 16 bytes
// Signature: undefined __thiscall createTriangleDensityBufferFromMeshSplitAttachementGeometry(RenderController * this, Geometry * param_1)


/* RenderController::createTriangleDensityBufferFromMeshSplitAttachementGeometry(Geometry const*) */

void __thiscall
RenderController::createTriangleDensityBufferFromMeshSplitAttachementGeometry
          (RenderController *this,Geometry *param_1)

{
  createTriangleDensityBufferFromIndexedTriangleSet
            (this,*(uint *)(param_1 + 0x28),
             *(IndexedTriangleSet **)(*(long *)(param_1 + 0x68) + 0x28));
  return;
}


