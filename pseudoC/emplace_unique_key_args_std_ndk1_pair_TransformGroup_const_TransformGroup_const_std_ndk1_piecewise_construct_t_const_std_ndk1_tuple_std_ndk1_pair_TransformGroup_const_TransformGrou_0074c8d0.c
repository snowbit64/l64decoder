// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>const&>,std::__ndk1::tuple<>>
// Entry Point: 0074c8d0
// Size: 696 bytes
// Signature: pair __cdecl __emplace_unique_key_args<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>const&>,std::__ndk1::tuple<>>(pair * param_1, piecewise_construct_t * param_2, tuple * param_3, tuple * param_4)


/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::pair<TransformGroup
   const*, TransformGroup const*>, std::__ndk1::vector<CollisionEffectManager::EffectInstance,
   std::__ndk1::allocator<CollisionEffectManager::EffectInstance> > >, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<TransformGroup const*,
   TransformGroup const*>, std::__ndk1::vector<CollisionEffectManager::EffectInstance,
   std::__ndk1::allocator<CollisionEffectManager::EffectInstance> > >,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<TransformGroup const*, TransformGroup
   const*>, std::__ndk1::__hash_value_type<std::__ndk1::pair<TransformGroup const*, TransformGroup
   const*>, std::__ndk1::vector<CollisionEffectManager::EffectInstance,
   std::__ndk1::allocator<CollisionEffectManager::EffectInstance> > >,
   CollisionEffectManager::PlayingEffectKeyHash, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::pair<TransformGroup const*, TransformGroup
   const*>, std::__ndk1::__hash_value_type<std::__ndk1::pair<TransformGroup const*, TransformGroup
   const*>, std::__ndk1::vector<CollisionEffectManager::EffectInstance,
   std::__ndk1::allocator<CollisionEffectManager::EffectInstance> > >,
   std::__ndk1::equal_to<std::__ndk1::pair<TransformGroup const*, TransformGroup const*> >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<TransformGroup const*,
   TransformGroup const*>, std::__ndk1::vector<CollisionEffectManager::EffectInstance,
   std::__ndk1::allocator<CollisionEffectManager::EffectInstance> > > >
   >::__emplace_unique_key_args<std::__ndk1::pair<TransformGroup const*, TransformGroup const*>,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<std::__ndk1::pair<TransformGroup
   const*, TransformGroup const*> const&>, std::__ndk1::tuple<> >(std::__ndk1::pair<TransformGroup
   const*, TransformGroup const*> const&, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<std::__ndk1::pair<TransformGroup const*, TransformGroup const*> const&>&&,
   std::__ndk1::tuple<>&&) */

