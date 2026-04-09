// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertSection
// Entry Point: 00c2b2a4
// Size: 11952 bytes
// Signature: undefined __cdecl convertSection(ConversionContext * param_1, IR_Section * param_2, vector * param_3, vector * param_4, char * param_5, char * param_6, CodeStringStream * param_7, CodeStringStream * param_8, CodeStringStream * param_9, char * param_10, vector * param_11)


/* WARNING: Removing unreachable block (ram,0x00c2b9fc) */
/* WARNING: Removing unreachable block (ram,0x00c2b9f4) */
/* WARNING: Removing unreachable block (ram,0x00c2ca98) */
/* WARNING: Type propagation algorithm not settling */
/* IR_HllConvertUtil::convertSection(IR_HllConvertUtil::ConversionContext&, IR_Section*,
   std::__ndk1::vector<IR_HllConvertUtil::RegContents,
   std::__ndk1::allocator<IR_HllConvertUtil::RegContents> >&,
   std::__ndk1::vector<IR_Function::Param, std::__ndk1::allocator<IR_Function::Param> > const&, char
   const*, char const*, CodeStringStream&, CodeStringStream&, CodeStringStream&, char const*,
   std::__ndk1::vector<IR_HllConvertUtil::GlobalData,
   std::__ndk1::allocator<IR_HllConvertUtil::GlobalData> > const&) */

void IR_HllConvertUtil::convertSection
               (ConversionContext *param_1,IR_Section *param_2,vector *param_3,vector *param_4,
               char *param_5,char *param_6,CodeStringStream *param_7,CodeStringStream *param_8,
               CodeStringStream *param_9,char *param_10,vector *param_11)

