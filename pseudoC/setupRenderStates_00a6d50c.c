// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setupRenderStates
// Entry Point: 00a6d50c
// Size: 120 bytes
// Signature: undefined __thiscall setupRenderStates(FullScreenRenderController * this, ICommandBuffer * param_1, uint param_2)


/* FullScreenRenderController::setupRenderStates(ICommandBuffer*, unsigned int) */

void __thiscall
FullScreenRenderController::setupRenderStates
          (FullScreenRenderController *this,ICommandBuffer *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*(long *)param_1 + 0xb8))(param_1,*(undefined8 *)(this + 0x20));
  if ((param_2 & 1) == 0) {
    (**(code **)(*(long *)param_1 + 0xb0))(param_1,*(undefined8 *)(this + 0x30));
  }
  puVar1 = (undefined8 *)(this + 0x38);
  if ((param_2 & 2) != 0) {
    puVar1 = (undefined8 *)(this + 0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x00a6d580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0xc0))(param_1,*puVar1);
  return;
}


