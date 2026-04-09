// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstanceLayers
// Entry Point: 00abdb4c
// Size: 384 bytes
// Signature: undefined __cdecl getInstanceLayers(vector * param_1)


/* VulkanExtensionUtil::getInstanceLayers(std::__ndk1::vector<char const*,
   std::__ndk1::allocator<char const*> > const&) */

undefined4 VulkanExtensionUtil::getInstanceLayers(vector *param_1)

{
  char **ppcVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  char *__s1;
  char **ppcVar9;
  uint local_74;
  void *local_70;
  void *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_70 = (void *)0x0;
  local_68 = (void *)0x0;
  local_60 = 0;
  do {
                    /* try { // try from 00abdba0 to 00abdbff has its CatchHandler @ 00abdccc */
    iVar4 = (*vkEnumerateInstanceLayerProperties)(&local_74,0);
    uVar5 = (ulong)local_74;
    if (iVar4 != 0 || local_74 == 0) break;
    lVar6 = (long)local_68 - (long)local_70 >> 3;
    uVar7 = lVar6 * 0xfc0fc0fc0fc0fc1;
    if (uVar5 <= uVar7) {
      if (uVar5 <= uVar7 && uVar7 - uVar5 != 0) {
        local_68 = (void *)((long)local_70 + uVar5 * 0x208);
      }
    }
    else {
      std::__ndk1::vector<VkLayerProperties,std::__ndk1::allocator<VkLayerProperties>>::__append
                ((vector<VkLayerProperties,std::__ndk1::allocator<VkLayerProperties>> *)&local_70,
                 uVar5 + lVar6 * -0xfc0fc0fc0fc0fc1);
    }
    iVar4 = (*vkEnumerateInstanceLayerProperties)(&local_74,local_70);
  } while (iVar4 == 5);
  pvVar3 = local_70;
  if ((iVar4 == 0) && (local_74 != 0)) {
    ppcVar9 = *(char ***)param_1;
    ppcVar1 = *(char ***)(param_1 + 8);
    if (ppcVar9 == ppcVar1) {
      uVar8 = 1;
    }
    else {
      do {
        lVar6 = 0;
        __s1 = *ppcVar9;
        while (iVar4 = strcmp(__s1,(char *)((long)pvVar3 + lVar6)), iVar4 != 0) {
          lVar6 = lVar6 + 0x208;
          if ((ulong)local_74 * 0x208 - lVar6 == 0) {
            uVar8 = 0;
            goto joined_r0x00abdcc0;
          }
        }
        ppcVar9 = ppcVar9 + 1;
        uVar8 = 1;
      } while (ppcVar9 != ppcVar1);
    }
  }
  else {
    uVar8 = 0;
  }
joined_r0x00abdcc0:
  if (pvVar3 != (void *)0x0) {
    local_68 = pvVar3;
    operator_delete(pvVar3);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


