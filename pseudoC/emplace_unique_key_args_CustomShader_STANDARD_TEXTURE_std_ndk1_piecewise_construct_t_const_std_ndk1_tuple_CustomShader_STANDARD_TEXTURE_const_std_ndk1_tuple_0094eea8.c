// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<CustomShader::STANDARD_TEXTURE,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<CustomShader::STANDARD_TEXTURE_const&>,std::__ndk1::tuple<>>
// Entry Point: 0094eea8
// Size: 516 bytes
// Signature: pair __cdecl __emplace_unique_key_args<CustomShader::STANDARD_TEXTURE,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<CustomShader::STANDARD_TEXTURE_const&>,std::__ndk1::tuple<>>(STANDARD_TEXTURE * param_1, piecewise_construct_t * param_2, tuple * param_3, tuple * param_4)


/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,
   CustomShader::UvUsage>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,
   CustomShader::UvUsage>, std::__ndk1::__unordered_map_hasher<CustomShader::STANDARD_TEXTURE,
   std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE, CustomShader::UvUsage>,
   std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<CustomShader::STANDARD_TEXTURE,
   std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE, CustomShader::UvUsage>,
   std::__ndk1::equal_to<CustomShader::STANDARD_TEXTURE>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,
   CustomShader::UvUsage> > >::__emplace_unique_key_args<CustomShader::STANDARD_TEXTURE,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<CustomShader::STANDARD_TEXTURE
   const&>, std::__ndk1::tuple<> >(CustomShader::STANDARD_TEXTURE const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<CustomShader::STANDARD_TEXTURE
   const&>&&, std::__ndk1::tuple<>&&) */

pair std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,std::__ndk1::__unordered_map_hasher<CustomShader::STANDARD_TEXTURE,std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<CustomShader::STANDARD_TEXTURE,std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,std::__ndk1::equal_to<CustomShader::STANDARD_TEXTURE>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>>>
     ::
     __emplace_unique_key_args<CustomShader::STANDARD_TEXTURE,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<CustomShader::STANDARD_TEXTURE_const&>,std::__ndk1::tuple<>>
               (STANDARD_TEXTURE *param_1,piecewise_construct_t *param_2,tuple *param_3,
               tuple *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  long lVar4;
  long **pplVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long **pplVar9;
  long *plVar10;
  long *plVar11;
  long *unaff_x24;
  undefined2 uVar12;
  undefined8 uVar13;
  float fVar14;
  
  plVar10 = *(long **)(param_1 + 8);
  plVar11 = (long *)(long)*(int *)param_2;
  if (plVar10 != (long *)0x0) {
    uVar13 = NEON_cnt(plVar10,1);
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar3 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar3 < 2) {
      unaff_x24 = (long *)((long)plVar10 - 1U & (ulong)plVar11);
    }
    else {
      unaff_x24 = plVar11;
      if (plVar10 <= plVar11) {
        uVar7 = 0;
        if (plVar10 != (long *)0x0) {
          uVar7 = (ulong)plVar11 / (ulong)plVar10;
        }
        unaff_x24 = (long *)((long)plVar11 - uVar7 * (long)plVar10);
      }
    }
    pplVar9 = *(long ***)(*(long *)param_1 + (long)unaff_x24 * 8);
    if (pplVar9 != (long **)0x0) {
      do {
        pplVar9 = (long **)*pplVar9;
        if (pplVar9 == (long **)0x0) goto LAB_0094ef68;
        plVar6 = pplVar9[1];
        if (plVar6 != plVar11) {
          if (uVar3 < 2) {
            plVar6 = (long *)((ulong)plVar6 & (long)plVar10 - 1U);
          }
          else if (plVar10 <= plVar6) {
            uVar7 = 0;
            if (plVar10 != (long *)0x0) {
              uVar7 = (ulong)plVar6 / (ulong)plVar10;
            }
            plVar6 = (long *)((long)plVar6 - uVar7 * (long)plVar10);
          }
          if (plVar6 != unaff_x24) goto LAB_0094ef68;
        }
      } while (*(int *)(pplVar9 + 2) != *(int *)param_2);
      goto LAB_0094f094;
    }
  }
LAB_0094ef68:
  pplVar9 = (long **)operator_new(0x20);
  lVar4 = *(long *)(param_1 + 0x18);
  puVar2 = *(undefined4 **)param_4;
  *pplVar9 = (long *)0x0;
  pplVar9[1] = plVar11;
  fVar14 = *(float *)(param_1 + 0x20);
  uVar1 = *puVar2;
  *(undefined8 *)((long)pplVar9 + 0x14) = 0;
  *(undefined4 *)(pplVar9 + 2) = uVar1;
  if ((plVar10 == (long *)0x0) || (fVar14 * (float)ZEXT89(plVar10) < (float)(unkuint9)(lVar4 + 1)))
  {
    uVar3 = 1;
    if ((long *)0x2 < plVar10) {
      uVar3 = (ulong)(((ulong)plVar10 & (long)plVar10 - 1U) != 0);
    }
    uVar3 = uVar3 | (long)plVar10 << 1;
    uVar7 = (ulong)((float)(unkuint9)(lVar4 + 1) / fVar14);
    if (uVar7 <= uVar3) {
      uVar7 = uVar3;
    }
                    /* try { // try from 0094efdc to 0094efe3 has its CatchHandler @ 0094f0ac */
    rehash((__hash_table<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,std::__ndk1::__unordered_map_hasher<CustomShader::STANDARD_TEXTURE,std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<CustomShader::STANDARD_TEXTURE,std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,std::__ndk1::equal_to<CustomShader::STANDARD_TEXTURE>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>>>
            *)param_1,uVar7);
    plVar10 = *(long **)(param_1 + 8);
    if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
      unaff_x24 = (long *)((long)plVar10 - 1U & (ulong)plVar11);
    }
    else {
      unaff_x24 = plVar11;
      if (plVar10 <= plVar11) {
        uVar3 = 0;
        if (plVar10 != (long *)0x0) {
          uVar3 = (ulong)plVar11 / (ulong)plVar10;
        }
        unaff_x24 = (long *)((long)plVar11 - uVar3 * (long)plVar10);
      }
    }
  }
  lVar4 = *(long *)param_1;
  pplVar5 = *(long ***)(lVar4 + (long)unaff_x24 * 8);
  if (pplVar5 == (long **)0x0) {
    plVar11 = (long *)(param_1 + 0x10);
    lVar8 = *plVar11;
    *plVar11 = (long)pplVar9;
    *pplVar9 = (long *)lVar8;
    *(long **)(lVar4 + (long)unaff_x24 * 8) = plVar11;
    if (*pplVar9 != (long *)0x0) {
      plVar11 = *(long **)((long)*pplVar9 + 8);
      if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
        plVar11 = (long *)((ulong)plVar11 & (long)plVar10 - 1U);
      }
      else if (plVar10 <= plVar11) {
        uVar3 = 0;
        if (plVar10 != (long *)0x0) {
          uVar3 = (ulong)plVar11 / (ulong)plVar10;
        }
        plVar11 = (long *)((long)plVar11 - uVar3 * (long)plVar10);
      }
      *(long ***)(*(long *)param_1 + (long)plVar11 * 8) = pplVar9;
    }
  }
  else {
    *pplVar9 = *pplVar5;
    *pplVar5 = (long *)pplVar9;
  }
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
LAB_0094f094:
  return (pair)pplVar9;
}


