// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VulkanProgramObject
// Entry Point: 00abb7a0
// Size: 396 bytes
// Signature: undefined __thiscall VulkanProgramObject(VulkanProgramObject * this, VulkanRenderDevice * param_1, VulkanShaderObject * param_2, uint param_3)


/* VulkanProgramObject::VulkanProgramObject(VulkanRenderDevice*, VulkanShaderObject*, unsigned int)
    */

void __thiscall
VulkanProgramObject::VulkanProgramObject
          (VulkanProgramObject *this,VulkanRenderDevice *param_1,VulkanShaderObject *param_2,
          uint param_3)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 uVar5;
  __tree_node **local_68;
  __tree_node *local_60;
  undefined8 uStack_58;
  void *local_50;
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__VulkanProgramObject_00fe61e8;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(VulkanProgramObject **)(this + 0x100) = this + 0x108;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(VulkanProgramObject **)(this + 0x140) = this + 0x148;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(VulkanProgramObject **)(this + 0x180) = this + 0x188;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(VulkanProgramObject **)(this + 0x1c0) = this + 0x1c8;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(uint *)(this + 8) = param_3;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(VulkanRenderDevice **)(this + 0x10) = param_1;
  *(undefined4 *)(this + 0x80) = 0x12;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0x2000000000;
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0x78) = 1;
  local_50 = (void *)0x0;
  local_48 = (void *)0x0;
  *(undefined8 *)(this + 0x98) = uVar5;
  *(undefined **)(this + 0xa0) = &DAT_004fce31;
  local_68 = &local_60;
  local_40 = 0;
  local_60 = (__tree_node *)0x0;
  uStack_58 = 0;
                    /* try { // try from 00abb88c to 00abb8ab has its CatchHandler @ 00abb92c */
  gatherGlobals(this,(vector *)&local_50,(map *)&local_68,param_2,2);
  processGlobals((vector *)this,(map *)&local_50);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
             *)&local_68,local_60);
  pvVar3 = local_50;
  pvVar4 = local_48;
  if (local_50 != (void *)0x0) {
    while (pvVar2 = pvVar4, pvVar2 != pvVar3) {
      pvVar4 = (void *)((long)pvVar2 + -0x30);
      if ((*(byte *)((long)pvVar2 + -0x28) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -0x18));
      }
    }
    local_48 = pvVar3;
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


