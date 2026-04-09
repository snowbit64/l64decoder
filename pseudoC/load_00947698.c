// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: load
// Entry Point: 00947698
// Size: 11312 bytes
// Signature: undefined load(void)


/* WARNING: Removing unreachable block (ram,0x009477a8) */
/* WARNING: Removing unreachable block (ram,0x0094775c) */
/* WARNING: Removing unreachable block (ram,0x00947860) */
/* WARNING: Removing unreachable block (ram,0x00947880) */
/* WARNING: Removing unreachable block (ram,0x00947888) */
/* WARNING: Removing unreachable block (ram,0x00947878) */
/* WARNING: Removing unreachable block (ram,0x00947890) */
/* WARNING: Removing unreachable block (ram,0x009478d0) */
/* WARNING: Removing unreachable block (ram,0x009478f0) */
/* WARNING: Removing unreachable block (ram,0x009478f8) */
/* WARNING: Removing unreachable block (ram,0x009478e8) */
/* WARNING: Removing unreachable block (ram,0x00947900) */
/* WARNING: Removing unreachable block (ram,0x0094948c) */
/* WARNING: Removing unreachable block (ram,0x0094953c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CustomShader::load() */

undefined4 CustomShader::load(void)

{
  long *this;
  Preprocessor *pPVar1;
  long lVar2;
  uint **ppuVar3;
  Preprocessor *pPVar4;
  uint *puVar5;
  long *plVar6;
  CustomShader CVar7;
  basic_string **ppbVar8;
  long lVar9;
  bool bVar10;
  basic_string *pbVar11;
  long *plVar12;
  CustomShader *pCVar13;
  uint **ppuVar14;
  long **pplVar15;
  basic_string *pbVar16;
  uint **ppuVar17;
  basic_string *pbVar18;
  bool bVar19;
  byte bVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  CustomShader *in_x0;
  ulong uVar28;
  char *pcVar29;
  char *pcVar30;
  char *pcVar31;
  char *pcVar32;
  char *pcVar33;
  void *pvVar34;
  __tree_node_base **pp_Var35;
  void *pvVar36;
  MaterialShaderManager *this_00;
  basic_string_conflict *pbVar37;
  CustomShader CVar38;
  undefined8 *puVar39;
  long *plVar40;
  CustomShader *pCVar41;
  long **pplVar42;
  long **pplVar43;
  ulong uVar44;
  ulong uVar45;
  long *plVar46;
  __tree_node_base *p_Var47;
  long lVar48;
  Preprocessor *pPVar49;
  size_t sVar50;
  long lVar51;
  long lVar52;
  uint **ppuVar53;
  long lVar54;
  ulong uVar55;
  undefined4 uVar56;
  float fVar57;
  float fVar58;
  uint uStack_3f0;
  uint local_3ec;
  ulong local_3e8;
  undefined8 uStack_3e0;
  void *local_3d8;
  bool local_3cc [12];
  ulong local_3c0;
  undefined8 uStack_3b8;
  void *local_3b0;
  undefined8 local_3a0;
  uint *puStack_398;
  uint *local_390;
  undefined8 local_388;
  basic_string *pbStack_380;
  basic_string *local_378;
  long **local_370;
  long **pplStack_368;
  long **local_360;
  ulong local_358;
  undefined8 uStack_350;
  void *local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined4 local_310;
  ulong local_308;
  undefined8 uStack_300;
  void *local_2f8;
  __tree_end_node *local_2f0;
  undefined8 uStack_2e8;
  char *local_2e0;
  undefined8 local_270;
  uint **ppuStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  long *plStack_250;
  long *local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  long *plStack_230;
  long *local_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  long *plStack_218;
  undefined4 local_210;
  undefined8 local_208;
  long *plStack_200;
  long *local_1f8;
  char acStack_1f0 [128];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 *puStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_88;
  
  lVar9 = tpidr_el0;
  local_88 = *(long *)(lVar9 + 0x28);
  destroy();
  puVar39 = *(undefined8 **)(in_x0 + 0x118);
  local_160 = &local_158;
  puStack_148 = &local_140;
  this = (long *)(in_x0 + 0x110);
  local_150 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  local_f0 = 0;
  uStack_ec = 0;
  local_d8 = 0;
  local_e0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  local_100 = 0;
  uStack_168 = 0;
  local_170 = 0;
  local_158 = 0;
  uStack_128 = 0;
  local_130 = 0;
  local_118 = 0;
  local_120 = 0;
  local_138 = 0;
  local_140 = 0;
  local_c0 = 0x3f800000;
  local_b0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  uStack_a8 = 0;
  local_98 = 0x3f800000;
  if (puVar39 < *(undefined8 **)(in_x0 + 0x120)) {
    *puVar39 = 0;
    puVar39[1] = 0;
    puVar39[2] = local_160;
    puVar39[3] = 0;
    puVar39[4] = 0;
    puVar39[2] = puVar39 + 3;
    local_150 = 0;
    local_158 = 0;
    puVar39[5] = puStack_148;
    puVar39[6] = 0;
    puVar39[7] = 0;
    puVar39[5] = puVar39 + 6;
    local_138 = 0;
    local_140 = 0;
    puVar39[10] = 0;
    puVar39[0xb] = 0;
    puVar39[8] = 0;
    puVar39[9] = 0;
    puVar39[0xc] = 0;
    puVar39[0xd] = 0;
    puVar39[8] = 0;
    puVar39[9] = 0;
    local_130 = 0;
    uStack_128 = 0;
    puVar39[10] = 0;
    local_120 = 0;
    puVar39[0xb] = 0;
    local_118 = 0;
    puVar39[0xc] = 0;
    local_110 = 0;
    puVar39[0xd] = 0;
    uStack_108 = 0;
    *(undefined8 *)((long)puVar39 + 0x84) = 0;
    *(undefined8 *)((long)puVar39 + 0x7c) = 0;
    puVar39[0xf] = 0;
    puVar39[0xe] = 0;
    local_e0 = 0;
    puVar39[0x12] = 0;
    puVar39[0x13] = 0;
    local_d8 = 0;
    puVar39[0x14] = 0;
    puVar39[0x15] = 0;
    *(undefined4 *)(puVar39 + 0x16) = 0x3f800000;
    uStack_c8 = 0;
    local_d0 = 0;
    local_b8 = 0;
    puVar39[0x17] = 0;
    puVar39[0x18] = 0;
    local_b0 = 0;
    puVar39[0x19] = 0;
    puVar39[0x1a] = 0;
    *(undefined4 *)(puVar39 + 0x1b) = 0x3f800000;
    local_a0 = 0;
    uStack_a8 = 0;
    *(undefined8 **)(in_x0 + 0x118) = puVar39 + 0x1c;
  }
  else {
                    /* try { // try from 00947770 to 00947777 has its CatchHandler @ 0094a37c */
    std::__ndk1::vector<CustomShader::Variation,std::__ndk1::allocator<CustomShader::Variation>>::
    __push_back_slow_path<CustomShader::Variation>
              ((vector<CustomShader::Variation,std::__ndk1::allocator<CustomShader::Variation>> *)
               this,(Variation *)&local_170);
  }
  Variation::~Variation((Variation *)&local_170);
  puVar39 = *(undefined8 **)(in_x0 + 0x110);
  puVar39[0xf] = 0;
  puVar39[0x10] = 0;
  *puVar39 = 0;
  puVar39[1] = 0;
  *(undefined4 *)(puVar39 + 0x11) = 0x1010101;
  DomXMLFile::DomXMLFile((DomXMLFile *)&local_170);
  pCVar41 = *(CustomShader **)(in_x0 + 0x20);
  if ((*(byte *)(in_x0 + 0x10) & 1) == 0) {
    pCVar41 = in_x0 + 0x11;
  }
                    /* try { // try from 00947948 to 00947953 has its CatchHandler @ 0094a3c4 */
  uVar28 = DomXMLFile::loadFromFile((DomXMLFile *)&local_170,(char *)pCVar41,true);
  if ((uVar28 & 1) != 0) {
                    /* try { // try from 00947958 to 0094799b has its CatchHandler @ 0094a3c0 */
    uVar21 = Properties::getInt((Properties *)&local_170,"CustomShader#version",local_3cc);
    pPVar1 = (Preprocessor *)(in_x0 + 0x11);
    if ((uVar21 == 5) && (local_3cc[0] != false)) {
      bVar20 = Properties::getBoolDefault
                         ((Properties *)&local_170,"CustomShader#breakOnCompile",false);
      in_x0[0x164] = (CustomShader)(bVar20 & 1);
                    /* try { // try from 009479a8 to 009479bb has its CatchHandler @ 0094a35c */
      pcVar29 = (char *)Properties::getString
                                  ((Properties *)&local_170,"CustomShader#shaderType",(char *)0x0);
      if (pcVar29 != (char *)0x0) {
        iVar22 = strcasecmp(pcVar29,Geometry::s_shaderTypeNames);
        if (iVar22 == 0) {
          uVar56 = 0;
        }
        else {
          iVar22 = strcasecmp(pcVar29,PTR_s_FOLIAGE_0103efb0);
          if (iVar22 == 0) {
            uVar56 = 1;
          }
          else {
            iVar22 = strcasecmp(pcVar29,PTR_s_TERRAIN_0103efb8);
            if (iVar22 == 0) {
              uVar56 = 2;
            }
            else {
              iVar22 = strcasecmp(pcVar29,PTR_s_TERRAIN_DETAIL_0103efc0);
              if (iVar22 == 0) {
                uVar56 = 3;
              }
              else {
                iVar22 = strcasecmp(pcVar29,PTR_s_PARTICLE_SYSTEM_0103efc8);
                if (iVar22 == 0) {
                  uVar56 = 4;
                }
                else {
                  iVar22 = strcasecmp(pcVar29,PTR_s_FILL_PLANE_0103efd0);
                  if (iVar22 != 0) goto LAB_00947aec;
                  uVar56 = 5;
                }
              }
            }
          }
        }
        *(undefined4 *)(in_x0 + 0x168) = uVar56;
      }
LAB_00947aec:
      local_3e8 = 0;
      uStack_3e0 = 0;
      local_3d8 = (void *)0x0;
                    /* try { // try from 00947af4 to 00947b03 has its CatchHandler @ 0094a354 */
      PathUtil::getBasePath((basic_string *)(in_x0 + 0x10),(basic_string *)&local_3e8,true);
      iVar22 = 0;
      while( true ) {
                    /* try { // try from 00947b50 to 00947b67 has its CatchHandler @ 0094a55c */
        FUN_0094a94c(acStack_1f0,0x80,0x80,"CustomShader.Textures.Texture(%u)#name",iVar22);
                    /* try { // try from 00947b68 to 00947b9b has its CatchHandler @ 0094a5bc */
        pcVar29 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
        if (pcVar29 == (char *)0x0) break;
        FUN_0094a94c(acStack_1f0,0x80,0x80,"CustomShader.Textures.Texture(%u)#defaultColorProfile",
                     iVar22);
                    /* try { // try from 00947b9c to 00947bab has its CatchHandler @ 0094a52c */
        pcVar30 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
        if (pcVar30 == (char *)0x0) {
          bVar19 = true;
        }
        else {
          iVar23 = strcasecmp(pcVar30,"linearrgb");
          bVar19 = iVar23 != 0;
        }
                    /* try { // try from 00947bcc to 00947be7 has its CatchHandler @ 0094a534 */
        FUN_0094a94c(acStack_1f0,0x80,0x80,"CustomShader.Textures.Texture(%u)#defaultFilename",
                     iVar22);
                    /* try { // try from 00947be8 to 00947bf7 has its CatchHandler @ 0094a540 */
        pcVar30 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
        local_2f0 = (__tree_end_node *)0x0;
        uStack_2e8 = 0;
        local_2e0 = (char *)0x0;
        if (pcVar30 != (char *)0x0) {
          if (*pcVar30 == '$') {
                    /* try { // try from 00947c28 to 00947c8f has its CatchHandler @ 0094a5d8 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((char *)&local_2f0);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((char *)&local_2f0);
            FileManager::s_singletonFileManager[96] = 1;
          }
          else {
            uVar28 = PathUtil::isAbsolutePath(pcVar30);
            if ((uVar28 & 1) == 0) {
              PathUtil::buildAbsolutePath
                        ((basic_string *)&local_3e8,pcVar30,(basic_string *)&local_2f0);
            }
            else {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((char *)&local_2f0);
            }
          }
        }
        FUN_0094a94c(acStack_1f0,0x80,0x80,"CustomShader.Textures.Texture(%u)#group",iVar22);
                    /* try { // try from 00947c90 to 00947c9f has its CatchHandler @ 0094a53c */
        pcVar31 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
        pcVar30 = "base";
        if (pcVar31 != (char *)0x0) {
          pcVar30 = pcVar31;
        }
                    /* try { // try from 00947cb0 to 00947ccb has its CatchHandler @ 0094a548 */
        FUN_0094a94c(acStack_1f0,0x80,0x80,"CustomShader.Textures.Texture(%u)#type",iVar22);
                    /* try { // try from 00947ccc to 00947d8b has its CatchHandler @ 0094a598 */
        pcVar31 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
        if (pcVar31 != (char *)0x0) {
          iVar23 = strcasecmp(pcVar31,"2d");
          if (iVar23 == 0) {
            pcVar31 = (char *)0x0;
          }
          else {
            iVar23 = strcasecmp(pcVar31,"2dArray");
            if (iVar23 == 0) {
              pcVar31 = (char *)0x3;
            }
            else {
              iVar23 = strcasecmp(pcVar31,"cube");
              if (iVar23 == 0) {
                pcVar31 = (char *)0x2;
              }
              else {
                iVar23 = strcasecmp(pcVar31,"3d");
                if (iVar23 == 0) {
                  pcVar31 = (char *)0x1;
                }
                else {
                  iVar23 = strcasecmp(pcVar31,"buffer");
                  pcVar31 = (char *)((ulong)(iVar23 == 0) << 2);
                }
              }
            }
          }
        }
        FUN_0094a94c(acStack_1f0,0x80,0x80,"CustomShader.Textures.Texture(%u)#isOptional",iVar22);
                    /* try { // try from 00947d8c to 00947d9b has its CatchHandler @ 0094a528 */
        bVar20 = Properties::getBoolDefault((Properties *)&local_170,acStack_1f0,false);
        iVar23 = strcasecmp(pcVar29,"baseMap");
        if (iVar23 == 0) {
          lVar48 = 0;
LAB_00947ec8:
                    /* try { // try from 00947ed8 to 00947edf has its CatchHandler @ 0094a508 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((char *)(in_x0 + lVar48 * 0x28 + 0x78));
          *(TEX_TYPE *)(in_x0 + lVar48 * 0x28 + 0x90) = (TEX_TYPE)pcVar31;
          in_x0[lVar48 * 0x28 + 0x70] = (CustomShader)(bVar20 & 1);
        }
        else {
          iVar23 = strcasecmp(pcVar29,"normalMap");
          if (iVar23 == 0) {
            lVar48 = 1;
            goto LAB_00947ec8;
          }
          iVar23 = strcasecmp(pcVar29,"glossMap");
          if (iVar23 == 0) {
            lVar48 = 2;
            goto LAB_00947ec8;
          }
          iVar23 = strcasecmp(pcVar29,"emissiveMap");
          if (iVar23 == 0) {
            lVar48 = 3;
            goto LAB_00947ec8;
          }
          pcVar32 = (char *)((ulong)&local_2f0 | 1);
          if (((ulong)local_2f0 & 1) != 0) {
            pcVar32 = local_2e0;
          }
                    /* try { // try from 00947e00 to 00947e1b has its CatchHandler @ 0094a3ec */
          Texture::Texture((Texture *)&local_270,pcVar29,pcVar32,bVar19,(bool)(bVar20 & 1),pcVar30,
                           (TEX_TYPE)pcVar31);
          pplVar43 = *(long ***)(in_x0 + 0x60);
          if (pplVar43 < *(long ***)(in_x0 + 0x68)) {
            pplVar43[2] = (long *)local_260;
            pplVar43[1] = (long *)ppuStack_268;
            *pplVar43 = (long *)local_270;
            ppuStack_268 = (uint **)0x0;
            local_260 = (uint **)0x0;
            local_270 = (uint **)0x0;
            pplVar43[4] = plStack_250;
            pplVar43[3] = uStack_258;
            pplVar43[5] = local_248;
            plStack_250 = (long *)0x0;
            local_248 = (long *)0x0;
            uStack_258 = (long *)0x0;
            *(undefined2 *)(pplVar43 + 6) = (undefined2)local_240;
            pplVar43[9] = local_228;
            pplVar43[8] = plStack_230;
            pplVar43[7] = uStack_238;
            plStack_230 = (long *)0x0;
            local_228 = (long *)0x0;
            uStack_238 = (long *)0x0;
            *(undefined4 *)(pplVar43 + 10) = local_220;
            *(long ***)(in_x0 + 0x60) = pplVar43 + 0xb;
          }
          else {
                    /* try { // try from 00947f04 to 00947f0f has its CatchHandler @ 0094a390 */
            std::__ndk1::vector<CustomShader::Texture,std::__ndk1::allocator<CustomShader::Texture>>
            ::__push_back_slow_path<CustomShader::Texture>
                      ((vector<CustomShader::Texture,std::__ndk1::allocator<CustomShader::Texture>>
                        *)(in_x0 + 0x58),(Texture *)&local_270);
            if (((ulong)uStack_238 & 1) != 0) {
              operator_delete(local_228);
            }
            if (((ulong)uStack_258 & 1) != 0) {
              operator_delete(local_248);
            }
          }
          if (((ulong)local_270 & 1) != 0) {
            operator_delete(local_260);
          }
        }
        if (((ulong)local_2f0 & 1) != 0) {
          operator_delete(local_2e0);
        }
        iVar22 = iVar22 + 1;
      }
      iVar22 = 0;
      while( true ) {
                    /* try { // try from 00947f98 to 00947fb3 has its CatchHandler @ 0094a460 */
        FUN_0094a94c(acStack_1f0,0x80,0x80,"CustomShader.Parameters.Parameter(%u)#name",iVar22);
                    /* try { // try from 00947fb4 to 00947feb has its CatchHandler @ 0094a4e4 */
        pcVar29 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
        if (pcVar29 == (char *)0x0) break;
        FUN_0094a94c(acStack_1f0,0x80,0x80,"CustomShader.Parameters.Parameter(%u)#target",iVar22);
                    /* try { // try from 00947fec to 00948023 has its CatchHandler @ 0094a4dc */
        pcVar30 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
        if (pcVar30 == (char *)0x0) break;
        FUN_0094a94c(acStack_1f0,0x80,0x80,"CustomShader.Parameters.Parameter(%u)#type",iVar22);
                    /* try { // try from 00948024 to 00948033 has its CatchHandler @ 0094a44c */
        pcVar31 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
        if (pcVar31 == (char *)0x0) break;
        iVar23 = strcmp(pcVar31,"float");
        if (iVar23 == 0) {
          uVar21 = 1;
        }
        else {
          iVar23 = strcmp(pcVar31,"float2");
          if (iVar23 == 0) {
            uVar21 = 2;
          }
          else {
            iVar23 = strcmp(pcVar31,"float3");
            uVar21 = 3;
            if (iVar23 != 0) {
              uVar21 = 4;
            }
          }
        }
        local_388 = (basic_string *)0x0;
        pbStack_380 = (basic_string *)0x0;
                    /* try { // try from 00948098 to 009480b3 has its CatchHandler @ 0094a434 */
        FUN_0094a94c(acStack_1f0,0x80,0x80,"CustomShader.Parameters.Parameter(%u)#defaultValue",
                     iVar22);
                    /* try { // try from 009480b4 to 009480d7 has its CatchHandler @ 0094a49c */
        pcVar31 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
        if (pcVar31 != (char *)0x0) {
          StringUtil::splitIntoFloats(pcVar31,(float *)&local_388,4,' ');
        }
                    /* try { // try from 009480d8 to 009480f3 has its CatchHandler @ 0094a41c */
        FUN_0094a94c(acStack_1f0,0x80,0x80,"CustomShader.Parameters.Parameter(%u)#arraySize",iVar22)
        ;
                    /* try { // try from 009480f4 to 00948103 has its CatchHandler @ 0094a444 */
        pcVar31 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
        if (pcVar31 == (char *)0x0) {
          uVar24 = 0;
        }
        else {
          uVar24 = atoi(pcVar31);
        }
        puStack_398 = (uint *)0xc3480000c3480000;
        local_3a0 = (uint *)0xc3480000c3480000;
                    /* try { // try from 00948130 to 0094814b has its CatchHandler @ 0094a43c */
        FUN_0094a94c(acStack_1f0,0x80,0x80,"CustomShader.Parameters.Parameter(%u)#minValue",iVar22);
                    /* try { // try from 0094814c to 0094816f has its CatchHandler @ 0094a494 */
        pcVar32 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
        if (pcVar32 != (char *)0x0) {
          StringUtil::splitIntoFloats(pcVar32,(float *)&local_3a0,4,' ');
        }
        uStack_3b8 = 0x4348000043480000;
        local_3c0 = 0x4348000043480000;
                    /* try { // try from 00948180 to 0094819b has its CatchHandler @ 0094a424 */
        FUN_0094a94c(acStack_1f0,0x80,0x80,"CustomShader.Parameters.Parameter(%u)#maxValue",iVar22);
                    /* try { // try from 0094819c to 009481db has its CatchHandler @ 0094a500 */
        pcVar32 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
        if (pcVar32 != (char *)0x0) {
          StringUtil::splitIntoFloats(pcVar32,(float *)&local_3c0,4,' ');
        }
        FUN_0094a94c(acStack_1f0,0x80,0x80,"CustomShader.Parameters.Parameter(%u)#group",iVar22);
                    /* try { // try from 009481dc to 009481eb has its CatchHandler @ 0094a42c */
        pcVar33 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
        pcVar32 = "base";
        if (pcVar33 != (char *)0x0) {
          pcVar32 = pcVar33;
        }
        if (pcVar31 == (char *)0x0) {
                    /* try { // try from 00948440 to 0094845f has its CatchHandler @ 0094a3b8 */
          Parameter::Parameter
                    ((Parameter *)&local_270,pcVar29,pcVar30,uVar21,(float *)&local_388,
                     (float *)&local_3a0,(float *)&local_3c0,pcVar32);
          pplVar43 = *(long ***)(in_x0 + 0x48);
          if (pplVar43 < *(long ***)(in_x0 + 0x50)) {
            pplVar43[2] = (long *)local_260;
            pplVar43[1] = (long *)ppuStack_268;
            *pplVar43 = (long *)local_270;
            ppuStack_268 = (uint **)0x0;
            local_260 = (uint **)0x0;
            local_270 = (uint **)0x0;
            pplVar43[4] = plStack_250;
            pplVar43[3] = uStack_258;
            pplVar43[5] = local_248;
            plStack_250 = (long *)0x0;
            local_248 = (long *)0x0;
            uStack_258 = (long *)0x0;
            pplVar43[9] = local_228;
            pplVar43[8] = plStack_230;
            pplVar43[0xb] = plStack_218;
            pplVar43[10] = (long *)CONCAT44(uStack_21c,local_220);
            *(undefined4 *)(pplVar43 + 0xc) = local_210;
            pplVar43[7] = uStack_238;
            pplVar43[6] = local_240;
            pplVar43[0xf] = local_1f8;
            pplVar43[0xe] = plStack_200;
            pplVar43[0xd] = local_208;
            local_208 = (long *)0x0;
            plStack_200 = (long *)0x0;
            local_1f8 = (long *)0x0;
            *(long ***)(in_x0 + 0x48) = pplVar43 + 0x10;
          }
          else {
                    /* try { // try from 009484fc to 00948507 has its CatchHandler @ 0094a36c */
            std::__ndk1::
            vector<CustomShader::Parameter,std::__ndk1::allocator<CustomShader::Parameter>>::
            __push_back_slow_path<CustomShader::Parameter>
                      ((vector<CustomShader::Parameter,std::__ndk1::allocator<CustomShader::Parameter>>
                        *)(in_x0 + 0x40),(Parameter *)&local_270);
            if (((ulong)local_208 & 1) != 0) {
              operator_delete(local_1f8);
            }
            if (((ulong)uStack_258 & 1) != 0) {
              operator_delete(local_248);
            }
          }
          if (((ulong)local_270 & 1) == 0) goto LAB_00947f94;
          operator_delete(local_260);
          iVar22 = iVar22 + 1;
        }
        else {
                    /* try { // try from 00948208 to 0094820b has its CatchHandler @ 0094a408 */
          pvVar34 = operator_new__((ulong)(uVar24 << 2) << 2);
          if (uVar24 != 0) {
            uVar28 = 0;
            do {
              uVar44 = uVar28 & 0xfffffffc;
              uVar28 = uVar28 + 4;
              ppbVar8 = (basic_string **)((long)pvVar34 + uVar44 * 4);
              ppbVar8[1] = pbStack_380;
              *ppbVar8 = local_388;
            } while ((ulong)uVar24 * 4 - uVar28 != 0);
          }
          iVar23 = 0;
          while( true ) {
                    /* try { // try from 00948248 to 00948267 has its CatchHandler @ 0094a640 */
            FUN_0094a94c(acStack_1f0,0x80,0x80,
                         "CustomShader.Parameters.Parameter(%u).Default(%u)#index",iVar22,iVar23);
                    /* try { // try from 00948268 to 00948277 has its CatchHandler @ 0094a638 */
            pcVar31 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
            if (pcVar31 == (char *)0x0) break;
            uVar25 = atoi(pcVar31);
            if (uVar25 < uVar24) {
                    /* try { // try from 0094828c to 009482ab has its CatchHandler @ 0094a5f8 */
              FUN_0094a94c(acStack_1f0,0x80,0x80,"CustomShader.Parameters.Parameter(%u).Default(%u)"
                           ,iVar22,iVar23);
                    /* try { // try from 009482ac to 009482d3 has its CatchHandler @ 0094a628 */
              pcVar31 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
              if (pcVar31 != (char *)0x0) {
                StringUtil::splitIntoFloats
                          (pcVar31,(float *)((long)pvVar34 + (ulong)(uVar25 << 2) * 4),4,' ');
              }
            }
            iVar23 = iVar23 + 1;
          }
          if (uVar24 != 0) {
            iVar23 = 0;
            uVar28 = 0;
            do {
                    /* try { // try from 00948300 to 0094833b has its CatchHandler @ 0094a64c */
              FUN_0094a94c(&local_270,0x80,0x80,&DAT_004de1b5,pcVar29,iVar23);
              FUN_0094a94c(&local_2f0,0x80,0x80,&DAT_004de1b5,pcVar30,iVar23);
                    /* try { // try from 00948344 to 00948363 has its CatchHandler @ 0094a620 */
              Parameter::Parameter
                        ((Parameter *)&local_370,(char *)&local_270,(char *)&local_2f0,uVar21,
                         (float *)((long)pvVar34 + (uVar28 & 0xfffffffc) * 4),(float *)&local_3a0,
                         (float *)&local_3c0,pcVar32);
              puVar39 = *(undefined8 **)(in_x0 + 0x48);
              if (puVar39 < *(undefined8 **)(in_x0 + 0x50)) {
                puVar39[2] = local_360;
                puVar39[1] = pplStack_368;
                *puVar39 = local_370;
                pplStack_368 = (long **)0x0;
                local_360 = (long **)0x0;
                local_370 = (long **)0x0;
                puVar39[4] = uStack_350;
                puVar39[3] = local_358;
                puVar39[5] = local_348;
                uStack_350 = 0;
                local_348 = (void *)0x0;
                local_358 = 0;
                puVar39[9] = uStack_328;
                puVar39[8] = local_330;
                puVar39[0xb] = uStack_318;
                puVar39[10] = uStack_320;
                *(undefined4 *)(puVar39 + 0xc) = local_310;
                puVar39[7] = uStack_338;
                puVar39[6] = local_340;
                puVar39[0xf] = local_2f8;
                puVar39[0xe] = uStack_300;
                puVar39[0xd] = local_308;
                local_308 = 0;
                uStack_300 = 0;
                local_2f8 = (void *)0x0;
                *(undefined8 **)(in_x0 + 0x48) = puVar39 + 0x10;
              }
              else {
                    /* try { // try from 009483fc to 00948407 has its CatchHandler @ 0094a59c */
                std::__ndk1::
                vector<CustomShader::Parameter,std::__ndk1::allocator<CustomShader::Parameter>>::
                __push_back_slow_path<CustomShader::Parameter>
                          ((vector<CustomShader::Parameter,std::__ndk1::allocator<CustomShader::Parameter>>
                            *)(in_x0 + 0x40),(Parameter *)&local_370);
                if ((local_308 & 1) != 0) {
                  operator_delete(local_2f8);
                }
                if ((local_358 & 1) != 0) {
                  operator_delete(local_348);
                }
              }
              if (((ulong)local_370 & 1) != 0) {
                operator_delete(local_360);
              }
              uVar28 = uVar28 + 4;
              iVar23 = iVar23 + 1;
            } while ((ulong)uVar24 * 4 - uVar28 != 0);
          }
          operator_delete__(pvVar34);
LAB_00947f94:
          iVar22 = iVar22 + 1;
        }
      }
      iVar22 = 0;
      while( true ) {
                    /* try { // try from 00948558 to 0094856f has its CatchHandler @ 0094a554 */
        FUN_0094a94c(acStack_1f0,0x80,0x80,"CustomShader.VertexAttributes.VertexAttribute(%u)#name",
                     iVar22);
                    /* try { // try from 00948570 to 0094859f has its CatchHandler @ 0094a5b4 */
        pcVar29 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
        if (pcVar29 == (char *)0x0) break;
        FUN_0094a94c(acStack_1f0,0x80,0x80,"CustomShader.VertexAttributes.VertexAttribute(%u)#group"
                     ,iVar22);
                    /* try { // try from 009485a0 to 009485cf has its CatchHandler @ 0094a590 */
        pcVar31 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
        pcVar30 = "base";
        if (pcVar31 != (char *)0x0) {
          pcVar30 = pcVar31;
        }
        addVertexDeclarationAttribute(in_x0,pcVar29,pcVar30,false);
        iVar22 = iVar22 + 1;
      }
      iVar22 = 0;
      while( true ) {
                    /* try { // try from 009485ec to 00948603 has its CatchHandler @ 0094a54c */
        FUN_0094a94c(acStack_1f0,0x80,0x80,
                     "CustomShader.VertexAttributes.IgnoredVertexAttribute(%u)#name",iVar22);
                    /* try { // try from 00948604 to 00948633 has its CatchHandler @ 0094a5ac */
        pcVar29 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
        if (pcVar29 == (char *)0x0) break;
        FUN_0094a94c(acStack_1f0,0x80,0x80,
                     "CustomShader.VertexAttributes.IgnoredVertexAttribute(%u)#group",iVar22);
                    /* try { // try from 00948634 to 00948663 has its CatchHandler @ 0094a588 */
        pcVar31 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
        pcVar30 = "base";
        if (pcVar31 != (char *)0x0) {
          pcVar30 = pcVar31;
        }
        addVertexDeclarationAttribute(in_x0,pcVar29,pcVar30,true);
        iVar22 = iVar22 + 1;
      }
      local_370 = (long **)0x0;
      pplStack_368 = (long **)0x0;
      local_360 = (long **)0x0;
                    /* try { // try from 00948674 to 00948687 has its CatchHandler @ 0094a3a0 */
      pcVar29 = (char *)DomXMLFile::getValue
                                  ((DomXMLFile *)&local_170,"CustomShader.Variations#baseGroups",
                                   false);
      if (pcVar29 == (char *)0x0) {
        uVar28 = (ulong)local_270 >> 0x28;
        local_270 = (uint **)CONCAT35((uint3)uVar28 & 0xffff00,0x6573616208);
        if (local_360 <= pplStack_368) {
                    /* try { // try from 009486f4 to 009486ff has its CatchHandler @ 0094a334 */
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      *)&local_370,(basic_string *)&local_270);
          goto LAB_00948700;
        }
        pplStack_368[2] = (long *)local_260;
        pplStack_368[1] = (long *)ppuStack_268;
        *pplStack_368 = (long *)local_270;
        pplStack_368 = pplStack_368 + 3;
      }
      else {
        uVar28 = (ulong)local_270 >> 0x10;
        local_270 = (uint **)CONCAT62((uint6)uVar28 & 0xffffffffff00,0x2002);
                    /* try { // try from 009486a0 to 009486b3 has its CatchHandler @ 0094a340 */
        StringUtil::split(pcVar29,(basic_string *)&local_270,'\0',false,(vector *)&local_370);
LAB_00948700:
        if (((ulong)local_270 & 1) != 0) {
          operator_delete(local_260);
        }
      }
      lVar48 = *(long *)(in_x0 + 0x40);
      if (*(long *)(in_x0 + 0x48) != lVar48) {
        uVar28 = 0;
        do {
          pplVar43 = local_370;
          lVar48 = lVar48 + uVar28 * 0x80;
          pcVar29 = (char *)(lVar48 + 0x69);
          plVar6 = (long *)(ulong)(*(byte *)(lVar48 + 0x68) >> 1);
          if ((*(byte *)(lVar48 + 0x68) & 1) != 0) {
            pcVar29 = *(char **)(lVar48 + 0x78);
            plVar6 = *(long **)(lVar48 + 0x70);
          }
          if ((long)pplStack_368 - (long)local_370 != 0) {
            uVar44 = 0;
            uVar55 = ((long)pplStack_368 - (long)local_370 >> 3) * -0x5555555555555555;
            do {
              pplVar42 = pplVar43 + uVar44 * 3;
              bVar20 = *(byte *)pplVar42;
              plVar40 = (long *)(ulong)(bVar20 >> 1);
              plVar46 = plVar40;
              if ((bVar20 & 1) != 0) {
                plVar46 = pplVar42[1];
              }
              if (plVar46 == plVar6) {
                plVar46 = pplVar43[uVar44 * 3 + 2];
                if ((bVar20 & 1) == 0) {
                  plVar46 = (long *)((long)pplVar42 + 1);
                }
                pcVar30 = pcVar29;
                plVar12 = plVar6;
                if ((bVar20 & 1) == 0) {
                  while( true ) {
                    if (plVar12 == (long *)0x0) goto LAB_00948810;
                    pplVar42 = (long **)((long)pplVar42 + 1);
                    if (*(char *)pplVar42 != *pcVar30) break;
                    plVar40 = (long *)((long)plVar40 + -1);
                    pcVar30 = pcVar30 + 1;
                    plVar12 = plVar40;
                  }
                }
                else if ((plVar6 == (long *)0x0) ||
                        (iVar22 = memcmp(plVar46,pcVar29,(size_t)plVar6), iVar22 == 0)) {
LAB_00948810:
                  lVar54 = *this;
                  lVar48 = *(long *)(lVar54 + 0x40);
                  lVar51 = *(long *)(lVar54 + 0x48);
                    /* try { // try from 00948820 to 00948827 has its CatchHandler @ 0094a458 */
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  basic_string((basic_string *)&local_270);
                  pplVar43 = (long **)(lVar54 + 0x10);
                  uStack_258 = (long *)CONCAT44(uStack_258._4_4_,
                                                (int)((ulong)(lVar51 - lVar48) >> 3));
                    /* try { // try from 00948838 to 0094886b has its CatchHandler @ 0094a47c */
                  pp_Var35 = std::__ndk1::
                             __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                             ::
                             __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                       ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                                         *)pplVar43,&local_2f0,(basic_string *)&local_270);
                  p_Var47 = *pp_Var35;
                  if (p_Var47 == (__tree_node_base *)0x0) {
                    puVar39 = (undefined8 *)operator_new(0x40);
                    ppuVar3 = local_260;
                    ppuVar53 = ppuStack_268;
                    ppuVar14 = local_270;
                    *puVar39 = 0;
                    puVar39[1] = 0;
                    ppuStack_268 = (uint **)0x0;
                    local_260 = (uint **)0x0;
                    local_270 = (uint **)0x0;
                    puVar39[6] = ppuVar3;
                    puVar39[5] = ppuVar53;
                    puVar39[4] = ppuVar14;
                    *(undefined4 *)(puVar39 + 7) = (undefined4)uStack_258;
                    puVar39[2] = local_2f0;
                    *pp_Var35 = (__tree_node_base *)puVar39;
                    if ((long *)**pplVar43 != (long *)0x0) {
                      *pplVar43 = (long *)**pplVar43;
                      puVar39 = (undefined8 *)*pp_Var35;
                    }
                    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                              (*(__tree_node_base **)(lVar54 + 0x18),(__tree_node_base *)puVar39);
                    *(long *)(lVar54 + 0x20) = *(long *)(lVar54 + 0x20) + 1;
                  }
                  if (((ulong)local_270 & 1) != 0) {
                    operator_delete(local_260);
                  }
                  if (p_Var47 == (__tree_node_base *)0x0) {
                    lVar51 = *(long *)(in_x0 + 0x110);
                    plVar6 = *(long **)(lVar51 + 0x48);
                    lVar48 = *(long *)(in_x0 + 0x40) + uVar28 * 0x80;
                    if (plVar6 < *(long **)(lVar51 + 0x50)) {
                      *plVar6 = lVar48;
                      *(long **)(lVar51 + 0x48) = plVar6 + 1;
                    }
                    else {
                      pvVar34 = *(void **)(lVar51 + 0x40);
                      sVar50 = (long)plVar6 - (long)pvVar34;
                      uVar44 = ((long)sVar50 >> 3) + 1;
                      if (uVar44 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0094a13c to 0094a13f has its CatchHandler @ 0094a3b0 */
                        std::__ndk1::__vector_base_common<true>::__throw_length_error();
                      }
                      uVar55 = (long)*(long **)(lVar51 + 0x50) - (long)pvVar34;
                      uVar45 = (long)uVar55 >> 2;
                      if (uVar44 <= uVar45) {
                        uVar44 = uVar45;
                      }
                      if (0x7ffffffffffffff7 < uVar55) {
                        uVar44 = 0x1fffffffffffffff;
                      }
                      if (uVar44 == 0) {
                        pvVar36 = (void *)0x0;
                      }
                      else {
                        if (uVar44 >> 0x3d != 0) {
                    /* try { // try from 0094a144 to 0094a14f has its CatchHandler @ 0094a3b0 */
                    /* WARNING: Subroutine does not return */
                          FUN_006d1f18(
                                      "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                      );
                        }
                    /* try { // try from 0094894c to 0094894f has its CatchHandler @ 0094a364 */
                        pvVar36 = operator_new(uVar44 << 3);
                      }
                      plVar6 = (long *)((long)pvVar36 + ((long)sVar50 >> 3) * 8);
                      *plVar6 = lVar48;
                      if (0 < (long)sVar50) {
                        memcpy(pvVar36,pvVar34,sVar50);
                      }
                      *(void **)(lVar51 + 0x40) = pvVar36;
                      *(long **)(lVar51 + 0x48) = plVar6 + 1;
                      *(void **)(lVar51 + 0x50) = (void *)((long)pvVar36 + uVar44 * 8);
                      if (pvVar34 != (void *)0x0) {
                        operator_delete(pvVar34);
                      }
                    }
                  }
                  break;
                }
              }
              uVar44 = (ulong)((int)uVar44 + 1);
            } while (uVar44 <= uVar55 && uVar55 - uVar44 != 0);
          }
          uVar28 = (ulong)((int)uVar28 + 1);
          lVar48 = *(long *)(in_x0 + 0x40);
        } while (uVar28 < (ulong)(*(long *)(in_x0 + 0x48) - lVar48 >> 7));
      }
      lVar48 = *(long *)(in_x0 + 0x58);
      if (*(long *)(in_x0 + 0x60) != lVar48) {
        uVar28 = 0;
        do {
          pplVar43 = local_370;
          lVar48 = lVar48 + uVar28 * 0x58;
          pcVar29 = (char *)(lVar48 + 0x39);
          plVar6 = (long *)(ulong)(*(byte *)(lVar48 + 0x38) >> 1);
          if ((*(byte *)(lVar48 + 0x38) & 1) != 0) {
            pcVar29 = *(char **)(lVar48 + 0x48);
            plVar6 = *(long **)(lVar48 + 0x40);
          }
          if ((long)pplStack_368 - (long)local_370 != 0) {
            uVar44 = 0;
            uVar55 = ((long)pplStack_368 - (long)local_370 >> 3) * -0x5555555555555555;
            do {
              pplVar42 = pplVar43 + uVar44 * 3;
              bVar20 = *(byte *)pplVar42;
              plVar40 = (long *)(ulong)(bVar20 >> 1);
              plVar46 = plVar40;
              if ((bVar20 & 1) != 0) {
                plVar46 = pplVar42[1];
              }
              if (plVar46 == plVar6) {
                plVar46 = pplVar43[uVar44 * 3 + 2];
                if ((bVar20 & 1) == 0) {
                  plVar46 = (long *)((long)pplVar42 + 1);
                }
                pcVar30 = pcVar29;
                plVar12 = plVar6;
                if ((bVar20 & 1) == 0) {
                  while( true ) {
                    if (plVar12 == (long *)0x0) goto LAB_00948ab4;
                    pplVar42 = (long **)((long)pplVar42 + 1);
                    if (*(char *)pplVar42 != *pcVar30) break;
                    plVar40 = (long *)((long)plVar40 + -1);
                    pcVar30 = pcVar30 + 1;
                    plVar12 = plVar40;
                  }
                }
                else if ((plVar6 == (long *)0x0) ||
                        (iVar22 = memcmp(plVar46,pcVar29,(size_t)plVar6), iVar22 == 0)) {
LAB_00948ab4:
                  lVar54 = *this;
                  lVar48 = *(long *)(lVar54 + 0x58);
                  lVar51 = *(long *)(lVar54 + 0x60);
                    /* try { // try from 00948ac8 to 00948acf has its CatchHandler @ 0094a454 */
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  basic_string((basic_string *)&local_270);
                  pplVar43 = (long **)(lVar54 + 0x28);
                  uStack_258 = (long *)CONCAT44(uStack_258._4_4_,
                                                (int)((ulong)(lVar51 - lVar48) >> 3));
                    /* try { // try from 00948ae0 to 00948b13 has its CatchHandler @ 0094a478 */
                  pp_Var35 = std::__ndk1::
                             __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                             ::
                             __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                       ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                                         *)pplVar43,&local_2f0,(basic_string *)&local_270);
                  p_Var47 = *pp_Var35;
                  if (p_Var47 == (__tree_node_base *)0x0) {
                    puVar39 = (undefined8 *)operator_new(0x40);
                    ppuVar3 = local_260;
                    ppuVar53 = ppuStack_268;
                    ppuVar14 = local_270;
                    *puVar39 = 0;
                    puVar39[1] = 0;
                    ppuStack_268 = (uint **)0x0;
                    local_260 = (uint **)0x0;
                    local_270 = (uint **)0x0;
                    puVar39[6] = ppuVar3;
                    puVar39[5] = ppuVar53;
                    puVar39[4] = ppuVar14;
                    *(undefined4 *)(puVar39 + 7) = (undefined4)uStack_258;
                    puVar39[2] = local_2f0;
                    *pp_Var35 = (__tree_node_base *)puVar39;
                    if ((long *)**pplVar43 != (long *)0x0) {
                      *pplVar43 = (long *)**pplVar43;
                      puVar39 = (undefined8 *)*pp_Var35;
                    }
                    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                              (*(__tree_node_base **)(lVar54 + 0x30),(__tree_node_base *)puVar39);
                    *(long *)(lVar54 + 0x38) = *(long *)(lVar54 + 0x38) + 1;
                  }
                  if (((ulong)local_270 & 1) != 0) {
                    operator_delete(local_260);
                  }
                  if (p_Var47 == (__tree_node_base *)0x0) {
                    lVar51 = *(long *)(in_x0 + 0x110);
                    plVar6 = *(long **)(lVar51 + 0x60);
                    lVar48 = *(long *)(in_x0 + 0x58) + uVar28 * 0x58;
                    if (plVar6 < *(long **)(lVar51 + 0x68)) {
                      *plVar6 = lVar48;
                      *(long **)(lVar51 + 0x60) = plVar6 + 1;
                    }
                    else {
                      pvVar34 = *(void **)(lVar51 + 0x58);
                      sVar50 = (long)plVar6 - (long)pvVar34;
                      uVar44 = ((long)sVar50 >> 3) + 1;
                      if (uVar44 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0094a140 to 0094a143 has its CatchHandler @ 0094a3ac */
                        std::__ndk1::__vector_base_common<true>::__throw_length_error();
                      }
                      uVar55 = (long)*(long **)(lVar51 + 0x68) - (long)pvVar34;
                      uVar45 = (long)uVar55 >> 2;
                      if (uVar44 <= uVar45) {
                        uVar44 = uVar45;
                      }
                      if (0x7ffffffffffffff7 < uVar55) {
                        uVar44 = 0x1fffffffffffffff;
                      }
                      if (uVar44 == 0) {
                        pvVar36 = (void *)0x0;
                      }
                      else {
                        if (uVar44 >> 0x3d != 0) {
                    /* try { // try from 0094a150 to 0094a15b has its CatchHandler @ 0094a3ac */
                    /* WARNING: Subroutine does not return */
                          FUN_006d1f18(
                                      "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                      );
                        }
                    /* try { // try from 00948bf8 to 00948bfb has its CatchHandler @ 0094a360 */
                        pvVar36 = operator_new(uVar44 << 3);
                      }
                      plVar6 = (long *)((long)pvVar36 + ((long)sVar50 >> 3) * 8);
                      *plVar6 = lVar48;
                      if (0 < (long)sVar50) {
                        memcpy(pvVar36,pvVar34,sVar50);
                      }
                      *(void **)(lVar51 + 0x58) = pvVar36;
                      *(long **)(lVar51 + 0x60) = plVar6 + 1;
                      *(void **)(lVar51 + 0x68) = (void *)((long)pvVar36 + uVar44 * 8);
                      if (pvVar34 != (void *)0x0) {
                        operator_delete(pvVar34);
                      }
                    }
                  }
                  break;
                }
              }
              uVar44 = (ulong)((int)uVar44 + 1);
            } while (uVar44 <= uVar55 && uVar55 - uVar44 != 0);
          }
          uVar28 = (ulong)((int)uVar28 + 1);
          lVar48 = *(long *)(in_x0 + 0x58);
          uVar44 = (*(long *)(in_x0 + 0x60) - lVar48 >> 3) * 0x2e8ba2e8ba2e8ba3;
        } while (uVar28 <= uVar44 && uVar44 - uVar28 != 0);
      }
      pplVar43 = local_370;
      lVar48 = 0;
      lVar51 = (long)pplStack_368 - (long)local_370;
      uVar28 = (lVar51 >> 3) * -0x5555555555555555;
      lVar54 = *this;
      do {
        pCVar41 = in_x0 + lVar48 * 0x28 + 0x79;
        plVar6 = (long *)(ulong)((byte)in_x0[lVar48 * 0x28 + 0x78] >> 1);
        if (((byte)in_x0[lVar48 * 0x28 + 0x78] & 1) != 0) {
          pCVar41 = *(CustomShader **)(in_x0 + lVar48 * 0x28 + 0x88);
          plVar6 = *(long **)(in_x0 + lVar48 * 0x28 + 0x80);
        }
        if (lVar51 != 0) {
          uVar44 = 0;
          do {
            pplVar42 = pplVar43 + uVar44 * 3;
            bVar20 = *(byte *)pplVar42;
            plVar40 = (long *)(ulong)(bVar20 >> 1);
            plVar46 = plVar40;
            if ((bVar20 & 1) != 0) {
              plVar46 = pplVar42[1];
            }
            if (plVar46 == plVar6) {
              plVar46 = pplVar43[uVar44 * 3 + 2];
              if ((bVar20 & 1) == 0) {
                plVar46 = (long *)((long)pplVar42 + 1);
              }
              pCVar13 = pCVar41;
              plVar12 = plVar6;
              if ((bVar20 & 1) == 0) {
                while( true ) {
                  if (plVar12 == (long *)0x0) goto LAB_00948c7c;
                  pplVar42 = (long **)((long)pplVar42 + 1);
                  if (*(CustomShader *)pplVar42 != *pCVar13) break;
                  plVar40 = (long *)((long)plVar40 + -1);
                  pCVar13 = pCVar13 + 1;
                  plVar12 = plVar40;
                }
              }
              else if ((plVar6 == (long *)0x0) ||
                      (iVar22 = memcmp(plVar46,pCVar41,(size_t)plVar6), iVar22 == 0)) {
LAB_00948c7c:
                *(undefined4 *)(lVar54 + lVar48 * 4 + 0x78) =
                     *(undefined4 *)(in_x0 + lVar48 * 0x28 + 0x90);
                CVar38 = in_x0[lVar48 * 0x28 + 0x70];
                goto LAB_00948c94;
              }
            }
            uVar44 = (ulong)((int)uVar44 + 1);
          } while (uVar44 <= uVar28 && uVar28 - uVar44 != 0);
        }
        CVar38 = (CustomShader)0x1;
        *(undefined4 *)(lVar54 + lVar48 * 4 + 0x78) = 0;
LAB_00948c94:
        pplVar42 = local_370;
        lVar52 = lVar54 + lVar48;
        lVar48 = lVar48 + 1;
        *(CustomShader *)(lVar52 + 0x88) = CVar38;
      } while (lVar48 != 4);
      lVar54 = *(long *)(in_x0 + 0x110);
      *(undefined4 *)(lVar54 + 0x70) = 0;
      lVar52 = (long)pplStack_368 - (long)local_370;
      lVar48 = *(long *)(in_x0 + 0x128);
      lVar51 = *(long *)(in_x0 + 0x130);
      uVar28 = (lVar52 >> 3) * -0x5555555555555555;
      if (lVar51 - lVar48 != 0) {
        uVar21 = 0;
        uVar44 = 0;
        do {
          lVar2 = lVar48 + uVar44 * 0x20;
          pcVar29 = (char *)(lVar2 + 9);
          plVar6 = (long *)(ulong)(*(byte *)(lVar2 + 8) >> 1);
          if ((*(byte *)(lVar2 + 8) & 1) != 0) {
            pcVar29 = *(char **)(lVar2 + 0x18);
            plVar6 = *(long **)(lVar2 + 0x10);
          }
          if (lVar52 != 0) {
            uVar55 = 0;
            do {
              pplVar43 = pplVar42 + uVar55 * 3;
              bVar20 = *(byte *)pplVar43;
              plVar40 = (long *)(ulong)(bVar20 >> 1);
              plVar46 = plVar40;
              if ((bVar20 & 1) != 0) {
                plVar46 = pplVar43[1];
              }
              if (plVar46 == plVar6) {
                plVar46 = pplVar42[uVar55 * 3 + 2];
                if ((bVar20 & 1) == 0) {
                  plVar46 = (long *)((long)pplVar43 + 1);
                }
                pcVar30 = pcVar29;
                plVar12 = plVar6;
                if ((bVar20 & 1) == 0) {
                  while( true ) {
                    if (plVar12 == (long *)0x0) goto LAB_00948dc0;
                    pplVar43 = (long **)((long)pplVar43 + 1);
                    if (*(char *)pplVar43 != *pcVar30) break;
                    plVar40 = (long *)((long)plVar40 + -1);
                    pcVar30 = pcVar30 + 1;
                    plVar12 = plVar40;
                  }
                }
                else if ((plVar6 == (long *)0x0) ||
                        (iVar22 = memcmp(plVar46,pcVar29,(size_t)plVar6), iVar22 == 0)) {
LAB_00948dc0:
                  uVar21 = uVar21 | *(uint *)(lVar48 + uVar44 * 0x20);
                  *(uint *)(lVar54 + 0x70) = uVar21;
                  break;
                }
              }
              uVar55 = (ulong)((int)uVar55 + 1);
            } while (uVar55 <= uVar28 && uVar28 - uVar55 != 0);
          }
          uVar44 = uVar44 + 1;
        } while ((uVar44 & 0xffffffff) < (ulong)(lVar51 - lVar48 >> 5));
      }
      *(undefined4 *)(lVar54 + 0x74) = 0;
      lVar48 = *(long *)(in_x0 + 0x140);
      lVar51 = *(long *)(in_x0 + 0x148);
      if (lVar51 - lVar48 != 0) {
        uVar21 = 0;
        uVar44 = 0;
        do {
          lVar2 = lVar48 + uVar44 * 0x20;
          pcVar29 = (char *)(lVar2 + 9);
          plVar6 = (long *)(ulong)(*(byte *)(lVar2 + 8) >> 1);
          if ((*(byte *)(lVar2 + 8) & 1) != 0) {
            pcVar29 = *(char **)(lVar2 + 0x18);
            plVar6 = *(long **)(lVar2 + 0x10);
          }
          if (lVar52 != 0) {
            uVar55 = 0;
            do {
              pplVar43 = pplVar42 + uVar55 * 3;
              bVar20 = *(byte *)pplVar43;
              plVar40 = (long *)(ulong)(bVar20 >> 1);
              plVar46 = plVar40;
              if ((bVar20 & 1) != 0) {
                plVar46 = pplVar43[1];
              }
              if (plVar46 == plVar6) {
                plVar46 = pplVar42[uVar55 * 3 + 2];
                if ((bVar20 & 1) == 0) {
                  plVar46 = (long *)((long)pplVar43 + 1);
                }
                pcVar30 = pcVar29;
                plVar12 = plVar6;
                if ((bVar20 & 1) == 0) {
                  while( true ) {
                    if (plVar12 == (long *)0x0) goto LAB_00948ec4;
                    pplVar43 = (long **)((long)pplVar43 + 1);
                    if (*(char *)pplVar43 != *pcVar30) break;
                    plVar40 = (long *)((long)plVar40 + -1);
                    pcVar30 = pcVar30 + 1;
                    plVar12 = plVar40;
                  }
                }
                else if ((plVar6 == (long *)0x0) ||
                        (iVar22 = memcmp(plVar46,pcVar29,(size_t)plVar6), iVar22 == 0)) {
LAB_00948ec4:
                  uVar21 = uVar21 | *(uint *)(lVar48 + uVar44 * 0x20);
                  *(uint *)(lVar54 + 0x74) = uVar21;
                  break;
                }
              }
              uVar55 = (ulong)((int)uVar55 + 1);
            } while (uVar55 <= uVar28 && uVar28 - uVar55 != 0);
          }
          uVar44 = uVar44 + 1;
        } while ((uVar44 & 0xffffffff) < (ulong)(lVar51 - lVar48 >> 5));
      }
                    /* try { // try from 00948f9c to 00948fab has its CatchHandler @ 0094a3a0 */
      iVar22 = DomXMLFile::getNumElements((DomXMLFile *)&local_170,"CustomShader.UvUsages");
      if (iVar22 == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar22 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
           iVar22 != 0)) {
                    /* try { // try from 0094a1b4 to 0094a1bf has its CatchHandler @ 0094a2d4 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pPVar4 = pPVar1;
        if (((byte)in_x0[0x10] & 1) != 0) {
          pPVar4 = *(Preprocessor **)(in_x0 + 0x20);
        }
                    /* try { // try from 009491b0 to 009491c3 has its CatchHandler @ 0094a3a0 */
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "The texture streaming needs <UvUsage> to work efficiently, custom shader: %s\n"
                          ,pPVar4);
      }
      else {
        lVar48 = *this;
                    /* try { // try from 00948fb8 to 00948fc7 has its CatchHandler @ 0094a33c */
        iVar22 = DomXMLFile::getNumElements
                           ((DomXMLFile *)&local_170,"CustomShader.UvUsages.UvUsage");
        if (iVar22 != 0) {
          iVar23 = 0;
          do {
            local_2f0 = (__tree_end_node *)((ulong)local_2f0 & 0xffffffff00000000);
                    /* try { // try from 00949008 to 0094901f has its CatchHandler @ 0094a3b4 */
            FUN_0094a94c(acStack_1f0,0x80,0x80,"CustomShader.UvUsages.UvUsage(%u)#textureName",
                         iVar23);
                    /* try { // try from 00949020 to 0094904b has its CatchHandler @ 0094a410 */
            pcVar29 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
            FUN_0094a94c(acStack_1f0,0x80,0x80,"CustomShader.UvUsages.UvUsage(%u)#uvType",iVar23);
                    /* try { // try from 0094904c to 00949087 has its CatchHandler @ 0094a418 */
            pcVar30 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
            FUN_0094a94c(acStack_1f0,0x80,0x80,"CustomShader.UvUsages.UvUsage(%u)#uvScale",iVar23);
            uVar56 = Properties::getFloat((Properties *)&local_170,acStack_1f0,1.0);
            local_2f0 = (__tree_end_node *)CONCAT44(uVar56,local_2f0._0_4_);
            if (pcVar29 == (char *)0x0) {
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar22 != 0)) {
                    /* try { // try from 0094a1fc to 0094a207 has its CatchHandler @ 0094a2d0 */
                LogManager::LogManager
                          ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
                    /* try { // try from 0094a004 to 0094a067 has its CatchHandler @ 0094a338 */
              LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                 "Error (custom shader UvUsage): missing mandatory attribute \'textureName\'\n"
                                );
LAB_0094a068:
              uVar56 = 0;
              goto LAB_0094a0d8;
            }
            if (pcVar30 == (char *)0x0) {
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar22 != 0)) {
                    /* try { // try from 0094a244 to 0094a24f has its CatchHandler @ 0094a2cc */
                LogManager::LogManager
                          ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
              LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                 "Error (custom shader UvUsage): missing mandatory attribute \'uvType\'\n"
                                );
              goto LAB_0094a068;
            }
            uVar28 = convertUvTypeNameToEnum(pcVar30,(UV_TYPE *)&local_2f0);
            if ((uVar28 & 1) == 0) {
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar22 != 0)) {
                    /* try { // try from 0094a28c to 0094a297 has its CatchHandler @ 0094a2c8 */
                LogManager::LogManager
                          ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
              LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                 "Error (custom shader UvUsage): allowed values for attribute uvType: uv0, uv1, uv2, uv3, worldspace or custom\n"
                                );
              goto LAB_0094a068;
            }
            iVar26 = strcasecmp(pcVar29,"baseMap");
            if (iVar26 == 0) {
              uVar56 = 0;
LAB_0094914c:
              local_388 = (basic_string *)CONCAT44(local_388._4_4_,uVar56);
                    /* try { // try from 00949154 to 0094916f has its CatchHandler @ 0094a3a4 */
              local_270 = (uint **)&local_388;
              uVar21 = std::__ndk1::
                       __hash_table<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,std::__ndk1::__unordered_map_hasher<CustomShader::STANDARD_TEXTURE,std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<CustomShader::STANDARD_TEXTURE,std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,std::__ndk1::equal_to<CustomShader::STANDARD_TEXTURE>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>>>
                       ::
                       __emplace_unique_key_args<CustomShader::STANDARD_TEXTURE,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<CustomShader::STANDARD_TEXTURE_const&>,std::__ndk1::tuple<>>
                                 ((STANDARD_TEXTURE *)(lVar48 + 0xb8),
                                  (piecewise_construct_t *)&local_388,(tuple *)&DAT_00519cd8,
                                  (tuple *)&local_270);
LAB_00949170:
              *(__tree_end_node **)((ulong)uVar21 + 0x14) = local_2f0;
            }
            else {
              iVar26 = strcasecmp(pcVar29,"normalMap");
              if (iVar26 == 0) {
                uVar56 = 1;
                goto LAB_0094914c;
              }
              iVar26 = strcasecmp(pcVar29,"glossMap");
              if (iVar26 == 0) {
                uVar56 = 2;
                goto LAB_0094914c;
              }
              iVar26 = strcasecmp(pcVar29,"emissiveMap");
              if (iVar26 == 0) {
                uVar56 = 3;
                goto LAB_0094914c;
              }
                    /* try { // try from 009490f0 to 0094912b has its CatchHandler @ 0094a34c */
              uVar28 = getTextureIndex(in_x0,0,pcVar29,(uint *)&local_3a0);
              if ((uVar28 & 1) != 0) {
                local_270 = (uint **)&local_3a0;
                uVar21 = std::__ndk1::
                         __hash_table<std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>>>
                         ::
                         __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>>
                                   ((uint *)(lVar48 + 0x90),(piecewise_construct_t *)&local_3a0,
                                    (tuple *)&DAT_00519cd8,(tuple *)&local_270);
                goto LAB_00949170;
              }
            }
            iVar23 = iVar23 + 1;
          } while (iVar22 != iVar23);
        }
      }
      iVar22 = 0;
      local_388 = (basic_string *)0x0;
      pbStack_380 = (basic_string *)0x0;
      local_378 = (basic_string *)0x0;
      fVar58 = -1.0;
      do {
                    /* try { // try from 00949240 to 00949277 has its CatchHandler @ 0094a4f8 */
        FUN_0094a94c(&local_2f0,0x40,0x40,"CustomShader.LodLevel(%u)",iVar22);
        FUN_0094a94c(acStack_1f0,0x80,0x80,"%s#startDistance",&local_2f0);
                    /* try { // try from 00949278 to 009492c3 has its CatchHandler @ 0094a4a8 */
        fVar57 = (float)Properties::getFloat((Properties *)&local_170,acStack_1f0,local_3cc);
        bVar19 = local_3cc[0];
        if (local_3cc[0] == false) break;
        if (fVar57 <= fVar58) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar23 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar23 != 0)) {
                    /* try { // try from 009498f8 to 00949903 has its CatchHandler @ 0094a31c */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             "Error: Custom shader, LOD distances have to be sorted\n");
        }
                    /* try { // try from 009492c4 to 009492df has its CatchHandler @ 0094a470 */
        FUN_0094a94c(acStack_1f0,0x80,0x80,"%s#alphaForceMode",&local_2f0);
                    /* try { // try from 009492e0 to 0094934b has its CatchHandler @ 0094a4f0 */
        pcVar29 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
        if (pcVar29 != (char *)0x0) {
          iVar23 = strcmp(pcVar29,"use");
          if (iVar23 == 0) {
            pcVar29 = (char *)0x1;
          }
          else {
            iVar23 = strcmp(pcVar29,"ignore");
            pcVar29 = (char *)((ulong)(iVar23 == 0) << 1);
          }
        }
        FUN_0094a94c(acStack_1f0,0x80,0x80,"%s#copyLastCodeInjections",&local_2f0);
                    /* try { // try from 0094934c to 0094935b has its CatchHandler @ 0094a468 */
        bVar20 = Properties::getBool((Properties *)&local_170,acStack_1f0,local_3cc);
        pbVar16 = local_388;
        pbVar18 = pbStack_380;
        if (local_3cc[0] == false) {
joined_r0x00949394:
          while (pbVar11 = pbVar18, pbVar11 != pbVar16) {
            if ((*(byte *)(pbVar11 + -6) & 1) != 0) {
              operator_delete(*(void **)(pbVar11 + -2));
            }
            pbVar18 = pbVar11 + -0xc;
            if ((*(byte *)(pbVar11 + -0xc) & 1) != 0) {
              operator_delete(*(void **)(pbVar11 + -8));
            }
          }
          bVar10 = false;
          pplVar43 = *(long ***)(in_x0 + 0x28);
          pplVar42 = *(long ***)(in_x0 + 0x30);
          pbStack_380 = pbVar16;
        }
        else {
          pplVar43 = *(long ***)(in_x0 + 0x28);
          pplVar42 = *(long ***)(in_x0 + 0x30);
          if ((bVar20 & pplVar42 != pplVar43) == 0) goto joined_r0x00949394;
          bVar10 = true;
        }
        if ((fVar57 != 0.0) && (pplVar42 == pplVar43)) {
          local_270._4_4_ = (undefined4)((ulong)local_270 >> 0x20);
          local_270 = (uint **)CONCAT44(local_270._4_4_,fVar57);
          local_260._4_4_ = (undefined4)((ulong)local_260 >> 0x20);
          local_260 = (uint **)CONCAT44(local_260._4_4_,(int)pcVar29);
          plStack_250 = (long *)0x0;
          uStack_258 = (long *)0x0;
          local_248 = (long *)0x0;
          plStack_230 = (long *)0x0;
                    /* try { // try from 009493d4 to 009493db has its CatchHandler @ 0094a3f0 */
          ppuStack_268 = (uint **)operator_new__(4);
          *(undefined4 *)ppuStack_268 = 0;
          if (pplVar43 < *(long ***)(in_x0 + 0x38)) {
            *(undefined4 *)(pplVar43 + 2) = (undefined4)local_260;
            pplVar43[1] = (long *)ppuStack_268;
            *pplVar43 = (long *)local_270;
            pplVar43[5] = local_248;
            pplVar43[4] = plStack_250;
            pplVar43[3] = uStack_258;
            plStack_250 = (long *)0x0;
            local_248 = (long *)0x0;
            uStack_258 = (long *)0x0;
            pplVar43[8] = plStack_230;
            pplVar43[7] = (long *)0x0;
            pplVar43[6] = (long *)0x0;
            *(long ***)(in_x0 + 0x30) = pplVar43 + 9;
          }
          else {
                    /* try { // try from 00949478 to 00949483 has its CatchHandler @ 0094a3a8 */
            std::__ndk1::
            vector<CustomShader::LodLevel,std::__ndk1::allocator<CustomShader::LodLevel>>::
            __push_back_slow_path<CustomShader::LodLevel>
                      ((vector<CustomShader::LodLevel,std::__ndk1::allocator<CustomShader::LodLevel>>
                        *)(in_x0 + 0x28),(LodLevel *)&local_270);
          }
          if (((ulong)uStack_258 & 1) != 0) {
            operator_delete(local_248);
          }
        }
        local_270 = (uint **)CONCAT44(local_270._4_4_,fVar57);
        local_260 = (uint **)CONCAT44(local_260._4_4_,(int)pcVar29);
        plStack_250 = (long *)0x0;
        uStack_258 = (long *)0x0;
        local_248 = (long *)0x0;
        plStack_230 = (long *)0x0;
                    /* try { // try from 009494b8 to 009494bf has its CatchHandler @ 0094a46c */
        ppuStack_268 = (uint **)operator_new__(4);
        *(undefined4 *)ppuStack_268 = 0;
        pplVar43 = *(long ***)(in_x0 + 0x30);
        if (pplVar43 < *(long ***)(in_x0 + 0x38)) {
          *(undefined4 *)(pplVar43 + 2) = (undefined4)local_260;
          pplVar43[1] = (long *)ppuStack_268;
          *pplVar43 = (long *)local_270;
          pplVar43[5] = local_248;
          pplVar43[4] = plStack_250;
          pplVar43[3] = uStack_258;
          plStack_250 = (long *)0x0;
          local_248 = (long *)0x0;
          uStack_258 = (long *)0x0;
          pplVar43[7] = (long *)0x0;
          pplVar43[6] = (long *)0x0;
          pplVar43[8] = plStack_230;
          *(long ***)(in_x0 + 0x30) = pplVar43 + 9;
        }
        else {
                    /* try { // try from 00949528 to 00949533 has its CatchHandler @ 0094a3f4 */
          std::__ndk1::vector<CustomShader::LodLevel,std::__ndk1::allocator<CustomShader::LodLevel>>
          ::__push_back_slow_path<CustomShader::LodLevel>
                    ((vector<CustomShader::LodLevel,std::__ndk1::allocator<CustomShader::LodLevel>>
                      *)(in_x0 + 0x28),(LodLevel *)&local_270);
        }
        if (((ulong)uStack_258 & 1) != 0) {
          operator_delete(local_248);
        }
        lVar48 = *(long *)(in_x0 + 0x30);
        if (!bVar10) {
          iVar23 = 0;
          while( true ) {
                    /* try { // try from 0094971c to 0094973b has its CatchHandler @ 0094a5f4 */
            FUN_0094a94c(acStack_1f0,0x80,0x80,"%s.CodeInjections.CodeInjection(%u)#position",
                         &local_2f0,iVar23);
                    /* try { // try from 0094973c to 0094977b has its CatchHandler @ 0094a630 */
            pcVar29 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
            if ((pcVar29 == (char *)0x0) || (*pcVar29 == '\0')) break;
            FUN_0094a94c(acStack_1f0,0x80,0x80,"%s.CodeInjections.CodeInjection(%u)",&local_2f0,
                         iVar23);
                    /* try { // try from 0094977c to 0094978b has its CatchHandler @ 0094a5f0 */
            uVar21 = 0;
            pcVar29 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
            if ((pcVar29 != (char *)0x0) && (*pcVar29 != '\0')) {
              uStack_258 = (long *)0x0;
              local_260 = (uint **)0x0;
              local_248 = (long *)0x0;
              plStack_250 = (long *)0x0;
              ppuStack_268 = (uint **)0x0;
              local_270 = (uint **)0x0;
                    /* try { // try from 009497a8 to 009497b3 has its CatchHandler @ 0094a57c */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((char *)&local_270);
              local_3a0 = (uint *)0x0;
              puStack_398 = (uint *)0x0;
              local_390 = (uint *)0x0;
              CVar38 = in_x0[0x10];
              pPVar49 = *(Preprocessor **)(in_x0 + 0x20);
                    /* try { // try from 009497c8 to 009497eb has its CatchHandler @ 0094a5d4 */
              uVar28 = DomXMLFile::getValueLine((DomXMLFile *)&local_170,acStack_1f0);
              pPVar4 = pPVar1;
              if (((byte)CVar38 & 1) != 0) {
                pPVar4 = pPVar49;
              }
              Preprocessor::formatHashLineDirective(pPVar4,(char *)(uVar28 & 0xffffffff),uVar21);
              pvVar34 = (void *)((ulong)&local_3c0 | 1);
              if ((local_3c0 & 1) != 0) {
                pvVar34 = local_3b0;
              }
                    /* try { // try from 00949804 to 0094980b has its CatchHandler @ 0094a564 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_3a0,(ulong)pvVar34);
              if ((local_3c0 & 1) != 0) {
                operator_delete(local_3b0);
              }
                    /* try { // try from 00949824 to 00949863 has its CatchHandler @ 0094a600 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_3a0);
              StringUtil::removeInPlace('\r',(basic_string *)&local_3a0);
              puVar5 = (uint *)((ulong)&local_3a0 | 1);
              uVar21 = (uint)((byte)local_3a0 >> 1);
              if (((ulong)local_3a0 & 1) != 0) {
                puVar5 = local_390;
                uVar21 = (uint)puStack_398;
              }
              ShaderManager::preprocessShaderString
                        (uVar21,(char *)puVar5,(basic_string *)&uStack_258,true);
              pbVar16 = pbStack_380;
              if (pbStack_380 == local_378) {
                    /* try { // try from 00949894 to 0094989f has its CatchHandler @ 0094a600 */
                std::__ndk1::
                vector<MaterialShaderManager::CodeInjection,std::__ndk1::allocator<MaterialShaderManager::CodeInjection>>
                ::__push_back_slow_path<MaterialShaderManager::CodeInjection_const&>
                          ((CodeInjection *)&local_388);
              }
              else {
                    /* try { // try from 00949870 to 0094987b has its CatchHandler @ 0094a4b0 */
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string(pbStack_380);
                    /* try { // try from 00949880 to 00949887 has its CatchHandler @ 0094a4b8 */
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string(pbVar16 + 6);
                pbStack_380 = pbVar16 + 0xc;
              }
              if (((ulong)local_3a0 & 1) != 0) {
                operator_delete(local_390);
              }
              if (((ulong)uStack_258 & 1) != 0) {
                operator_delete(local_248);
              }
              if (((ulong)local_270 & 1) != 0) {
                operator_delete(local_260);
              }
            }
            iVar23 = iVar23 + 1;
          }
        }
        iVar23 = 0;
        pplVar43 = (long **)(lVar48 + -0x30);
        while( true ) {
                    /* try { // try from 00949588 to 009495a3 has its CatchHandler @ 0094a634 */
          FUN_0094a94c(acStack_1f0,0x80,0x80,"%s.LodVariation(%u)#position",&local_2f0,iVar23);
                    /* try { // try from 009495a4 to 009495e3 has its CatchHandler @ 0094a654 */
          pbVar37 = (basic_string_conflict *)0x0;
          pcVar29 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
          if ((pcVar29 == (char *)0x0) || (*pcVar29 == '\0')) break;
          FUN_0094a94c(acStack_1f0,0x80,0x80,"%s.LodVariation(%u)",&local_2f0,iVar23);
                    /* try { // try from 009495e4 to 009495f3 has its CatchHandler @ 0094a648 */
          pcVar30 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
          if ((pcVar30 == (char *)0x0) || (*pcVar30 == '\0')) {
LAB_00949584:
            iVar23 = iVar23 + 1;
          }
          else {
            iVar26 = strcasecmp(pcVar29,"before");
            if (iVar26 != 0) {
                    /* try { // try from 00949578 to 00949583 has its CatchHandler @ 0094a648 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)(basic_string_conflict *)(lVar48 + -0x18));
              goto LAB_00949584;
            }
                    /* try { // try from 00949618 to 00949627 has its CatchHandler @ 0094a4fc */
            std::__ndk1::operator+(pcVar30,(basic_string *)pplVar43);
            if ((*(byte *)pplVar43 & 1) != 0) {
              operator_delete(*(void **)(lVar48 + -0x20));
            }
            iVar23 = iVar23 + 1;
            *(uint ***)(lVar48 + -0x20) = local_260;
            *(uint ***)(lVar48 + -0x28) = ppuStack_268;
            *pplVar43 = (long *)local_270;
          }
        }
        if (pbStack_380 != local_388) {
                    /* try { // try from 00949660 to 00949677 has its CatchHandler @ 0094a414 */
          std::__ndk1::operator+
                    ((__ndk1 *)pplVar43,(basic_string_conflict *)(lVar48 + -0x18),pbVar37);
                    /* try { // try from 00949678 to 009496ef has its CatchHandler @ 0094a510 */
          this_00 = (MaterialShaderManager *)MaterialShaderManager::getInstance();
          ppuVar53 = local_260;
          ppuVar14 = local_270;
          lVar51 = *(long *)(in_x0 + 0x110);
          CVar38 = in_x0[0x10];
          pPVar49 = *(Preprocessor **)(in_x0 + 0x20);
          CVar7 = in_x0[0x164];
          Mutex::enterCriticalSection();
          pPVar4 = pPVar1;
          if (((byte)CVar38 & 1) != 0) {
            pPVar4 = pPVar49;
          }
          ppuVar3 = (uint **)((ulong)&local_270 | 1);
          if (((ulong)ppuVar14 & 1) != 0) {
            ppuVar3 = ppuVar53;
          }
          uVar56 = MaterialShaderManager::getCustomShaderHashLocked
                             (this_00,(vector *)&local_388,(char *)ppuVar3,(map *)(lVar51 + 0x28),
                              (map *)(lVar51 + 0x10),(char *)pPVar4,"",CVar7 != (CustomShader)0x0);
          Mutex::leaveCriticalSection();
          **(undefined4 **)(lVar48 + -0x40) = uVar56;
          if (((ulong)local_270 & 1) != 0) {
            operator_delete(local_260);
          }
        }
        iVar22 = iVar22 + 1;
        fVar58 = fVar57;
      } while (bVar19 != false);
      iVar22 = 0;
      do {
                    /* try { // try from 00949968 to 00949983 has its CatchHandler @ 0094a474 */
        FUN_0094a94c(acStack_1f0,0x80,0x80,"CustomShader.Variations.Variation(%u)",iVar22);
                    /* try { // try from 00949984 to 009499b3 has its CatchHandler @ 0094a4f4 */
        pcVar29 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
        if (pcVar29 == (char *)0x0) {
          lVar48 = *(long *)(in_x0 + 0x28);
          in_x0[0x158] = (CustomShader)0x1;
          lVar51 = *(long *)(in_x0 + 0x30) - lVar48;
          pbVar16 = local_388;
          if (lVar51 != 0) {
            uVar44 = 0;
            uVar28 = (lVar51 >> 3) * -0x71c71c71c71c71c7;
            goto LAB_00949f68;
          }
          uVar56 = 1;
          in_x0[0x159] = (CustomShader)0x0;
          goto joined_r0x00949fa4;
        }
        FUN_0094a94c(acStack_1f0,0x80,0x80,"CustomShader.Variations.Variation(%u)#name",iVar22);
                    /* try { // try from 009499b4 to 009499e7 has its CatchHandler @ 0094a4ac */
        pcVar30 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
        if (pcVar30 == (char *)0x0) {
LAB_0094995c:
          bVar19 = false;
          iVar22 = iVar22 + 1;
        }
        else {
          FUN_0094a94c(acStack_1f0,0x80,0x80,"CustomShader.Variations.Variation(%u)#groups",iVar22);
          local_270 = (uint **)0x0;
          ppuStack_268 = (uint **)0x0;
          local_260 = (uint **)0x0;
                    /* try { // try from 009499f0 to 009499ff has its CatchHandler @ 0094a50c */
          pcVar31 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
          if (pcVar31 == (char *)0x0) {
            uVar28 = (ulong)local_3a0 >> 0x28;
            local_3a0 = (uint *)CONCAT35((uint3)uVar28 & 0xffff00,0x6573616208);
            if (local_260 <= ppuStack_268) {
                    /* try { // try from 00949a68 to 00949a73 has its CatchHandler @ 0094a368 */
              std::__ndk1::
              vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              ::
              __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                          *)&local_270,(basic_string *)&local_3a0);
              goto LAB_00949a74;
            }
            ppuStack_268[2] = local_390;
            ppuStack_268[1] = puStack_398;
            *ppuStack_268 = local_3a0;
            ppuStack_268 = ppuStack_268 + 3;
          }
          else {
            uVar28 = (ulong)local_3a0 >> 0x10;
            local_3a0 = (uint *)CONCAT62((uint6)uVar28 & 0xffffffffff00,0x2002);
                    /* try { // try from 00949a10 to 00949a23 has its CatchHandler @ 0094a3d4 */
            StringUtil::split(pcVar31,(basic_string *)&local_3a0,'\0',false,(vector *)&local_270);
LAB_00949a74:
            if (((ulong)local_3a0 & 1) != 0) {
              operator_delete(local_390);
            }
          }
                    /* try { // try from 00949a84 to 00949abf has its CatchHandler @ 0094a50c */
          addVariation(in_x0,pcVar30,pcVar29,(vector *)&local_270);
          FUN_0094a94c(acStack_1f0,0x80,0x80,"CustomShader.Variations.Variation(%u).UvUsages",iVar22
                      );
          iVar23 = DomXMLFile::getNumElements((DomXMLFile *)&local_170,acStack_1f0);
          if (iVar23 == 0) {
LAB_00949cd0:
            bVar19 = false;
            bVar10 = true;
joined_r0x00949cdc:
            ppuVar14 = local_270;
            ppuVar53 = ppuStack_268;
            if (local_270 == (uint **)0x0) goto LAB_00949dd4;
joined_r0x00949ce8:
            while (ppuVar3 = ppuVar53, ppuVar17 = local_270, ppuVar3 != local_270) {
              ppuVar53 = ppuVar3 + -3;
              local_270 = ppuVar17;
              if ((*(byte *)ppuVar53 & 1) != 0) {
                local_270 = ppuVar14;
                operator_delete(ppuVar3[-1]);
                ppuVar14 = local_270;
                local_270 = ppuVar17;
              }
            }
            ppuStack_268 = local_270;
            local_270 = ppuVar14;
            operator_delete(ppuVar14);
            if (bVar10) goto LAB_0094995c;
          }
          else {
            lVar48 = *(long *)(in_x0 + 0x118);
                    /* try { // try from 00949acc to 00949ae7 has its CatchHandler @ 0094a3d0 */
            FUN_0094a94c(acStack_1f0,0x80,0x80,
                         "CustomShader.Variations.Variation(%u).UvUsages.UvUsage",iVar22);
                    /* try { // try from 00949ae8 to 00949af3 has its CatchHandler @ 0094a3cc */
            iVar23 = DomXMLFile::getNumElements((DomXMLFile *)&local_170,acStack_1f0);
            if (iVar23 == 0) goto LAB_00949cd0;
            iVar26 = 0;
            do {
              local_3c0 = local_3c0 & 0xffffffff00000000;
                    /* try { // try from 00949b0c to 00949b2b has its CatchHandler @ 0094a4ec */
              FUN_0094a94c(acStack_1f0,0x80,0x80,
                           "CustomShader.Variations.Variation(%u).UvUsages.UvUsage(%u)#textureName",
                           iVar22,iVar26);
                    /* try { // try from 00949b2c to 00949b5b has its CatchHandler @ 0094a584 */
              pcVar29 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
              FUN_0094a94c(acStack_1f0,0x80,0x80,
                           "CustomShader.Variations.Variation(%u).UvUsages.UvUsage(%u)#uvType",
                           iVar22,iVar26);
                    /* try { // try from 00949b5c to 00949b9b has its CatchHandler @ 0094a5c4 */
              pcVar30 = (char *)DomXMLFile::getValue((DomXMLFile *)&local_170,acStack_1f0,false);
              FUN_0094a94c(acStack_1f0,0x80,0x80,
                           "CustomShader.Variations.Variation(%u).UvUsages.UvUsage(%u)#uvScale",
                           iVar22,iVar26);
              uVar56 = Properties::getFloat((Properties *)&local_170,acStack_1f0,1.0);
              local_3c0 = CONCAT44(uVar56,(undefined4)local_3c0);
              if (pcVar29 == (char *)0x0) {
                if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                   (iVar23 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                   iVar23 != 0)) {
                    /* try { // try from 00949e20 to 00949e2b has its CatchHandler @ 0094a2fc */
                  LogManager::LogManager
                            ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                  __cxa_atexit(LogManager::~LogManager,
                               &LogManager::getInstance()::singletonLogManager,&PTR_LOOP_00fd8de0);
                  __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
                }
                    /* try { // try from 00949d48 to 00949d5b has its CatchHandler @ 0094a350 */
                LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                   "Error (custom shader UvUsage): missing mandatory attribute \'textureName\'\n"
                                  );
LAB_00949dc4:
                bVar10 = false;
                bVar19 = true;
                goto joined_r0x00949cdc;
              }
              if (pcVar30 == (char *)0x0) {
                if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                   (iVar23 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                   iVar23 != 0)) {
                    /* try { // try from 00949e68 to 00949e73 has its CatchHandler @ 0094a300 */
                  LogManager::LogManager
                            ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                  __cxa_atexit(LogManager::~LogManager,
                               &LogManager::getInstance()::singletonLogManager,&PTR_LOOP_00fd8de0);
                  __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
                }
                    /* try { // try from 00949d78 to 00949d8b has its CatchHandler @ 0094a348 */
                LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                   "Error (custom shader UvUsage): missing mandatory attribute \'uvType\'\n"
                                  );
                goto LAB_00949dc4;
              }
              uVar28 = convertUvTypeNameToEnum(pcVar30,(UV_TYPE *)&local_3c0);
              if ((uVar28 & 1) == 0) {
                if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                   (iVar23 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                   iVar23 != 0)) {
                    /* try { // try from 00949eb0 to 00949ebb has its CatchHandler @ 0094a308 */
                  LogManager::LogManager
                            ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                  __cxa_atexit(LogManager::~LogManager,
                               &LogManager::getInstance()::singletonLogManager,&PTR_LOOP_00fd8de0);
                  __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
                }
                    /* try { // try from 00949da8 to 00949dbb has its CatchHandler @ 0094a344 */
                LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                   "Error (custom shader UvUsage): allowed values for attribute uvType: uv0, uv1, uv2, uv3, worldspace or custom\n"
                                  );
                goto LAB_00949dc4;
              }
              iVar27 = strcasecmp(pcVar29,"baseMap");
              if (iVar27 == 0) {
                local_3ec = 0;
LAB_00949c7c:
                    /* try { // try from 00949c84 to 00949c9f has its CatchHandler @ 0094a4a4 */
                local_3a0 = &local_3ec;
                uVar21 = std::__ndk1::
                         __hash_table<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,std::__ndk1::__unordered_map_hasher<CustomShader::STANDARD_TEXTURE,std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<CustomShader::STANDARD_TEXTURE,std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,std::__ndk1::equal_to<CustomShader::STANDARD_TEXTURE>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>>>
                         ::
                         __emplace_unique_key_args<CustomShader::STANDARD_TEXTURE,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<CustomShader::STANDARD_TEXTURE_const&>,std::__ndk1::tuple<>>
                                   ((STANDARD_TEXTURE *)(lVar48 + -0x28),
                                    (piecewise_construct_t *)&local_3ec,(tuple *)&DAT_00519cd8,
                                    (tuple *)&local_3a0);
              }
              else {
                iVar27 = strcasecmp(pcVar29,"normalMap");
                if (iVar27 == 0) {
                  local_3ec = 1;
                  goto LAB_00949c7c;
                }
                iVar27 = strcasecmp(pcVar29,"glossMap");
                if (iVar27 == 0) {
                  local_3ec = 2;
                  goto LAB_00949c7c;
                }
                iVar27 = strcasecmp(pcVar29,"emissiveMap");
                if (iVar27 == 0) {
                  local_3ec = 3;
                  goto LAB_00949c7c;
                }
                    /* try { // try from 00949c28 to 00949c5b has its CatchHandler @ 0094a404 */
                uVar28 = getTextureIndex(in_x0,(int)((ulong)(*(long *)(in_x0 + 0x118) -
                                                            *(long *)(in_x0 + 0x110)) >> 5) *
                                               -0x49249249 - 1,pcVar29,&uStack_3f0);
                if ((uVar28 & 1) == 0) {
                  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                     (iVar23 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                     iVar23 != 0)) {
                    /* try { // try from 00949ef8 to 00949f03 has its CatchHandler @ 0094a304 */
                    LogManager::LogManager
                              ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                    __cxa_atexit(LogManager::~LogManager,
                                 &LogManager::getInstance()::singletonLogManager,&PTR_LOOP_00fd8de0)
                    ;
                    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
                  }
                    /* try { // try from 00949dec to 00949e03 has its CatchHandler @ 0094a330 */
                  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                     "Error (custom shader UvUsage): no texture named \'%s\'\n",
                                     pcVar29);
                  goto LAB_00949dc4;
                }
                local_3a0 = &uStack_3f0;
                uVar21 = std::__ndk1::
                         __hash_table<std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>>>
                         ::
                         __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>>
                                   ((uint *)(lVar48 + -0x50),(piecewise_construct_t *)&uStack_3f0,
                                    (tuple *)&DAT_00519cd8,(tuple *)&local_3a0);
              }
              iVar26 = iVar26 + 1;
              *(ulong *)((ulong)uVar21 + 0x14) = local_3c0;
            } while (iVar23 != iVar26);
            bVar19 = false;
            bVar10 = true;
            ppuVar14 = local_270;
            ppuVar53 = ppuStack_268;
            if (local_270 != (uint **)0x0) goto joined_r0x00949ce8;
