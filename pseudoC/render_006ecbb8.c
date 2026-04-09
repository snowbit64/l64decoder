// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: render
// Entry Point: 006ecbb8
// Size: 168 bytes
// Signature: undefined __cdecl render(SharedRenderArgs * param_1, float param_2)


/* DT_OcclusionOverlay::render(SharedRenderArgs const&, float) */

void DT_OcclusionOverlay::render(SharedRenderArgs *param_1,float param_2)

{
  long lVar1;
  long lVar2;
  SharedRenderArgs *in_x1;
  ITextureObject *pIVar3;
  undefined4 in_register_00005004;
  undefined8 uVar4;
  undefined8 extraout_d0;
  ImageOverlay aIStack_c8 [144];
  long local_38;
  
  uVar4 = CONCAT44(in_register_00005004,param_2);
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pIVar3 = *(ITextureObject **)(in_x1 + 0x138);
  if (pIVar3 != (ITextureObject *)0x0) {
    lVar2 = EngineManager::getInstance();
    ImageOverlay::ImageOverlay
              (aIStack_c8,"DebugOverlay",pIVar3,
               *(ISamplerObject **)(*(long *)(lVar2 + 0x100) + 0x468),0.0,0.0,1.0,1.0,0.0,1.0,1.0,
               0.0);
                    /* try { // try from 006ecc24 to 006ecc2f has its CatchHandler @ 006ecc60 */
    ImageOverlay::render(aIStack_c8,in_x1);
    param_1 = (SharedRenderArgs *)ImageOverlay::~ImageOverlay(aIStack_c8);
    uVar4 = extraout_d0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4,param_1);
}


