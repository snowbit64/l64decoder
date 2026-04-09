// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>>
// Entry Point: 0094f0c0
// Size: 520 bytes
// Signature: pair __cdecl __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>>(uint * param_1, piecewise_construct_t * param_2, tuple * param_3, tuple * param_4)


/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   int, CustomShader::UvUsage>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned int, CustomShader::UvUsage>,
   std::__ndk1::__unordered_map_hasher<unsigned int, std::__ndk1::__hash_value_type<unsigned int,
   CustomShader::UvUsage>, std::__ndk1::hash<unsigned int>, true>,
   std::__ndk1::__unordered_map_equal<unsigned int, std::__ndk1::__hash_value_type<unsigned int,
   CustomShader::UvUsage>, std::__ndk1::equal_to<unsigned int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned int, CustomShader::UvUsage> >
   >::__emplace_unique_key_args<unsigned int, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<unsigned int const&>, std::__ndk1::tuple<> >(unsigned int const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<unsigned int const&>&&,
   std::__ndk1::tuple<>&&) */

pair std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>>>
     ::
     __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>>
               (uint *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  long **pplVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long **pplVar10;
  long *plVar11;
  long *plVar12;
  long *unaff_x24;
  undefined2 uVar13;
  undefined8 uVar14;
  float fVar15;
  
  plVar11 = *(long **)(param_1 + 2);
  uVar1 = *(uint *)param_2;
  plVar12 = (long *)(ulong)uVar1;
  if (plVar11 != (long *)0x0) {
    uVar14 = NEON_cnt(plVar11,1);
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar4 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar4 < 2) {
      unaff_x24 = (long *)(ulong)((int)plVar11 - 1U & uVar1);
    }
    else {
      unaff_x24 = plVar12;
      if (plVar11 <= plVar12) {
        uVar8 = 0;
        if (plVar11 != (long *)0x0) {
          uVar8 = (ulong)plVar12 / (ulong)plVar11;
        }
        unaff_x24 = (long *)((long)plVar12 - uVar8 * (long)plVar11);
      }
    }
    pplVar10 = *(long ***)(*(long *)param_1 + (long)unaff_x24 * 8);
    if (pplVar10 != (long **)0x0) {
      do {
        pplVar10 = (long **)*pplVar10;
        if (pplVar10 == (long **)0x0) goto LAB_0094f180;
        plVar7 = pplVar10[1];
        if (plVar7 != plVar12) {
          if (uVar4 < 2) {
            plVar7 = (long *)((ulong)plVar7 & (long)plVar11 - 1U);
          }
          else if (plVar11 <= plVar7) {
            uVar8 = 0;
            if (plVar11 != (long *)0x0) {
              uVar8 = (ulong)plVar7 / (ulong)plVar11;
            }
            plVar7 = (long *)((long)plVar7 - uVar8 * (long)plVar11);
          }
          if (plVar7 != unaff_x24) goto LAB_0094f180;
        }
      } while (*(uint *)(pplVar10 + 2) != uVar1);
      goto LAB_0094f2b0;
    }
  }
LAB_0094f180:
  pplVar10 = (long **)operator_new(0x20);
  lVar5 = *(long *)(param_1 + 6);
  puVar3 = *(undefined4 **)param_4;
  *pplVar10 = (long *)0x0;
  pplVar10[1] = plVar12;
  fVar15 = (float)param_1[8];
  uVar2 = *puVar3;
  *(undefined8 *)((long)pplVar10 + 0x14) = 0;
  *(undefined4 *)(pplVar10 + 2) = uVar2;
  if ((plVar11 == (long *)0x0) || (fVar15 * (float)ZEXT89(plVar11) < (float)(unkuint9)(lVar5 + 1)))
  {
    uVar4 = 1;
    if ((long *)0x2 < plVar11) {
      uVar4 = (ulong)(((ulong)plVar11 & (long)plVar11 - 1U) != 0);
    }
    uVar4 = uVar4 | (long)plVar11 << 1;
    uVar8 = (ulong)((float)(unkuint9)(lVar5 + 1) / fVar15);
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
                    /* try { // try from 0094f1f4 to 0094f1fb has its CatchHandler @ 0094f2c8 */
    rehash((__hash_table<std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>>>
            *)param_1,uVar8);
    plVar11 = *(long **)(param_1 + 2);
    if (((ulong)plVar11 & (long)plVar11 - 1U) == 0) {
      unaff_x24 = (long *)(ulong)((int)plVar11 - 1U & uVar1);
    }
    else {
      unaff_x24 = plVar12;
      if (plVar11 <= plVar12) {
        uVar4 = 0;
        if (plVar11 != (long *)0x0) {
          uVar4 = (ulong)plVar12 / (ulong)plVar11;
        }
        unaff_x24 = (long *)((long)plVar12 - uVar4 * (long)plVar11);
      }
    }
  }
  lVar5 = *(long *)param_1;
  pplVar6 = *(long ***)(lVar5 + (long)unaff_x24 * 8);
  if (pplVar6 == (long **)0x0) {
    plVar12 = (long *)(param_1 + 4);
    lVar9 = *plVar12;
    *plVar12 = (long)pplVar10;
    *pplVar10 = (long *)lVar9;
    *(long **)(lVar5 + (long)unaff_x24 * 8) = plVar12;
    if (*pplVar10 != (long *)0x0) {
      plVar12 = *(long **)((long)*pplVar10 + 8);
      if (((ulong)plVar11 & (long)plVar11 - 1U) == 0) {
        plVar12 = (long *)((ulong)plVar12 & (long)plVar11 - 1U);
      }
      else if (plVar11 <= plVar12) {
        uVar4 = 0;
        if (plVar11 != (long *)0x0) {
          uVar4 = (ulong)plVar12 / (ulong)plVar11;
        }
        plVar12 = (long *)((long)plVar12 - uVar4 * (long)plVar11);
      }
      *(long ***)(*(long *)param_1 + (long)plVar12 * 8) = pplVar10;
    }
  }
  else {
    *pplVar10 = *pplVar6;
    *pplVar6 = (long *)pplVar10;
  }
  *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + 1;
LAB_0094f2b0:
  return (pair)pplVar10;
}


