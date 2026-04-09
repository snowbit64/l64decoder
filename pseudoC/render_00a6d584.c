// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: render
// Entry Point: 00a6d584
// Size: 204 bytes
// Signature: undefined __thiscall render(FullScreenRenderController * this, ICommandBuffer * param_1, uint param_2)


/* FullScreenRenderController::render(ICommandBuffer*, unsigned int) */

void __thiscall
FullScreenRenderController::render
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
  (**(code **)(*(long *)param_1 + 0xc0))(param_1,*puVar1);
  (**(code **)(*(long *)param_1 + 0x50))(param_1,this,1,*(undefined8 *)(this + 0x10));
  (**(code **)(*(long *)param_1 + 0x58))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00a6d64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0xe8))(param_1,3,0,0,0,0);
  return;
}


