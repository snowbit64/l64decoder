// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078fce8
// Entry Point: 0078fce8
// Size: 240 bytes
// Signature: undefined FUN_0078fce8(void)


void FUN_0078fce8(float *param_1)

{
  char cVar1;
  long lVar2;
  DeferredDebugRenderer *this;
  float local_6c;
  float fStack_68;
  float local_64;
  float fStack_60;
  float local_5c;
  float fStack_58;
  float local_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float local_44;
  float fStack_40;
  float local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_44 = *param_1;
  fStack_40 = param_1[4];
  local_3c = param_1[8];
  local_50 = param_1[0xc];
  fStack_4c = param_1[0x10];
  local_48 = param_1[0x14];
  local_5c = param_1[0x18];
  fStack_58 = param_1[0x1c];
  local_54 = param_1[0x20];
  cVar1 = *(char *)(param_1 + 0x34);
  local_6c = param_1[0x24];
  fStack_68 = param_1[0x28];
  local_64 = param_1[0x2c];
  fStack_60 = param_1[0x30];
  EngineManager::getInstance();
  this = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
  DeferredDebugRenderer::setNoDepthMode(this,cVar1 == '\0');
  DeferredDebugRenderer::addTriangle
            (this,&local_44,&local_6c,&local_50,&local_6c,&local_5c,&local_6c,0x7ff);
  DeferredDebugRenderer::setNoDepthMode(this,false);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


