// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createDescriptorSetLayout
// Entry Point: 00abbdd8
// Size: 428 bytes
// Signature: undefined __cdecl createDescriptorSetLayout(DescriptorSetLayoutDesc * param_1, VkDevice_T * param_2)


/* VulkanProgramObject::createDescriptorSetLayout(VulkanProgramObject::DescriptorSetLayoutDesc
   const&, VkDevice_T*) */

undefined8
VulkanProgramObject::createDescriptorSetLayout(DescriptorSetLayoutDesc *param_1,VkDevice_T *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *__s;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  void *pvVar8;
  size_t __n;
  ulong uVar9;
  undefined4 local_98 [2];
  undefined8 local_90;
  long local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  long local_68;
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar1 = *(long *)param_1;
  local_68 = 0;
  local_60 = (void *)0x0;
  local_70 = (void *)0x0;
  if (*(long *)(param_1 + 8) - lVar1 == 0) {
    local_88 = 0;
    pvVar8 = (void *)0x0;
  }
  else {
    lVar5 = *(long *)(param_1 + 8) - lVar1 >> 2;
    uVar9 = lVar5 * -0x5555555555555555;
    if (0xaaaaaaaaaaaaaaa < uVar9) {
                    /* try { // try from 00abbf78 to 00abbf7f has its CatchHandler @ 00abbf94 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00abbe44 to 00abbe4b has its CatchHandler @ 00abbf94 */
    __s = operator_new(lVar5 * 8);
    local_60 = (void *)((long)__s + lVar5 * 8);
    __n = ((lVar5 * 8 - 0x18U) / 0x18) * 0x18 + 0x18;
    local_70 = __s;
    memset(__s,0,__n);
    uVar6 = 0;
    uVar4 = 0;
    local_68 = (long)__s + __n;
    do {
      if (*(char *)(lVar1 + uVar6 * 0xc) != '\0') {
        piVar7 = (int *)((long)__s + (ulong)uVar4 * 0x18);
        uVar4 = uVar4 + 1;
        lVar5 = lVar1 + uVar6 * 0xc;
        *piVar7 = (int)uVar6;
        piVar7[1] = *(int *)(lVar5 + 4);
        piVar7[2] = 1;
        iVar2 = *(int *)(lVar5 + 8);
        *(undefined8 *)(piVar7 + 4) = 0;
        piVar7[3] = iVar2;
      }
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 <= uVar9 && uVar9 - uVar6 != 0);
    local_88 = (ulong)uVar4 << 0x20;
    pvVar8 = __s;
    if (uVar4 != 0) goto LAB_00abbf14;
  }
  __s = (void *)0x0;
LAB_00abbf14:
  local_90 = 0;
  local_98[0] = 0x20;
                    /* try { // try from 00abbf24 to 00abbf37 has its CatchHandler @ 00abbf84 */
  local_80 = __s;
  (*vkCreateDescriptorSetLayout)(param_2,local_98,0,&local_78);
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_78;
}


