// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findUserChecksum
// Entry Point: 008c59ec
// Size: 132 bytes
// Signature: undefined __thiscall findUserChecksum(InstancedGeometryManager * this, ulonglong param_1, MeshData * * param_2)


/* InstancedGeometryManager::findUserChecksum(unsigned long long,
   InstancedGeometryManager::MeshData*&) */

undefined8 __thiscall
InstancedGeometryManager::findUserChecksum
          (InstancedGeometryManager *this,ulonglong param_1,MeshData **param_2)

{
  bool bVar1;
  InstancedGeometryManager **ppIVar2;
  InstancedGeometryManager **ppIVar3;
  InstancedGeometryManager *pIVar4;
  
  *param_2 = (MeshData *)0x0;
  ppIVar2 = *(InstancedGeometryManager ***)this;
  while( true ) {
    if (ppIVar2 == (InstancedGeometryManager **)(this + 8)) {
      return 0;
    }
    if (*(ulonglong *)(ppIVar2[4] + 0x30) == param_1) break;
    ppIVar3 = (InstancedGeometryManager **)ppIVar2[1];
    if ((InstancedGeometryManager **)ppIVar2[1] == (InstancedGeometryManager **)0x0) {
      ppIVar3 = ppIVar2 + 2;
      bVar1 = *(InstancedGeometryManager ***)*ppIVar3 != ppIVar2;
      ppIVar2 = (InstancedGeometryManager **)*ppIVar3;
      if (bVar1) {
        do {
          pIVar4 = *ppIVar3;
          ppIVar3 = (InstancedGeometryManager **)(pIVar4 + 0x10);
          ppIVar2 = (InstancedGeometryManager **)*ppIVar3;
        } while (*ppIVar2 != pIVar4);
      }
    }
    else {
      do {
        ppIVar2 = ppIVar3;
        ppIVar3 = (InstancedGeometryManager **)*ppIVar2;
      } while ((InstancedGeometryManager **)*ppIVar2 != (InstancedGeometryManager **)0x0);
    }
  }
  *param_2 = (MeshData *)ppIVar2[4];
  return 1;
}


