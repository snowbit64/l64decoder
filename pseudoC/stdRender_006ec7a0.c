// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stdRender
// Entry Point: 006ec7a0
// Size: 232 bytes
// Signature: undefined __thiscall stdRender(IEngineApplicationDebugTexture * this, ITextureObject * param_1, float param_2, float param_3, float param_4, float param_5, float param_6, bool param_7, SharedRenderArgs * param_8)


/* IEngineApplicationDebugTexture::stdRender(ITextureObject*, float, float, float, float, float,
   bool, SharedRenderArgs const&) */

void __thiscall
IEngineApplicationDebugTexture::stdRender
          (IEngineApplicationDebugTexture *this,ITextureObject *param_1,float param_2,float param_3,
          float param_4,float param_5,float param_6,bool param_7,SharedRenderArgs *param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ImageOverlay aIStack_f8 [144];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_1 != (ITextureObject *)0x0) {
    lVar3 = EngineManager::getInstance();
    lVar1 = 0x468;
    if (!param_7) {
      lVar1 = 0x470;
    }
    ImageOverlay::ImageOverlay
              (aIStack_f8,"DebugOverlay",param_1,
               *(ISamplerObject **)(*(long *)(lVar3 + 0x100) + lVar1),param_2,param_3,
               param_4 * param_6,param_5,0.0,1.0,1.0,0.0);
                    /* try { // try from 006ec840 to 006ec84b has its CatchHandler @ 006ec888 */
    ImageOverlay::render(aIStack_f8,param_8);
    this = (IEngineApplicationDebugTexture *)ImageOverlay::~ImageOverlay(aIStack_f8);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


