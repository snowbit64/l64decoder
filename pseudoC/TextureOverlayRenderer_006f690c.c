// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TextureOverlayRenderer
// Entry Point: 006f690c
// Size: 344 bytes
// Signature: undefined __thiscall ~TextureOverlayRenderer(TextureOverlayRenderer * this)


/* TextureOverlayRenderer::~TextureOverlayRenderer() */

void __thiscall TextureOverlayRenderer::~TextureOverlayRenderer(TextureOverlayRenderer *this)

{
  ResourceManager *pRVar1;
  void *pvVar2;
  
  if (*(long *)(this + 0x4a0) != 0) {
                    /* try { // try from 006f6924 to 006f6943 has its CatchHandler @ 006f6a64 */
    pRVar1 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::release(pRVar1,*(Resource **)(this + 0x4a0));
  }
  if (*(long *)(this + 0x4c8) != 0) {
    pRVar1 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::release(pRVar1,*(Resource **)(this + 0x4c8));
  }
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 8))();
  }
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 8))();
  }
  if (*(long **)(this + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x30) + 8))();
  }
  if (*(long **)(this + 0x450) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x450) + 8))();
  }
  if (*(long **)(this + 0x458) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x458) + 8))();
  }
  if (*(long **)(this + 0x460) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x460) + 8))();
  }
  if (*(long **)(this + 0x468) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x468) + 8))();
  }
  if (*(long **)(this + 0x470) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x470) + 8))();
  }
  if (*(void **)(this + 0x4f0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x4f0));
  }
  pvVar2 = *(void **)(this + 0x4f8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x500) = pvVar2;
    operator_delete(pvVar2);
    return;
  }
  return;
}


