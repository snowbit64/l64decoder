// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: render
// Entry Point: 006ec9a0
// Size: 280 bytes
// Signature: undefined __thiscall render(DT_FoliageInfo * this, SharedRenderArgs * param_1, float param_2)


/* DT_FoliageInfo::render(SharedRenderArgs const&, float) */

void __thiscall DT_FoliageInfo::render(DT_FoliageInfo *this,SharedRenderArgs *param_1,float param_2)

{
  long lVar1;
  long lVar2;
  ITextureObject *pIVar3;
  ImageOverlay aIStack_c8 [144];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pIVar3 = *(ITextureObject **)(param_1 + 0x100);
  if (pIVar3 != (ITextureObject *)0x0) {
    lVar2 = EngineManager::getInstance();
    ImageOverlay::ImageOverlay
              (aIStack_c8,"DebugOverlay",pIVar3,
               *(ISamplerObject **)(*(long *)(lVar2 + 0x100) + 0x468),0.0,0.0,param_2 * 0.5,0.5,0.0,
               1.0,1.0,0.0);
                    /* try { // try from 006eca18 to 006eca23 has its CatchHandler @ 006ecabc */
    ImageOverlay::render(aIStack_c8,param_1);
    this = (DT_FoliageInfo *)ImageOverlay::~ImageOverlay(aIStack_c8);
  }
  pIVar3 = *(ITextureObject **)(param_1 + 0x108);
  if (pIVar3 != (ITextureObject *)0x0) {
    lVar2 = EngineManager::getInstance();
    ImageOverlay::ImageOverlay
              (aIStack_c8,"DebugOverlay",pIVar3,
               *(ISamplerObject **)(*(long *)(lVar2 + 0x100) + 0x468),0.0,0.5,param_2 * 0.5,0.5,0.0,
               1.0,1.0,0.0);
                    /* try { // try from 006eca78 to 006eca83 has its CatchHandler @ 006ecab8 */
    ImageOverlay::render(aIStack_c8,param_1);
    this = (DT_FoliageInfo *)ImageOverlay::~ImageOverlay(aIStack_c8);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


