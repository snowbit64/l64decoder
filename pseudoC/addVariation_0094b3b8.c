// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addVariation
// Entry Point: 0094b3b8
// Size: 3692 bytes
// Signature: undefined __thiscall addVariation(CustomShader * this, char * param_1, char * param_2, vector * param_3)


/* WARNING: Removing unreachable block (ram,0x0094b618) */
/* WARNING: Removing unreachable block (ram,0x0094b638) */
/* WARNING: Removing unreachable block (ram,0x0094b640) */
/* WARNING: Removing unreachable block (ram,0x0094b630) */
/* WARNING: Removing unreachable block (ram,0x0094b648) */
/* WARNING: Removing unreachable block (ram,0x0094b514) */
/* WARNING: Removing unreachable block (ram,0x0094b564) */
/* WARNING: Removing unreachable block (ram,0x0094b688) */
/* WARNING: Removing unreachable block (ram,0x0094b6a8) */
/* WARNING: Removing unreachable block (ram,0x0094b6b0) */
/* WARNING: Removing unreachable block (ram,0x0094b6a0) */
/* WARNING: Removing unreachable block (ram,0x0094b6b8) */
/* WARNING: Type propagation algorithm not settling */
/* CustomShader::addVariation(char const*, char const*,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > const&) */

ulong __thiscall
CustomShader::addVariation(CustomShader *this,char *param_1,char *param_2,vector *param_3)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  size_t sVar4;
  CustomShader *pCVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  byte bVar9;
  long lVar10;
  byte *pbVar11;
  CustomShader *pCVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  __tree_node_base **pp_Var16;
  undefined8 *puVar17;
  void *pvVar18;
  uint *__dest;
  ulong *puVar19;
  MaterialShaderManager *this_00;
  CustomShader CVar20;
  size_t sVar21;
  long lVar22;
  MaterialShaderManager **ppMVar23;
  long **this_01;
  byte *pbVar24;
  long **this_02;
  long lVar25;
  CustomShader *pCVar26;
  MaterialShaderManager **ppMVar27;
  ulong uVar28;
  MaterialShaderManager **ppMVar29;
  byte *pbVar30;
  CustomShader *__s1;
  __tree_node_base *p_Var31;
  uint **ppuVar32;
  uint *__src;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  void *pvVar36;
  char *pcVar37;
  size_t sVar38;
  long lVar39;
  undefined8 local_178;
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
  
  lVar10 = tpidr_el0;
  local_78 = *(long *)(lVar10 + 0x28);
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    uVar33 = 0;
  }
  else {
    lVar25 = *(long *)(this + 0x110);
    puVar7 = *(undefined8 **)(this + 0x118);
    uVar35 = ((long)puVar7 - lVar25 >> 5) * 0x6db6db6db6db6db7;
    if (*param_1 == '\0') {
      if (1 < uVar35) {
        uVar33 = 1;
        do {
          iVar13 = strcmp(*(char **)(lVar25 + uVar33 * 0xe0 + 8),param_2);
          if (iVar13 == 0) goto LAB_0094c1d8;
          uVar33 = (ulong)((int)uVar33 + 1);
        } while (uVar33 <= uVar35 && uVar35 - uVar33 != 0);
      }
    }
    else if (1 < uVar35) {
      uVar33 = 1;
      do {
        iVar13 = strcmp(*(char **)(lVar25 + uVar33 * 0xe0),param_1);
        if (iVar13 == 0) goto LAB_0094c1d8;
        uVar33 = (ulong)((int)uVar33 + 1);
      } while (uVar33 <= uVar35 && uVar35 - uVar33 != 0);
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
    if (puVar7 < *(undefined8 **)(this + 0x120)) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = local_150;
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar7[2] = puVar7 + 3;
      local_140 = 0;
      local_148 = 0;
      puVar7[5] = puStack_138;
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar7[5] = puVar7 + 6;
      local_128 = 0;
      local_130 = 0;
      puVar7[10] = 0;
      puVar7[0xb] = 0;
      puVar7[8] = 0;
      puVar7[9] = 0;
      puVar7[0xc] = 0;
      puVar7[0xd] = 0;
      puVar7[8] = 0;
      puVar7[9] = 0;
      local_120 = 0;
      uStack_118 = 0;
      puVar7[10] = 0;
      local_110 = 0;
      puVar7[0xb] = 0;
      uStack_108 = 0;
      puVar7[0xc] = 0;
      puVar7[0xd] = 0;
      local_100 = 0;
      local_f8 = 0;
      *(undefined8 *)((long)puVar7 + 0x84) = 0;
      *(undefined8 *)((long)puVar7 + 0x7c) = 0;
      puVar7[0xf] = 0;
      puVar7[0xe] = 0;
      local_d0 = 0;
      puVar7[0x12] = 0;
      puVar7[0x13] = 0;
      uStack_c8 = 0;
      puVar7[0x14] = 0;
      puVar7[0x15] = 0;
      *(undefined4 *)(puVar7 + 0x16) = 0x3f800000;
      local_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      puVar7[0x17] = 0;
      puVar7[0x18] = 0;
      local_a0 = 0;
      puVar7[0x19] = 0;
      puVar7[0x1a] = 0;
      *(undefined4 *)(puVar7 + 0x1b) = 0x3f800000;
      uStack_90 = 0;
      local_98 = 0;
      *(undefined8 **)(this + 0x118) = puVar7 + 0x1c;
    }
    else {
                    /* try { // try from 0094b52c to 0094b533 has its CatchHandler @ 0094c224 */
      std::__ndk1::vector<CustomShader::Variation,std::__ndk1::allocator<CustomShader::Variation>>::
      __push_back_slow_path<CustomShader::Variation>
                ((vector<CustomShader::Variation,std::__ndk1::allocator<CustomShader::Variation>> *)
                 (this + 0x110),(Variation *)&local_160);
    }
    Variation::~Variation((Variation *)&local_160);
    lVar39 = *(long *)(this + 0x118);
    uVar15 = StringUtil::createStrCpy(param_2);
    *(undefined8 *)(lVar39 + -0xd8) = uVar15;
    uVar15 = StringUtil::createStrCpy(param_1);
    *(undefined8 *)(lVar39 + -0xe0) = uVar15;
    this_01 = (long **)(lVar39 + -0xd0);
    lVar25 = *(long *)(this + 0x40);
    if (*(long *)(this + 0x48) != lVar25) {
      uVar33 = 0;
      do {
        lVar25 = lVar25 + uVar33 * 0x80;
        lVar22 = *(long *)param_3;
        pbVar3 = (byte *)(lVar25 + 0x69);
        sVar38 = (ulong)(*(byte *)(lVar25 + 0x68) >> 1);
        if ((*(byte *)(lVar25 + 0x68) & 1) != 0) {
          pbVar3 = *(byte **)(lVar25 + 0x78);
          sVar38 = *(size_t *)(lVar25 + 0x70);
        }
        if (*(long *)(param_3 + 8) - lVar22 != 0) {
          uVar35 = 0;
          uVar34 = (*(long *)(param_3 + 8) - lVar22 >> 3) * -0x5555555555555555;
          do {
            pbVar24 = (byte *)(lVar22 + uVar35 * 0x18);
            bVar9 = *pbVar24;
            sVar21 = (size_t)(bVar9 >> 1);
            sVar4 = sVar21;
            if ((bVar9 & 1) != 0) {
              sVar4 = *(size_t *)(pbVar24 + 8);
            }
            if (sVar4 == sVar38) {
              pbVar30 = *(byte **)(lVar22 + uVar35 * 0x18 + 0x10);
              if ((bVar9 & 1) == 0) {
                pbVar30 = pbVar24 + 1;
              }
              pbVar11 = pbVar3;
              sVar4 = sVar38;
              if ((bVar9 & 1) == 0) {
                while( true ) {
                  if (sVar4 == 0) goto LAB_0094b7fc;
                  pbVar24 = pbVar24 + 1;
                  if (*pbVar24 != *pbVar11) break;
                  sVar21 = sVar21 - 1;
                  pbVar11 = pbVar11 + 1;
                  sVar4 = sVar21;
                }
              }
              else if ((sVar38 == 0) || (iVar13 = memcmp(pbVar30,pbVar3,sVar38), iVar13 == 0)) {
LAB_0094b7fc:
                lVar25 = *(long *)(lVar39 + -0xa0);
                lVar22 = *(long *)(lVar39 + -0x98);
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string((basic_string *)&local_160);
                local_148 = CONCAT44(local_148._4_4_,(int)((ulong)(lVar22 - lVar25) >> 3));
                    /* try { // try from 0094b818 to 0094b84f has its CatchHandler @ 0094c238 */
                pp_Var16 = std::__ndk1::
                           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                           ::
                           __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                     ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                                       *)this_01,(__tree_end_node **)&local_178,
                                      (basic_string *)&local_160);
                p_Var31 = *pp_Var16;
                if (p_Var31 == (__tree_node_base *)0x0) {
                  puVar17 = (undefined8 *)operator_new(0x40);
                  puVar7 = local_150;
                  uVar34 = uStack_158;
                  uVar35 = local_160;
                  *puVar17 = 0;
                  puVar17[1] = 0;
                  uStack_158 = 0;
                  local_150 = (undefined8 *)0x0;
                  local_160 = 0;
                  puVar17[6] = puVar7;
                  puVar17[5] = uVar34;
                  puVar17[4] = uVar35;
                  *(undefined4 *)(puVar17 + 7) = (undefined4)local_148;
                  puVar17[2] = CONCAT71(local_178._1_7_,(byte)local_178);
                  *pp_Var16 = (__tree_node_base *)puVar17;
                  if ((long *)**this_01 != (long *)0x0) {
                    *this_01 = (long *)**this_01;
                    puVar17 = (undefined8 *)*pp_Var16;
                  }
                  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                            (*(__tree_node_base **)(lVar39 + -200),(__tree_node_base *)puVar17);
                  *(long *)(lVar39 + -0xc0) = *(long *)(lVar39 + -0xc0) + 1;
                }
                if ((local_160 & 1) != 0) {
                  operator_delete(local_150);
                }
                if (p_Var31 == (__tree_node_base *)0x0) {
                  plVar6 = *(long **)(lVar39 + -0x98);
                  lVar25 = *(long *)(this + 0x40) + uVar33 * 0x80;
                  if (plVar6 < *(long **)(lVar39 + -0x90)) {
                    *plVar6 = lVar25;
                    *(long **)(lVar39 + -0x98) = plVar6 + 1;
                  }
                  else {
                    pvVar36 = *(void **)(lVar39 + -0xa0);
                    sVar38 = (long)plVar6 - (long)pvVar36;
                    uVar35 = ((long)sVar38 >> 3) + 1;
                    if (uVar35 >> 0x3d != 0) goto LAB_0094c20c;
                    uVar34 = (long)*(long **)(lVar39 + -0x90) - (long)pvVar36;
                    uVar28 = (long)uVar34 >> 2;
                    if (uVar35 <= uVar28) {
                      uVar35 = uVar28;
                    }
                    if (0x7ffffffffffffff7 < uVar34) {
                      uVar35 = 0x1fffffffffffffff;
                    }
                    if (uVar35 == 0) {
                      pvVar18 = (void *)0x0;
                    }
                    else {
                      if (uVar35 >> 0x3d != 0) goto LAB_0094c214;
                      pvVar18 = operator_new(uVar35 << 3);
                    }
                    plVar6 = (long *)((long)pvVar18 + ((long)sVar38 >> 3) * 8);
                    *plVar6 = lVar25;
                    if (0 < (long)sVar38) {
                      memcpy(pvVar18,pvVar36,sVar38);
                    }
                    *(void **)(lVar39 + -0xa0) = pvVar18;
                    *(long **)(lVar39 + -0x98) = plVar6 + 1;
                    *(void **)(lVar39 + -0x90) = (void *)((long)pvVar18 + uVar35 * 8);
                    if (pvVar36 != (void *)0x0) {
                      operator_delete(pvVar36);
                    }
                  }
                }
                break;
              }
            }
            uVar35 = (ulong)((int)uVar35 + 1);
          } while (uVar35 <= uVar34 && uVar34 - uVar35 != 0);
        }
        lVar25 = *(long *)(this + 0x40);
        uVar33 = (ulong)((int)uVar33 + 1);
      } while (uVar33 < (ulong)(*(long *)(this + 0x48) - lVar25 >> 7));
    }
    lVar25 = *(long *)(this + 0x58);
    this_02 = (long **)(lVar39 + -0xb8);
    if (*(long *)(this + 0x60) != lVar25) {
      uVar33 = 0;
      do {
        lVar25 = lVar25 + uVar33 * 0x58;
        lVar22 = *(long *)param_3;
        pbVar3 = (byte *)(lVar25 + 0x39);
        sVar38 = (ulong)(*(byte *)(lVar25 + 0x38) >> 1);
        if ((*(byte *)(lVar25 + 0x38) & 1) != 0) {
          pbVar3 = *(byte **)(lVar25 + 0x48);
          sVar38 = *(size_t *)(lVar25 + 0x40);
        }
        if (*(long *)(param_3 + 8) - lVar22 != 0) {
          uVar34 = 0;
          uVar35 = (*(long *)(param_3 + 8) - lVar22 >> 3) * -0x5555555555555555;
          do {
            pbVar24 = (byte *)(lVar22 + uVar34 * 0x18);
            bVar9 = *pbVar24;
            sVar21 = (size_t)(bVar9 >> 1);
            sVar4 = sVar21;
            if ((bVar9 & 1) != 0) {
              sVar4 = *(size_t *)(pbVar24 + 8);
            }
            if (sVar4 == sVar38) {
              pbVar30 = *(byte **)(lVar22 + uVar34 * 0x18 + 0x10);
              if ((bVar9 & 1) == 0) {
                pbVar30 = pbVar24 + 1;
              }
              pbVar11 = pbVar3;
              sVar4 = sVar38;
              if ((bVar9 & 1) == 0) {
                while( true ) {
                  if (sVar4 == 0) goto LAB_0094baa0;
                  pbVar24 = pbVar24 + 1;
                  if (*pbVar24 != *pbVar11) break;
                  sVar21 = sVar21 - 1;
                  pbVar11 = pbVar11 + 1;
                  sVar4 = sVar21;
                }
              }
              else if ((sVar38 == 0) || (iVar13 = memcmp(pbVar30,pbVar3,sVar38), iVar13 == 0)) {
LAB_0094baa0:
                lVar25 = *(long *)(lVar39 + -0x88);
                lVar22 = *(long *)(lVar39 + -0x80);
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string((basic_string *)&local_160);
                local_148 = CONCAT44(local_148._4_4_,(int)((ulong)(lVar22 - lVar25) >> 3));
                    /* try { // try from 0094bac0 to 0094baf7 has its CatchHandler @ 0094c234 */
                pp_Var16 = std::__ndk1::
                           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                           ::
                           __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                     ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                                       *)this_02,(__tree_end_node **)&local_178,
                                      (basic_string *)&local_160);
                p_Var31 = *pp_Var16;
                if (p_Var31 == (__tree_node_base *)0x0) {
                  puVar17 = (undefined8 *)operator_new(0x40);
                  puVar7 = local_150;
                  uVar34 = uStack_158;
                  uVar35 = local_160;
                  *puVar17 = 0;
                  puVar17[1] = 0;
                  uStack_158 = 0;
                  local_150 = (undefined8 *)0x0;
                  local_160 = 0;
                  puVar17[6] = puVar7;
                  puVar17[5] = uVar34;
                  puVar17[4] = uVar35;
                  *(undefined4 *)(puVar17 + 7) = (undefined4)local_148;
                  puVar17[2] = CONCAT71(local_178._1_7_,(byte)local_178);
                  *pp_Var16 = (__tree_node_base *)puVar17;
                  if ((long *)**this_02 != (long *)0x0) {
                    *this_02 = (long *)**this_02;
                    puVar17 = (undefined8 *)*pp_Var16;
                  }
                  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                            (*(__tree_node_base **)(lVar39 + -0xb0),(__tree_node_base *)puVar17);
                  *(long *)(lVar39 + -0xa8) = *(long *)(lVar39 + -0xa8) + 1;
                }
                if ((local_160 & 1) != 0) {
                  operator_delete(local_150);
                }
                if (p_Var31 == (__tree_node_base *)0x0) {
                  plVar6 = *(long **)(lVar39 + -0x80);
                  lVar25 = *(long *)(this + 0x58) + uVar33 * 0x58;
                  if (plVar6 < *(long **)(lVar39 + -0x78)) {
                    *plVar6 = lVar25;
                    *(long **)(lVar39 + -0x80) = plVar6 + 1;
                  }
                  else {
                    pvVar36 = *(void **)(lVar39 + -0x88);
                    sVar38 = (long)plVar6 - (long)pvVar36;
                    uVar35 = ((long)sVar38 >> 3) + 1;
                    if (uVar35 >> 0x3d != 0) {
LAB_0094c20c:
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__vector_base_common<true>::__throw_length_error();
                    }
                    uVar34 = (long)*(long **)(lVar39 + -0x78) - (long)pvVar36;
                    uVar28 = (long)uVar34 >> 2;
                    if (uVar35 <= uVar28) {
                      uVar35 = uVar28;
                    }
                    if (0x7ffffffffffffff7 < uVar34) {
                      uVar35 = 0x1fffffffffffffff;
                    }
                    if (uVar35 == 0) {
                      pvVar18 = (void *)0x0;
                    }
                    else {
                      if (uVar35 >> 0x3d != 0) {
LAB_0094c214:
                    /* WARNING: Subroutine does not return */
                        FUN_006d1f18(
                                    "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                    );
                      }
                      pvVar18 = operator_new(uVar35 << 3);
                    }
                    plVar6 = (long *)((long)pvVar18 + ((long)sVar38 >> 3) * 8);
                    *plVar6 = lVar25;
                    if (0 < (long)sVar38) {
                      memcpy(pvVar18,pvVar36,sVar38);
                    }
                    *(void **)(lVar39 + -0x88) = pvVar18;
                    *(long **)(lVar39 + -0x80) = plVar6 + 1;
                    *(void **)(lVar39 + -0x78) = (void *)((long)pvVar18 + uVar35 * 8);
                    if (pvVar36 != (void *)0x0) {
                      operator_delete(pvVar36);
                    }
                  }
                }
                break;
              }
            }
            uVar34 = (ulong)((int)uVar34 + 1);
          } while (uVar34 <= uVar35 && uVar35 - uVar34 != 0);
        }
        lVar25 = *(long *)(this + 0x58);
        uVar33 = (ulong)((int)uVar33 + 1);
        uVar35 = (*(long *)(this + 0x60) - lVar25 >> 3) * 0x2e8ba2e8ba2e8ba3;
      } while (uVar33 <= uVar35 && uVar35 - uVar33 != 0);
    }
    lVar25 = 0;
    lVar22 = *(long *)param_3;
    lVar8 = *(long *)(param_3 + 8);
    uVar33 = (lVar8 - lVar22 >> 3) * -0x5555555555555555;
    do {
      pCVar5 = this + lVar25 * 0x28 + 0x79;
      sVar38 = (ulong)((byte)this[lVar25 * 0x28 + 0x78] >> 1);
      if (((byte)this[lVar25 * 0x28 + 0x78] & 1) != 0) {
        pCVar5 = *(CustomShader **)(this + lVar25 * 0x28 + 0x88);
        sVar38 = *(size_t *)(this + lVar25 * 0x28 + 0x80);
      }
      if (lVar8 - lVar22 != 0) {
        uVar35 = 0;
        do {
          pCVar26 = (CustomShader *)(lVar22 + uVar35 * 0x18);
          CVar20 = *pCVar26;
          sVar21 = (size_t)((byte)CVar20 >> 1);
          sVar4 = sVar21;
          if (((byte)CVar20 & 1) != 0) {
            sVar4 = *(size_t *)(pCVar26 + 8);
          }
          if (sVar4 == sVar38) {
            __s1 = *(CustomShader **)(lVar22 + uVar35 * 0x18 + 0x10);
            if (((byte)CVar20 & 1) == 0) {
              __s1 = pCVar26 + 1;
            }
            pCVar12 = pCVar5;
            sVar4 = sVar38;
            if (((byte)CVar20 & 1) == 0) {
              while( true ) {
                if (sVar4 == 0) goto LAB_0094bc54;
                pCVar26 = pCVar26 + 1;
                if (*pCVar26 != *pCVar12) break;
                sVar21 = sVar21 - 1;
                pCVar12 = pCVar12 + 1;
                sVar4 = sVar21;
              }
            }
            else if ((sVar38 == 0) || (iVar13 = memcmp(__s1,pCVar5,sVar38), iVar13 == 0)) {
LAB_0094bc54:
              *(undefined4 *)(lVar39 + lVar25 * 4 + -0x68) =
                   *(undefined4 *)(this + lVar25 * 0x28 + 0x90);
              CVar20 = this[lVar25 * 0x28 + 0x70];
              goto LAB_0094bc6c;
            }
          }
          uVar35 = (ulong)((int)uVar35 + 1);
        } while (uVar35 <= uVar33 && uVar33 - uVar35 != 0);
      }
      CVar20 = (CustomShader)0x1;
      *(undefined4 *)(lVar39 + lVar25 * 4 + -0x68) = 0;
LAB_0094bc6c:
      lVar1 = lVar39 + lVar25;
      lVar25 = lVar25 + 1;
      *(CustomShader *)(lVar1 + -0x58) = CVar20;
    } while (lVar25 != 4);
    *(undefined4 *)(lVar39 + -0x70) = 0;
    lVar25 = *(long *)(this + 0x128);
    lVar22 = *(long *)(this + 0x130);
    if (lVar22 - lVar25 != 0) {
      uVar14 = 0;
      uVar33 = 0;
      lVar8 = *(long *)param_3;
      lVar1 = *(long *)(param_3 + 8);
      uVar35 = (lVar1 - lVar8 >> 3) * -0x5555555555555555;
      do {
        lVar2 = lVar25 + uVar33 * 0x20;
        pbVar3 = (byte *)(lVar2 + 9);
        sVar38 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
        if ((*(byte *)(lVar2 + 8) & 1) != 0) {
          pbVar3 = *(byte **)(lVar2 + 0x18);
          sVar38 = *(size_t *)(lVar2 + 0x10);
        }
        if (lVar1 - lVar8 != 0) {
          uVar34 = 0;
          do {
            pbVar24 = (byte *)(lVar8 + uVar34 * 0x18);
            bVar9 = *pbVar24;
            sVar21 = (size_t)(bVar9 >> 1);
            sVar4 = sVar21;
            if ((bVar9 & 1) != 0) {
              sVar4 = *(size_t *)(pbVar24 + 8);
            }
            if (sVar4 == sVar38) {
              pbVar30 = *(byte **)(lVar8 + uVar34 * 0x18 + 0x10);
              if ((bVar9 & 1) == 0) {
                pbVar30 = pbVar24 + 1;
              }
              pbVar11 = pbVar3;
              sVar4 = sVar38;
              if ((bVar9 & 1) == 0) {
                while( true ) {
                  if (sVar4 == 0) goto LAB_0094bd90;
                  pbVar24 = pbVar24 + 1;
                  if (*pbVar24 != *pbVar11) break;
                  sVar21 = sVar21 - 1;
                  pbVar11 = pbVar11 + 1;
                  sVar4 = sVar21;
                }
              }
              else if ((sVar38 == 0) || (iVar13 = memcmp(pbVar30,pbVar3,sVar38), iVar13 == 0)) {
LAB_0094bd90:
                uVar14 = uVar14 | *(uint *)(lVar25 + uVar33 * 0x20);
                *(uint *)(lVar39 + -0x70) = uVar14;
                break;
              }
            }
            uVar34 = (ulong)((int)uVar34 + 1);
          } while (uVar34 <= uVar35 && uVar35 - uVar34 != 0);
        }
        uVar33 = uVar33 + 1;
      } while ((uVar33 & 0xffffffff) < (ulong)(lVar22 - lVar25 >> 5));
    }
    *(undefined4 *)(lVar39 + -0x6c) = 0;
    lVar25 = *(long *)(this + 0x140);
    lVar22 = *(long *)(this + 0x148);
    if (lVar22 - lVar25 != 0) {
      uVar14 = 0;
      uVar33 = 0;
      lVar8 = *(long *)param_3;
      lVar1 = *(long *)(param_3 + 8);
      uVar35 = (lVar1 - lVar8 >> 3) * -0x5555555555555555;
      do {
        lVar2 = lVar25 + uVar33 * 0x20;
        pbVar3 = (byte *)(lVar2 + 9);
        sVar38 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
        if ((*(byte *)(lVar2 + 8) & 1) != 0) {
          pbVar3 = *(byte **)(lVar2 + 0x18);
          sVar38 = *(size_t *)(lVar2 + 0x10);
        }
        if (lVar1 - lVar8 != 0) {
          uVar34 = 0;
          do {
            pbVar24 = (byte *)(lVar8 + uVar34 * 0x18);
            bVar9 = *pbVar24;
            sVar21 = (size_t)(bVar9 >> 1);
            sVar4 = sVar21;
            if ((bVar9 & 1) != 0) {
              sVar4 = *(size_t *)(pbVar24 + 8);
            }
            if (sVar4 == sVar38) {
              pbVar30 = *(byte **)(lVar8 + uVar34 * 0x18 + 0x10);
              if ((bVar9 & 1) == 0) {
                pbVar30 = pbVar24 + 1;
              }
              pbVar11 = pbVar3;
              sVar4 = sVar38;
              if ((bVar9 & 1) == 0) {
                while( true ) {
                  if (sVar4 == 0) goto LAB_0094bebc;
                  pbVar24 = pbVar24 + 1;
                  if (*pbVar24 != *pbVar11) break;
                  sVar21 = sVar21 - 1;
                  pbVar11 = pbVar11 + 1;
                  sVar4 = sVar21;
                }
              }
              else if ((sVar38 == 0) || (iVar13 = memcmp(pbVar30,pbVar3,sVar38), iVar13 == 0)) {
LAB_0094bebc:
                uVar14 = uVar14 | *(uint *)(lVar25 + uVar33 * 0x20);
                *(uint *)(lVar39 + -0x6c) = uVar14;
                break;
              }
            }
            uVar34 = (ulong)((int)uVar34 + 1);
          } while (uVar34 <= uVar35 && uVar35 - uVar34 != 0);
        }
        uVar33 = uVar33 + 1;
      } while ((uVar33 & 0xffffffff) < (ulong)(lVar22 - lVar25 >> 5));
    }
    lVar25 = *(long *)(this + 0x28);
    if (*(long *)(this + 0x30) != lVar25) {
      uVar33 = 0;
      do {
        lVar22 = *(long *)(this + 0x118) - *(long *)(this + 0x110) >> 5;
        ppuVar32 = (uint **)(lVar25 + uVar33 * 0x48 + 8);
        __src = *ppuVar32;
        uVar34 = lVar22 * -0x4924924924924924;
        uVar35 = uVar34;
        if ((ulong)(lVar22 * 0x6db6db6db6db6db7) >> 0x3e != 0) {
          uVar35 = 0xffffffffffffffff;
        }
        __dest = (uint *)operator_new__(uVar35);
        *ppuVar32 = __dest;
        memcpy(__dest,__src,uVar34 - 4);
        if (__src != (uint *)0x0) {
          operator_delete__(__src);
        }
        lVar25 = lVar25 + uVar33 * 0x48;
        FUN_006cadd8(&local_178,lVar25 + 0x18,param_2);
        uVar35 = lVar25 + 0x31;
        if ((*(byte *)(lVar25 + 0x30) & 1) != 0) {
          uVar35 = *(ulong *)(lVar25 + 0x40);
        }
                    /* try { // try from 0094c084 to 0094c08b has its CatchHandler @ 0094c23c */
        puVar19 = (ulong *)std::__ndk1::
                           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           ::append((char *)&local_178,uVar35);
        local_150 = (undefined8 *)puVar19[2];
        uStack_158 = puVar19[1];
        local_160 = *puVar19;
        puVar19[1] = 0;
        puVar19[2] = 0;
        *puVar19 = 0;
        if (((byte)local_178 & 1) != 0) {
          operator_delete(local_168);
        }
                    /* try { // try from 0094c0b4 to 0094c1af has its CatchHandler @ 0094c250 */
        this_00 = (MaterialShaderManager *)MaterialShaderManager::getInstance();
        uVar14 = **ppuVar32;
        puVar7 = (undefined8 *)((ulong)&local_160 | 1);
        if ((local_160 & 1) != 0) {
          puVar7 = local_150;
        }
        CVar20 = this[0x164];
        pCVar5 = this + 0x11;
        if (((byte)this[0x10] & 1) != 0) {
          pCVar5 = *(CustomShader **)(this + 0x20);
        }
        pcVar37 = *(char **)(lVar39 + -0xe0);
        Mutex::enterCriticalSection();
        ppMVar23 = (MaterialShaderManager **)(this_00 + 0xe0);
        ppMVar29 = (MaterialShaderManager **)*ppMVar23;
        ppMVar27 = ppMVar23;
        if (ppMVar29 == (MaterialShaderManager **)0x0) {
LAB_0094c140:
          uVar14 = 0;
        }
        else {
          do {
            if (*(uint *)(ppMVar29 + 4) >= uVar14) {
              ppMVar27 = ppMVar29;
            }
            ppMVar29 = (MaterialShaderManager **)ppMVar29[*(uint *)(ppMVar29 + 4) < uVar14];
          } while (ppMVar29 != (MaterialShaderManager **)0x0);
          if ((ppMVar27 == ppMVar23) || (uVar14 < *(uint *)(ppMVar27 + 4))) goto LAB_0094c140;
          uVar14 = MaterialShaderManager::getCustomShaderHashLocked
                             (this_00,(vector *)(ppMVar27[5] + 8),(char *)puVar7,(map *)this_02,
                              (map *)this_01,(char *)pCVar5,pcVar37,CVar20 != (CustomShader)0x0);
        }
        Mutex::leaveCriticalSection();
        (*ppuVar32)
        [(*(long *)(this + 0x118) - *(long *)(this + 0x110) >> 5) * -0x1249249249249249 + -1] =
             uVar14;
        if ((local_160 & 1) != 0) {
          operator_delete(local_150);
        }
        lVar25 = *(long *)(this + 0x28);
        uVar33 = (ulong)((int)uVar33 + 1);
        uVar35 = (*(long *)(this + 0x30) - lVar25 >> 3) * -0x71c71c71c71c71c7;
      } while (uVar33 <= uVar35 && uVar35 - uVar33 != 0);
    }
    uVar33 = (ulong)((int)((ulong)(*(long *)(this + 0x118) - *(long *)(this + 0x110)) >> 5) *
                     -0x49249249 - 1);
  }
LAB_0094c1d8:
  if (*(long *)(lVar10 + 0x28) == local_78) {
    return uVar33;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


