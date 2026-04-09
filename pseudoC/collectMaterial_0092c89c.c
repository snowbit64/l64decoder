// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: collectMaterial
// Entry Point: 0092c89c
// Size: 1280 bytes
// Signature: undefined __cdecl collectMaterial(GsMaterial * param_1, set * param_2, map * param_3, uint * param_4)


/* SceneSave::collectMaterial(GsMaterial*, std::__ndk1::set<GsMaterial*,
   std::__ndk1::less<GsMaterial*>, std::__ndk1::allocator<GsMaterial*> >&,
   std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, SceneSave::SerializeFile,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, SceneSave::SerializeFile> >
   >&, unsigned int&) */

void SceneSave::collectMaterial(GsMaterial *param_1,set *param_2,map *param_3,uint *param_4)

{
  Texture *__s2;
  byte bVar1;
  long lVar2;
  long **pplVar3;
  int iVar4;
  __tree_iterator _Var5;
  long *plVar6;
  size_t sVar7;
  void *pvVar8;
  char *pcVar9;
  Texture *pTVar10;
  void *pvVar11;
  long lVar12;
  long **pplVar13;
  long **pplVar14;
  ulong uVar15;
  ulong uVar16;
  COLOR_PROFILE CVar17;
  undefined8 local_2d0;
  size_t local_2c8;
  void *local_2c0;
  undefined **local_2b8;
  char *pcStack_2b0;
  undefined local_2a8;
  undefined4 local_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 local_284;
  undefined4 uStack_280;
  undefined8 local_27c;
  undefined8 local_274;
  undefined8 uStack_26c;
  undefined local_264;
  undefined8 local_260;
  undefined4 local_258;
  undefined2 local_254;
  undefined local_252;
  long local_250;
  undefined8 local_248;
  undefined4 local_240;
  Texture *local_238 [4];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  pplVar13 = (long **)(param_2 + 8);
  pplVar14 = pplVar13;
  if ((long **)*pplVar13 != (long **)0x0) {
    pplVar14 = (long **)(param_2 + 8);
    pplVar3 = (long **)*pplVar13;
    do {
      while (pplVar13 = pplVar3, param_1 < pplVar13[4]) {
        pplVar14 = pplVar13;
        pplVar3 = (long **)*pplVar13;
        if ((long **)*pplVar13 == (long **)0x0) goto LAB_0092c930;
      }
      if (param_1 <= pplVar13[4]) break;
      pplVar14 = pplVar13 + 1;
      pplVar3 = (long **)*pplVar14;
    } while ((long **)*pplVar14 != (long **)0x0);
  }
LAB_0092c930:
  if (*pplVar14 == (long *)0x0) {
    plVar6 = (long *)operator_new(0x28);
    plVar6[4] = (long)param_1;
    *plVar6 = 0;
    plVar6[1] = 0;
    plVar6[2] = (long)pplVar13;
    *pplVar14 = plVar6;
    if (**(long **)param_2 != 0) {
      *(long *)param_2 = **(long **)param_2;
      plVar6 = *pplVar14;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_2 + 8),(__tree_node_base *)plVar6);
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
  }
  local_27c = 0xffffffffffffffff;
  local_2b8 = &PTR__MaterialDesc_00fd99f8;
  local_2a8 = 1;
  local_284 = 0;
  uStack_280 = 0;
  uStack_26c = 0x3f0000003fc00000;
  local_274 = 0x3f0000003f000000;
  pcStack_2b0 = "UnnamedMaterial";
  uStack_29c = 0;
  uStack_298 = 0;
  local_2a4 = 0;
  uStack_2a0 = 0;
  uStack_28c = 0;
  uStack_288 = 0;
  uStack_294 = 0;
  uStack_290 = 0;
  local_264 = 0;
  local_254 = 1;
  local_260 = 0x3f0000003f800000;
  local_258 = 0x3d0f5c29;
  local_252 = 0;
  local_250 = 0;
  local_248 = 0;
  local_238[1] = (Texture *)0x0;
  local_238[0] = (Texture *)0x0;
  local_238[3] = (Texture *)0x0;
  local_238[2] = (Texture *)0x0;
  uStack_210 = 0;
  local_218 = 0;
  uStack_200 = 0;
  uStack_208 = 0;
  uStack_1f0 = 0;
  local_1f8 = 0;
  uStack_1e0 = 0;
  uStack_1e8 = 0;
  uStack_1d0 = 0;
  local_1d8 = 0;
  uStack_1c0 = 0;
  uStack_1c8 = 0;
  uStack_1b0 = 0;
  local_1b8 = 0;
  uStack_1a0 = 0;
  uStack_1a8 = 0;
  uStack_190 = 0;
  local_198 = 0;
  uStack_180 = 0;
  uStack_188 = 0;
  uStack_170 = 0;
  local_178 = 0;
  uStack_160 = 0;
  uStack_168 = 0;
  uStack_150 = 0;
  local_158 = 0;
  uStack_140 = 0;
  uStack_148 = 0;
  uStack_130 = 0;
  local_138 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_110 = 0;
  local_118 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  uStack_f0 = 0;
  local_f8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d0 = 0;
  local_d8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b0 = 0;
  local_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  local_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  local_240 = 0;
  local_78 = 0;
  GsMaterial::saveToDesc(param_1,(MaterialDesc *)&local_2b8);
  if ((Texture *)CONCAT44(uStack_29c,uStack_2a0) != (Texture *)0x0) {
    addToFileMap(param_3,(Texture *)CONCAT44(uStack_29c,uStack_2a0),1,false,param_4);
  }
  if ((Texture *)CONCAT44(uStack_294,uStack_298) != (Texture *)0x0) {
    addToFileMap(param_3,(Texture *)CONCAT44(uStack_294,uStack_298),2,false,param_4);
  }
  if ((Texture *)CONCAT44(uStack_28c,uStack_290) != (Texture *)0x0) {
    addToFileMap(param_3,(Texture *)CONCAT44(uStack_28c,uStack_290),2,false,param_4);
  }
  if ((Texture *)CONCAT44(local_284,uStack_288) != (Texture *)0x0) {
    addToFileMap(param_3,(Texture *)CONCAT44(local_284,uStack_288),1,false,param_4);
  }
  if (local_250 == 0) goto LAB_0092cd4c;
  pcVar9 = (char *)(local_250 + 0x11);
  if ((*(byte *)(local_250 + 0x10) & 1) != 0) {
    pcVar9 = *(char **)(local_250 + 0x20);
  }
  sVar7 = strlen(pcVar9);
  if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 0092cd90 to 0092cd97 has its CatchHandler @ 0092cda8 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    pvVar11 = (void *)((ulong)&local_2d0 | 1);
    local_2d0 = CONCAT71(local_2d0._1_7_,(char)((int)sVar7 << 1));
    if (sVar7 != 0) goto LAB_0092cb1c;
  }
  else {
    uVar16 = sVar7 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0092cb04 to 0092cb0b has its CatchHandler @ 0092cda8 */
    pvVar11 = operator_new(uVar16);
    local_2d0 = uVar16 | 1;
    local_2c8 = sVar7;
    local_2c0 = pvVar11;
LAB_0092cb1c:
    memcpy(pvVar11,pcVar9,sVar7);
  }
  *(undefined *)((long)pvVar11 + sVar7) = 0;
                    /* try { // try from 0092cb30 to 0092cb47 has its CatchHandler @ 0092cd9c */
  addToFileMap(param_3,(basic_string *)&local_2d0,3,false,param_4);
  if ((local_2d0 & 1) != 0) {
    operator_delete(local_2c0);
  }
  if (local_248._4_4_ != 0) {
    uVar16 = 0;
    pvVar11 = (void *)((ulong)&local_2d0 | 1);
    do {
      pTVar10 = local_238[uVar16];
      if (pTVar10 != (Texture *)0x0) {
        lVar12 = *(long *)(*(long *)(*(long *)(local_250 + 0x110) + (local_248 & 0xffffffff) * 0xe0
                                    + 0x58) + uVar16 * 8);
        bVar1 = *(byte *)(lVar12 + 0x18);
        uVar15 = (ulong)(bVar1 >> 1);
        if ((bVar1 & 1) != 0) {
          uVar15 = *(ulong *)(lVar12 + 0x20);
        }
        CVar17 = 1;
        if (uVar15 != 0) {
          if ((bVar1 & 1) == 0) {
            pcVar9 = (char *)(lVar12 + 0x19);
          }
          else {
            pcVar9 = *(char **)(lVar12 + 0x28);
            if (pcVar9 == (char *)0x0) goto LAB_0092cb84;
          }
          __s2 = pTVar10 + 0x31;
          if (((byte)pTVar10[0x30] & 1) != 0) {
            __s2 = *(Texture **)(pTVar10 + 0x40);
          }
          iVar4 = strcmp(pcVar9,(char *)__s2);
          if (iVar4 == 0) {
            sVar7 = strlen(pcVar9);
            if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 0092cd88 to 0092cd8f has its CatchHandler @ 0092cdac */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (sVar7 < 0x17) {
              local_2d0 = CONCAT71(local_2d0._1_7_,(char)((int)sVar7 << 1));
              pvVar8 = pvVar11;
              if (sVar7 != 0) goto LAB_0092cc78;
            }
            else {
              uVar15 = sVar7 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0092cc60 to 0092cc67 has its CatchHandler @ 0092cda4 */
              pvVar8 = operator_new(uVar15);
              local_2d0 = uVar15 | 1;
              local_2c8 = sVar7;
              local_2c0 = pvVar8;
LAB_0092cc78:
              memcpy(pvVar8,pcVar9,sVar7);
            }
            *(undefined *)((long)pvVar8 + sVar7) = 0;
                    /* try { // try from 0092cc8c to 0092cca3 has its CatchHandler @ 0092cdb8 */
            addToFileMap(param_3,(basic_string *)&local_2d0,0,false,param_4);
            if ((local_2d0 & 1) != 0) {
              operator_delete(local_2c0);
            }
            sVar7 = strlen(pcVar9);
            if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 0092cd80 to 0092cd87 has its CatchHandler @ 0092cdb0 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (sVar7 < 0x17) {
              local_2d0 = CONCAT71(local_2d0._1_7_,(char)((int)sVar7 << 1));
              pvVar8 = pvVar11;
              if (sVar7 != 0) goto LAB_0092cd04;
            }
            else {
              uVar15 = sVar7 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0092ccec to 0092ccf3 has its CatchHandler @ 0092cda0 */
              pvVar8 = operator_new(uVar15);
              local_2d0 = uVar15 | 1;
              local_2c8 = sVar7;
              local_2c0 = pvVar8;
LAB_0092cd04:
              memcpy(pvVar8,pcVar9,sVar7);
            }
            *(undefined *)((long)pvVar8 + sVar7) = 0;
                    /* try { // try from 0092cd18 to 0092cd23 has its CatchHandler @ 0092cdb4 */
            _Var5 = std::__ndk1::
                    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                    ::
                    find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                              ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                                *)param_3,(basic_string *)&local_2d0);
            uVar15 = (ulong)_Var5;
            if ((local_2d0 & 1) != 0) {
              operator_delete(local_2c0);
            }
            *(undefined *)(uVar15 + 0x6d) = 1;
            *(int *)(uVar15 + 0x3c) = *(int *)(uVar15 + 0x3c) + -1;
            goto LAB_0092cba4;
          }
        }
LAB_0092cb84:
        if (*(char *)(lVar12 + 0x30) == '\0') {
          CVar17 = 2;
        }
        addToFileMap(param_3,pTVar10,CVar17,false,param_4);
      }
LAB_0092cba4:
      uVar16 = uVar16 + 1;
    } while (uVar16 < local_248 >> 0x20);
  }
LAB_0092cd4c:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


