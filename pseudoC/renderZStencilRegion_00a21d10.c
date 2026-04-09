// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderZStencilRegion
// Entry Point: 00a21d10
// Size: 256 bytes
// Signature: undefined __thiscall renderZStencilRegion(RenderQueue * this, RenderStats * param_1, ICommandBuffer * param_2)


/* RenderQueue::renderZStencilRegion(RenderStats&, ICommandBuffer*) */

void __thiscall
RenderQueue::renderZStencilRegion(RenderQueue *this,RenderStats *param_1,ICommandBuffer *param_2)

{
  (**(code **)(*(long *)param_2 + 0xd8))(param_2,"renderZStencilRegion");
  (**(code **)(*(long *)param_2 + 0xc0))(param_2,*(undefined8 *)(*(long *)(this + 8) + 0xb8));
  (**(code **)(*(long *)param_2 + 0xb8))(param_2,*(undefined8 *)(*(long *)(this + 8) + 0xc0));
  (**(code **)(*(long *)param_2 + 0xb0))(param_2,*(undefined8 *)(*(long *)(this + 8) + 0xb0));
  (**(code **)(*(long *)param_2 + 0x48))(param_2,*(undefined8 *)(*(long *)(this + 8) + 0xd0));
  (**(code **)(*(long *)param_2 + 0x50))
            (param_2,this + 0x68,1,*(undefined8 *)(*(long *)(this + 8) + 200));
  (**(code **)(*(long *)param_2 + 0x58))(param_2,0);
  (**(code **)(*(long *)param_2 + 0xe8))
            (param_2,*(undefined4 *)(*(long *)(this + 0x28) + 0x550),0,0,0,
             *(undefined4 *)(*(long *)(this + 0x28) + 0x550));
                    /* WARNING: Could not recover jumptable at 0x00a21e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2 + 0xe0))(param_2);
  return;
}


