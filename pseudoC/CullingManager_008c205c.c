// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CullingManager
// Entry Point: 008c205c
// Size: 112 bytes
// Signature: undefined __thiscall ~CullingManager(CullingManager * this)


/* CullingManager::~CullingManager() */

void __thiscall CullingManager::~CullingManager(CullingManager *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x140);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x148) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x128);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x130) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x110);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x118) = pvVar1;
    operator_delete(pvVar1);
  }
  DecalCullingStructure::~DecalCullingStructure((DecalCullingStructure *)(this + 0xd8));
  SimpleCullingStructure::~SimpleCullingStructure((SimpleCullingStructure *)(this + 0xc0));
  CullingGrid2D::~CullingGrid2D((CullingGrid2D *)(this + 0x80));
  CullingGrid2D::~CullingGrid2D((CullingGrid2D *)(this + 0x40));
  CullingGrid2D::~CullingGrid2D((CullingGrid2D *)this);
  return;
}