{
  IR_RegisterSet *this;
  undefined2 *puVar1;
  uint uVar2;
  char **ppcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  ShaderLanguage SVar12;
  byte bVar13;
  char cVar14;
  IR_LANGUAGE IVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  byte bVar19;
  byte bVar20;
  bool bVar21;
  undefined2 uVar22;
  bool bVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  GsTBasicType GVar30;
  IR_LANGUAGE IVar31;
  long **pplVar32;
  long **pplVar33;
  void *pvVar34;
  IR_Section *pIVar35;
  IR_Section *pIVar36;
  undefined8 *puVar37;
  undefined8 uVar38;
  IR_Type *pIVar39;
  int *piVar40;
  ulong *puVar41;
  char *pcVar42;
  long **pplVar43;
  long **pplVar44;
  long **pplVar45;
  IR_Type **ppIVar46;
  ShaderLanguage *pSVar47;
  byte *pbVar48;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar49;
  int *this_00;
  char **ppcVar50;
  long lVar51;
  long **pplVar52;
  undefined8 *puVar53;
  byte *pbVar54;
  long **pplVar55;
  long **pplVar56;
  long lVar57;
  long *plVar58;
  long *plVar59;
  ConversionContext *pCVar60;
  long lVar61;
  int iVar62;
  ulong uVar63;
  ulong uVar64;
  ulong uVar65;
  char *pcVar66;
  int iVar67;
  uint *puVar68;
  ulong uVar69;
  long **local_2c0;
  int local_27c;
  int local_270;
  byte local_258 [16];
  void *local_248;
  ulong local_240;
  ulong uStack_238;
  void *local_230;
  ulong local_220;
  ulong uStack_218;
  void *local_210;
  undefined8 local_200;
  long **pplStack_1f8;
  long **local_1f0;
  undefined8 local_1e8;
  long **local_1e0;
  void *local_1d8;
  undefined8 local_1d0;
  long **pplStack_1c8;
  long **local_1c0;
  undefined6 local_1b0;
  undefined2 uStack_1aa;
  undefined6 uStack_1a8;
  byte local_1a0;
  undefined5 uStack_19f;
  undefined2 uStack_19a;
  undefined6 uStack_198;
  undefined2 uStack_192;
  void *local_190;
  undefined8 local_180;
  long **pplStack_178;
  long **local_170;
  long *local_168;
  undefined8 local_160;
  void *pvStack_158;
  ulong local_150;
  undefined8 uStack_148;
  void *local_140;
  long local_78;
  
  lVar18 = tpidr_el0;
  local_78 = *(long *)(lVar18 + 0x28);
  pSVar47 = (ShaderLanguage *)(param_1 + 0x10);
  SVar12 = *pSVar47;
  this_00 = *(int **)param_1 + 4;
  iVar24 = **(int **)param_1;
  uVar17 = SVar12 - 3;
  IVar15 = (uint)(iVar24 - 3U < 2) << 1;
  if (iVar24 == 5) {
    IVar15 = 1;
  }
  pplVar43 = (long **)param_3;
  pplVar44 = (long **)param_4;
  pplVar45 = (long **)param_5;
  ppIVar46 = (IR_Type **)param_6;
  iVar24 = strcmp(param_5,"main_vp");
  if (((iVar24 == 0) || (iVar24 = strcmp(param_5,"main_fp"), iVar24 == 0)) ||
     (iVar24 = strcmp(param_5,"main_cp"), iVar24 == 0)) {
    local_2c0 = (long **)&DAT_004fce31;
    if (SVar12 != 6) {
      local_2c0 = (long **)param_5;
    }
    bVar21 = true;
  }
  else {
    bVar21 = false;
    local_2c0 = (long **)param_6;
  }
  lVar8 = *(long *)(param_2 + 0x20);
  lVar9 = *(long *)(param_2 + 0x28);
  if ((int)((ulong)(lVar9 - lVar8) >> 3) != 0) {
    uVar2 = (uint)(SVar12 - 1 < 6) & 0x23U >> (ulong)(SVar12 - 1 & 0x1f);
    pplVar52 = (long **)((ulong)&local_180 | 1);
    uVar16 = uVar17 < 2 | uVar2;
    pplVar55 = (long **)((ulong)&local_1d0 | 1);
    puVar53 = (undefined8 *)((ulong)&local_1d0 | 2);
    uVar63 = 0;
    ppcVar50 = (char **)&s_metalSpecialConversions;
    if (SVar12 != 5) {
      ppcVar50 = (char **)0x0;
    }
    ppcVar3 = (char **)s_hlslSpecialConversions;
    if (uVar2 == 0) {
      ppcVar3 = (char **)s_psslSpecialConversions;
    }
    if (uVar16 == 0) {
      ppcVar3 = ppcVar50;
    }
    bVar23 = 1 < uVar17;
    pcVar4 = "out float4 GS_COLOR_OUTPUT_%u : S_TARGET_OUTPUT%u";
    if (bVar23) {
      pcVar4 = "out float4 GS_COLOR_OUTPUT_%u : SV_Target%u";
    }
    pcVar5 = "out float GS_DEPTH_OUTPUT : S_DEPTH_OUTPUT";
    if (bVar23) {
      pcVar5 = "out float GS_DEPTH_OUTPUT : SV_Depth";
    }
    pcVar6 = "out unsigned int GS_SAMPLE_MASK_OUTPUT : S_COVERAGE";
    if (bVar23) {
      pcVar6 = "out unsigned int GS_SAMPLE_MASK_OUTPUT : SV_Coverage";
    }
    do {
      puVar68 = *(uint **)(*(long *)(param_2 + 0x20) + uVar63 * 8);
      uVar25 = *puVar68;
      if (uVar25 == 6) {
        if (*(int *)(param_2 + 0x38) == 0) {
          local_180 = (long **)((ulong)local_180 & 0xffffffffffff0000);
          lVar51 = *(long *)param_4;
          lVar57 = *(long *)(param_4 + 8);
          if (lVar57 == lVar51) {
            uVar25 = 0;
          }
          else {
            uVar64 = 0;
            iVar24 = 0;
            pplVar33 = pplVar45;
            do {
              lVar61 = lVar51 + uVar64 * 0x20;
              pplVar45 = pplVar33;
              if ((*(byte *)(lVar61 + 0x19) >> 3 & 1) != 0) {
                pplVar45 = *(long ***)(lVar61 + 0x10);
                    /* try { // try from 00c2bcb0 to 00c2bcbf has its CatchHandler @ 00c2e56c */
                getFieldValue((IR_HllConvertUtil *)param_1,(ConversionContext *)param_3,
                              (vector *)
                              (ulong)puVar68[iVar24 + (uint)*(ushort *)((long)puVar68 + 6) + 2],
                              (uint)pplVar45,(IR_Type *)pplVar33);
                pplVar56 = (long **)(lVar51 + uVar64 * 0x20);
                pplVar44 = (long **)*pplVar56;
                if (*(char *)pplVar44 == '$') {
                    /* try { // try from 00c2bcd4 to 00c2bd07 has its CatchHandler @ 00c2e574 */
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  assign((char *)&local_180);
                  pplVar43 = (long **)((ulong)local_1d0 >> 1 & 0x7f);
                  pplVar44 = pplVar55;
                  if (((ulong)local_1d0 & 1) != 0) {
                    pplVar43 = pplStack_1c8;
                    pplVar44 = local_1c0;
                  }
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  append((char *)&local_180,(ulong)pplVar44);
                  pplVar44 = pplVar45;
                  pplVar45 = pplVar33;
                }
                else {
                  pplVar45 = (long **)strlen((char *)pplVar44);
                  pplVar32 = (long **)(ulong)((byte)local_1d0 >> 1);
                  if (((ulong)local_1d0 & 1) != 0) {
                    pplVar32 = pplStack_1c8;
                  }
                  pplVar43 = pplVar44;
                  if (pplVar45 == pplVar32) {
                    /* try { // try from 00c2bd34 to 00c2bd47 has its CatchHandler @ 00c2e4d8 */
                    pplVar43 = (long **)0xffffffffffffffff;
                    iVar26 = std::__ndk1::
                             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                             ::compare((ulong)&local_1d0,0,(char *)0xffffffffffffffff,
                                       (ulong)pplVar44);
                    if (iVar26 == 0) goto LAB_00c2bd7c;
                    pplVar43 = (long **)*pplVar56;
                    pplVar33 = pplVar45;
                  }
                  pplVar45 = pplVar33;
                  pplVar44 = pplVar55;
                  if (((byte)local_1d0 & 1) != 0) {
                    pplVar44 = local_1c0;
                  }
                    /* try { // try from 00c2bd68 to 00c2bd7b has its CatchHandler @ 00c2e574 */
                  CodeStringStream::writeLine((char *)param_7,"%s = %s;\n");
                }
LAB_00c2bd7c:
                if (((ulong)local_1d0 & 1) != 0) {
                  operator_delete(local_1c0);
                }
                iVar24 = iVar24 + 1;
                lVar51 = *(long *)param_4;
                lVar57 = *(long *)(param_4 + 8);
              }
              uVar64 = (ulong)((int)uVar64 + 1);
              pplVar33 = pplVar45;
            } while (uVar64 < (ulong)(lVar57 - lVar51 >> 5));
            uVar25 = (uint)(byte)local_180;
          }
          bVar23 = (uVar25 & 1) != 0;
          pplVar33 = (long **)(ulong)(uVar25 >> 1);
          if (bVar23) {
            pplVar33 = pplStack_178;
          }
          if (pplVar33 == (long **)0x0) {
            if ((SVar12 == 5) && (*(int *)(param_1 + 0x14) == 1)) {
              CodeStringStream::writeLine((char *)param_7,"return _GSSC_FS_OUTPUT;\n");
            }
          }
          else {
            pplVar43 = pplVar52;
            if (bVar23) {
              pplVar43 = local_170;
            }
                    /* try { // try from 00c2c740 to 00c2c797 has its CatchHandler @ 00c2e518 */
            CodeStringStream::writeLine((char *)param_7,&DAT_004eba58);
          }
          CodeStringStream::changeIndent(param_7,-4);
          CodeStringStream::writeLine((char *)param_7,&DAT_004f82c1);
          goto joined_r0x00c2d46c;
        }
        goto LAB_00c2b4f4;
      }
      if (uVar25 == 0x19) {
        if (*(int *)(param_2 + 0x38) == 0) {
          lVar51 = *(long *)param_4;
          lVar57 = *(long *)(param_4 + 8);
          if (lVar57 == lVar51) {
            local_270 = 0;
            bVar23 = false;
            lVar51 = lVar57;
          }
          else {
            uVar64 = 0;
            bVar23 = false;
            uVar25 = 0;
            local_27c = 0;
            local_270 = 0;
            do {
              pplVar33 = (long **)(lVar51 + uVar64 * 0x20);
              if (uVar25 == 0) {
                if (bVar21) {
                  if (uVar2 != 0) {
                    if (*(int *)(param_1 + 0x14) == 2) {
                      pplVar44 = (long **)(ulong)*(uint *)(param_1 + 0x2c);
                      pplVar45 = (long **)(ulong)*(uint *)(param_1 + 0x30);
                      CodeStringStream::writeLine
                                ((char *)param_8,"[numthreads(%u, %u, %u)]\n",
                                 (ulong)*(uint *)(param_1 + 0x28));
                    }
                    if (*pSVar47 == 2) {
                      CodeStringStream::writeLine((char *)param_8,"[RootSignature(RootSig)]\n");
                    }
                    goto LAB_00c2b87c;
                  }
                  if (uVar17 < 2) {
                    if (*(int *)(param_1 + 0x14) == 2) {
                      pplVar44 = (long **)(ulong)*(uint *)(param_1 + 0x2c);
                      pplVar45 = (long **)(ulong)*(uint *)(param_1 + 0x30);
                      CodeStringStream::writeLine
                                ((char *)param_8,"[NUM_THREADS(%u, %u, %u)]\n",
                                 (ulong)*(uint *)(param_1 + 0x28));
                    }
                    goto LAB_00c2b87c;
                  }
                  if (SVar12 != 5) goto LAB_00c2ba60;
                  if (*(int *)(param_1 + 0x14) == 2) {
                    pplVar44 = (long **)(ulong)*(uint *)(param_1 + 0x2c);
                    pplVar45 = (long **)(ulong)*(uint *)(param_1 + 0x30);
                    CodeStringStream::writeLine
                              ((char *)param_8,"// METAL_numThreads %u %u %u\n",
                               (ulong)*(uint *)(param_1 + 0x28));
                  }
LAB_00c2b888:
                  CodeStringStream::writeLine((char *)param_8,"static ");
                  if (*(char *)*pplVar33 != '$') {
                    pcVar42 = "GSSC_FS_OUTPUT %s(";
                    if (*(int *)(param_1 + 0x14) != 1) {
LAB_00c2bac0:
                      pcVar42 = "void %s(";
                    }
                    pplVar43 = local_2c0;
                    CodeStringStream::writeLine((char *)param_8,pcVar42);
                    goto joined_r0x00c2bad4;
                  }
                }
                else {
LAB_00c2b87c:
                  if (SVar12 == 5) goto LAB_00c2b888;
LAB_00c2ba60:
                  if (*(char *)*pplVar33 != '$') goto LAB_00c2bac0;
                }
                IR_Type::getTypeString((IR_LANGUAGE)*(undefined8 *)(lVar51 + uVar64 * 0x20 + 0x10));
                pplVar43 = pplVar52;
                if (((ulong)local_180 & 1) != 0) {
                  pplVar43 = local_170;
                }
                pplVar44 = local_2c0;
                    /* try { // try from 00c2ba98 to 00c2baab has its CatchHandler @ 00c2e548 */
                CodeStringStream::writeLine((char *)param_8,"%s %s(");
                if (((ulong)local_180 & 1) != 0) {
                  operator_delete(local_170);
                }
              }
              else {
joined_r0x00c2bad4:
                if (bVar23) {
                  CodeStringStream::writeLine((char *)param_8,&DAT_005097bc);
                }
                lVar57 = lVar51 + uVar64 * 0x20;
                pplVar56 = (long **)(lVar57 + 0x10);
                if (SVar12 == 5) {
                  lVar61 = *(long *)param_11;
                  lVar10 = *(long *)(param_11 + 8);
                  if (lVar10 - lVar61 == 0) {
                    pplVar43 = (long **)&DAT_0050a39f;
                  }
                  else {
                    uVar69 = 0;
                    do {
                      if ((*(int *)(lVar61 + uVar69 * 0x40) == 5) &&
                         (iVar24 = strcmp(*(char **)(lVar61 + uVar69 * 0x40 + 8),(char *)*pplVar33),
                         iVar24 == 0)) {
                        bVar20 = 0;
                        bVar19 = 0;
                        bVar13 = *(byte *)(lVar57 + 0x19);
                        goto joined_r0x00c2b680;
                      }
                      uVar69 = (ulong)((int)uVar69 + 1);
                    } while (uVar69 < (ulong)(lVar10 - lVar61 >> 6));
                    pplVar43 = (long **)&DAT_0050a39f;
                  }
                }
                else {
                  pplVar43 = *(long ***)
                              (IR_QualFlags::getInOutSpecifier()::pSpecifiers +
                              ((ulong)(*(uint *)(lVar57 + 0x18) >> 10) & 3) * 8);
                }
                IR_Type::getTypeString((IR_LANGUAGE)*pplVar56);
                pplVar45 = (long **)*pplVar33;
                pplVar44 = pplVar52;
                if (((ulong)local_180 & 1) != 0) {
                  pplVar44 = local_170;
                }
                    /* try { // try from 00c2b740 to 00c2b753 has its CatchHandler @ 00c2e594 */
                CodeStringStream::writeLine((char *)param_8,"%s %s %s");
                if (((ulong)local_180 & 1) != 0) {
                  operator_delete(local_170);
                }
                pcVar42 = *(char **)(lVar51 + uVar64 * 0x20 + 8);
                local_270 = local_270 + 1;
                if ((!(bool)(bVar21 ^ 1U | pcVar42 == (char *)0x0)) &&
                   (pplVar32 = (long **)getSystemVariableInfo(pSVar47,pcVar42),
                   pplVar32 != (long **)0x0)) {
                  pplVar43 = (long **)*pplVar32;
                  CodeStringStream::writeLine((char *)param_8," : %s");
                }
                bVar20 = 1;
                bVar19 = 1;
                bVar13 = *(byte *)(lVar57 + 0x19);
joined_r0x00c2b680:
                if ((bVar13 >> 2 & 1) != 0) {
                  uVar27 = puVar68[local_27c + 2];
                  if (-1 < (int)uVar27) {
                    if (SVar12 == 5) {
                      plVar58 = *pplVar33;
                      pplVar33 = (long **)strlen((char *)plVar58);
                      if ((long **)0xffffffffffffffef < pplVar33) {
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__basic_string_common<true>::__throw_length_error();
                      }
                      if (pplVar33 < (long **)0x17) {
                        local_1e8 = CONCAT71(local_1e8._1_7_,(char)((int)pplVar33 << 1));
                        pvVar34 = (void *)((ulong)&local_1e8 | 1);
                        if (pplVar33 != (long **)0x0) goto LAB_00c2b8e4;
                      }
                      else {
                        pvVar34 = operator_new((ulong)(pplVar33 + 2) & 0xfffffffffffffff0);
                        local_1e8 = (ulong)(pplVar33 + 2) & 0xfffffffffffffff0 | 1;
                        local_1e0 = pplVar33;
                        local_1d8 = pvVar34;
LAB_00c2b8e4:
                        pplVar43 = pplVar33;
                        memcpy(pvVar34,plVar58,(size_t)pplVar33);
                      }
                      *(undefined *)((long)pvVar34 + (long)pplVar33) = 0;
                    /* try { // try from 00c2b8f8 to 00c2b907 has its CatchHandler @ 00c2e4e8 */
                      renameMetalInputSysVars
                                ((IR_HllConvertUtil *)param_1,(ConversionContext *)&local_1e8,
                                 (basic_string)pplVar43);
                      plVar58 = *pplVar56;
                    /* try { // try from 00c2b90c to 00c2b917 has its CatchHandler @ 00c2e4f0 */
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string((basic_string *)&local_180);
                      pplVar33 = (long **)(*(long *)param_3 + (ulong)uVar27 * 0x20);
                      local_168 = plVar58;
                      if ((*(byte *)pplVar33 & 1) != 0) {
                        operator_delete(pplVar33[2]);
                      }
                      pplVar33[2] = (long *)local_170;
                      pplVar33[1] = (long *)pplStack_178;
                      *pplVar33 = (long *)local_180;
                      local_180 = (long **)((ulong)local_180 & 0xffffffffffff0000);
                      pplVar33[3] = local_168;
                      if (((ulong)local_1d0 & 1) != 0) {
                        operator_delete(local_1c0);
                      }
                      if ((local_1e8 & 1) != 0) {
                        operator_delete(local_1d8);
                      }
                    }
                    else {
                      plVar59 = *pplVar33;
                      plVar58 = *pplVar56;
                      pplVar33 = (long **)strlen((char *)plVar59);
                      if ((long **)0xffffffffffffffef < pplVar33) {
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__basic_string_common<true>::__throw_length_error();
                      }
                      if (pplVar33 < (long **)0x17) {
                        local_180 = (long **)CONCAT71(local_180._1_7_,(char)((int)pplVar33 << 1));
                        pplVar56 = pplVar52;
                        if (pplVar33 != (long **)0x0) goto LAB_00c2b998;
                      }
                      else {
                        pplVar56 = (long **)operator_new((ulong)(pplVar33 + 2) & 0xfffffffffffffff0)
                        ;
                        local_180 = (long **)((ulong)(pplVar33 + 2) & 0xfffffffffffffff0 | 1);
                        pplStack_178 = pplVar33;
                        local_170 = pplVar56;
LAB_00c2b998:
                        pplVar43 = pplVar33;
                        memcpy(pplVar56,plVar59,(size_t)pplVar33);
                      }
                      *(undefined *)((long)pplVar56 + (long)pplVar33) = 0;
                      pplVar33 = (long **)(*(long *)param_3 + (ulong)uVar27 * 0x20);
                      local_168 = plVar58;
                      if ((*(byte *)pplVar33 & 1) != 0) {
                        operator_delete(pplVar33[2]);
                      }
                      pplVar33[2] = (long *)local_170;
                      pplVar33[1] = (long *)pplStack_178;
                      *pplVar33 = (long *)local_180;
                      local_180 = (long **)((ulong)local_180 & 0xffffffffffff0000);
                      pplVar33[3] = local_168;
                    }
                  }
                  local_27c = local_27c + 1;
                  bVar19 = bVar20;
                }
                bVar23 = (bool)(bVar19 | bVar23);
              }
              uVar25 = uVar25 + 1;
              uVar64 = (ulong)uVar25;
              lVar51 = *(long *)param_4;
              lVar57 = *(long *)(param_4 + 8);
            } while (uVar64 < (ulong)(lVar57 - lVar51 >> 5));
          }
          if (SVar12 == 5) {
            pplVar45 = (long **)(ulong)(local_270 != 0);
            pplVar44 = (long **)0x0;
            pplVar43 = (long **)param_11;
            writeMetalArguments(param_1,param_8,param_11,false,local_270 != 0);
            lVar51 = *(long *)param_4;
            lVar57 = *(long *)(param_4 + 8);
          }
          if (lVar57 == lVar51) {
            pplVar43 = local_2c0;
            CodeStringStream::writeLine((char *)param_8,"void %s(");
          }
          if (SVar12 != 5) {
            if (param_1[0x20] != (ConversionContext)0x0) {
              if (bVar23) {
                CodeStringStream::writeLine((char *)param_8,&DAT_005097bc);
              }
              pplVar43 = (long **)0x0;
              pplVar44 = (long **)0x0;
              CodeStringStream::writeLine((char *)param_8,pcVar4);
              bVar23 = true;
            }
            if (param_1[0x21] != (ConversionContext)0x0) {
              if (bVar23) {
                CodeStringStream::writeLine((char *)param_8,&DAT_005097bc);
              }
              pplVar43 = (long **)0x1;
              pplVar44 = (long **)0x1;
              bVar23 = true;
              CodeStringStream::writeLine((char *)param_8,pcVar4);
            }
            if (param_1[0x22] != (ConversionContext)0x0) {
              if (bVar23) {
                CodeStringStream::writeLine((char *)param_8,&DAT_005097bc);
              }
              pplVar43 = (long **)0x2;
              pplVar44 = (long **)0x2;
              CodeStringStream::writeLine((char *)param_8,pcVar4);
              bVar23 = true;
            }
            if (param_1[0x23] != (ConversionContext)0x0) {
              if (bVar23) {
                CodeStringStream::writeLine((char *)param_8,&DAT_005097bc);
              }
              pplVar43 = (long **)0x3;
              pplVar44 = (long **)0x3;
              CodeStringStream::writeLine((char *)param_8,pcVar4);
              bVar23 = true;
            }
            if (param_1[0x24] != (ConversionContext)0x0) {
              if (bVar23) {
                CodeStringStream::writeLine((char *)param_8,&DAT_005097bc);
              }
              CodeStringStream::writeLine((char *)param_8,pcVar5);
              bVar23 = true;
            }
            if (param_1[0x25] != (ConversionContext)0x0) {
              if (bVar23) {
                CodeStringStream::writeLine((char *)param_8,&DAT_005097bc);
              }
              CodeStringStream::writeLine((char *)param_8,pcVar6);
            }
          }
          if (((param_10 == (char *)0x0) || (SVar12 == 5)) || (*param_10 == '\0')) {
            CodeStringStream::writeLine((char *)param_8,") \n{\n");
          }
          else {
            pplVar43 = (long **)param_10;
            CodeStringStream::writeLine((char *)param_8,") : %s\n{\n");
          }
          CodeStringStream::changeIndent(param_8,4);
          if ((SVar12 == 5) && (*(int *)(param_1 + 0x14) == 1)) {
            CodeStringStream::writeLine((char *)param_8,"GSSC_FS_OUTPUT _GSSC_FS_OUTPUT;\n");
          }
        }
        goto LAB_00c2b4f4;
      }
      uVar27 = puVar68[1];
      if ((uVar25 & 0xfffffffe) == 0x14) {
        plVar58 = (long *)IR_InstructionSequence::getSymbol
                                    ((IR_InstructionSequence *)param_2,
                                     *(uint *)((long)puVar68 +
                                              ((ulong)(uVar27 >> 0xe) & 0x3fffc) + 8));
        bVar23 = (*(uint *)plVar58[9] | ((uint *)plVar58[9])[2]) != 0;
        if (bVar23) {
          uVar25 = puVar68[2];
        }
        else {
          local_180 = (long **)((ulong)local_180 & 0xffffffff00000000);
          uVar25 = IR_Function::storeConst(*(IR_Function **)(param_1 + 8),(IR_Const *)&local_180);
          uVar25 = uVar25 | 0x80000000;
        }
        uVar27 = (uint)bVar23;
        lVar51 = plVar58[4];
        pplStack_178 = (long **)0x0;
        local_180 = (long **)0x0;
        local_170 = (long **)0x0;
        if (0 < (int)((ulong)(plVar58[5] - lVar51) >> 3) * -0x55555555) {
          lVar57 = 0;
          iVar24 = 1;
          lVar61 = 0x10;
          do {
            uVar28 = *(uint *)(*(long *)(lVar51 + lVar61) + 0x10) & 0xc00;
            if (uVar28 == 0xc00) {
              pbVar54 = (byte *)(*(long *)param_3 +
                                (ulong)puVar68[iVar24 + (uint)*(ushort *)((long)puVar68 + 6) + 2] *
                                0x20);
              uVar64 = *(ulong *)(pbVar54 + 8);
              pbVar48 = *(byte **)(pbVar54 + 0x10);
              if ((*pbVar54 & 1) == 0) {
                pbVar48 = pbVar54 + 1;
                uVar64 = (ulong)(*pbVar54 >> 1);
              }
              pbVar54 = (byte *)"<<ERROR>>";
              if (uVar64 != 0) {
                pbVar54 = pbVar48;
              }
              pplVar43 = (long **)strlen((char *)pbVar54);
              if ((long **)0xffffffffffffffef < pplVar43) {
                    /* try { // try from 00c2e130 to 00c2e137 has its CatchHandler @ 00c2e560 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_length_error();
              }
              if (pplVar43 < (long **)0x17) {
                local_1d0 = (long **)CONCAT71(local_1d0._1_7_,(char)((int)pplVar43 << 1));
                pplVar44 = pplVar55;
                if (pplVar43 != (long **)0x0) goto LAB_00c2bff4;
              }
              else {
                    /* try { // try from 00c2bfdc to 00c2bfe3 has its CatchHandler @ 00c2e51c */
                pplVar44 = (long **)operator_new((ulong)(pplVar43 + 2) & 0xfffffffffffffff0);
                local_1d0 = (long **)((ulong)(pplVar43 + 2) & 0xfffffffffffffff0 | 1);
                pplStack_1c8 = pplVar43;
                local_1c0 = pplVar44;
LAB_00c2bff4:
                memcpy(pplVar44,pbVar54,(size_t)pplVar43);
              }
              *(undefined *)((long)pplVar44 + (long)pplVar43) = 0;
              if (pplStack_178 < local_170) {
                iVar24 = iVar24 + 1;
LAB_00c2bde8:
                pplStack_178[2] = (long *)local_1c0;
                pplStack_178[1] = (long *)pplStack_1c8;
                *pplStack_178 = (long *)local_1d0;
                pplStack_178 = pplStack_178 + 3;
              }
              else {
                    /* try { // try from 00c2c018 to 00c2c023 has its CatchHandler @ 00c2e530 */
                std::__ndk1::
                vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                ::
                __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                          ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                            *)&local_180,(basic_string *)&local_1d0);
                if (((ulong)local_1d0 & 1) != 0) {
                  operator_delete(local_1c0);
                }
                iVar24 = iVar24 + 1;
              }
LAB_00c2be00:
              uVar27 = uVar27 + 1;
            }
            else {
              if (uVar28 == 0x800) {
                uVar65 = (ulong)puVar68[uVar27 + 2];
                lVar51 = *(long *)param_3;
                pbVar54 = (byte *)(lVar51 + uVar65 * 0x20);
                bVar13 = *pbVar54;
                uVar69 = *(ulong *)(pbVar54 + 8);
                uVar64 = (ulong)(bVar13 >> 1);
                if ((bVar13 & 1) != 0) {
                  uVar64 = uVar69;
                }
                if (uVar64 == 0) {
                  ppIVar46 = (IR_Type **)param_7;
                    /* try { // try from 00c2bed8 to 00c2bef7 has its CatchHandler @ 00c2e4dc */
                  setRegisterValue(param_1,param_3,puVar68[uVar27 + 2],(char *)0x0,(uint)pplVar45,
                                   param_7,param_8,false);
                  lVar51 = *(long *)param_3;
                  uVar69 = *(ulong *)(lVar51 + uVar65 * 0x20 + 8);
                }
                pbVar54 = (byte *)(lVar51 + uVar65 * 0x20);
                pbVar48 = *(byte **)(pbVar54 + 0x10);
                if ((*pbVar54 & 1) == 0) {
                  pbVar48 = pbVar54 + 1;
                  uVar69 = (ulong)(*pbVar54 >> 1);
                }
                pbVar54 = (byte *)"<<ERROR>>";
                if (uVar69 != 0) {
                  pbVar54 = pbVar48;
                }
                pplVar43 = (long **)strlen((char *)pbVar54);
                if ((long **)0xffffffffffffffef < pplVar43) {
                    /* try { // try from 00c2e138 to 00c2e13f has its CatchHandler @ 00c2e558 */
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_length_error();
                }
                if (pplVar43 < (long **)0x17) {
                  local_1d0 = (long **)CONCAT71(local_1d0._1_7_,(char)((int)pplVar43 << 1));
                  pplVar44 = pplVar55;
                  if (pplVar43 != (long **)0x0) goto LAB_00c2c088;
                }
                else {
                    /* try { // try from 00c2c070 to 00c2c077 has its CatchHandler @ 00c2e528 */
                  pplVar44 = (long **)operator_new((ulong)(pplVar43 + 2) & 0xfffffffffffffff0);
                  local_1d0 = (long **)((ulong)(pplVar43 + 2) & 0xfffffffffffffff0 | 1);
                  pplStack_1c8 = pplVar43;
                  local_1c0 = pplVar44;
LAB_00c2c088:
                  memcpy(pplVar44,pbVar54,(size_t)pplVar43);
                }
                *(undefined *)((long)pplVar44 + (long)pplVar43) = 0;
                if (pplStack_178 < local_170) goto LAB_00c2bde8;
                    /* try { // try from 00c2c0bc to 00c2c0c7 has its CatchHandler @ 00c2e524 */
                std::__ndk1::
                vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                ::
                __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                          ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                            *)&local_180,(basic_string *)&local_1d0);
                if (((ulong)local_1d0 & 1) != 0) {
                  operator_delete(local_1c0);
                }
                goto LAB_00c2be00;
              }
              if (uVar28 == 0x400) {
                    /* try { // try from 00c2be68 to 00c2be77 has its CatchHandler @ 00c2e550 */
                getFieldValue((IR_HllConvertUtil *)param_1,(ConversionContext *)param_3,
                              (vector *)
                              (ulong)puVar68[iVar24 + (uint)*(ushort *)((long)puVar68 + 6) + 2],
                              (uint)*(undefined8 *)(*(long *)(lVar51 + lVar61) + 8),
                              (IR_Type *)pplVar45);
                if (pplStack_178 < local_170) {
                  iVar24 = iVar24 + 1;
                  pplStack_178[2] = (long *)local_1c0;
                  pplStack_178[1] = (long *)pplStack_1c8;
                  *pplStack_178 = (long *)local_1d0;
                  pplStack_178 = pplStack_178 + 3;
                }
                else {
                    /* try { // try from 00c2c044 to 00c2c04f has its CatchHandler @ 00c2e534 */
                  std::__ndk1::
                  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  ::
                  __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                            ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                              *)&local_180,(basic_string *)&local_1d0);
                  if (((ulong)local_1d0 & 1) != 0) {
                    operator_delete(local_1c0);
                  }
                  iVar24 = iVar24 + 1;
                }
              }
            }
            lVar51 = plVar58[4];
            lVar57 = lVar57 + 1;
            lVar61 = lVar61 + 0x18;
          } while (lVar57 < (int)((ulong)(plVar58[5] - lVar51) >> 3) * -0x55555555);
        }
        if (((uVar2 | uVar17 < 3) == 0) || (*ppcVar3 == (char *)0x0)) {
LAB_00c2c150:
          local_1d0 = (long **)0x0;
          pplStack_1c8 = (long **)0x0;
          local_1c0 = (long **)0x0;
                    /* try { // try from 00c2c158 to 00c2c167 has its CatchHandler @ 00c2e4e4 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((char *)&local_1d0);
          if (pplStack_178 != local_180) {
            uVar64 = 0;
            do {
              if (uVar64 != 0) {
                    /* try { // try from 00c2c184 to 00c2c1bf has its CatchHandler @ 00c2e5b0 */
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                append((char *)&local_1d0);
              }
              pplVar43 = local_180 + uVar64 * 3;
              plVar59 = pplVar43[2];
              if ((*(byte *)pplVar43 & 1) == 0) {
                plVar59 = (long *)((long)pplVar43 + 1);
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_1d0,(ulong)plVar59);
              uVar64 = (ulong)((int)uVar64 + 1);
              uVar69 = ((long)pplStack_178 - (long)local_180 >> 3) * -0x5555555555555555;
            } while (uVar64 <= uVar69 && uVar69 - uVar64 != 0);
          }
          if (plVar58[0x13] == 0) {
            pbVar48 = (byte *)plVar58[1];
            pbVar54 = *(byte **)(pbVar48 + 0x10);
            if ((*pbVar48 & 1) == 0) {
              pbVar54 = pbVar48 + 1;
            }
                    /* try { // try from 00c2c3c4 to 00c2c3cf has its CatchHandler @ 00c2e4a8 */
            std::__ndk1::operator+((char *)pbVar54,(basic_string *)&local_1d0);
                    /* try { // try from 00c2c3d0 to 00c2c3df has its CatchHandler @ 00c2e4a4 */
            puVar37 = (undefined8 *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_200);
          }
          else {
                    /* try { // try from 00c2c1f8 to 00c2c21b has its CatchHandler @ 00c2e4cc */
            pbVar48 = (byte *)(**(code **)(*plVar58 + 0x10))(plVar58);
            pbVar54 = *(byte **)(pbVar48 + 0x10);
            if ((*pbVar48 & 1) == 0) {
              pbVar54 = pbVar48 + 1;
            }
            std::__ndk1::operator+((char *)pbVar54,(basic_string *)&local_1d0);
                    /* try { // try from 00c2c21c to 00c2c22b has its CatchHandler @ 00c2e4b0 */
            puVar37 = (undefined8 *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_200);
          }
          uVar22 = *(undefined2 *)puVar37;
          local_1a0 = (byte)*(undefined8 *)((long)puVar37 + 2);
          uStack_19f = (undefined5)((ulong)*(undefined8 *)((long)puVar37 + 2) >> 8);
          pplVar43 = (long **)puVar37[2];
          uStack_19a = (undefined2)puVar37[1];
          uStack_198 = (undefined6)((ulong)puVar37[1] >> 0x10);
          puVar37[1] = 0;
          puVar37[2] = 0;
          *puVar37 = 0;
          if (((ulong)local_1d0 & 1) != 0) {
            operator_delete(local_1c0);
          }
          local_1d0 = (long **)CONCAT62(local_1d0._2_6_,uVar22);
          *puVar53 = CONCAT26(uStack_19a,CONCAT51(uStack_19f,local_1a0));
          *(ulong *)((long)puVar53 + 6) = CONCAT62(uStack_198,uStack_19a);
          local_1c0 = pplVar43;
          if (((byte)local_200._0_1_ & 1) != 0) {
            operator_delete(local_1f0);
          }
        }
        else {
          pbVar48 = (byte *)plVar58[1];
          pbVar54 = *(byte **)(pbVar48 + 0x10);
          if ((*pbVar48 & 1) == 0) {
            pbVar54 = pbVar48 + 1;
          }
          iVar24 = strcmp(*ppcVar3,(char *)pbVar54);
          uVar27 = 0;
          ppcVar50 = ppcVar3;
          while (iVar24 != 0) {
            uVar27 = uVar27 + 1;
            ppcVar50 = ppcVar3 + (ulong)uVar27 * 3;
            if (*ppcVar50 == (char *)0x0) goto LAB_00c2c150;
            iVar24 = strcmp(*ppcVar50,(char *)pbVar54);
          }
          local_1d0 = (long **)0x0;
          pplStack_1c8 = (long **)0x0;
          local_1c0 = (long **)0x0;
          if (((long)pplStack_178 - (long)local_180 >> 3) * -0x5555555555555555 -
              (ulong)*(uint *)(ppcVar3 + (ulong)uVar27 * 3 + 1) != 0) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar24 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar24 != 0)) {
                    /* try { // try from 00c2e0b4 to 00c2e0bf has its CatchHandler @ 00c2e258 */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
                    /* try { // try from 00c2c990 to 00c2c9a3 has its CatchHandler @ 00c2e4e4 */
            LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                               "ERROR: function replacement for %s has wrong number of parameters\n"
                               ,*ppcVar50);
            while ((ulong)(((long)pplStack_178 - (long)local_180 >> 3) * -0x5555555555555555) <
                   (ulong)*(uint *)(ppcVar3 + (ulong)uVar27 * 3 + 1)) {
              local_200._0_1_ =
                   (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                   0x0;
              local_200._1_1_ = 0;
              if (pplStack_178 < local_170) {
                pplStack_178[2] = (long *)local_1f0;
                pplStack_178[1] = (long *)pplStack_1f8;
                *pplStack_178 = (long *)((ulong)local_200._2_6_ << 0x10);
                pplStack_178 = pplStack_178 + 3;
              }
              else {
                    /* try { // try from 00c2c9f8 to 00c2ca03 has its CatchHandler @ 00c2e4b4 */
                std::__ndk1::
                vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                ::
                __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                          ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                            *)&local_180,(basic_string *)&local_200);
                if (((byte)local_200._0_1_ & 1) != 0) {
                  operator_delete(local_1f0);
                }
              }
            }
          }
          pcVar42 = ppcVar3[(ulong)uVar27 * 3 + 2];
          while( true ) {
            while (pcVar66 = pcVar42, cVar14 = *pcVar66, cVar14 == '%') {
              pplVar43 = local_180 + (ulong)((byte)pcVar66[1] - 0x30) * 3;
              plVar58 = pplVar43[2];
              if ((*(byte *)pplVar43 & 1) == 0) {
                plVar58 = (long *)((long)pplVar43 + 1);
              }
                    /* try { // try from 00c2c96c to 00c2c973 has its CatchHandler @ 00c2e568 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_1d0,(ulong)plVar58);
              pcVar42 = pcVar66 + 2;
            }
            pcVar42 = pcVar66;
            if (cVar14 == '\0') break;
            while ((cVar14 != '\0' && (cVar14 != '%'))) {
              cVar14 = pcVar42[1];
              pcVar42 = pcVar42 + 1;
            }
            if (pcVar66 < pcVar42) {
                    /* try { // try from 00c2c930 to 00c2c93f has its CatchHandler @ 00c2e54c */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              __append_forward_unsafe<char_const*>
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_1d0,pcVar66,pcVar42);
            }
          }
        }
        pplVar43 = pplVar55;
        if (((ulong)local_1d0 & 1) != 0) {
          pplVar43 = local_1c0;
        }
        pplVar44 = pplVar43;
        if ((int)uVar25 < 0) {
          CodeStringStream::writeLine((char *)param_7,&DAT_004eba58);
        }
        else {
                    /* try { // try from 00c2c460 to 00c2c497 has its CatchHandler @ 00c2e4e4 */
          pplVar33 = (long **)(ulong)uVar25;
          ppIVar46 = (IR_Type **)param_7;
          setRegisterValue(param_1,param_3,uVar25,(char *)pplVar43,(uint)pplVar45,param_7,param_8,
                           true);
          pplVar43 = pplVar33;
        }
        if (((ulong)local_1d0 & 1) != 0) {
          operator_delete(local_1c0);
        }
        pplVar33 = local_180;
        pplVar56 = pplStack_178;
        if (local_180 != (long **)0x0) {
          while (pplVar32 = pplVar56, pplVar32 != pplVar33) {
            pplVar56 = pplVar32 + -3;
            if ((*(byte *)pplVar56 & 1) != 0) {
              operator_delete(pplVar32[-1]);
            }
          }
          pplStack_178 = pplVar33;
          operator_delete(local_180);
        }
        goto LAB_00c2b4f4;
      }
      if (uVar25 == 4) {
        uVar25 = *(uint *)((long)puVar68 + ((ulong)(uVar27 >> 0xe) & 0x3fffc) + 8);
        uVar27 = IR_TypeSet::getScalarType((IR_TypeSet *)this_00,9);
        getFieldValue((IR_HllConvertUtil *)param_1,(ConversionContext *)param_3,
                      (vector *)(ulong)uVar25,uVar27,(IR_Type *)pplVar45);
                    /* try { // try from 00c2c28c to 00c2c31f has its CatchHandler @ 00c2e514 */
        pIVar35 = (IR_Section *)
                  IR_InstructionSequence::getSection
                            ((IR_InstructionSequence *)param_2,
                             *(uint *)((long)puVar68 + ((ulong)(puVar68[1] >> 0xe) & 0x3fffc) + 0xc)
                            );
        pplVar43 = pplVar52;
        if (((ulong)local_180 & 1) != 0) {
          pplVar43 = local_170;
        }
        CodeStringStream::writeLine((char *)param_7,"while (%s) {\n",pplVar43);
        CodeStringStream::changeIndent(param_7,4);
        pplVar43 = (long **)param_3;
        pplVar44 = (long **)param_4;
        pplVar45 = local_2c0;
        ppIVar46 = (IR_Type **)param_6;
        convertSection(param_1,pIVar35,param_3,param_4,(char *)local_2c0,param_6,param_7,param_8,
                       param_9,param_10,param_11);
        CodeStringStream::changeIndent(param_7,-4);
        CodeStringStream::writeLine((char *)param_7,&DAT_004eba5d);
        goto joined_r0x00c2d46c;
      }
      if (uVar25 == 2) {
        uVar25 = *(uint *)((long)puVar68 + ((ulong)(uVar27 >> 0xe) & 0x3fffc) + 8);
        pplVar44 = (long **)IR_TypeSet::getScalarType((IR_TypeSet *)this_00,9);
        getFieldValue((IR_HllConvertUtil *)param_1,(ConversionContext *)param_3,
                      (vector *)(ulong)uVar25,(uint)pplVar44,(IR_Type *)pplVar45);
                    /* try { // try from 00c2bb34 to 00c2bb3b has its CatchHandler @ 00c2e4ac */
        pIVar35 = (IR_Section *)
                  IR_InstructionSequence::getSection
                            ((IR_InstructionSequence *)param_2,
                             *(uint *)((long)puVar68 + ((ulong)(puVar68[1] >> 0xe) & 0x3fffc) + 0xc)
                            );
                    /* try { // try from 00c2bb54 to 00c2bc4f has its CatchHandler @ 00c2e544 */
        pIVar36 = (IR_Section *)
                  IR_InstructionSequence::getSection
                            ((IR_InstructionSequence *)param_2,
                             *(uint *)((long)puVar68 + ((ulong)(puVar68[1] >> 0xe) & 0x3fffc) + 0x10
                                      ));
        pplVar43 = pplVar52;
        if (((ulong)local_180 & 1) != 0) {
          pplVar43 = local_170;
        }
        CodeStringStream::writeLine((char *)param_7,"if (%s) {\n");
        CodeStringStream::changeIndent(param_7,4);
        if (pIVar35 != (IR_Section *)0x0) {
          pplVar43 = (long **)param_3;
          pplVar44 = (long **)param_4;
          pplVar45 = local_2c0;
          ppIVar46 = (IR_Type **)param_6;
          convertSection(param_1,pIVar35,param_3,param_4,(char *)local_2c0,param_6,param_7,param_8,
                         param_9,param_10,param_11);
        }
        if (pIVar36 != (IR_Section *)0x0) {
          CodeStringStream::changeIndent(param_7,-4);
          CodeStringStream::writeLine((char *)param_7,"} else {\n");
          CodeStringStream::changeIndent(param_7,4);
          pplVar43 = (long **)param_3;
          pplVar44 = (long **)param_4;
          pplVar45 = local_2c0;
          ppIVar46 = (IR_Type **)param_6;
          convertSection(param_1,pIVar36,param_3,param_4,(char *)local_2c0,param_6,param_7,param_8,
                         param_9,param_10,param_11);
        }
        CodeStringStream::changeIndent(param_7,-4);
        CodeStringStream::writeLine((char *)param_7,&DAT_004eba5d);
        goto joined_r0x00c2d46c;
      }
      if ((uVar25 & 0xfffffffe) == 10) {
        uVar25 = puVar68[2];
        pCVar60 = (ConversionContext *)
                  (ulong)*(uint *)((long)puVar68 + ((ulong)(uVar27 >> 0xe) & 0x3fffc) + 8);
        this = (IR_RegisterSet *)(*(long *)(param_1 + 8) + 0x98);
        if (*(int *)(*(long *)(*(long *)(param_1 + 8) + 0x80) + ((ulong)pCVar60 & 0x7fffffff) * 0x18
                    ) != 0xc) {
          pplVar43 = (long **)IR_RegisterSet::getRegisterType(this,uVar25);
          getConstantExpression
                    ((IR_HllConvertUtil *)param_1,pCVar60,(uint)pplVar43,(IR_Type *)pplVar44);
                    /* try { // try from 00c2ca38 to 00c2ca53 has its CatchHandler @ 00c2e460 */
          plVar58 = (long *)IR_RegisterSet::getRegisterType
                                      ((IR_RegisterSet *)(*(long *)(param_1 + 8) + 0x98),uVar25);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string *)&local_180);
          pplVar33 = (long **)(*(long *)param_3 + (ulong)uVar25 * 0x20);
          local_168 = plVar58;
          if ((*(byte *)pplVar33 & 1) != 0) {
            operator_delete(pplVar33[2]);
          }
          pplVar33[2] = (long *)local_170;
          pplVar33[1] = (long *)pplStack_178;
          *pplVar33 = (long *)local_180;
          local_180 = (long **)((ulong)local_180 & 0xffffffffffff0000);
          pplVar33[3] = local_168;
          goto joined_r0x00c2caa4;
        }
        uVar38 = IR_RegisterSet::getRegisterType(this,uVar25);
        puVar1 = (undefined2 *)(*(long *)param_3 + (ulong)uVar25 * 0x20);
        local_180 = (long **)CONCAT62(local_180._2_6_,0x6263);
        if ((*(byte *)puVar1 & 1) != 0) {
          operator_delete(*(void **)(puVar1 + 8));
        }
        *puVar1 = 0x2406;
        *(undefined *)(puVar1 + 2) = 0;
        *(undefined8 *)(puVar1 + 0xc) = uVar38;
        puVar1[1] = (undefined2)local_180;
        goto LAB_00c2b4f4;
      }
      iVar24 = (int)((ulong)uVar27 & 0xffff);
      switch(uVar25) {
      case 1:
        local_1d0 = (long **)0x0;
        pplStack_1c8 = (long **)0x0;
        local_1c0 = (long **)0x0;
        *(undefined *)(*(long *)param_1 + 0xde0) = 1;
        if ((puVar68[1] & 0xffff) == 0) {
          bVar49 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                   0x0;
        }
        else {
          uVar25 = *(uint *)((long)puVar68 + ((ulong)(puVar68[1] >> 0xe) & 0x3fffc) + 8);
          if ((int)uVar25 < 0) {
            uVar64 = (ulong)uVar25 & 0x7fffffff;
                    /* try { // try from 00c2d580 to 00c2d587 has its CatchHandler @ 00c2e3c0 */
            pIVar39 = (IR_Type *)
                      IR_Function::getConstType(*(IR_Function **)(param_1 + 8),(uint)uVar64);
            lVar51 = *(long *)(*(long *)(param_1 + 8) + 0x80);
                    /* try { // try from 00c2d5a0 to 00c2d5bf has its CatchHandler @ 00c2e380 */
            GVar30 = IR_Const::getBasicType();
            puVar37 = &local_180;
            pplVar44 = (long **)(ulong)uVar2;
            IR_Const::formatHLL((IR_Const *)(lVar51 + uVar64 * 0x18),(char *)&local_180,GVar30,
                                SUB41(uVar2,0));
          }
          else {
                    /* try { // try from 00c2c820 to 00c2c827 has its CatchHandler @ 00c2e3c0 */
            pIVar39 = (IR_Type *)
                      IR_RegisterSet::getRegisterType
                                ((IR_RegisterSet *)(*(IR_Function **)(param_1 + 8) + 0x98),uVar25);
            pbVar54 = (byte *)(*(long *)param_3 + (ulong)uVar25 * 0x20);
            uVar64 = *(ulong *)(pbVar54 + 8);
            puVar11 = *(undefined8 **)(pbVar54 + 0x10);
            if ((*pbVar54 & 1) == 0) {
              puVar11 = (undefined8 *)(pbVar54 + 1);
              uVar64 = (ulong)(*pbVar54 >> 1);
            }
            puVar37 = (undefined8 *)"<<ERROR>>";
            if (uVar64 != 0) {
              puVar37 = puVar11;
            }
            if (*(byte *)puVar37 == 0) {
                    /* try { // try from 00c2c86c to 00c2c897 has its CatchHandler @ 00c2e378 */
              pplVar45 = (long **)IR_RegisterSet::getRegisterName
                                            ((IR_RegisterSet *)(*(long *)(param_1 + 8) + 0x98),
                                             uVar25);
              puVar37 = &local_180;
              if (pplVar45 == (long **)0x0) {
                    /* try { // try from 00c2d7e4 to 00c2d7fb has its CatchHandler @ 00c2e378 */
                pplVar44 = (long **)(ulong)uVar25;
                FUN_00c2f578(&local_180,0x100,&DAT_004f58d3);
              }
              else {
                pplVar44 = (long **)(ulong)uVar25;
                FUN_00c2f578(&local_180,0x100,"R%u(%s)");
              }
            }
          }
          if (pIVar39 == (IR_Type *)0x0) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_200,(char *)puVar37);
          }
          else {
                    /* try { // try from 00c2d5c4 to 00c2d5e7 has its CatchHandler @ 00c2e3bc */
            IR_Type::getDeclString(pIVar39,(char *)puVar37,IVar15);
          }
          if (((ulong)local_1d0 & 1) != 0) {
            operator_delete(local_1c0);
          }
          local_1d0 = (long **)CONCAT62(local_200._2_6_,CONCAT11(local_200._1_1_,local_200._0_1_));
          pplStack_1c8 = pplStack_1f8;
          local_1c0 = local_1f0;
          bVar49 = local_200._0_1_;
        }
        pplVar43 = pplVar55;
        if (((byte)bVar49 & 1) != 0) {
          pplVar43 = local_1c0;
        }
                    /* try { // try from 00c2d61c to 00c2d62b has its CatchHandler @ 00c2e3f8 */
        CodeStringStream::writeLine
                  ((char *)param_7,"/* user called debugShaderCompiler(%s) here */\n");
