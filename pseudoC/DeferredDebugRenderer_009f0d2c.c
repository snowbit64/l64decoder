// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DeferredDebugRenderer
// Entry Point: 009f0d2c
// Size: 756 bytes
// Signature: undefined __thiscall ~DeferredDebugRenderer(DeferredDebugRenderer * this)


/* DeferredDebugRenderer::~DeferredDebugRenderer() */

void __thiscall DeferredDebugRenderer::~DeferredDebugRenderer(DeferredDebugRenderer *this)

{
  int iVar1;
  void *pvVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if (*(long **)(this + 0x200) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x200) + 8))();
  }
  if (*(long **)(this + 0x268) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x268) + 8))();
  }
  if (*(long **)(this + 0x270) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x270) + 8))();
  }
  if (*(long **)(this + 0x278) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x278) + 8))();
  }
  if (*(long **)(this + 0x290) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x290) + 8))();
  }
  if (*(long **)(this + 0x280) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x280) + 8))();
  }
  if (*(long **)(this + 0x288) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x288) + 8))();
  }
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar1 != 0)) {
                    /* try { // try from 009f0fa0 to 009f0fab has its CatchHandler @ 009f1024 */
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar1 != 0)) {
                    /* try { // try from 009f0fe8 to 009f0ff3 has its CatchHandler @ 009f1020 */
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
  pbVar4 = *(byte **)(this + 0x1e0);
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = *(byte **)(this + 0x1e8);
    pbVar5 = pbVar4;
    if (pbVar3 != pbVar4) {
      do {
        pbVar5 = pbVar3 + -0x38;
        if ((*pbVar5 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -0x28));
        }
        pbVar3 = pbVar5;
      } while (pbVar5 != pbVar4);
      pbVar5 = *(byte **)(this + 0x1e0);
    }
    *(byte **)(this + 0x1e8) = pbVar4;
    operator_delete(pbVar5);
  }
  pvVar2 = *(void **)(this + 0x1c8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x1d0) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x1b0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x1b8) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x198);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x1a0) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x180);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x188) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x168);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x170) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x150);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x158) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x138);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x140) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x120);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x128) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x108);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x110) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0xf0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xf8) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0xd8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xe0) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0xc0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 200) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0xa8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xb0) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x90);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x98) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x78);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x80) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x60);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x68) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x48);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x50) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x30);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x38) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x18);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)this;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  *(void **)(this + 8) = pvVar2;
  operator_delete(pvVar2);
  return;
}


