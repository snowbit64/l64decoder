// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: preRenderAll
// Entry Point: 008c5d6c
// Size: 168 bytes
// Signature: undefined __thiscall preRenderAll(InstancedGeometryManager * this, IRenderDevice * param_1)


/* InstancedGeometryManager::preRenderAll(IRenderDevice*) */

void __thiscall
InstancedGeometryManager::preRenderAll(InstancedGeometryManager *this,IRenderDevice *param_1)

{
  bool bVar1;
  InstancedGeometryManager *this_00;
  InstancedGeometryManager **ppIVar2;
  InstancedGeometryManager *pIVar3;
  InstancedGeometryManager **ppIVar4;
  
  if (*(int *)(this + 0x18) != 0) {
    ppIVar4 = *(InstancedGeometryManager ***)this;
    this_00 = this;
    while (ppIVar4 != (InstancedGeometryManager **)(this + 8)) {
      this_00 = (InstancedGeometryManager *)
                generateBuffersForMesh(this_00,param_1,(MeshData *)ppIVar4[4]);
      ppIVar2 = (InstancedGeometryManager **)ppIVar4[1];
      if ((InstancedGeometryManager **)ppIVar4[1] == (InstancedGeometryManager **)0x0) {
        ppIVar2 = ppIVar4 + 2;
        bVar1 = (InstancedGeometryManager **)*(InstancedGeometryManager **)*ppIVar2 != ppIVar4;
        ppIVar4 = (InstancedGeometryManager **)*ppIVar2;
        if (bVar1) {
          do {
            pIVar3 = *ppIVar2;
            ppIVar2 = (InstancedGeometryManager **)(pIVar3 + 0x10);
            ppIVar4 = (InstancedGeometryManager **)*ppIVar2;
          } while (*ppIVar4 != pIVar3);
        }
      }
      else {
        do {
          ppIVar4 = ppIVar2;
          ppIVar2 = (InstancedGeometryManager **)*ppIVar4;
        } while ((InstancedGeometryManager **)*ppIVar4 != (InstancedGeometryManager **)0x0);
      }
    }
    *(undefined4 *)(this + 0x18) = 0;
  }
  return;
}


