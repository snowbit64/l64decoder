// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getScreenModeInfo
// Entry Point: 00ad9034
// Size: 88 bytes
// Signature: undefined __thiscall getScreenModeInfo(AndroidVulkanRenderDevice * this, uint param_1, uint * param_2, uint * param_3)


/* AndroidVulkanRenderDevice::getScreenModeInfo(unsigned int, unsigned int&, unsigned int&) */

void __thiscall
AndroidVulkanRenderDevice::getScreenModeInfo
          (AndroidVulkanRenderDevice *this,uint param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  long *plVar2;
  
  uVar1 = (**(code **)(**(long **)(this + 8) + 0x10))(*(long **)(this + 8),param_1);
  plVar2 = *(long **)(this + 8);
  *param_2 = uVar1;
  uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
  *param_3 = uVar1;
  return;
}


