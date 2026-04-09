// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: submitPreparedRenderBuffers
// Entry Point: 00a0dc04
// Size: 248 bytes
// Signature: undefined __thiscall submitPreparedRenderBuffers(EnvFilterJob * this, RenderTargetInfo * param_1, RenderStats * param_2, bool param_3)


/* IndirectLightRenderController::EnvFilterJob::submitPreparedRenderBuffers(RenderTargetInfo const&,
   RenderStats&, bool) */

void __thiscall
IndirectLightRenderController::EnvFilterJob::submitPreparedRenderBuffers
          (EnvFilterJob *this,RenderTargetInfo *param_1,RenderStats *param_2,bool param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = **(long ***)(*(long *)(this + 0x140) + 8);
  plVar2 = (long *)(**(code **)(*plVar3 + 0x138))(plVar3);
  RenderDeviceManager::getInstance();
  iVar1 = RenderDeviceManager::getCurrentRenderDeviceType();
  if (iVar1 != 0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,*(undefined8 *)(this + 0x148));
  }
  (**(code **)(*plVar2 + 0x120))(plVar2,1,this + 0x148,0,0,0,1);
  if (param_3) {
    if (*(long *)(this + 0xe8) != 0) {
      (**(code **)(*plVar3 + 0xa0))(plVar3);
      if (*(long **)(this + 0xe8) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0xe8) + 8))();
      }
      RenderStats::operator+=(param_2,(RenderStats *)(this + 0x68));
    }
    return;
  }
  filterFuncCs((ICommandBuffer *)plVar2,*(ITextureObject **)(this + 0x148),
               (FilterEnvMapRenderData *)(this + 0x108));
  return;
}


