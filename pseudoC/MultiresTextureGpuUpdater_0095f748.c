// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MultiresTextureGpuUpdater
// Entry Point: 0095f748
// Size: 368 bytes
// Signature: undefined __thiscall ~MultiresTextureGpuUpdater(MultiresTextureGpuUpdater * this)


/* MultiresTextureGpuUpdater::~MultiresTextureGpuUpdater() */

void __thiscall
MultiresTextureGpuUpdater::~MultiresTextureGpuUpdater(MultiresTextureGpuUpdater *this)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  
  lVar1 = *(long *)(this + 0x120);
  lVar2 = *(long *)(this + 0x128);
  *(undefined ***)this = &PTR___cxa_pure_virtual_00fe0510;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0xf8) {
    if (*(long **)(lVar1 + 0x50) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + 0x50) + 8))();
    }
    if (*(long **)(lVar1 + 0x58) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + 0x58) + 8))();
    }
    if (*(long **)(lVar1 + 0x60) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + 0x60) + 8))();
    }
    if (*(long **)(lVar1 + 0x68) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + 0x68) + 8))();
    }
    lVar5 = 0;
    do {
      plVar4 = *(long **)(lVar1 + lVar5 + 0x70);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      plVar4 = *(long **)(lVar1 + lVar5 + 0xb0);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      plVar4 = *(long **)(lVar1 + lVar5 + 0x90);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      plVar4 = *(long **)(lVar1 + lVar5 + 0xd0);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      lVar5 = lVar5 + 8;
    } while (lVar5 != 0x20);
  }
  if (*(long **)(this + 0x350) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x350) + 8))();
  }
  if (*(long **)(this + 0x358) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x358) + 8))();
  }
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0x250));
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0x150));
  pvVar3 = *(void **)(this + 0x138);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x140) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x120);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x128) = pvVar3;
    operator_delete(pvVar3);
  }
  MultiresTextureGpuUpdaterDesc::~MultiresTextureGpuUpdaterDesc
            ((MultiresTextureGpuUpdaterDesc *)(this + 8));
  return;
}


