// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: issueDependentJobs
// Entry Point: 00a1f740
// Size: 164 bytes
// Signature: undefined __thiscall issueDependentJobs(RenderQueue * this, RenderTextureSetup * param_1)


/* RenderQueue::issueDependentJobs(RenderTextureSetup*) */

void __thiscall RenderQueue::issueDependentJobs(RenderQueue *this,RenderTextureSetup *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(this + 0x10);
  lVar1 = *(long *)(lVar2 + 0xe8);
  if (lVar1 != *(long *)(lVar2 + 0xf0)) {
    uVar3 = 0;
    do {
      ReflectionRenderController::addReflectionShape
                ((ReflectionRenderController *)(this + 0x70),*(GsShape **)(lVar1 + uVar3 * 8));
      lVar1 = *(long *)(lVar2 + 0xe8);
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < (ulong)(*(long *)(lVar2 + 0xf0) - lVar1 >> 3));
    ReflectionRenderController::issueReflectionMapJobs
              ((ReflectionRenderController *)(this + 0x70),param_1,
               *(RenderTextureController **)(*(long *)(this + 0x28) + 0x558));
    lVar2 = *(long *)(this + 0x10);
  }
  if (*(char *)(lVar2 + 0x50) != '\0') {
    RenderTextureController::createRefractionTexture();
    return;
  }
  return;
}