joined_r0x00c2caa4:
        if (((ulong)local_1d0 & 1) != 0) {
          operator_delete(local_1c0);
        }
        goto LAB_00c2b4f4;
      default:
        if ((int)uVar25 < 0x1a) goto LAB_00c2b4f4;
        local_140 = (void *)0x0;
        pvStack_158 = (void *)0x0;
        local_160 = 0;
        uStack_148 = 0;
        local_150 = 0;
        pplStack_178 = (long **)0x0;
        local_180 = (long **)0x0;
        local_168 = (long *)0x0;
        local_170 = (long **)0x0;
        if (iVar24 == 0) {
          bVar13 = 0;
        }
        else {
          uVar64 = 0;
          bVar13 = 0;
          pplVar43 = (long **)&local_180;
          do {
            uVar28 = puVar68[(int)uVar64 + (uint)*(ushort *)((long)puVar68 + 6) + 2];
            if ((int)uVar28 < 0) {
              uVar29 = IR_Function::getConstType(*(IR_Function **)(param_1 + 8),uVar28 & 0x7fffffff)
              ;
                    /* try { // try from 00c2d074 to 00c2d083 has its CatchHandler @ 00c2e44c */
              getConstantExpression
                        ((IR_HllConvertUtil *)param_1,(ConversionContext *)(ulong)uVar28,uVar29,
                         (IR_Type *)pplVar44);
              if ((*(byte *)pplVar43 & 1) != 0) {
                operator_delete(pplVar43[2]);
              }
              pplVar43[1] = (long *)pplStack_1c8;
              *pplVar43 = (long *)local_1d0;
              pplVar43[2] = (long *)local_1c0;
            }
            else {
                    /* try { // try from 00c2d038 to 00c2d06f has its CatchHandler @ 00c2e47c */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((char *)pplVar43);
              piVar40 = (int *)IR_RegisterSet::getRegisterType
                                         ((IR_RegisterSet *)(*(long *)(param_1 + 8) + 0x98),uVar28);
              bVar13 = *piVar40 != 0 | bVar13;
            }
            uVar64 = uVar64 + 1;
            pplVar43 = pplVar43 + 3;
          } while (((ulong)uVar27 & 0xffff) != uVar64);
        }
        uVar27 = puVar68[2];
        pplVar43 = (long **)(ulong)uVar27;
                    /* try { // try from 00c2d64c to 00c2d653 has its CatchHandler @ 00c2e3b8 */
        IVar31 = IR_RegisterSet::getRegisterType
                           ((IR_RegisterSet *)(*(long *)(param_1 + 8) + 0x98),uVar27);
        if (uVar25 == 0x1a) {
          uVar25 = *(uint *)((long)puVar68 + ((ulong)(puVar68[1] >> 0xe) & 0x3fffc) + 8);
          if ((-1 < (int)uVar25) ||
             ((iVar24 = *(int *)(*(long *)(*(long *)(param_1 + 8) + 0x80) +
                                ((ulong)uVar25 & 0x7fffffff) * 0x18), iVar24 != 0xe && (iVar24 != 0)
              ))) {
LAB_00c2d67c:
            local_1d0 = (long **)0x0;
            pplStack_1c8 = (long **)0x0;
            local_1c0 = (long **)0x0;
                    /* try { // try from 00c2d684 to 00c2d68f has its CatchHandler @ 00c2e3c4 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_1d0,(basic_string *)&local_180);
            goto LAB_00c2db74;
          }
          pbVar54 = (byte *)(*(long *)param_3 + (long)pplVar43 * 0x20);
          bVar13 = *pbVar54;
          uVar64 = (ulong)(bVar13 >> 1);
          if ((bVar13 & 1) != 0) {
            uVar64 = *(ulong *)(pbVar54 + 8);
          }
          if (uVar64 != 0) goto LAB_00c2d67c;
                    /* try { // try from 00c2d7c0 to 00c2d7df has its CatchHandler @ 00c2e3b8 */
          pplVar44 = (long **)0x0;
          ppIVar46 = (IR_Type **)param_7;
          setRegisterValue(param_1,param_3,uVar27,(char *)0x0,(uint)pplVar45,param_7,param_8,true);
          goto LAB_00c2dc44;
        }
        local_1d0 = (long **)0x0;
        pplStack_1c8 = (long **)0x0;
        local_1c0 = (long **)0x0;
        switch(uVar25) {
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
                    /* try { // try from 00c2da0c to 00c2da1f has its CatchHandler @ 00c2e170 */
          std::__ndk1::operator+("-",(basic_string *)&local_180);
          goto LAB_00c2dae8;
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
                    /* try { // try from 00c2dad4 to 00c2dae7 has its CatchHandler @ 00c2e1c8 */
          std::__ndk1::operator+("~",(basic_string *)&local_180);
LAB_00c2dae8:
          if (((ulong)local_1d0 & 1) != 0) {
            operator_delete(local_1c0);
          }
          local_1d0 = (long **)CONCAT62(local_200._2_6_,CONCAT11(local_200._1_1_,local_200._0_1_));
          pplStack_1c8 = pplStack_1f8;
          local_1c0 = local_1f0;
          goto LAB_00c2db74;
        case 0x25:
                    /* try { // try from 00c2ddf8 to 00c2de0b has its CatchHandler @ 00c2e240 */
          std::__ndk1::operator+("!",(basic_string *)&local_180);
          if (((ulong)local_1d0 & 1) != 0) {
            operator_delete(local_1c0);
          }
          local_1d0 = (long **)CONCAT62(local_200._2_6_,CONCAT11(local_200._1_1_,local_200._0_1_));
          pplStack_1c8 = pplStack_1f8;
          local_1c0 = local_1f0;
          goto LAB_00c2db74;
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
        case 0x3c:
        case 0x3d:
        case 0x3e:
        case 0x3f:
        case 0x40:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
        case 0x4e:
        case 0x4f:
                    /* try { // try from 00c2d6c4 to 00c2d6cf has its CatchHandler @ 00c2e370 */
          IR_Type::getTypeString(IVar31);
                    /* try { // try from 00c2d6d0 to 00c2d6e3 has its CatchHandler @ 00c2e35c */
          puVar41 = (ulong *)std::__ndk1::
                             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                             ::insert((ulong)&local_240,(char *)0x0);
          local_210 = (void *)puVar41[2];
          uStack_218 = puVar41[1];
          local_220 = *puVar41;
          puVar41[1] = 0;
          puVar41[2] = 0;
          *puVar41 = 0;
                    /* try { // try from 00c2d6fc to 00c2d70b has its CatchHandler @ 00c2e308 */
          puVar37 = (undefined8 *)
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_220);
          local_190 = (void *)puVar37[2];
          uVar38 = *puVar37;
          uStack_198 = (undefined6)puVar37[1];
          uStack_192 = (undefined2)((ulong)puVar37[1] >> 0x30);
          local_1a0 = (byte)uVar38;
          uStack_19f = (undefined5)((ulong)uVar38 >> 8);
          uStack_19a = (undefined2)((ulong)uVar38 >> 0x30);
          puVar37[1] = 0;
          puVar37[2] = 0;
          *puVar37 = 0;
                    /* try { // try from 00c2d728 to 00c2d737 has its CatchHandler @ 00c2e328 */
          FUN_00c31e84(&local_200,&local_1a0,&local_180);
          if (((ulong)local_1d0 & 1) != 0) {
            operator_delete(local_1c0);
          }
          local_1d0 = (long **)CONCAT62(local_200._2_6_,CONCAT11(local_200._1_1_,local_200._0_1_));
          local_200._0_1_ =
               (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
          local_200._1_1_ = 0;
          pplStack_1c8 = pplStack_1f8;
          local_1c0 = local_1f0;
          if ((local_1a0 & 1) != 0) {
            operator_delete(local_190);
          }
          pvVar34 = local_230;
          if ((local_220 & 1) != 0) {
            operator_delete(local_210);
            pvVar34 = local_230;
          }
          local_230 = pvVar34;
          if ((local_240 & 1) == 0) goto LAB_00c2db74;
          goto LAB_00c2db70;
        default:
          uVar64 = 0;
          do {
            if ((&s_builtInOperators)[uVar64 * 6] == uVar25) {
                    /* try { // try from 00c2dee8 to 00c2deef has its CatchHandler @ 00c2e1d4 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((char *)&local_1d0);
                    /* try { // try from 00c2def0 to 00c2df03 has its CatchHandler @ 00c2e2d0 */
              std::__ndk1::operator+("(",(basic_string *)&local_180);
                    /* try { // try from 00c2df04 to 00c2df0f has its CatchHandler @ 00c2e2b8 */
              FUN_00c30604(&local_1d0,&local_200);
              if (((byte)local_200._0_1_ & 1) != 0) {
                operator_delete(local_1f0);
              }
              if ((0x800c003U >> (uVar64 & 0x3f) & 1) != 0) {
                    /* try { // try from 00c2df30 to 00c2df43 has its CatchHandler @ 00c2e294 */
                std::__ndk1::operator+(", ",(basic_string *)&local_168);
                    /* try { // try from 00c2df44 to 00c2df4f has its CatchHandler @ 00c2e26c */
                FUN_00c30604(&local_1d0,&local_200);
                if (((byte)local_200._0_1_ & 1) != 0) {
                  operator_delete(local_1f0);
                }
              }
                    /* try { // try from 00c2df60 to 00c2df6f has its CatchHandler @ 00c2e1d4 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_1d0);
              break;
            }
            uVar28 = (int)uVar64 + 1;
            uVar64 = (ulong)uVar28;
          } while (uVar28 != 0x23);
          goto LAB_00c2db74;
        case 0x6f:
        case 0x74:
        case 0x79:
        case 0x83:
        case 0x8d:
        case 0x97:
                    /* try { // try from 00c2d988 to 00c2d99b has its CatchHandler @ 00c2e298 */
          FUN_006cadd8(&local_1a0,&local_180,&DAT_0050e6bd);
                    /* try { // try from 00c2d99c to 00c2d9ab has its CatchHandler @ 00c2e28c */
          FUN_00c31e84(&local_200,&local_1a0,&local_168);
          break;
        case 0x70:
        case 0x75:
        case 0x7a:
        case 0x84:
        case 0x8e:
        case 0x98:
                    /* try { // try from 00c2d9e0 to 00c2d9f3 has its CatchHandler @ 00c2e2b4 */
          FUN_006cadd8(&local_1a0,&local_180,&DAT_004fed9a);
                    /* try { // try from 00c2d9f4 to 00c2da03 has its CatchHandler @ 00c2e2a4 */
          FUN_00c31e84(&local_200,&local_1a0,&local_168);
          break;
        case 0x71:
        case 0x76:
        case 0x7b:
        case 0x85:
        case 0x8f:
        case 0x99:
                    /* try { // try from 00c2d930 to 00c2d943 has its CatchHandler @ 00c2e2e4 */
          FUN_006cadd8(&local_1a0,&local_180,&DAT_004cdb81);
                    /* try { // try from 00c2d944 to 00c2d953 has its CatchHandler @ 00c2e2d8 */
          FUN_00c31e84(&local_200,&local_1a0,&local_168);
          break;
        case 0x72:
        case 0x77:
        case 0x7c:
        case 0x86:
        case 0x90:
        case 0x9a:
                    /* try { // try from 00c2d9b4 to 00c2d9c7 has its CatchHandler @ 00c2e154 */
          FUN_006cadd8(&local_1a0,&local_180,&DAT_004d74d9);
                    /* try { // try from 00c2d9c8 to 00c2d9d7 has its CatchHandler @ 00c2e2ec */
          FUN_00c31e84(&local_200,&local_1a0,&local_168);
          break;
        case 0x73:
        case 0x78:
        case 0x7d:
        case 0x87:
        case 0x91:
        case 0x9b:
                    /* try { // try from 00c2d95c to 00c2d96f has its CatchHandler @ 00c2e174 */
          FUN_006cadd8(&local_1a0,&local_180,&DAT_004d02fd);
                    /* try { // try from 00c2d970 to 00c2d97f has its CatchHandler @ 00c2e160 */
          FUN_00c31e84(&local_200,&local_1a0,&local_168);
          break;
        case 0x7e:
        case 0x88:
        case 0x92:
        case 0x9c:
                    /* try { // try from 00c2daa8 to 00c2dabb has its CatchHandler @ 00c2e1f8 */
          FUN_006cadd8(&local_1a0,&local_180,&DAT_0050e6c1);
                    /* try { // try from 00c2dabc to 00c2dacb has its CatchHandler @ 00c2e1cc */
          FUN_00c31e84(&local_200,&local_1a0,&local_168);
          break;
        case 0x7f:
        case 0x89:
        case 0x93:
        case 0x9d:
                    /* try { // try from 00c2db14 to 00c2db27 has its CatchHandler @ 00c2e254 */
          FUN_006cadd8(&local_1a0,&local_180,&DAT_004d74dd);
                    /* try { // try from 00c2db28 to 00c2db37 has its CatchHandler @ 00c2e238 */
          FUN_00c31e84(&local_200,&local_1a0,&local_168);
          break;
        case 0x80:
        case 0x8a:
        case 0x94:
        case 0x9e:
                    /* try { // try from 00c2da7c to 00c2da8f has its CatchHandler @ 00c2e2a0 */
          FUN_006cadd8(&local_1a0,&local_180,&DAT_005074f0);
                    /* try { // try from 00c2da90 to 00c2da9f has its CatchHandler @ 00c2e288 */
          FUN_00c31e84(&local_200,&local_1a0,&local_168);
          break;
        case 0x81:
        case 0x8b:
        case 0x95:
        case 0x9f:
                    /* try { // try from 00c2da24 to 00c2da37 has its CatchHandler @ 00c2e2c8 */
          FUN_006cadd8(&local_1a0,&local_180,&DAT_004d2b1f);
                    /* try { // try from 00c2da38 to 00c2da47 has its CatchHandler @ 00c2e2ac */
          FUN_00c31e84(&local_200,&local_1a0,&local_168);
          break;
        case 0x82:
        case 0x8c:
        case 0x96:
        case 0xa0:
                    /* try { // try from 00c2da50 to 00c2da63 has its CatchHandler @ 00c2e2e0 */
          FUN_006cadd8(&local_1a0,&local_180,&DAT_00510ffe);
                    /* try { // try from 00c2da64 to 00c2da73 has its CatchHandler @ 00c2e2d4 */
          FUN_00c31e84(&local_200,&local_1a0,&local_168);
          break;
        case 0xa1:
                    /* try { // try from 00c2dc9c to 00c2dcaf has its CatchHandler @ 00c2e17c */
          FUN_006cadd8(&local_1a0,&local_180,&DAT_0050bf0b);
                    /* try { // try from 00c2dcb0 to 00c2dcbf has its CatchHandler @ 00c2e168 */
          FUN_00c31e84(&local_200,&local_1a0,&local_168);
          goto LAB_00c2de58;
        case 0xa2:
                    /* try { // try from 00c2de34 to 00c2de47 has its CatchHandler @ 00c2e200 */
          FUN_006cadd8(&local_1a0,&local_180,&DAT_004e13ac);
                    /* try { // try from 00c2de48 to 00c2de57 has its CatchHandler @ 00c2e1d0 */
          FUN_00c31e84(&local_200,&local_1a0,&local_168);
          goto LAB_00c2de58;
        case 0xa3:
                    /* try { // try from 00c2dc74 to 00c2dc87 has its CatchHandler @ 00c2e270 */
          FUN_006cadd8(&local_1a0,&local_180,&DAT_005074f0);
                    /* try { // try from 00c2dc88 to 00c2dc97 has its CatchHandler @ 00c2e23c */
          FUN_00c31e84(&local_200,&local_1a0,&local_168);
LAB_00c2de58:
          if (((ulong)local_1d0 & 1) != 0) {
            operator_delete(local_1c0);
          }
          local_1d0 = (long **)CONCAT62(local_200._2_6_,CONCAT11(local_200._1_1_,local_200._0_1_));
          local_200._0_1_ =
               (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
          local_200._1_1_ = 0;
          pplStack_1c8 = pplStack_1f8;
          local_1c0 = local_1f0;
          if ((local_1a0 & 1) != 0) {
            operator_delete(local_190);
          }
          goto LAB_00c2db74;
        case 0xa4:
        case 0xaa:
        case 0xb0:
        case 0xb6:
        case 0xbc:
        case 0xc2:
        case 200:
                    /* try { // try from 00c2d8ac to 00c2d8bf has its CatchHandler @ 00c2e2a8 */
          FUN_006cadd8(&local_1a0,&local_180,&DAT_004ded61);
                    /* try { // try from 00c2d8c0 to 00c2d8cf has its CatchHandler @ 00c2e290 */
          FUN_00c31e84(&local_200,&local_1a0,&local_168);
          break;
        case 0xa5:
        case 0xab:
        case 0xb1:
        case 0xb7:
        case 0xbd:
        case 0xc3:
        case 0xc9:
                    /* try { // try from 00c2d8d8 to 00c2d8eb has its CatchHandler @ 00c2e2cc */
          FUN_006cadd8(&local_1a0,&local_180,&DAT_004fa9d0);
                    /* try { // try from 00c2d8ec to 00c2d8fb has its CatchHandler @ 00c2e2b0 */
          FUN_00c31e84(&local_200,&local_1a0,&local_168);
          break;
        case 0xa6:
        case 0xac:
        case 0xb2:
        case 0xb8:
        case 0xbe:
        case 0xc4:
        case 0xca:
                    /* try { // try from 00c2d828 to 00c2d83b has its CatchHandler @ 00c2e2e8 */
          FUN_006cadd8(&local_1a0,&local_180,&DAT_00509be8);
                    /* try { // try from 00c2d83c to 00c2d84b has its CatchHandler @ 00c2e2dc */
          FUN_00c31e84(&local_200,&local_1a0,&local_168);
          break;
        case 0xa7:
        case 0xad:
        case 0xb3:
        case 0xb9:
        case 0xbf:
        case 0xc5:
        case 0xcb:
                    /* try { // try from 00c2d880 to 00c2d893 has its CatchHandler @ 00c2e158 */
          FUN_006cadd8(&local_1a0,&local_180,&DAT_005074f4);
                    /* try { // try from 00c2d894 to 00c2d8a3 has its CatchHandler @ 00c2e2f4 */
          FUN_00c31e84(&local_200,&local_1a0,&local_168);
          break;
        case 0xa8:
        case 0xae:
        case 0xb4:
        case 0xba:
        case 0xc0:
        case 0xc6:
        case 0xcc:
                    /* try { // try from 00c2d854 to 00c2d867 has its CatchHandler @ 00c2e180 */
          FUN_006cadd8(&local_1a0,&local_180,&DAT_004e689d);
                    /* try { // try from 00c2d868 to 00c2d877 has its CatchHandler @ 00c2e16c */
          FUN_00c31e84(&local_200,&local_1a0,&local_168);
          break;
        case 0xa9:
        case 0xaf:
        case 0xb5:
        case 0xbb:
        case 0xc1:
        case 199:
        case 0xcd:
                    /* try { // try from 00c2d904 to 00c2d917 has its CatchHandler @ 00c2e204 */
          FUN_006cadd8(&local_1a0,&local_180,&DAT_004ee008);
                    /* try { // try from 00c2d918 to 00c2d927 has its CatchHandler @ 00c2e1fc */
          FUN_00c31e84(&local_200,&local_1a0,&local_168);
          break;
        case 0xd3:
          if ((bool)(SVar12 != 5 | bVar13 ^ 1)) {
                    /* try { // try from 00c2df84 to 00c2df97 has its CatchHandler @ 00c2e178 */
            FUN_006cadd8(&local_240,&local_180,&DAT_0050e6c5);
                    /* try { // try from 00c2df98 to 00c2dfa7 has its CatchHandler @ 00c2e164 */
            FUN_00c31e84(&local_220,&local_240,&local_168);
                    /* try { // try from 00c2dfa8 to 00c2dfb7 has its CatchHandler @ 00c2e15c */
            puVar37 = (undefined8 *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_220);
            local_190 = (void *)puVar37[2];
            uVar38 = *puVar37;
            uStack_198 = (undefined6)puVar37[1];
            uStack_192 = (undefined2)((ulong)puVar37[1] >> 0x30);
            local_1a0 = (byte)uVar38;
            uStack_19f = (undefined5)((ulong)uVar38 >> 8);
            uStack_19a = (undefined2)((ulong)uVar38 >> 0x30);
            puVar37[1] = 0;
            puVar37[2] = 0;
            *puVar37 = 0;
                    /* try { // try from 00c2dfd4 to 00c2dfe3 has its CatchHandler @ 00c2e2f0 */
            FUN_00c31e84(&local_200,&local_1a0,&local_150);
            if (((ulong)local_1d0 & 1) != 0) {
              operator_delete(local_1c0);
            }
            local_1d0 = (long **)CONCAT62(local_200._2_6_,CONCAT11(local_200._1_1_,local_200._0_1_))
            ;
            local_200._0_1_ =
                 (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0
            ;
            local_200._1_1_ = 0;
            pplStack_1c8 = pplStack_1f8;
            local_1c0 = local_1f0;
            if ((local_1a0 & 1) != 0) {
              operator_delete(local_190);
            }
            pvVar34 = local_230;
            if ((local_220 & 1) != 0) {
              operator_delete(local_210);
              pvVar34 = local_230;
            }
            local_230 = pvVar34;
            if ((local_240 & 1) != 0) goto LAB_00c2e094;
          }
          else {
                    /* try { // try from 00c2dcdc to 00c2dcef has its CatchHandler @ 00c2e29c */
            std::__ndk1::operator+("select(",(basic_string *)&local_150);
                    /* try { // try from 00c2dcf0 to 00c2dcff has its CatchHandler @ 00c2e274 */
            puVar41 = (ulong *)std::__ndk1::
                               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               ::append((char *)local_258);
            local_230 = (void *)puVar41[2];
            uStack_238 = puVar41[1];
            local_240 = *puVar41;
            puVar41[1] = 0;
            puVar41[2] = 0;
            *puVar41 = 0;
                    /* try { // try from 00c2dd18 to 00c2dd27 has its CatchHandler @ 00c2e244 */
            FUN_00c31e84(&local_220,&local_240,&local_168);
                    /* try { // try from 00c2dd28 to 00c2dd37 has its CatchHandler @ 00c2e208 */
            puVar37 = (undefined8 *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_220);
            local_190 = (void *)puVar37[2];
            uVar38 = *puVar37;
            uStack_198 = (undefined6)puVar37[1];
            uStack_192 = (undefined2)((ulong)puVar37[1] >> 0x30);
            local_1a0 = (byte)uVar38;
            uStack_19f = (undefined5)((ulong)uVar38 >> 8);
            uStack_19a = (undefined2)((ulong)uVar38 >> 0x30);
            puVar37[1] = 0;
            puVar37[2] = 0;
            *puVar37 = 0;
                    /* try { // try from 00c2dd54 to 00c2dd63 has its CatchHandler @ 00c2e1d8 */
            FUN_00c31e84(&local_200,&local_1a0,&local_180);
                    /* try { // try from 00c2dd64 to 00c2dd73 has its CatchHandler @ 00c2e184 */
            puVar37 = (undefined8 *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_200);
            uVar38 = puVar37[1];
            pplVar44 = (long **)puVar37[2];
            puVar37[1] = 0;
            puVar37[2] = 0;
            local_1b0 = (undefined6)*(undefined8 *)((long)puVar37 + 2);
            uVar22 = *(undefined2 *)puVar37;
            *puVar37 = 0;
            uStack_1aa = (undefined2)uVar38;
            uStack_1a8 = (undefined6)((ulong)uVar38 >> 0x10);
            if (((ulong)local_1d0 & 1) != 0) {
              operator_delete(local_1c0);
            }
            local_1d0 = (long **)CONCAT62(local_1d0._2_6_,uVar22);
            *puVar53 = CONCAT26(uStack_1aa,local_1b0);
            *(ulong *)((long)puVar53 + 6) = CONCAT62(uStack_1a8,uStack_1aa);
            local_1c0 = pplVar44;
            if (((byte)local_200._0_1_ & 1) != 0) {
              operator_delete(local_1f0);
            }
            if ((local_1a0 & 1) != 0) {
              operator_delete(local_190);
            }
            if ((local_220 & 1) != 0) {
              operator_delete(local_210);
            }
            pvVar34 = local_248;
            if ((local_240 & 1) != 0) {
              operator_delete(local_230);
              pvVar34 = local_248;
            }
            local_248 = pvVar34;
            if ((local_258[0] & 1) != 0) {
LAB_00c2e094:
              operator_delete(pvVar34);
            }
          }
          goto LAB_00c2db74;
        }
        if (((ulong)local_1d0 & 1) != 0) {
          operator_delete(local_1c0);
        }
        local_1d0 = (long **)CONCAT62(local_200._2_6_,CONCAT11(local_200._1_1_,local_200._0_1_));
        local_200._0_1_ =
             (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
        local_200._1_1_ = 0;
        pplStack_1c8 = pplStack_1f8;
        local_1c0 = local_1f0;
        pvVar34 = local_190;
        if ((local_1a0 & 1) != 0) {
LAB_00c2db70:
          operator_delete(pvVar34);
        }
LAB_00c2db74:
                    /* try { // try from 00c2db74 to 00c2db87 has its CatchHandler @ 00c2e39c */
        std::__ndk1::operator+("(",(basic_string *)&local_1d0);
                    /* try { // try from 00c2db88 to 00c2db9b has its CatchHandler @ 00c2e384 */
        puVar37 = (undefined8 *)
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  append((char *)&local_200);
        bVar13 = *(byte *)puVar37;
        uVar22 = *(undefined2 *)puVar37;
        local_1a0 = (byte)*(undefined8 *)((long)puVar37 + 2);
        uStack_19f = (undefined5)((ulong)*(undefined8 *)((long)puVar37 + 2) >> 8);
        pplVar44 = (long **)puVar37[2];
        uStack_19a = (undefined2)puVar37[1];
        uStack_198 = (undefined6)((ulong)puVar37[1] >> 0x10);
        puVar37[1] = 0;
        puVar37[2] = 0;
        *puVar37 = 0;
        if (((ulong)local_1d0 & 1) != 0) {
          operator_delete(local_1c0);
        }
        local_1d0 = (long **)CONCAT62(local_1d0._2_6_,uVar22);
        *puVar53 = CONCAT26(uStack_19a,CONCAT51(uStack_19f,local_1a0));
        *(ulong *)((long)puVar53 + 6) = CONCAT62(uStack_198,uStack_19a);
        local_1c0 = pplVar44;
        if (((byte)local_200._0_1_ & 1) != 0) {
          operator_delete(local_1f0);
          bVar13 = (byte)local_1d0;
        }
        pplVar44 = pplVar55;
        if ((bVar13 & 1) != 0) {
          pplVar44 = local_1c0;
        }
        ppIVar46 = (IR_Type **)param_7;
                    /* try { // try from 00c2dc18 to 00c2dc33 has its CatchHandler @ 00c2e3c4 */
        setRegisterValue(param_1,param_3,uVar27,(char *)pplVar44,(uint)pplVar45,param_7,param_8,true
                        );
        if (((ulong)local_1d0 & 1) != 0) {
          operator_delete(local_1c0);
        }
LAB_00c2dc44:
        if ((local_150 & 1) != 0) {
          operator_delete(local_140);
        }
        if (((ulong)local_168 & 1) != 0) {
          operator_delete(pvStack_158);
        }
        break;
      case 0xc:
        pplVar45 = (long **)&local_1d0;
        uVar25 = puVar68[2];
        makeDereferenceChain
                  ((IR_HllConvertUtil *)param_1,(ConversionContext *)param_3,(vector *)puVar68,
                   (uint *)0x0,(uint)pplVar45,ppIVar46);
        pplVar44 = pplVar52;
        if (((ulong)local_180 & 1) != 0) {
          pplVar44 = local_170;
        }
                    /* try { // try from 00c2cc84 to 00c2cca3 has its CatchHandler @ 00c2e42c */
        pplVar43 = (long **)(ulong)uVar25;
        ppIVar46 = (IR_Type **)param_7;
        setRegisterValue(param_1,param_3,uVar25,(char *)pplVar44,(uint)pplVar45,param_7,param_8,true
                        );
        break;
      case 0xd:
        pplVar45 = (long **)&local_200;
        makeDereferenceChain
                  ((IR_HllConvertUtil *)param_1,(ConversionContext *)param_3,(vector *)puVar68,
                   (uint *)0x1,(uint)pplVar45,ppIVar46);
                    /* try { // try from 00c2cb50 to 00c2cb5f has its CatchHandler @ 00c2e410 */
        getFieldValue((IR_HllConvertUtil *)param_1,(ConversionContext *)param_3,
                      (vector *)
                      (ulong)*(uint *)((long)puVar68 + ((ulong)(puVar68[1] >> 0xe) & 0x3fffc) + 8),
                      (uint)*(undefined8 *)
                             (CONCAT62(local_200._2_6_,CONCAT11(local_200._1_1_,local_200._0_1_)) +
                             8),(IR_Type *)pplVar45);
        pplVar43 = pplVar52;
        if (((ulong)local_180 & 1) != 0) {
          pplVar43 = local_170;
        }
        pplVar44 = pplVar55;
        if (((ulong)local_1d0 & 1) != 0) {
          pplVar44 = local_1c0;
        }
                    /* try { // try from 00c2cb88 to 00c2cb97 has its CatchHandler @ 00c2e40c */
        CodeStringStream::writeLine((char *)param_7,"%s = %s;\n");
        goto LAB_00c2cec8;
      case 0xe:
        pplVar45 = (long **)&local_1d0;
        uVar25 = puVar68[2];
        makeDereferenceChain
                  ((IR_HllConvertUtil *)param_1,(ConversionContext *)param_3,(vector *)puVar68,
                   (uint *)0x0,(uint)pplVar45,ppIVar46);
        pplVar44 = pplVar52;
        if (((ulong)local_180 & 1) != 0) {
          pplVar44 = local_170;
        }
                    /* try { // try from 00c2ce28 to 00c2ce47 has its CatchHandler @ 00c2e41c */
        pplVar43 = (long **)(ulong)uVar25;
        ppIVar46 = (IR_Type **)param_7;
        setRegisterValue(param_1,param_3,uVar25,(char *)pplVar44,(uint)pplVar45,param_7,param_8,true
                        );
        break;
      case 0xf:
        pplVar45 = (long **)&local_200;
        makeDereferenceChain
                  ((IR_HllConvertUtil *)param_1,(ConversionContext *)param_3,(vector *)puVar68,
                   (uint *)0x1,(uint)pplVar45,ppIVar46);
                    /* try { // try from 00c2ce80 to 00c2ce8f has its CatchHandler @ 00c2e428 */
        getFieldValue((IR_HllConvertUtil *)param_1,(ConversionContext *)param_3,
                      (vector *)
                      (ulong)*(uint *)((long)puVar68 + ((ulong)(puVar68[1] >> 0xe) & 0x3fffc) + 8),
                      (uint)CONCAT62(local_200._2_6_,CONCAT11(local_200._1_1_,local_200._0_1_)),
                      (IR_Type *)pplVar45);
        pplVar43 = pplVar52;
        if (((ulong)local_180 & 1) != 0) {
          pplVar43 = local_170;
        }
        pplVar44 = pplVar55;
        if (((ulong)local_1d0 & 1) != 0) {
          pplVar44 = local_1c0;
        }
                    /* try { // try from 00c2ceb8 to 00c2cec7 has its CatchHandler @ 00c2e420 */
        CodeStringStream::writeLine((char *)param_7,"%s = %s;\n");
LAB_00c2cec8:
        if (((ulong)local_1d0 & 1) != 0) {
          operator_delete(local_1c0);
        }
        break;
      case 0x10:
        local_170 = (long **)0x0;
        pplStack_178 = (long **)0x0;
        local_180 = (long **)0x0;
        uVar25 = puVar68[2];
        uVar27 = *(uint *)((long)puVar68 + ((ulong)(puVar68[1] >> 0xe) & 0x3fffc) + 8);
        if (SVar12 == 5) {
                    /* try { // try from 00c2cbc8 to 00c2cbdf has its CatchHandler @ 00c2e430 */
          pplVar45 = (long **)&local_180;
          makeRestrictionMetal(param_1,param_3,uVar27,uVar25,(basic_string *)pplVar45);
        }
        else {
                    /* try { // try from 00c2d0b4 to 00c2d0cf has its CatchHandler @ 00c2e434 */
          uVar28 = IR_RegisterSet::getRegisterType
                             ((IR_RegisterSet *)(*(long *)(param_1 + 8) + 0x98),uVar25);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&local_180);
                    /* try { // try from 00c2d0d0 to 00c2d0df has its CatchHandler @ 00c2e3a0 */
          IR_Type::getTypeString(uVar28);
          pplVar43 = pplVar55;
          if (((ulong)local_1d0 & 1) != 0) {
            pplVar43 = local_1c0;
          }
                    /* try { // try from 00c2d0fc to 00c2d103 has its CatchHandler @ 00c2e3b4 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&local_180,(ulong)pplVar43);
          if (((ulong)local_1d0 & 1) != 0) {
            operator_delete(local_1c0);
          }
                    /* try { // try from 00c2d114 to 00c2d123 has its CatchHandler @ 00c2e434 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&local_180);
                    /* try { // try from 00c2d124 to 00c2d13b has its CatchHandler @ 00c2e3ac */
          getFieldValue((IR_HllConvertUtil *)param_1,(ConversionContext *)param_3,
                        (vector *)(ulong)uVar27,uVar28,(IR_Type *)pplVar45);
          pplVar43 = pplVar55;
          if (((ulong)local_1d0 & 1) != 0) {
            pplVar43 = local_1c0;
          }
                    /* try { // try from 00c2d158 to 00c2d15f has its CatchHandler @ 00c2e3a8 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&local_180,(ulong)pplVar43);
          if (((ulong)local_1d0 & 1) != 0) {
            operator_delete(local_1c0);
          }
        }
        pplVar44 = pplVar52;
        if (((ulong)local_180 & 1) != 0) {
          pplVar44 = local_170;
        }
                    /* try { // try from 00c2d188 to 00c2d1a3 has its CatchHandler @ 00c2e430 */
        pplVar43 = (long **)(ulong)uVar25;
        ppIVar46 = (IR_Type **)param_7;
        setRegisterValue(param_1,param_3,uVar25,(char *)pplVar44,(uint)pplVar45,param_7,param_8,true
                        );
        break;
      case 0x11:
        uVar25 = puVar68[2];
        piVar40 = (int *)IR_RegisterSet::getRegisterType
                                   ((IR_RegisterSet *)(*(long *)(param_1 + 8) + 0x98),uVar25);
        pplStack_178 = (long **)0x0;
        local_180 = (long **)0x0;
        local_170 = (long **)0x0;
        if (*piVar40 == 4) {
          if (iVar24 != 0) {
            lVar51 = 0;
            do {
              if ((int)lVar51 != 0) {
                    /* try { // try from 00c2cd00 to 00c2cd0b has its CatchHandler @ 00c2e454 */
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                push_back((char)&local_180);
              }
              uVar28 = puVar68[lVar51 + (ulong)*(ushort *)((long)puVar68 + 6) + 2];
                    /* try { // try from 00c2cd1c to 00c2cd3f has its CatchHandler @ 00c2e4a0 */
              uVar29 = IR_Type::getElementType((IR_Type *)piVar40,(IR_TypeSet *)this_00);
              getFieldValue((IR_HllConvertUtil *)param_1,(ConversionContext *)param_3,
                            (vector *)(ulong)uVar28,uVar29,(IR_Type *)pplVar45);
              pplVar43 = pplVar55;
              if (((ulong)local_1d0 & 1) != 0) {
                pplVar43 = local_1c0;
              }
                    /* try { // try from 00c2cd5c to 00c2cd63 has its CatchHandler @ 00c2e45c */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_180,(ulong)pplVar43);
              if (((ulong)local_1d0 & 1) != 0) {
                operator_delete(local_1c0);
              }
              lVar51 = lVar51 + 1;
            } while ((uVar27 & 0xffff) != (uint)lVar51);
          }
        }
        else {
                    /* try { // try from 00c2d1bc to 00c2d1cb has its CatchHandler @ 00c2e3a4 */
          IR_Type::getTypeString((IR_LANGUAGE)piVar40);
          if (((ulong)local_180 & 1) != 0) {
            operator_delete(local_170);
          }
          local_170 = local_1c0;
          pplStack_178 = pplStack_1c8;
          local_180 = local_1d0;
          if ((SVar12 == 5) && (*piVar40 == 2)) {
            iVar26 = piVar40[4];
            iVar7 = piVar40[5];
            if (iVar26 * iVar7 == iVar24) {
              if (iVar7 != 0) {
                iVar24 = 0;
                iVar62 = 0;
                do {
                    /* try { // try from 00c2d23c to 00c2d243 has its CatchHandler @ 00c2e458 */
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  append((char *)&local_180);
                    /* try { // try from 00c2d244 to 00c2d25b has its CatchHandler @ 00c2e450 */
                  IVar31 = IR_Type::getMatrixRowType((IR_Type *)piVar40,(IR_TypeSet *)this_00);
                  IR_Type::getTypeString(IVar31);
                  pplVar43 = pplVar55;
                  if (((ulong)local_1d0 & 1) != 0) {
                    pplVar43 = local_1c0;
                  }
                    /* try { // try from 00c2d278 to 00c2d27f has its CatchHandler @ 00c2e438 */
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  append((char *)&local_180,(ulong)pplVar43);
                  if (((ulong)local_1d0 & 1) != 0) {
                    operator_delete(local_1c0);
                  }
                    /* try { // try from 00c2d290 to 00c2d29f has its CatchHandler @ 00c2e458 */
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  append((char *)&local_180);
                  if (iVar26 != 0) {
                    iVar67 = 0;
                    do {
                      uVar27 = puVar68[iVar62 + iVar67 + (uint)*(ushort *)((long)puVar68 + 6) + 2];
                    /* try { // try from 00c2d2d4 to 00c2d2f7 has its CatchHandler @ 00c2e4d4 */
                      uVar28 = IR_Type::getElementType((IR_Type *)piVar40,(IR_TypeSet *)this_00);
                      getFieldValue((IR_HllConvertUtil *)param_1,(ConversionContext *)param_3,
                                    (vector *)(ulong)uVar27,uVar28,(IR_Type *)pplVar45);
                    /* try { // try from 00c2d310 to 00c2d33b has its CatchHandler @ 00c2e4d0 */
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_180);
                      pplVar43 = pplVar55;
                      if (((ulong)local_1d0 & 1) != 0) {
                        pplVar43 = local_1c0;
                      }
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_180,(ulong)pplVar43);
                      if (((ulong)local_1d0 & 1) != 0) {
                        operator_delete(local_1c0);
                      }
                      iVar67 = iVar67 + 1;
                    } while (iVar26 != iVar67);
                    iVar62 = iVar62 + iVar67;
                  }
                    /* try { // try from 00c2d358 to 00c2d367 has its CatchHandler @ 00c2e458 */
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  append((char *)&local_180);
                  iVar24 = iVar24 + 1;
                } while (iVar24 != iVar7);
              }
                    /* try { // try from 00c2d374 to 00c2d383 has its CatchHandler @ 00c2e374 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_180);
              goto LAB_00c2d544;
            }
          }
          if (iVar24 != 0) {
            lVar51 = 0;
            do {
              uVar28 = puVar68[lVar51 + (ulong)*(ushort *)((long)puVar68 + 6) + 2];
                    /* try { // try from 00c2d4b4 to 00c2d4d7 has its CatchHandler @ 00c2e474 */
              uVar29 = IR_Type::getElementType((IR_Type *)piVar40,(IR_TypeSet *)this_00);
              getFieldValue((IR_HllConvertUtil *)param_1,(ConversionContext *)param_3,
                            (vector *)(ulong)uVar28,uVar29,(IR_Type *)pplVar45);
                    /* try { // try from 00c2d4f0 to 00c2d51b has its CatchHandler @ 00c2e478 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_180);
              pplVar43 = pplVar55;
              if (((ulong)local_1d0 & 1) != 0) {
                pplVar43 = local_1c0;
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_180,(ulong)pplVar43);
              if (((ulong)local_1d0 & 1) != 0) {
                operator_delete(local_1c0);
              }
              lVar51 = lVar51 + 1;
            } while ((uVar27 & 0xffff) != (uint)lVar51);
          }
                    /* try { // try from 00c2d534 to 00c2d543 has its CatchHandler @ 00c2e37c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&local_180);
        }
LAB_00c2d544:
        pplVar44 = pplVar52;
        if (((ulong)local_180 & 1) != 0) {
          pplVar44 = local_170;
        }
                    /* try { // try from 00c2d558 to 00c2d577 has its CatchHandler @ 00c2e418 */
        pplVar43 = (long **)(ulong)uVar25;
        ppIVar46 = (IR_Type **)param_7;
        setRegisterValue(param_1,param_3,uVar25,(char *)pplVar44,(uint)pplVar45,param_7,param_8,true
                        );
        break;
      case 0x12:
        uVar25 = puVar68[2];
        pIVar39 = (IR_Type *)
                  IR_RegisterSet::getRegisterType
                            ((IR_RegisterSet *)(*(long *)(param_1 + 8) + 0x98),uVar25);
        uVar27 = *(uint *)((long)puVar68 + ((ulong)(puVar68[1] >> 0xe) & 0x3fffc) + 8);
        uVar28 = IR_Type::getElementType(pIVar39,(IR_TypeSet *)this_00);
        getFieldValue((IR_HllConvertUtil *)param_1,(ConversionContext *)param_3,
                      (vector *)(ulong)uVar27,uVar28,(IR_Type *)pplVar45);
        local_1d0 = (long **)0x0;
        pplStack_1c8 = (long **)0x0;
        local_1c0 = (long **)0x0;
        if (uVar16 == 0) {
                    /* try { // try from 00c2d38c to 00c2d39b has its CatchHandler @ 00c2e3b0 */
          IR_Type::getTypeString((IR_LANGUAGE)pIVar39);
          if (((ulong)local_1d0 & 1) != 0) {
            operator_delete(local_1c0);
          }
          local_1d0 = (long **)CONCAT62(local_200._2_6_,CONCAT11(local_200._1_1_,local_200._0_1_));
          pplStack_1c8 = pplStack_1f8;
          local_1c0 = local_1f0;
                    /* try { // try from 00c2d3c8 to 00c2d43f has its CatchHandler @ 00c2e43c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&local_1d0);
          pplVar43 = pplVar52;
          if (((ulong)local_180 & 1) != 0) {
            pplVar43 = local_170;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&local_1d0,(ulong)pplVar43);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&local_1d0);
        }
        else {
                    /* try { // try from 00c2cddc to 00c2cde7 has its CatchHandler @ 00c2e43c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_1d0,(basic_string *)&local_180);
        }
        pplVar44 = pplVar55;
        if (((ulong)local_1d0 & 1) != 0) {
          pplVar44 = local_1c0;
        }
        pplVar43 = (long **)(ulong)uVar25;
        ppIVar46 = (IR_Type **)param_7;
        setRegisterValue(param_1,param_3,uVar25,(char *)pplVar44,(uint)pplVar45,param_7,param_8,true
                        );
        if (((ulong)local_1d0 & 1) != 0) {
          operator_delete(local_1c0);
        }
        break;
      case 0x13:
        pplVar43 = (long **)(ulong)puVar68[2];
        pplVar44 = (long **)0x0;
        ppIVar46 = (IR_Type **)param_7;
        setRegisterValue(param_1,param_3,puVar68[2],(char *)0x0,(uint)pplVar45,param_7,param_8,false
                        );
        goto LAB_00c2b4f4;
      case 0x16:
        uVar25 = puVar68[(uVar27 >> 0x10) + 3];
        uVar27 = IR_TypeSet::getVectorType((IR_TypeSet *)(*(long *)param_1 + 0x10),3,4);
        getFieldValue((IR_HllConvertUtil *)param_1,(ConversionContext *)param_3,
                      (vector *)(ulong)uVar25,uVar27,(IR_Type *)pplVar45);
        pplVar43 = (long **)(ulong)*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0x80) +
                                             ((ulong)*(uint *)((long)puVar68 +
                                                              ((ulong)(puVar68[1] >> 0xe) & 0x3fffc)
                                                              + 8) & 0x7fffffff) * 0x18 + 8);
        pplVar44 = pplVar52;
        if (((ulong)local_180 & 1) != 0) {
          pplVar44 = local_170;
        }
        if (SVar12 == 5) {
                    /* try { // try from 00c2cf60 to 00c2cf6f has its CatchHandler @ 00c2e408 */
          CodeStringStream::writeLine((char *)param_7,"_GSSC_FS_OUTPUT.GS_COLOR_OUTPUT_%u = %s;\n");
        }
        else {
                    /* try { // try from 00c2d454 to 00c2d463 has its CatchHandler @ 00c2e408 */
          CodeStringStream::writeLine((char *)param_7,"GS_COLOR_OUTPUT_%u = %s;\n");
        }
        break;
      case 0x17:
        uVar25 = puVar68[(uVar27 >> 0x10) + 2];
        pplVar44 = (long **)IR_TypeSet::getScalarType((IR_TypeSet *)this_00,3);
        getFieldValue((IR_HllConvertUtil *)param_1,(ConversionContext *)param_3,
                      (vector *)(ulong)uVar25,(uint)pplVar44,(IR_Type *)pplVar45);
        pplVar43 = pplVar52;
        if (((ulong)local_180 & 1) != 0) {
          pplVar43 = local_170;
        }
        if (SVar12 == 5) {
                    /* try { // try from 00c2cb04 to 00c2cb13 has its CatchHandler @ 00c2e414 */
          CodeStringStream::writeLine((char *)param_7,"_GSSC_FS_OUTPUT.GS_DEPTH_OUTPUT = %s;\n");
        }
        else {
                    /* try { // try from 00c2d098 to 00c2d0a7 has its CatchHandler @ 00c2e414 */
          CodeStringStream::writeLine((char *)param_7,"GS_DEPTH_OUTPUT = %s;\n");
        }
        break;
      case 0x18:
        uVar25 = *(uint *)((long)puVar68 + ((ulong)(uVar27 >> 0xe) & 0x3fffc) + 8);
        pplVar44 = (long **)IR_TypeSet::getScalarType((IR_TypeSet *)this_00,6);
        getFieldValue((IR_HllConvertUtil *)param_1,(ConversionContext *)param_3,
                      (vector *)(ulong)uVar25,(uint)pplVar44,(IR_Type *)pplVar45);
        pplVar43 = pplVar52;
        if (((ulong)local_180 & 1) != 0) {
          pplVar43 = local_170;
        }
        if (SVar12 == 5) {
                    /* try { // try from 00c2cc3c to 00c2cc4b has its CatchHandler @ 00c2e424 */
          CodeStringStream::writeLine
                    ((char *)param_7,"_GSSC_FS_OUTPUT.GS_SAMPLE_MASK_OUTPUT = %s;\n");
        }
        else {
                    /* try { // try from 00c2d1a8 to 00c2d1b7 has its CatchHandler @ 00c2e424 */
          CodeStringStream::writeLine((char *)param_7,"GS_SAMPLE_MASK_OUTPUT = %s;\n");
        }
      }
joined_r0x00c2d46c:
      if (((ulong)local_180 & 1) != 0) {
        operator_delete(local_170);
      }
LAB_00c2b4f4:
      uVar63 = uVar63 + 1;
    } while (uVar63 != ((ulong)(lVar9 - lVar8) >> 3 & 0xffffffff));
  }
  if (*(long *)(lVar18 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


