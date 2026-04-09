// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: acquireRenderTargetView
// Entry Point: 00aafcc4
// Size: 72 bytes
// Signature: undefined __thiscall acquireRenderTargetView(VulkanTextureObject * this, RenderTargetView * param_1, uint param_2, uint param_3, uint param_4)


/* VulkanTextureObject::acquireRenderTargetView(VulkanTextureObject::RenderTargetView&, unsigned
   int, unsigned int, unsigned int) */

void __thiscall
VulkanTextureObject::acquireRenderTargetView
          (VulkanTextureObject *this,RenderTargetView *param_1,uint param_2,uint param_3,
          uint param_4)

{
  undefined4 uVar1;
  long lVar2;
  
  if (*(int *)(this + 0x18) != 1) {
    param_4 = param_3;
  }
  lVar2 = *(long *)(*(long *)(this + 0x90) + (ulong)param_3 * 0x18);
  *(undefined8 *)param_1 =
       *(undefined8 *)
        (*(long *)(*(long *)(this + 0x148) + (ulong)param_2 * 0x18) + (ulong)param_4 * 8);
  uVar1 = *(undefined4 *)(lVar2 + (ulong)param_2 * 4);
  lVar2 = *(long *)(this + 0x10);
  *(uint *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar2 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}


