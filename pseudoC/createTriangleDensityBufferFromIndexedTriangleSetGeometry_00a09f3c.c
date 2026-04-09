// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createTriangleDensityBufferFromIndexedTriangleSetGeometry
// Entry Point: 00a09f3c
// Size: 52 bytes
// Signature: undefined __thiscall createTriangleDensityBufferFromIndexedTriangleSetGeometry(RenderController * this, Geometry * param_1)


/* RenderController::createTriangleDensityBufferFromIndexedTriangleSetGeometry(Geometry const*) */

void __thiscall
RenderController::createTriangleDensityBufferFromIndexedTriangleSetGeometry
          (RenderController *this,Geometry *param_1)

{
  uint uVar1;
  IndexedTriangleSet *pIVar2;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  pIVar2 = (IndexedTriangleSet *)Geometry::getCollisionProxyMesh();
  createTriangleDensityBufferFromIndexedTriangleSet(this,uVar1,pIVar2);
  return;
}