LAB_00949dd4:
            if (bVar10) goto LAB_0094995c;
          }
        }
      } while (!bVar19);
      uVar56 = 0;
      pbVar16 = local_388;
      goto joined_r0x00949fa4;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar22 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar22 != 0))
    {
                    /* try { // try from 0094a16c to 0094a177 has its CatchHandler @ 0094a2e8 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    if (((byte)in_x0[0x10] & 1) != 0) {
      pPVar1 = *(Preprocessor **)(in_x0 + 0x20);
    }
                    /* try { // try from 00947a5c to 00947a77 has its CatchHandler @ 0094a3c0 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Out-dated custom shader. \'%s\' has version %u . Please convert this file to version %u .\n"
                       ,pPVar1,(ulong)uVar21,5);
  }
  uVar56 = 0;
  goto LAB_00947a7c;
  while (uVar44 = (ulong)((int)uVar44 + 1), uVar44 <= uVar28 && uVar28 - uVar44 != 0) {
LAB_00949f68:
    if (*(int *)(lVar48 + uVar44 * 0x48 + 0x10) != 2) {
      in_x0[0x158] = (CustomShader)0x0;
      break;
    }
  }
  in_x0[0x159] = (CustomShader)0x0;
  if (lVar51 != 0) {
    uVar44 = 0;
    do {
      if (*(int *)(lVar48 + uVar44 * 0x48 + 0x10) == 1) {
        uVar56 = 1;
        in_x0[0x159] = (CustomShader)0x1;
        goto joined_r0x00949fa4;
      }
      uVar44 = (ulong)((int)uVar44 + 1);
    } while (uVar44 <= uVar28 && uVar28 - uVar44 != 0);
  }
  uVar56 = 1;
joined_r0x00949fa4:
  local_388 = pbVar16;
  pbVar18 = pbStack_380;
  if (pbVar16 != (basic_string *)0x0) {
    while (pbVar11 = pbVar18, pbVar11 != pbVar16) {
      if ((*(byte *)(pbVar11 + -6) & 1) != 0) {
        operator_delete(*(void **)(pbVar11 + -2));
      }
      pbVar18 = pbVar11 + -0xc;
      if ((*(byte *)(pbVar11 + -0xc) & 1) != 0) {
        operator_delete(*(void **)(pbVar11 + -8));
      }
    }
    pbStack_380 = pbVar16;
    operator_delete(local_388);
  }
LAB_0094a0d8:
  pplVar43 = local_370;
  pplVar42 = pplStack_368;
  if (local_370 != (long **)0x0) {
    while (pplVar15 = pplVar42, pplVar15 != pplVar43) {
      pplVar42 = pplVar15 + -3;
      if ((*(byte *)pplVar42 & 1) != 0) {
        operator_delete(pplVar15[-1]);
      }
    }
    pplStack_368 = pplVar43;
    operator_delete(local_370);
  }
  if ((local_3e8 & 1) != 0) {
    operator_delete(local_3d8);
  }
LAB_00947a7c:
  DomXMLFile::~DomXMLFile((DomXMLFile *)&local_170);
  if (*(long *)(lVar9 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar56;
}


