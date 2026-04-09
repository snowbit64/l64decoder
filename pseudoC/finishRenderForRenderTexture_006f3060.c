// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finishRenderForRenderTexture
// Entry Point: 006f3060
// Size: 100 bytes
// Signature: undefined __thiscall finishRenderForRenderTexture(FontOverlayRenderer * this, ITextureObject * param_1)


/* FontOverlayRenderer::finishRenderForRenderTexture(ITextureObject*) */

void __thiscall
FontOverlayRenderer::finishRenderForRenderTexture(FontOverlayRenderer *this,ITextureObject *param_1)

{
  ITextureObject *pIVar1;
  FontOverlayRenderer *pFVar2;
  FontOverlayRenderer *pFVar3;
  
  if ((*(long *)(this + 0x80) != 0) && (*(long *)(this + 0x90) != 0)) {
    pFVar3 = *(FontOverlayRenderer **)(this + 0x410);
    pIVar1 = (ITextureObject *)0x0;
    if (*(ITextureObject **)(this + 0x3e0) != param_1) {
      pIVar1 = param_1;
    }
    if (pFVar3 != (FontOverlayRenderer *)0x0) {
      pFVar2 = this + 0x410;
      do {
        if (*(ITextureObject **)(pFVar3 + 0x20) >= pIVar1) {
          pFVar2 = pFVar3;
        }
        pFVar3 = *(FontOverlayRenderer **)
                  (pFVar3 + (ulong)(*(ITextureObject **)(pFVar3 + 0x20) < pIVar1) * 8);
      } while (pFVar3 != (FontOverlayRenderer *)0x0);
      if ((pFVar2 != this + 0x410) && (*(ITextureObject **)(pFVar2 + 0x20) <= pIVar1)) {
        *(undefined4 *)(pFVar2 + 0x34) = 0;
        *(undefined4 *)(pFVar2 + 0x4c) = 0;
      }
    }
  }
  return;
}


