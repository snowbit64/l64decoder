// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeStructDefs
// Entry Point: 00c34084
// Size: 2244 bytes
// Signature: undefined __thiscall writeStructDefs(IR_HllConvertUtil * this, SharedContext * param_1, CodeStringStream * param_2, uint * param_3)


/* WARNING: Type propagation algorithm not settling */
/* IR_HllConvertUtil::writeStructDefs(IR_HllConvertUtil::SharedContext&, CodeStringStream&, unsigned
   int&) */

void __thiscall
IR_HllConvertUtil::writeStructDefs
          (IR_HllConvertUtil *this,SharedContext *param_1,CodeStringStream *param_2,uint *param_3)

{
  long lVar1;
  int iVar2;
  GsTBasicType GVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  long **pplVar8;
  ulong uVar9;
  ulong *puVar10;
  long *plVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  long **pplVar17;
  ulong uVar18;
  long lVar19;
  char *__s1;
  StructFieldRemapping *this_00;
  byte *pbVar20;
  uint uVar21;
  byte local_158 [16];
  long **local_148;
  undefined8 local_140;
  undefined local_138;
  undefined8 local_100;
  undefined2 local_f8;
  undefined2 uStack_f6;
  undefined uStack_f4;
  undefined8 local_c0;
  undefined uStack_b8;
  undefined uStack_b7;
  undefined5 uStack_b6;
  undefined uStack_b1;
  undefined local_b0;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  *(undefined4 *)param_2 = 0;
  iVar2 = *(int *)this;
  lVar13 = *(long *)(this + 0xdb0);
  uVar15 = *(long *)(this + 0xdb8) - lVar13;
  uVar4 = (uint)(iVar2 - 3U < 2) << 1;
  if (iVar2 == 5) {
    uVar4 = 1;
  }
  if ((int)(uVar15 >> 4) != 0) {
    pplVar17 = (long **)((ulong)local_158 | 1);
    uVar18 = 0;
    do {
      pbVar20 = *(byte **)(*(long *)(lVar13 + uVar18 * 0x10) + 8);
      if (((pbVar20[0x52] == 0) && (pbVar20[0x53] == 0)) && (pbVar20[0x54] == 0)) {
        IR_Struct::createRemapping();
        pbVar16 = *(byte **)(pbVar20 + 0x10);
        this_00 = *(StructFieldRemapping **)(pbVar20 + 0x48);
        if ((*pbVar20 & 1) == 0) {
          pbVar16 = pbVar20 + 1;
        }
        CodeStringStream::writeLine((char *)param_1,"struct %s\n{\n",pbVar16);
        CodeStringStream::changeIndent((CodeStringStream *)param_1,4);
        lVar13 = *(long *)(pbVar20 + 0x30);
        uVar14 = (*(long *)(pbVar20 + 0x38) - lVar13 >> 3) * 0xb6db6db7;
        if ((int)uVar14 != 0) {
          lVar19 = 0;
          uVar21 = 0;
          do {
            local_100._0_1_ = 0;
            local_c0._0_1_ = 0;
            local_140 = local_140 & 0xffffffffffffff00;
            __s1 = *(char **)(lVar13 + lVar19 + 8);
            if (__s1 == (char *)0x0) {
LAB_00c344d0:
              pplVar8 = (long **)0x0;
              goto LAB_00c34570;
            }
            iVar6 = strncmp(__s1,"GS_ATTR_",8);
            if (iVar6 == 0) {
              if (*(int *)this == 5) {
                uVar7 = getVertexAttributeIndex(__s1);
                if (10 < uVar7) {
                  uVar7 = 0;
                }
                param_3 = (uint *)(ulong)uVar7;
                puVar10 = &local_100;
                pcVar12 = "[[ attribute(%u) ]]";
LAB_00c34310:
                FUN_00c2f578(puVar10,0x40,pcVar12);
              }
              else {
                __strcpy_chk(&local_100,__s1 + 8,0x40);
                iVar6 = strcmp(__s1,"GS_ATTR_SBOFFSET");
                if (iVar6 == 0) {
                  local_f8 = 0x34;
                  local_100._0_1_ = 0x54;
                  local_100._1_4_ = 0x4f435845;
                  local_100._5_3_ = 0x44524f;
                }
                if (*(int *)this == 6) {
                  uVar9 = getVertexAttributeIndex(__s1);
                  param_3 = (uint *)(uVar9 & 0xffffffff);
                  puVar10 = &local_140;
                  pcVar12 = "[[vk::location(%u)]] ";
                  goto LAB_00c34310;
                }
              }
              iVar6 = strcmp(__s1,"GS_ATTR_POSITION");
              if (iVar6 == 0) {
                uVar7 = *(uint *)param_2 | 1;
LAB_00c34568:
                pplVar8 = (long **)0x0;
                *(uint *)param_2 = uVar7;
                goto LAB_00c34570;
              }
              iVar6 = strcmp(__s1,"GS_ATTR_BLENDWEIGHT");
              if (iVar6 != 0) {
                iVar6 = strcmp(__s1,"GS_ATTR_NORMAL");
                if (iVar6 == 0) {
                  uVar7 = *(uint *)param_2 | 4;
                }
                else {
                  iVar6 = strcmp(__s1,"GS_ATTR_COLOR0");
                  if (iVar6 == 0) {
                    uVar7 = *(uint *)param_2 | 8;
                  }
                  else {
                    iVar6 = strcmp(__s1,"GS_ATTR_BLENDINDICES");
                    if (iVar6 == 0) {
                      uVar7 = *(uint *)param_2 | 0x10;
                    }
                    else {
                      iVar6 = strcmp(__s1,"GS_ATTR_TEXCOORD0");
                      if (iVar6 == 0) {
                        uVar7 = *(uint *)param_2 | 0x20;
                      }
                      else {
                        iVar6 = strcmp(__s1,"GS_ATTR_TEXCOORD1");
                        if (iVar6 == 0) {
                          uVar7 = *(uint *)param_2 | 0x40;
                        }
                        else {
                          iVar6 = strcmp(__s1,"GS_ATTR_TEXCOORD2");
                          if (iVar6 == 0) {
                            uVar7 = *(uint *)param_2 | 0x80;
                          }
                          else {
                            iVar6 = strcmp(__s1,"GS_ATTR_TEXCOORD3");
                            if (iVar6 == 0) {
                              uVar7 = *(uint *)param_2 | 0x100;
                            }
                            else {
                              iVar6 = strcmp(__s1,"GS_ATTR_TANGENT");
                              if (iVar6 == 0) {
                                uVar7 = *(uint *)param_2 | 0x200;
                              }
                              else {
                                iVar6 = strcmp(__s1,"GS_ATTR_SBOFFSET");
                                if (iVar6 != 0) goto LAB_00c344d0;
                                uVar7 = *(uint *)param_2 | 0x400;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_00c34568;
              }
              *(uint *)param_2 = *(uint *)param_2 | 2;
              if (*(int *)this != 5) {
                if (*(int *)this - 3U < 2) {
                  pplVar8 = (long **)0x0;
                  local_100._0_1_ = 0x42;
                  local_100._1_4_ = 0x444e454c;
                  local_100._5_3_ = 0x494557;
                  local_f8 = 0x4847;
                  uStack_f6 = 0x5354;
                  uStack_f4 = 0;
                }
                else {
                  pplVar8 = (long **)0x0;
                  local_f8 = 0x4847;
                  uStack_f6 = 0x54;
                  local_100._0_1_ = 0x42;
                  local_100._1_4_ = 0x444e454c;
                  local_100._5_3_ = 0x494557;
                }
                goto LAB_00c34570;
              }
              pplVar8 = (long **)0x0;
LAB_00c34624:
              if ((this_00 == (StructFieldRemapping *)0x0) ||
                 (plVar11 = (long *)StructFieldRemapping::getRemapping(this_00,uVar21),
                 plVar11 == (long *)0x0)) {
                if (pplVar8 == (long **)0x0) {
                  IR_Type::getDeclString
                            ((IR_Type *)((char **)(lVar13 + lVar19))[2],*(char **)(lVar13 + lVar19),
                             uVar4);
                  pplVar8 = pplVar17;
                  if ((local_158[0] & 1) != 0) {
                    pplVar8 = local_148;
                  }
                  if (((uVar4 & 1) == 0) && (__s1 != (char *)0x0)) {
                    /* try { // try from 00c34708 to 00c34723 has its CatchHandler @ 00c34954 */
                    CodeStringStream::writeLine
                              ((char *)param_1,"%s%s : %s;\n",&local_140,pplVar8,&local_100);
                    param_3 = (uint *)pplVar8;
                  }
                  else if (iVar2 == 5) {
                    /* try { // try from 00c34760 to 00c34777 has its CatchHandler @ 00c34954 */
                    param_3 = (uint *)&local_100;
                    CodeStringStream::writeLine((char *)param_1,"%s %s;\n",pplVar8);
                  }
                  else {
                    /* try { // try from 00c347d8 to 00c347eb has its CatchHandler @ 00c34954 */
                    CodeStringStream::writeLine((char *)param_1,&DAT_004eba58,pplVar8);
                  }
                  goto LAB_00c348ac;
                }
                param_3 = *(uint **)(lVar13 + lVar19);
                if (((uVar4 & 1) == 0) && (__s1 != (char *)0x0)) {
                  CodeStringStream::writeLine
                            ((char *)param_1,"%s%s %s : %s;\n",&local_140,pplVar8,param_3,&local_100
                            );
                  param_3 = (uint *)pplVar8;
                }
                else if (iVar2 == 5) {
                  CodeStringStream::writeLine
                            ((char *)param_1,"%s %s %s;\n",pplVar8,param_3,&local_100);
                }
                else {
                  CodeStringStream::writeLine((char *)param_1,"%s %s;\n",pplVar8);
                }
              }
              else if (*plVar11 == 0) {
                GVar3 = *(GsTBasicType *)(plVar11 + 4);
                if (GVar3 == 0) {
                  IR_Type::getDeclString
                            ((IR_Type *)((char **)(lVar13 + lVar19))[2],*(char **)(lVar13 + lVar19),
                             uVar4);
                  param_3 = (uint *)pplVar17;
                  if ((local_158[0] & 1) != 0) {
                    param_3 = (uint *)local_148;
                  }
                  if ((uVar4 & 1) == 0) {
                    /* try { // try from 00c34828 to 00c34843 has its CatchHandler @ 00c34950 */
                    pplVar8 = (long **)&local_c0;
                    CodeStringStream::writeLine
                              ((char *)param_1,"%s%s%s : TEXCOORD%u;\n",&local_140,pplVar8,param_3,
                               (ulong)*(uint *)((long)plVar11 + 0xc));
                    param_3 = (uint *)pplVar8;
                  }
                  else {
                    /* try { // try from 00c3488c to 00c348ab has its CatchHandler @ 00c34950 */
                    CodeStringStream::writeLine
                              ((char *)param_1,"%s%s %s;\n",&local_c0,param_3,
                               (ulong)*(uint *)((long)plVar11 + 0xc),&local_100);
                  }
                }
                else if ((uVar4 & 1) == 0) {
                  IR_Type::getVectorTypeString
                            ((IR_Type *)(ulong)*(uint *)((long)plVar11 + 0x24),GVar3,uVar4,
                             (IR_LANGUAGE)param_3);
                  pplVar8 = pplVar17;
                  if ((local_158[0] & 1) != 0) {
                    pplVar8 = local_148;
                  }
                    /* try { // try from 00c34678 to 00c34693 has its CatchHandler @ 00c3494c */
                  param_3 = (uint *)&local_c0;
                  CodeStringStream::writeLine
                            ((char *)param_1,"%s%s%s texcoord%u : TEXCOORD%u;\n",&local_140,param_3,
                             pplVar8,(ulong)*(uint *)((long)plVar11 + 0xc),
                             (ulong)*(uint *)((long)plVar11 + 0xc));
                }
                else {
                  IR_Type::getVectorTypeString
                            ((IR_Type *)(ulong)*(uint *)((long)plVar11 + 0x24),GVar3,1,
                             (IR_LANGUAGE)param_3);
                  param_3 = (uint *)pplVar17;
                  if ((local_158[0] & 1) != 0) {
                    param_3 = (uint *)local_148;
                  }
                    /* try { // try from 00c34870 to 00c34887 has its CatchHandler @ 00c34948 */
                  CodeStringStream::writeLine
                            ((char *)param_1,"%s%s texcoord%u %s;\n",&local_c0,param_3,
                             (ulong)*(uint *)((long)plVar11 + 0xc),&local_100);
                }
LAB_00c348ac:
                if ((local_158[0] & 1) != 0) {
                  operator_delete(local_148);
                }
              }
            }
            else {
              pplVar8 = (long **)getSystemVariableInfo((ShaderLanguage *)this,__s1);
              if (pplVar8 == (long **)0x0) {
LAB_00c34570:
                uVar7 = *(uint *)this;
                if ((uVar7 < 7) && ((1 << (ulong)(uVar7 & 0x1f) & 0x46U) != 0)) {
                  lVar1 = lVar13 + lVar19;
                  uVar7 = *(uint *)(lVar1 + 0x18);
                  if ((uVar7 >> 5 & 1) != 0) {
                    local_b0 = 0;
                    uStack_b8 = 0x6f;
                    uStack_b7 = 0x6c;
                    uStack_b6 = 0x6e6f697461;
                    uStack_b1 = 0x20;
                    local_c0._0_1_ = 0x6e;
                    local_c0._1_6_ = 0x7265746e696f;
                    local_c0._7_1_ = 0x70;
                    uVar7 = *(uint *)(lVar1 + 0x18);
                  }
                  if ((uVar7 >> 6 & 1) != 0) {
                    local_c0._0_1_ = 0x6e;
                    local_c0._1_6_ = 0x70737265706f;
                    local_c0._7_1_ = 0x65;
                    uStack_b8 = 99;
                    uStack_b7 = 0x74;
                    uStack_b6 = 0x20657669;
                    uVar7 = *(uint *)(lVar1 + 0x18);
                  }
                }
                else {
                  if (1 < uVar7 - 3) goto LAB_00c34624;
                  lVar1 = lVar13 + lVar19;
                  uVar7 = *(uint *)(lVar1 + 0x18);
                  if ((uVar7 >> 5 & 1) != 0) {
                    uStack_b8 = 0x20;
                    uStack_b7 = 0;
                    local_c0._0_1_ = 0x6e;
                    local_c0._1_6_ = 0x7265746e696f;
                    local_c0._7_1_ = 0x70;
                    uVar7 = *(uint *)(lVar1 + 0x18);
                  }
                  if ((uVar7 >> 6 & 1) != 0) {
                    uStack_b8 = 0;
                    local_c0._0_1_ = 0x6e;
                    local_c0._1_6_ = 0x70737265706f;
                    local_c0._7_1_ = 0x20;
                    uVar7 = *(uint *)(lVar1 + 0x18);
                  }
                }
                if ((uVar7 >> 7 & 1) != 0) {
                  uStack_b8 = 0x20;
                  uStack_b7 = 0;
                  local_c0._0_1_ = 99;
                  local_c0._1_6_ = 0x696f72746e65;
                  local_c0._7_1_ = 100;
                }
                goto LAB_00c34624;
              }
              iVar6 = *(int *)this;
              if (iVar6 - 3U < 2) {
                __strcpy_chk(&local_100,*pplVar8,0x40);
                pplVar8 = (long **)pplVar8[2];
                goto LAB_00c34570;
              }
              if (iVar6 - 1U < 2) {
LAB_00c3426c:
                __strcpy_chk(&local_100,*pplVar8,0x40);
                pplVar8 = (long **)pplVar8[2];
                iVar6 = strcmp(__s1,"GS_OUT_POSITION");
                if (iVar6 == 0) {
                  local_138 = 0;
                  local_140._0_1_ = 'p';
                  local_140._1_1_ = 'r';
                  local_140._2_1_ = 'e';
                  local_140._3_1_ = 'c';
                  local_140._4_1_ = 'i';
                  local_140._5_1_ = 's';
                  local_140._6_1_ = 'e';
                  local_140._7_1_ = ' ';
                }
                goto LAB_00c34570;
              }
              if (iVar6 != 5) {
                if (iVar6 != 6) {
                  __strcpy_chk(&local_100,__s1,0x40);
                  goto LAB_00c344d0;
                }
                goto LAB_00c3426c;
              }
              if (*(char *)(pplVar8 + 3) == '\0') {
                param_3 = (uint *)*pplVar8;
                FUN_00c2f578(&local_100,0x40,"[[ %s ]]");
                iVar6 = strcmp((char *)*pplVar8,"position");
                if (iVar6 == 0) {
                  __strcat_chk(&local_100,"[[ invariant ]]",0x40);
                }
                pplVar8 = (long **)pplVar8[2];
                goto LAB_00c34570;
              }
            }
            if ((uVar14 & 0xffffffff) * 0x38 + -0x38 == lVar19) break;
            lVar13 = *(long *)(pbVar20 + 0x30);
            uVar21 = uVar21 + 1;
            lVar19 = lVar19 + 0x38;
          } while( true );
        }
        CodeStringStream::changeIndent((CodeStringStream *)param_1,-4);
        CodeStringStream::writeLine((char *)param_1,&DAT_00510f98);
      }
      uVar18 = uVar18 + 1;
      if (uVar18 == (uVar15 >> 4 & 0xffffffff)) break;
      lVar13 = *(long *)(this + 0xdb0);
    } while( true );
  }
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