pair std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::vector<CollisionEffectManager::EffectInstance,std::__ndk1::allocator<CollisionEffectManager::EffectInstance>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::__hash_value_type<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::vector<CollisionEffectManager::EffectInstance,std::__ndk1::allocator<CollisionEffectManager::EffectInstance>>>,CollisionEffectManager::PlayingEffectKeyHash,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::__hash_value_type<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::vector<CollisionEffectManager::EffectInstance,std::__ndk1::allocator<CollisionEffectManager::EffectInstance>>>,std::__ndk1::equal_to<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::vector<CollisionEffectManager::EffectInstance,std::__ndk1::allocator<CollisionEffectManager::EffectInstance>>>>>
     ::
     __emplace_unique_key_args<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>const&>,std::__ndk1::tuple<>>
               (pair *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  long lVar1;
  long **pplVar2;
  long lVar3;
  long lVar4;
  long **pplVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *unaff_x25;
  undefined2 uVar13;
  undefined8 uVar14;
  float fVar15;
  long *plVar16;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar7 = *(long **)param_2;
  plVar16 = *(long **)(param_2 + 8);
  plVar11 = *(long **)(param_1 + 2);
  uVar8 = ((ulong)(uint)((int)plVar7 << 3) + 8 ^ (ulong)plVar7 >> 0x20) * -0x622015f714c7d297;
  uVar10 = ((ulong)(uint)((int)plVar16 << 3) + 8 ^ (ulong)plVar16 >> 0x20) * -0x622015f714c7d297;
  uVar8 = (uVar8 ^ (ulong)plVar7 >> 0x20 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
  uVar10 = (uVar10 ^ (ulong)plVar16 >> 0x20 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
  plVar12 = (long *)((uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297 ^
                    (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297);
  if (plVar11 != (long *)0x0) {
    uVar14 = NEON_cnt(plVar11,1);
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar8 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar8 < 2) {
      unaff_x25 = (long *)((ulong)plVar12 & (long)plVar11 - 1U);
    }
    else {
      unaff_x25 = plVar12;
      if (plVar11 <= plVar12) {
        uVar10 = 0;
        if (plVar11 != (long *)0x0) {
          uVar10 = (ulong)plVar12 / (ulong)plVar11;
        }
        unaff_x25 = (long *)((long)plVar12 - uVar10 * (long)plVar11);
      }
    }
    pplVar2 = *(long ***)(*(long *)param_1 + (long)unaff_x25 * 8);
    if (pplVar2 != (long **)0x0) {
      do {
        pplVar2 = (long **)*pplVar2;
        if (pplVar2 == (long **)0x0) goto LAB_0074ca18;
        plVar9 = pplVar2[1];
        if (plVar9 != plVar12) {
          if (uVar8 < 2) {
            plVar9 = (long *)((ulong)plVar9 & (long)plVar11 - 1U);
          }
          else if (plVar11 <= plVar9) {
            uVar10 = 0;
            if (plVar11 != (long *)0x0) {
              uVar10 = (ulong)plVar9 / (ulong)plVar11;
            }
            plVar9 = (long *)((long)plVar9 - uVar10 * (long)plVar11);
          }
          if (plVar9 != unaff_x25) goto LAB_0074ca18;
        }
      } while ((pplVar2[2] != plVar7) || (pplVar2[3] != plVar16));
      uVar14 = 0;
      goto LAB_0074cb58;
    }
  }
LAB_0074ca18:
  plVar7 = (long *)(param_1 + 4);
  pplVar2 = (long **)operator_new(0x38);
  lVar4 = *(long *)(param_1 + 6);
  plVar9 = (*(long ***)param_4)[1];
  plVar16 = **(long ***)param_4;
  pplVar2[5] = (long *)0x0;
  pplVar2[6] = (long *)0x0;
  pplVar2[4] = (long *)0x0;
  pplVar2[3] = plVar9;
  pplVar2[2] = plVar16;
  fVar15 = (float)param_1[8];
  *pplVar2 = (long *)0x0;
  pplVar2[1] = plVar12;
  if ((plVar11 == (long *)0x0) || (fVar15 * (float)ZEXT89(plVar11) < (float)(unkuint9)(lVar4 + 1)))
  {
    if (plVar11 < (long *)0x3) {
      uVar8 = 1;
    }
    else {
      uVar8 = (ulong)(((ulong)plVar11 & (long)plVar11 - 1U) != 0);
    }
    uVar8 = uVar8 | (long)plVar11 << 1;
    uVar10 = (ulong)((float)(unkuint9)(lVar4 + 1) / fVar15);
    if (uVar10 <= uVar8) {
      uVar10 = uVar8;
    }
                    /* try { // try from 0074caa4 to 0074caab has its CatchHandler @ 0074cb88 */
    rehash((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::vector<CollisionEffectManager::EffectInstance,std::__ndk1::allocator<CollisionEffectManager::EffectInstance>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::__hash_value_type<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::vector<CollisionEffectManager::EffectInstance,std::__ndk1::allocator<CollisionEffectManager::EffectInstance>>>,CollisionEffectManager::PlayingEffectKeyHash,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::__hash_value_type<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::vector<CollisionEffectManager::EffectInstance,std::__ndk1::allocator<CollisionEffectManager::EffectInstance>>>,std::__ndk1::equal_to<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::vector<CollisionEffectManager::EffectInstance,std::__ndk1::allocator<CollisionEffectManager::EffectInstance>>>>>
            *)param_1,uVar10);
    plVar11 = *(long **)(param_1 + 2);
    if (((ulong)plVar11 & (long)plVar11 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar11 - 1U & (ulong)plVar12);
    }
    else {
      unaff_x25 = plVar12;
      if (plVar11 <= plVar12) {
        uVar8 = 0;
        if (plVar11 != (long *)0x0) {
          uVar8 = (ulong)plVar12 / (ulong)plVar11;
        }
        unaff_x25 = (long *)((long)plVar12 - uVar8 * (long)plVar11);
      }
    }
  }
  lVar4 = *(long *)param_1;
  pplVar5 = *(long ***)(lVar4 + (long)unaff_x25 * 8);
  if (pplVar5 == (long **)0x0) {
    lVar6 = *plVar7;
    *plVar7 = (long)pplVar2;
    *pplVar2 = (long *)lVar6;
    *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar7;
    if (*pplVar2 != (long *)0x0) {
      plVar7 = (long *)(*pplVar2)[1];
      if (((ulong)plVar11 & (long)plVar11 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar11 - 1U);
      }
      else if (plVar11 <= plVar7) {
        uVar8 = 0;
        if (plVar11 != (long *)0x0) {
          uVar8 = (ulong)plVar7 / (ulong)plVar11;
        }
        plVar7 = (long *)((long)plVar7 - uVar8 * (long)plVar11);
      }
      *(long ***)(*(long *)param_1 + (long)plVar7 * 8) = pplVar2;
    }
  }
  else {
    *pplVar2 = *pplVar5;
    *pplVar5 = (long *)pplVar2;
  }
  uVar14 = 1;
  *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + 1;
LAB_0074cb58:
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pplVar2,uVar14);
  }
  return (pair)pplVar2;
}


