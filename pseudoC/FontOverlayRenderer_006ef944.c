// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~FontOverlayRenderer
// Entry Point: 006ef944
// Size: 608 bytes
// Signature: undefined __thiscall ~FontOverlayRenderer(FontOverlayRenderer * this)


/* FontOverlayRenderer::~FontOverlayRenderer() */

void __thiscall FontOverlayRenderer::~FontOverlayRenderer(FontOverlayRenderer *this)

{
  long *plVar1;
  bool bVar2;
  ResourceManager *pRVar3;
  void *pvVar4;
  FontOverlayRenderer **ppFVar5;
  FontOverlayRenderer *pFVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  FontOverlayRenderer **ppFVar10;
  
  lVar8 = *(long *)(this + 0x450);
  for (lVar7 = *(long *)(this + 0x448); lVar7 != lVar8; lVar7 = lVar7 + 0x30) {
    if (*(long *)(lVar7 + 8) != 0) {
                    /* try { // try from 006ef984 to 006ef98f has its CatchHandler @ 006efba8 */
      pRVar3 = (ResourceManager *)ResourceManager::getInstance();
      ResourceManager::release(pRVar3,*(Resource **)(lVar7 + 8));
    }
  }
  if (*(long *)(this + 0x420) != 0) {
                    /* try { // try from 006ef99c to 006ef9a7 has its CatchHandler @ 006efba4 */
    pRVar3 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::release(pRVar3,*(Resource **)(this + 0x420));
  }
  if (*(long **)(this + 0x80) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x80) + 8))();
  }
  if (*(long **)(this + 0x88) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x88) + 8))();
  }
  if (*(long **)(this + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x90) + 8))();
  }
  if (*(void **)(this + 0x68) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x68));
  }
  if (*(long **)(this + 0x3b0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x3b0) + 8))();
  }
  if (*(long **)(this + 0x3b8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x3b8) + 8))();
  }
  if (*(long **)(this + 0x3c0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x3c0) + 8))();
  }
  if (*(long **)(this + 0x3c8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x3c8) + 8))();
  }
  if (*(long **)(this + 0x3d0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x3d0) + 8))();
  }
  if (*(long **)(this + 0x3d8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x3d8) + 8))();
  }
  if (*(long **)(this + 0x3a0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x3a0) + 8))();
  }
  if (*(long **)(this + 0x3a8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x3a8) + 8))();
  }
  if (*(void **)(this + 0x3f0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x3f0));
  }
  if (*(long **)(this + 0x400) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x400) + 8))();
  }
  ppFVar10 = *(FontOverlayRenderer ***)(this + 0x408);
  while (ppFVar10 != (FontOverlayRenderer **)(this + 0x410)) {
    plVar1 = (long *)ppFVar10[7];
    pFVar6 = ppFVar10[8];
    plVar9 = (long *)ppFVar10[10];
    if (ppFVar10[5] != (FontOverlayRenderer *)0x0) {
      operator_delete__(ppFVar10[5]);
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    if (pFVar6 != (FontOverlayRenderer *)0x0) {
      operator_delete__(pFVar6);
    }
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
    ppFVar5 = (FontOverlayRenderer **)ppFVar10[1];
    if ((FontOverlayRenderer **)ppFVar10[1] == (FontOverlayRenderer **)0x0) {
      ppFVar5 = ppFVar10 + 2;
      bVar2 = *(FontOverlayRenderer ***)*ppFVar5 != ppFVar10;
      ppFVar10 = (FontOverlayRenderer **)*ppFVar5;
      if (bVar2) {
        do {
          pFVar6 = *ppFVar5;
          ppFVar5 = (FontOverlayRenderer **)(pFVar6 + 0x10);
          ppFVar10 = (FontOverlayRenderer **)*ppFVar5;
        } while (*ppFVar10 != pFVar6);
      }
    }
    else {
      do {
        ppFVar10 = ppFVar5;
        ppFVar5 = (FontOverlayRenderer **)*ppFVar10;
      } while ((FontOverlayRenderer **)*ppFVar10 != (FontOverlayRenderer **)0x0);
    }
  }
  pvVar4 = *(void **)(this + 0x448);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x450) = pvVar4;
    operator_delete(pvVar4);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<ITextureObject*,FontOverlayRenderer::RenderTextureData>,std::__ndk1::__map_value_compare<ITextureObject*,std::__ndk1::__value_type<ITextureObject*,FontOverlayRenderer::RenderTextureData>,std::__ndk1::less<ITextureObject*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ITextureObject*,FontOverlayRenderer::RenderTextureData>>>
  ::destroy((__tree<std::__ndk1::__value_type<ITextureObject*,FontOverlayRenderer::RenderTextureData>,std::__ndk1::__map_value_compare<ITextureObject*,std::__ndk1::__value_type<ITextureObject*,FontOverlayRenderer::RenderTextureData>,std::__ndk1::less<ITextureObject*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ITextureObject*,FontOverlayRenderer::RenderTextureData>>>
             *)(this + 0x408),*(__tree_node **)(this + 0x410));
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0x2a0));
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0x1a0));
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0xa0));
  return;
}


