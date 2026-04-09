// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: render
// Entry Point: 006ec89c
// Size: 240 bytes
// Signature: undefined __thiscall render(DT_ShadowMap * this, SharedRenderArgs * param_1, float param_2)


/* DT_ShadowMap::render(SharedRenderArgs const&, float) */

void __thiscall DT_ShadowMap::render(DT_ShadowMap *this,SharedRenderArgs *param_1,float param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ITextureObject *pIVar5;
  ImageOverlay aIStack_d8 [144];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long **)(param_1 + 0x98) != (long *)0x0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x98) + 0x20))();
    uVar3 = (**(code **)(**(long **)(param_1 + 0x98) + 0x28))();
    pIVar5 = *(ITextureObject **)(param_1 + 0x98);
    if (pIVar5 != (ITextureObject *)0x0) {
      lVar4 = EngineManager::getInstance();
      ImageOverlay::ImageOverlay
                (aIStack_d8,"DebugOverlay",pIVar5,
                 *(ISamplerObject **)(*(long *)(lVar4 + 0x100) + 0x468),0.0,0.0,
                 ((float)(uVar2 & 0xffffffff) / (float)(uVar3 & 0xffffffff)) * 0.5 * param_2,0.5,0.0
                 ,1.0,1.0,0.0);
                    /* try { // try from 006ec94c to 006ec957 has its CatchHandler @ 006ec98c */
      ImageOverlay::render(aIStack_d8,param_1);
      ImageOverlay::~ImageOverlay(aIStack_d8);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


