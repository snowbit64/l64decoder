// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateEffects
// Entry Point: 0074af24
// Size: 348 bytes
// Signature: undefined updateEffects(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CollisionEffectManager::updateEffects() */

void CollisionEffectManager::updateEffects(void)

{
  size_t __n;
  long lVar1;
  void *pvVar2;
  long in_x0;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  char **ppcVar6;
  long **pplVar7;
  char **__dest;
  void *local_60;
  char local_50;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  pplVar7 = *(long ***)(in_x0 + 0x48);
  if (pplVar7 != (long **)0x0) {
LAB_0074af6c:
    do {
      pvVar2 = local_60;
      __dest = (char **)pplVar7[4];
      if (__dest != (char **)pplVar7[5]) {
        do {
          while (uVar4 = (**(code **)(*(long *)__dest[1] + 0x38))(), (uVar4 & 1) == 0) {
LAB_0074b020:
            if ((long *)__dest[1] != (long *)0x0) {
              (**(code **)(*(long *)__dest[1] + 8))();
            }
            __n = (long)pplVar7[5] - (long)(__dest + 2);
            if (__n != 0) {
              memmove(__dest,__dest + 2,__n);
            }
            ppcVar6 = (char **)((long)__dest + __n);
            pplVar7[5] = (long *)ppcVar6;
            if (__dest == ppcVar6) goto LAB_0074af58;
          }
          if (**__dest == '\0') {
            (**(code **)(*(long *)__dest[1] + 0x20))(0,0);
            goto LAB_0074b020;
          }
          __dest = __dest + 2;
          ppcVar6 = (char **)pplVar7[5];
        } while (__dest != ppcVar6);
LAB_0074af58:
        if ((char **)pplVar7[4] != ppcVar6) {
          pplVar7 = (long **)*pplVar7;
          if (pplVar7 == (long **)0x0) break;
          goto LAB_0074af6c;
        }
      }
      pplVar7 = (long **)*pplVar7;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::vector<CollisionEffectManager::EffectInstance,std::__ndk1::allocator<CollisionEffectManager::EffectInstance>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::__hash_value_type<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::vector<CollisionEffectManager::EffectInstance,std::__ndk1::allocator<CollisionEffectManager::EffectInstance>>>,CollisionEffectManager::PlayingEffectKeyHash,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::__hash_value_type<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::vector<CollisionEffectManager::EffectInstance,std::__ndk1::allocator<CollisionEffectManager::EffectInstance>>>,std::__ndk1::equal_to<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::vector<CollisionEffectManager::EffectInstance,std::__ndk1::allocator<CollisionEffectManager::EffectInstance>>>>>
      ::remove((int)in_x0 + 0x38);
      local_60 = (void *)0x0;
      if (pvVar2 != (void *)0x0) {
        if ((local_50 != '\0') && (pvVar3 = *(void **)((long)pvVar2 + 0x20), pvVar3 != (void *)0x0))
        {
          *(void **)((long)pvVar2 + 0x28) = pvVar3;
          operator_delete(pvVar3);
        }
        operator_delete(pvVar2);
      }
    } while (pplVar7 != (long **)0x0);
  }
  if (*(long *)(lVar1 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


