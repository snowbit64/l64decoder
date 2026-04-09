// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRefreshRate
// Entry Point: 00ad9a80
// Size: 20 bytes
// Signature: undefined __thiscall getRefreshRate(AndroidVulkanRenderWindow * this, uint * param_1, uint * param_2)


/* AndroidVulkanRenderWindow::getRefreshRate(unsigned int&, unsigned int&) const */

void __thiscall
AndroidVulkanRenderWindow::getRefreshRate
          (AndroidVulkanRenderWindow *this,uint *param_1,uint *param_2)

{
  *param_1 = *(uint *)(this + 0xf4);
  *param_2 = *(uint *)(this + 0xf8);
  return;
}


