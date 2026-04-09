// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processFinalComposite
// Entry Point: 00a40cc8
// Size: 100 bytes
// Signature: undefined __thiscall processFinalComposite(ScreenSpaceProcessor * this, IRenderDevice * param_1, PostFxParams * param_2)


/* ScreenSpaceProcessor::processFinalComposite(IRenderDevice*, PostFxParams const&) */

void __thiscall
ScreenSpaceProcessor::processFinalComposite
          (ScreenSpaceProcessor *this,IRenderDevice *param_1,PostFxParams *param_2)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x1858);
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (**(code **)(*plVar2 + 0x48))(plVar2,*(undefined4 *)(this + 0x1860)), iVar1 != 0)) {
    doFinalComposite(this,param_1,param_2);
    return;
  }
  return;
}


