// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00aba52c
// Size: 172 bytes
// Signature: undefined __thiscall init(VulkanSamplerObject * this, SamplerObjectDesc * param_1)


/* VulkanSamplerObject::init(SamplerObjectDesc const&) */

void __thiscall VulkanSamplerObject::init(VulkanSamplerObject *this,SamplerObjectDesc *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 8));
  uStack_58 = *(undefined8 *)(param_1 + 8);
  local_60 = *(undefined8 *)param_1;
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  local_50 = *(ulong *)(param_1 + 0x10);
  local_40 = *(undefined8 *)(param_1 + 0x20);
  if ((*(VulkanRenderDevice **)(this + 0x20))[0x5d0] == (VulkanRenderDevice)0x0) {
    if ((int)local_60 == 3) {
      uVar2 = (ulong)local_60 >> 0x20;
      local_60 = CONCAT44((int)uVar2,2);
    }
    local_50 = local_50 & 0xffffffff00000000;
  }
  uVar3 = VulkanRenderDevice::createSharedSampler
                    (*(VulkanRenderDevice **)(this + 0x20),(SamplerObjectDesc *)&local_60);
  *(undefined8 *)(this + 0x28) = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


