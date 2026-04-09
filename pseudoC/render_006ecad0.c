// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: render
// Entry Point: 006ecad0
// Size: 200 bytes
// Signature: undefined __thiscall render(DT_EnvMap * this, SharedRenderArgs * param_1, float param_2)


/* DT_EnvMap::render(SharedRenderArgs const&, float) */

void __thiscall DT_EnvMap::render(DT_EnvMap *this,SharedRenderArgs *param_1,float param_2)

{
  long lVar1;
  long lVar2;
  ITextureObject *pIVar3;
  ImageOverlay aIStack_c8 [144];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pIVar3 = *(ITextureObject **)(param_1 + 0xf0);
  if (pIVar3 != (ITextureObject *)0x0) {
    lVar2 = EngineManager::getInstance();
    ImageOverlay::ImageOverlay
              (aIStack_c8,"DebugOverlay",pIVar3,
               *(ISamplerObject **)(*(long *)(lVar2 + 0x100) + 0x468),0.0,0.0,param_2 * 0.8,0.6,0.0,
               1.0,1.0,0.0);
                    /* try { // try from 006ecb58 to 006ecb63 has its CatchHandler @ 006ecb98 */
    ImageOverlay::render(aIStack_c8,param_1);
    this = (DT_EnvMap *)ImageOverlay::~ImageOverlay(aIStack_c8);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


