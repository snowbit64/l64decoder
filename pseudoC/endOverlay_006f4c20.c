// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: endOverlay
// Entry Point: 006f4c20
// Size: 120 bytes
// Signature: undefined __thiscall endOverlay(OverlayRenderManager * this, IRenderDevice * param_1)


/* OverlayRenderManager::endOverlay(IRenderDevice*) */

void __thiscall OverlayRenderManager::endOverlay(OverlayRenderManager *this,IRenderDevice *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)param_1;
  this[0x4040] = (OverlayRenderManager)0x0;
  plVar1 = (long *)(**(code **)(lVar2 + 0x138))(param_1);
  (**(code **)(*plVar1 + 0x40))();
  plVar1 = (long *)(**(code **)(*(long *)param_1 + 0x138))(param_1);
                    /* WARNING: Could not recover jumptable at 0x006f4c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x120))(plVar1,1,this + 0x4008,0,0,0,1);
  return;
}


