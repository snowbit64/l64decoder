// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDesktopScreenModeInfo
// Entry Point: 00ad908c
// Size: 88 bytes
// Signature: undefined __thiscall getDesktopScreenModeInfo(AndroidVulkanRenderDevice * this, uint * param_1, uint * param_2)


/* AndroidVulkanRenderDevice::getDesktopScreenModeInfo(unsigned int&, unsigned int&) */

void __thiscall
AndroidVulkanRenderDevice::getDesktopScreenModeInfo
          (AndroidVulkanRenderDevice *this,uint *param_1,uint *param_2)

{
  uint uVar1;
  long *plVar2;
  
  uVar1 = (**(code **)(**(long **)(this + 8) + 0x10))();
  plVar2 = *(long **)(this + 8);
  *param_1 = uVar1;
  uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
  *param_2 = uVar1;
  return;
}


