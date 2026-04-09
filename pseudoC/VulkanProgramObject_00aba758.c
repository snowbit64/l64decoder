// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VulkanProgramObject
// Entry Point: 00aba758
// Size: 768 bytes
// Signature: undefined __thiscall VulkanProgramObject(VulkanProgramObject * this, VulkanRenderDevice * param_1, VulkanShaderObject * param_2, VulkanShaderObject * param_3, uint param_4)


/* VulkanProgramObject::VulkanProgramObject(VulkanRenderDevice*, VulkanShaderObject*,
   VulkanShaderObject*, unsigned int) */

void __thiscall
VulkanProgramObject::VulkanProgramObject
          (VulkanProgramObject *this,VulkanRenderDevice *param_1,VulkanShaderObject *param_2,
          VulkanShaderObject *param_3,uint param_4)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  void *pvVar4;
  VulkanProgramObject *this_00;
  void *pvVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 uVar12;
  void *pvVar13;
  size_t __n;
  ulong uVar14;
  __tree_node **local_98;
  __tree_node *local_90;
  undefined8 uStack_88;
  void *local_80;
  void *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__VulkanProgramObject_00fe61e8;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(VulkanProgramObject **)(this + 0x100) = this + 0x108;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(VulkanProgramObject **)(this + 0x140) = this + 0x148;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(VulkanProgramObject **)(this + 0x180) = this + 0x188;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(VulkanProgramObject **)(this + 0x1c0) = this + 0x1c8;
  *(uint *)(this + 8) = param_4;
  *(VulkanRenderDevice **)(this + 0x10) = param_1;
  uVar12 = *(undefined4 *)(param_2 + 0x48);
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0x100000000;
  *(undefined4 *)(this + 0x1f8) = uVar12;
  *(undefined4 *)(this + 0x80) = 0x12;
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xb0) = 0x12;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0x98) = uVar6;
  *(undefined **)(this + 0xa0) = &DAT_004fce31;
  *(undefined8 *)(this + 0xc0) = 0x1000000000;
  uVar6 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0x78) = 2;
  local_80 = (void *)0x0;
  local_78 = (void *)0x0;
  *(undefined8 *)(this + 200) = uVar6;
  *(undefined **)(this + 0xd0) = &DAT_004fce31;
  local_98 = &local_90;
  local_70 = 0;
  local_90 = (__tree_node *)0x0;
  uStack_88 = 0;
                    /* try { // try from 00aba880 to 00aba8b3 has its CatchHandler @ 00abaa58 */
  this_00 = (VulkanProgramObject *)
            gatherGlobals(this,(vector *)&local_80,(map *)&local_98,param_2,0);
  gatherGlobals(this_00,(vector *)&local_80,(map *)&local_98,param_3,1);
  processGlobals((vector *)this,(map *)&local_80);
  lVar9 = *(long *)(param_2 + 0x30);
  lVar7 = *(long *)(param_2 + 0x38);
  uVar10 = lVar7 - lVar9;
  if ((int)(uVar10 >> 2) != 0) {
    uVar14 = 0;
    while( true ) {
      if (uVar14 < (ulong)(lVar7 - lVar9 >> 2)) {
        uVar12 = *(undefined4 *)(lVar9 + uVar14 * 4);
      }
      else {
        uVar12 = 0xffffffff;
      }
      puVar2 = *(undefined4 **)(this + 0x68);
      if (puVar2 < *(undefined4 **)(this + 0x70)) {
        *puVar2 = uVar12;
        *(undefined4 **)(this + 0x68) = puVar2 + 1;
      }
      else {
        pvVar13 = *(void **)(this + 0x60);
        __n = (long)puVar2 - (long)pvVar13;
        uVar1 = ((long)__n >> 2) + 1;
        if (uVar1 >> 0x3e != 0) {
                    /* try { // try from 00abaa40 to 00abaa53 has its CatchHandler @ 00abaa60 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar8 = (long)*(undefined4 **)(this + 0x70) - (long)pvVar13;
        uVar11 = (long)uVar8 >> 1;
        if (uVar1 <= uVar11) {
          uVar1 = uVar11;
        }
        if (0x7ffffffffffffffb < uVar8) {
          uVar1 = 0x3fffffffffffffff;
        }
        if (uVar1 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 00aba958 to 00aba95b has its CatchHandler @ 00abaa5c */
          pvVar5 = operator_new(uVar1 << 2);
        }
        puVar2 = (undefined4 *)((long)pvVar5 + ((long)__n >> 2) * 4);
        *puVar2 = uVar12;
        if (0 < (long)__n) {
          memcpy(pvVar5,pvVar13,__n);
        }
        *(void **)(this + 0x60) = pvVar5;
        *(undefined4 **)(this + 0x68) = puVar2 + 1;
        *(void **)(this + 0x70) = (void *)((long)pvVar5 + uVar1 * 4);
        if (pvVar13 != (void *)0x0) {
          operator_delete(pvVar13);
        }
      }
      if ((uVar10 >> 2 & 0xffffffff) - 1 == uVar14) break;
      lVar9 = *(long *)(param_2 + 0x30);
      lVar7 = *(long *)(param_2 + 0x38);
      uVar14 = uVar14 + 1;
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
             *)&local_98,local_90);
  pvVar13 = local_80;
  pvVar5 = local_78;
  if (local_80 != (void *)0x0) {
    while (pvVar4 = pvVar5, pvVar4 != pvVar13) {
      pvVar5 = (void *)((long)pvVar4 + -0x30);
      if ((*(byte *)((long)pvVar4 + -0x28) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar4 + -0x18));
      }
    }
    local_78 = pvVar13;
    operator_delete(local_80);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


