// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addVariationCopy
// Entry Point: 0094c744
// Size: 1556 bytes
// Signature: undefined __thiscall addVariationCopy(CustomShader * this, uint param_1, char * param_2)


/* WARNING: Removing unreachable block (ram,0x0094c94c) */
/* WARNING: Removing unreachable block (ram,0x0094c96c) */
/* WARNING: Removing unreachable block (ram,0x0094c974) */
/* WARNING: Removing unreachable block (ram,0x0094c964) */
/* WARNING: Removing unreachable block (ram,0x0094c97c) */
/* WARNING: Removing unreachable block (ram,0x0094c84c) */
/* WARNING: Removing unreachable block (ram,0x0094c898) */
/* WARNING: Removing unreachable block (ram,0x0094c9bc) */
/* WARNING: Removing unreachable block (ram,0x0094c9dc) */
/* WARNING: Removing unreachable block (ram,0x0094c9e4) */
/* WARNING: Removing unreachable block (ram,0x0094c9d4) */
/* WARNING: Removing unreachable block (ram,0x0094c9ec) */
/* CustomShader::addVariationCopy(unsigned int, char const*) */

ulong __thiscall CustomShader::addVariationCopy(CustomShader *this,uint param_1,char *param_2)

{
  CustomShader *pCVar1;
  undefined8 *puVar2;
  long lVar3;
  CustomShader CVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  uint *__dest;
  ulong *puVar9;
  MaterialShaderManager *this_00;
  long lVar10;
  MaterialShaderManager **ppMVar11;
  MaterialShaderManager **ppMVar12;
  char **ppcVar13;
  MaterialShaderManager **ppMVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  uint **ppuVar18;
  uint *__src;
  ulong uVar19;
  char *pcVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  byte local_178 [16];
  void *local_168;
  ulong local_160;
  ulong uStack_158;
  undefined8 *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 *puStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  uVar15 = (ulong)param_1;
  lVar16 = *(long *)(this + 0x110);
  puVar2 = *(undefined8 **)(this + 0x118);
  uVar19 = ((long)puVar2 - lVar16 >> 5) * 0x6db6db6db6db6db7;
  if (1 < uVar19) {
    uVar17 = 1;
    do {
      iVar6 = strcmp(*(char **)(lVar16 + uVar17 * 0xe0 + 8),param_2);
      if (iVar6 == 0) goto LAB_0094cd1c;
      uVar17 = (ulong)((int)uVar17 + 1);
    } while (uVar17 <= uVar19 && uVar19 - uVar17 != 0);
  }
  local_150 = &local_148;
  puStack_138 = &local_130;
  local_140 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_108 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_100 = 0;
  uStack_158 = 0;
  local_160 = 0;
  local_148 = 0;
  uStack_118 = 0;
  local_120 = 0;
  local_130 = 0;
  local_128 = 0;
  local_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  local_98 = 0;
  local_b0 = 0x3f800000;
  uStack_88 = 0x3f800000;
  if (puVar2 < *(undefined8 **)(this + 0x120)) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = local_150;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[2] = puVar2 + 3;
    local_140 = 0;
    local_148 = 0;
    puVar2[5] = puStack_138;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[5] = puVar2 + 6;
    local_128 = 0;
    local_130 = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    local_120 = 0;
    uStack_118 = 0;
    puVar2[10] = 0;
    local_110 = 0;
    puVar2[0xb] = 0;
    uStack_108 = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    local_100 = 0;
    local_f8 = 0;
    *(undefined8 *)((long)puVar2 + 0x84) = 0;
    *(undefined8 *)((long)puVar2 + 0x7c) = 0;
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    local_d0 = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    uStack_c8 = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    *(undefined4 *)(puVar2 + 0x16) = 0x3f800000;
    local_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    local_a0 = 0;
    puVar2[0x19] = 0;
    puVar2[0x1a] = 0;
    *(undefined4 *)(puVar2 + 0x1b) = 0x3f800000;
    uStack_90 = 0;
    local_98 = 0;
    *(undefined8 **)(this + 0x118) = puVar2 + 0x1c;
  }
  else {
                    /* try { // try from 0094c864 to 0094c86b has its CatchHandler @ 0094cd58 */
    std::__ndk1::vector<CustomShader::Variation,std::__ndk1::allocator<CustomShader::Variation>>::
    __push_back_slow_path<CustomShader::Variation>
              ((vector<CustomShader::Variation,std::__ndk1::allocator<CustomShader::Variation>> *)
               (this + 0x110),(Variation *)&local_160);
  }
  Variation::~Variation((Variation *)&local_160);
  lVar16 = *(long *)(this + 0x110);
  lVar3 = *(long *)(this + 0x118);
  ppcVar13 = (char **)(lVar16 + uVar15 * 0xe0);
  pcVar20 = *ppcVar13;
  *(char **)(lVar3 + -0xd8) = ppcVar13[1];
  *(char **)(lVar3 + -0xe0) = pcVar20;
  if ((char **)(lVar3 + -0xe0) == ppcVar13) {
    lVar16 = lVar16 + uVar15 * 0xe0;
    uVar8 = *(undefined8 *)(lVar16 + 0x7c);
    uVar22 = *(undefined8 *)(lVar16 + 0x78);
    uVar21 = *(undefined8 *)(lVar16 + 0x70);
    *(undefined8 *)(lVar3 + -0x5c) = *(undefined8 *)(lVar16 + 0x84);
    *(undefined8 *)(lVar3 + -100) = uVar8;
    *(undefined8 *)(lVar3 + -0x68) = uVar22;
    *(undefined8 *)(lVar3 + -0x70) = uVar21;
  }
  else {
    lVar16 = lVar16 + uVar15 * 0xe0;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
    ::
    __assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,void*>*,long>>
              ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                *)(lVar3 + -0xd0),(__tree_const_iterator)*(undefined8 *)(lVar16 + 0x10),
               (int)lVar16 + 0x18);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
    ::
    __assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,void*>*,long>>
              ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                *)(lVar3 + -0xb8),(__tree_const_iterator)*(undefined8 *)(lVar16 + 0x28),
               (int)lVar16 + 0x30);
    std::__ndk1::vector<CustomShader::Parameter*,std::__ndk1::allocator<CustomShader::Parameter*>>::
    assign<CustomShader::Parameter**>
              ((vector<CustomShader::Parameter*,std::__ndk1::allocator<CustomShader::Parameter*>> *)
               (lVar3 + -0xa0),*(Parameter ***)(lVar16 + 0x40),*(Parameter ***)(lVar16 + 0x48));
    std::__ndk1::vector<CustomShader::Texture*,std::__ndk1::allocator<CustomShader::Texture*>>::
    assign<CustomShader::Texture**>
              ((vector<CustomShader::Texture*,std::__ndk1::allocator<CustomShader::Texture*>> *)
               (lVar3 + -0x88),*(Texture ***)(lVar16 + 0x58),*(Texture ***)(lVar16 + 0x60));
    uVar8 = *(undefined8 *)(lVar16 + 0x7c);
    uVar22 = *(undefined8 *)(lVar16 + 0x78);
    uVar21 = *(undefined8 *)(lVar16 + 0x70);
    *(undefined8 *)(lVar3 + -0x5c) = *(undefined8 *)(lVar16 + 0x84);
    *(undefined8 *)(lVar3 + -100) = uVar8;
    *(undefined8 *)(lVar3 + -0x68) = uVar22;
    *(undefined8 *)(lVar3 + -0x70) = uVar21;
    *(undefined4 *)(lVar3 + -0x30) = *(undefined4 *)(lVar16 + 0xb0);
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>>>
    ::
    __assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,void*>*>>
              ((__hash_table<std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>>>
                *)(lVar3 + -0x50),(__hash_const_iterator)*(undefined8 *)(lVar16 + 0xa0),0);
    *(undefined4 *)(lVar3 + -8) = *(undefined4 *)(lVar16 + 0xd8);
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,std::__ndk1::__unordered_map_hasher<CustomShader::STANDARD_TEXTURE,std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<CustomShader::STANDARD_TEXTURE,std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,std::__ndk1::equal_to<CustomShader::STANDARD_TEXTURE>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>>>
    ::
    __assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,void*>*>>
              ((__hash_table<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,std::__ndk1::__unordered_map_hasher<CustomShader::STANDARD_TEXTURE,std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<CustomShader::STANDARD_TEXTURE,std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,std::__ndk1::equal_to<CustomShader::STANDARD_TEXTURE>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>>>
                *)(lVar3 + -0x28),(__hash_const_iterator)*(undefined8 *)(lVar16 + 200),0);
  }
  uVar8 = StringUtil::createStrCpy(param_2);
  *(undefined8 *)(lVar3 + -0xd8) = uVar8;
  uVar8 = StringUtil::createStrCpy("");
  *(undefined8 *)(lVar3 + -0xe0) = uVar8;
  lVar16 = *(long *)(this + 0x28);
  if (*(long *)(this + 0x30) != lVar16) {
    uVar15 = 0;
    do {
      lVar10 = *(long *)(this + 0x118) - *(long *)(this + 0x110) >> 5;
      ppuVar18 = (uint **)(lVar16 + uVar15 * 0x48 + 8);
      __src = *ppuVar18;
      uVar17 = lVar10 * -0x4924924924924924;
      uVar19 = uVar17;
      if ((ulong)(lVar10 * 0x6db6db6db6db6db7) >> 0x3e != 0) {
        uVar19 = 0xffffffffffffffff;
      }
      __dest = (uint *)operator_new__(uVar19);
      *ppuVar18 = __dest;
      memcpy(__dest,__src,uVar17 - 4);
      if (__src != (uint *)0x0) {
        operator_delete__(__src);
      }
      lVar16 = lVar16 + uVar15 * 0x48;
      FUN_006cadd8(local_178,lVar16 + 0x18,param_2);
      uVar19 = lVar16 + 0x31;
      if ((*(byte *)(lVar16 + 0x30) & 1) != 0) {
        uVar19 = *(ulong *)(lVar16 + 0x40);
      }
                    /* try { // try from 0094cbcc to 0094cbd3 has its CatchHandler @ 0094cd68 */
      puVar9 = (ulong *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::append((char *)local_178,uVar19);
      local_150 = (undefined8 *)puVar9[2];
      uStack_158 = puVar9[1];
      local_160 = *puVar9;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      if ((local_178[0] & 1) != 0) {
        operator_delete(local_168);
      }
                    /* try { // try from 0094cbfc to 0094ccf7 has its CatchHandler @ 0094cd7c */
      this_00 = (MaterialShaderManager *)MaterialShaderManager::getInstance();
      uVar7 = **ppuVar18;
      puVar2 = (undefined8 *)((ulong)&local_160 | 1);
      if ((local_160 & 1) != 0) {
        puVar2 = local_150;
      }
      CVar4 = this[0x164];
      pCVar1 = this + 0x11;
      if (((byte)this[0x10] & 1) != 0) {
        pCVar1 = *(CustomShader **)(this + 0x20);
      }
      pcVar20 = *(char **)(lVar3 + -0xe0);
      Mutex::enterCriticalSection();
      ppMVar11 = (MaterialShaderManager **)(this_00 + 0xe0);
      ppMVar14 = (MaterialShaderManager **)*ppMVar11;
      ppMVar12 = ppMVar11;
      if (ppMVar14 == (MaterialShaderManager **)0x0) {
LAB_0094cc88:
        uVar7 = 0;
      }
      else {
        do {
          if (*(uint *)(ppMVar14 + 4) >= uVar7) {
            ppMVar12 = ppMVar14;
          }
          ppMVar14 = (MaterialShaderManager **)ppMVar14[*(uint *)(ppMVar14 + 4) < uVar7];
        } while (ppMVar14 != (MaterialShaderManager **)0x0);
        if ((ppMVar12 == ppMVar11) || (uVar7 < *(uint *)(ppMVar12 + 4))) goto LAB_0094cc88;
        uVar7 = MaterialShaderManager::getCustomShaderHashLocked
                          (this_00,(vector *)(ppMVar12[5] + 8),(char *)puVar2,(map *)(lVar3 + -0xb8)
                           ,(map *)(lVar3 + -0xd0),(char *)pCVar1,pcVar20,CVar4 != (CustomShader)0x0
                          );
      }
      Mutex::leaveCriticalSection();
      (*ppuVar18)
      [(*(long *)(this + 0x118) - *(long *)(this + 0x110) >> 5) * -0x1249249249249249 + -1] = uVar7;
      if ((local_160 & 1) != 0) {
        operator_delete(local_150);
      }
      lVar16 = *(long *)(this + 0x28);
      uVar15 = (ulong)((int)uVar15 + 1);
      uVar19 = (*(long *)(this + 0x30) - lVar16 >> 3) * -0x71c71c71c71c71c7;
    } while (uVar15 <= uVar19 && uVar19 - uVar15 != 0);
  }
  uVar17 = (ulong)((int)((ulong)(*(long *)(this + 0x118) - *(long *)(this + 0x110)) >> 5) *
                   -0x49249249 - 1);
LAB_0094cd1c:
  if (*(long *)(lVar5 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar17;
}


