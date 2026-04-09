// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createProgramObject
// Entry Point: 00ab772c
// Size: 276 bytes
// Signature: undefined __thiscall createProgramObject(VulkanRenderDevice * this, VulkanShaderObject * param_1, VulkanShaderObject * param_2)


/* VulkanRenderDevice::createProgramObject(VulkanShaderObject*, VulkanShaderObject*) */

VulkanProgramObject * __thiscall
VulkanRenderDevice::createProgramObject
          (VulkanRenderDevice *this,VulkanShaderObject *param_1,VulkanShaderObject *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  VulkanProgramObject *this_00;
  ulong uVar4;
  ulong uVar5;
  VulkanRenderDevice *pVVar6;
  VulkanRenderDevice *pVVar7;
  uint uVar8;
  ulong local_60;
  ulong uStack_58;
  uint local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = *(ulong *)(param_1 + 0x10);
  pVVar7 = *(VulkanRenderDevice **)(this + 0x530);
  uVar5 = *(ulong *)(param_2 + 0x10);
  if (pVVar7 != (VulkanRenderDevice *)0x0) {
    pVVar6 = this + 0x530;
    do {
      bVar3 = *(ulong *)(pVVar7 + 0x28) < uVar5;
      if (*(ulong *)(pVVar7 + 0x20) != uVar4) {
        bVar3 = *(ulong *)(pVVar7 + 0x20) < uVar4;
      }
      lVar1 = 8;
      if (!bVar3) {
        lVar1 = 0;
        pVVar6 = pVVar7;
      }
      pVVar7 = *(VulkanRenderDevice **)(pVVar7 + lVar1);
    } while (pVVar7 != (VulkanRenderDevice *)0x0);
    if (pVVar6 != this + 0x530) {
      bVar3 = uVar5 < *(ulong *)(pVVar6 + 0x28);
      if (uVar4 != *(ulong *)(pVVar6 + 0x20)) {
        bVar3 = uVar4 < *(ulong *)(pVVar6 + 0x20);
      }
      if (!bVar3) {
        uVar8 = *(uint *)(pVVar6 + 0x30);
        goto LAB_00ab77e8;
      }
    }
  }
  uVar8 = *(uint *)(this + 0x538);
  local_60 = uVar4;
  uStack_58 = uVar5;
  local_50 = uVar8;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<VulkanRenderDevice::ShaderProgram,unsigned_int>,std::__ndk1::__map_value_compare<VulkanRenderDevice::ShaderProgram,std::__ndk1::__value_type<VulkanRenderDevice::ShaderProgram,unsigned_int>,std::__ndk1::less<VulkanRenderDevice::ShaderProgram>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanRenderDevice::ShaderProgram,unsigned_int>>>
  ::
  __emplace_unique_key_args<VulkanRenderDevice::ShaderProgram,std::__ndk1::pair<VulkanRenderDevice::ShaderProgram,unsigned_int>>
            ((__tree<std::__ndk1::__value_type<VulkanRenderDevice::ShaderProgram,unsigned_int>,std::__ndk1::__map_value_compare<VulkanRenderDevice::ShaderProgram,std::__ndk1::__value_type<VulkanRenderDevice::ShaderProgram,unsigned_int>,std::__ndk1::less<VulkanRenderDevice::ShaderProgram>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanRenderDevice::ShaderProgram,unsigned_int>>>
              *)(this + 0x528),(ShaderProgram *)&local_60,(pair *)&local_60);
LAB_00ab77e8:
  this_00 = (VulkanProgramObject *)operator_new(0x200);
                    /* try { // try from 00ab77f4 to 00ab7807 has its CatchHandler @ 00ab7840 */
  VulkanProgramObject::VulkanProgramObject(this_00,this,param_1,param_2,uVar8);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_00;
}


