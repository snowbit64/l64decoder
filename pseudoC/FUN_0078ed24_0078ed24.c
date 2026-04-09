// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078ed24
// Entry Point: 0078ed24
// Size: 160 bytes
// Signature: undefined FUN_0078ed24(void)


void FUN_0078ed24(uint *param_1)

{
  long lVar1;
  Texture *pTVar2;
  
  if ((*param_1 == 0) ||
     (lVar1 = ReflectionUtil::getEntity(*param_1,0x100000000000,"set2DMaskFromTexture","texture"),
     lVar1 == 0)) {
    pTVar2 = (Texture *)0x0;
  }
  else {
    pTVar2 = *(Texture **)(lVar1 + 0x20);
  }
  lVar1 = EngineManager::getInstance();
  TextureOverlayRenderer::setMaskTexture
            (*(TextureOverlayRenderer **)(lVar1 + 0x100),pTVar2,(ISamplerObject *)0x0,
             *(bool *)(param_1 + 4),(float)param_1[8],(float)param_1[0xc],(float)param_1[0x10],
             (float)param_1[0x14]);
  FontOverlayRenderer::setMaskTexture
            (*(FontOverlayRenderer **)(lVar1 + 0xf8),pTVar2,(ISamplerObject *)0x0,
             *(bool *)(param_1 + 4),(float)param_1[8],(float)param_1[0xc],(float)param_1[0x10],
             (float)param_1[0x14]);
  return;
}


