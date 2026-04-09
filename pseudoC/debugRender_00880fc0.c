// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugRender
// Entry Point: 00880fc0
// Size: 184 bytes
// Signature: undefined debugRender(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalSteering::debugRender() */

void AnimalSteering::debugRender(void)

{
  long lVar1;
  long in_x0;
  DeferredDebugRenderer *this;
  float local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  float local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  EngineManager::getInstance();
  this = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
  DeferredDebugRenderer::setNoDepthMode(this,true);
  uStack_6c = *(undefined4 *)(in_x0 + 0x74);
  local_60 = *(float *)(in_x0 + 4);
  local_58 = *(undefined4 *)(in_x0 + 8);
  uStack_48 = 0x3f80000000000000;
  local_50 = 0x3f800000;
  local_70 = *(float *)(in_x0 + 0x1c);
  local_68 = *(undefined4 *)(in_x0 + 0x20);
  uStack_5c = uStack_6c;
  DeferredDebugRenderer::addLine
            (this,&local_60,(float *)&local_50,&local_70,(float *)&local_50,0x7ff);
  DeferredDebugRenderer::setNoDepthMode(this,false);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


