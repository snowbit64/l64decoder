// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: render
// Entry Point: 006f5b58
// Size: 44 bytes
// Signature: undefined __thiscall render(StatsOverlayManager * this, SharedRenderArgs * param_1)


/* StatsOverlayManager::render(SharedRenderArgs&) */

void __thiscall StatsOverlayManager::render(StatsOverlayManager *this,SharedRenderArgs *param_1)

{
  long **pplVar1;
  long *plVar2;
  
  if (*(int *)(this + 0x18) != 0) {
    pplVar1 = (long **)(*(long *)this + (long)(*(int *)(this + 0x18) + -1) * 0x10);
    plVar2 = *pplVar1;
                    /* WARNING: Could not recover jumptable at 0x006f5b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))(plVar2,param_1,*(undefined4 *)(pplVar1 + 1));
    return;
  }
  return;
}


