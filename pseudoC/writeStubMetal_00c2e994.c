// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeStubMetal
// Entry Point: 00c2e994
// Size: 1804 bytes
// Signature: undefined __cdecl writeStubMetal(ConversionContext * param_1, CodeStringStream * param_2, vector * param_3)


/* IR_HllConvertUtil::writeStubMetal(IR_HllConvertUtil::ConversionContext&, CodeStringStream&,
   std::__ndk1::vector<IR_HllConvertUtil::GlobalData,
   std::__ndk1::allocator<IR_HllConvertUtil::GlobalData> >&) */

void IR_HllConvertUtil::writeStubMetal
               (ConversionContext *param_1,CodeStringStream *param_2,vector *param_3)

{
  long lVar1;
  uint uVar2;
  void *pvVar3;
  char *pcVar4;
  int iVar5;
  long lVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  int *piVar10;
  byte *pbVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  byte *pbVar16;
  int *piVar17;
  ulong uVar18;
  int **ppiVar19;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  ulong uVar23;
  int *piVar24;
  void *pvVar25;
  byte local_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  void *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  void *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  lVar14 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x70) - lVar14;
  if (lVar12 == 0) {
    bVar7 = 0;
    piVar24 = (int *)0x0;
    piVar20 = (int *)0x0;
    piVar22 = (int *)0x0;
    piVar21 = (int *)0x0;
    pvVar25 = (void *)((ulong)&local_80 | 1);
    local_80 = CONCAT26(local_80._6_2_,0x64696f7600);
    local_80 = CONCAT71(local_80._1_7_,8);
  }
  else {
    uVar15 = 0;
    piVar10 = (int *)0x0;
    piVar24 = (int *)0x0;
    piVar20 = (int *)0x0;
    piVar22 = (int *)0x0;
    piVar21 = (int *)0x0;
    do {
      lVar1 = lVar14 + uVar15 * 0x20;
      ppiVar19 = (int **)(lVar1 + 0x10);
      uVar2 = *(uint *)(lVar1 + 0x18) & 0xc00;
      if (uVar2 == 0x800) {
        piVar10 = *ppiVar19;
      }
      else if ((uVar2 == 0x400) && (piVar17 = *ppiVar19, *piVar17 == 3)) {
        lVar1 = *(long *)(*(long *)(piVar17 + 2) + 0x30);
        uVar18 = (*(long *)(*(long *)(piVar17 + 2) + 0x38) - lVar1 >> 3) * 0xb6db6db7;
        piVar20 = *(int **)(lVar14 + uVar15 * 0x20);
        piVar21 = piVar20;
        piVar22 = piVar17;
        piVar24 = piVar17;
        if ((int)uVar18 != 0) {
          uVar18 = uVar18 & 0xffffffff;
          ppiVar19 = (int **)(lVar1 + 0x10);
          do {
            if (**ppiVar19 == 3) {
              piVar21 = ppiVar19[-2];
              piVar22 = *ppiVar19;
            }
            ppiVar19 = ppiVar19 + 7;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
      }
      uVar15 = uVar15 + 1;
    } while ((uVar15 & 0xffffffff) < (ulong)(lVar12 >> 5));
    pvVar25 = (void *)((ulong)&local_80 | 1);
    local_80 = CONCAT26(local_80._6_2_,0x64696f7600);
    local_80 = CONCAT71(local_80._1_7_,8);
    if (piVar10 == (int *)0x0) {
      bVar7 = 0;
    }
    else {
                    /* try { // try from 00c2eae8 to 00c2eaf3 has its CatchHandler @ 00c2f0a8 */
      IR_Type::getTypeString((IR_LANGUAGE)piVar10);
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      local_80 = CONCAT71(uStack_97,local_98);
      bVar7 = 1;
      uStack_78 = uStack_90;
      local_70 = local_88;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar2 == 1) {
                    /* try { // try from 00c2eb5c to 00c2eb6b has its CatchHandler @ 00c2f0e0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)&local_80);
    uVar2 = *(uint *)(param_1 + 0x14);
  }
  pvVar3 = local_70;
  uVar15 = local_80;
  if (uVar2 == 2) {
                    /* try { // try from 00c2eb78 to 00c2ebaf has its CatchHandler @ 00c2f0ec */
    CodeStringStream::writeLine((char *)param_2,"kernel void _main(");
    writeMetalArguments(param_1,param_2,param_3,true,false);
    CodeStringStream::writeLine((char *)param_2,&DAT_004d9e55);
    lVar14 = *(long *)param_3;
    if (*(long *)(param_3 + 8) != lVar14) {
      uVar15 = 0;
      do {
        iVar5 = *(int *)(lVar14 + uVar15 * 0x40);
        if (iVar5 == 1) {
          lVar14 = lVar14 + uVar15 * 0x40;
          lVar12 = lVar14 + 0x19;
          if ((*(byte *)(lVar14 + 0x18) & 1) != 0) {
            lVar12 = *(long *)(lVar14 + 0x28);
          }
                    /* try { // try from 00c2ebf4 to 00c2ec4f has its CatchHandler @ 00c2f0e8 */
          CodeStringStream::writeLine
                    ((char *)param_2,"threadgroup %s %s[%u];",lVar12,*(undefined8 *)(lVar14 + 8),
                     (ulong)*(uint *)(lVar14 + 0x34));
        }
        else if (iVar5 == 0) {
          lVar14 = lVar14 + uVar15 * 0x40;
          lVar12 = lVar14 + 0x19;
          if ((*(byte *)(lVar14 + 0x18) & 1) != 0) {
            lVar12 = *(long *)(lVar14 + 0x28);
          }
          CodeStringStream::writeLine
                    ((char *)param_2,"threadgroup %s %s;",lVar12,*(undefined8 *)(lVar14 + 8));
        }
        lVar14 = *(long *)param_3;
        uVar15 = (ulong)((int)uVar15 + 1);
      } while (uVar15 < (ulong)(*(long *)(param_3 + 8) - lVar14 >> 6));
    }
    pbVar11 = *(byte **)(param_1 + 8);
    pbVar16 = *(byte **)(pbVar11 + 0x10);
    if ((*pbVar11 & 1) == 0) {
      pbVar16 = pbVar11 + 1;
    }
    CodeStringStream::writeLine((char *)param_2,&DAT_004f072e,pbVar16);
  }
  else {
                    /* try { // try from 00c2ec68 to 00c2ec77 has its CatchHandler @ 00c2f0dc */
    IR_Type::getTypeString((IR_LANGUAGE)piVar22);
    if ((uVar15 & 1) != 0) {
      pvVar25 = pvVar3;
    }
    pvVar3 = (void *)((ulong)&local_98 | 1);
    if ((local_98 & 1) != 0) {
      pvVar3 = local_88;
    }
                    /* try { // try from 00c2ecac to 00c2ecbf has its CatchHandler @ 00c2f0ac */
    CodeStringStream::writeLine
              ((char *)param_2,"%s %s _main(%s %s [[stage_in]]","vertex" + (ulong)uVar2 * 10,pvVar25
               ,pvVar3,piVar21);
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
                    /* try { // try from 00c2ecd8 to 00c2ecff has its CatchHandler @ 00c2f0ec */
    writeMetalArguments(param_1,param_2,param_3,true,true);
    CodeStringStream::writeLine((char *)param_2,&DAT_004d9e55);
    if (piVar24 != piVar22) {
                    /* try { // try from 00c2ed08 to 00c2ed1b has its CatchHandler @ 00c2f0a4 */
      IR_Type::getTypeString((IR_LANGUAGE)piVar24);
      pvVar25 = (void *)((ulong)&local_98 | 1);
      if ((local_98 & 1) != 0) {
        pvVar25 = local_88;
      }
                    /* try { // try from 00c2ed30 to 00c2ed43 has its CatchHandler @ 00c2f0a0 */
      CodeStringStream::writeLine((char *)param_2,"%s %s;\n",pvVar25,piVar20);
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
                    /* try { // try from 00c2ed54 to 00c2ede7 has its CatchHandler @ 00c2f0ec */
      CodeStringStream::writeLine((char *)param_2,"%s.%s = %s;\n",piVar20,piVar21,piVar21);
    }
    if ((bool)(bVar7 | *(int *)(param_1 + 0x14) == 1)) {
      CodeStringStream::writeLine((char *)param_2,"return ");
    }
    pbVar11 = *(byte **)(param_1 + 8);
    pbVar16 = *(byte **)(pbVar11 + 0x10);
    if ((*pbVar11 & 1) == 0) {
      pbVar16 = pbVar11 + 1;
    }
    CodeStringStream::writeLine((char *)param_2,"%s(%s",pbVar16,piVar20);
  }
  plVar13 = *(long **)(param_1 + 0x18);
  bVar9 = uVar2 != 2;
  lVar14 = *plVar13;
  if (plVar13[1] != lVar14) {
    uVar15 = 1;
    uVar18 = 0;
    do {
      uVar23 = uVar15;
      if (*(char *)(lVar14 + uVar18 * 0x40 + 0x19) == '\0') {
        if (bVar9) {
                    /* try { // try from 00c2ee44 to 00c2ee77 has its CatchHandler @ 00c2f0f0 */
          CodeStringStream::writeLine((char *)param_2,&DAT_004df685);
          plVar13 = *(long **)(param_1 + 0x18);
        }
        pbVar16 = (byte *)(*plVar13 + uVar18 * 0x40);
        pbVar11 = *(byte **)(pbVar16 + 0x10);
        if ((*pbVar16 & 1) == 0) {
          pbVar11 = pbVar16 + 1;
        }
        CodeStringStream::writeLine((char *)param_2,&DAT_004d33bb,pbVar11);
        plVar13 = *(long **)(param_1 + 0x18);
        bVar9 = true;
      }
      lVar14 = *plVar13;
      uVar15 = (ulong)((int)uVar23 + 1);
      uVar18 = uVar23;
    } while (uVar23 < (ulong)(plVar13[1] - lVar14 >> 6));
  }
  lVar14 = *(long *)param_3;
  if (*(long *)(param_3 + 8) == lVar14) {
    if (*(int *)(param_1 + 0x14) != 2) goto LAB_00c2f038;
    if (bVar9) goto LAB_00c2eff8;
  }
  else {
    uVar15 = 0;
    uVar18 = 1;
    do {
      if (bVar9) {
                    /* try { // try from 00c2eee4 to 00c2ef73 has its CatchHandler @ 00c2f0f4 */
        CodeStringStream::writeLine((char *)param_2,&DAT_004df685);
        lVar14 = *(long *)param_3;
      }
      lVar12 = *(long *)(lVar14 + uVar15 * 0x40 + 0x38);
      if ((lVar12 != 0) && (*(long *)(lVar12 + 0x10) != 0)) {
        lVar14 = lVar14 + uVar15 * 0x40;
        lVar12 = lVar14 + 0x19;
        if ((*(byte *)(lVar14 + 0x18) & 1) != 0) {
          lVar12 = *(long *)(lVar14 + 0x28);
        }
        CodeStringStream::writeLine((char *)param_2,lVar12);
        CodeStringStream::writeLine((char *)param_2,&DAT_0050332d);
        lVar14 = *(long *)param_3;
      }
      piVar21 = (int *)(lVar14 + uVar15 * 0x40);
      piVar22 = *(int **)(piVar21 + 4);
      if ((piVar22 == (int *)0x0) || (*piVar22 != 7 || piVar22[4] != 6)) {
        pcVar4 = "SysVar_";
        if (*piVar21 != 5) {
          pcVar4 = "";
        }
        CodeStringStream::writeLine
                  ((char *)param_2,&DAT_0050dd2e,pcVar4,*(undefined8 *)(piVar21 + 2));
      }
      else {
        pcVar4 = "METAL_BUFFER_";
        if (*(char *)(piVar22 + 5) != '\0') {
          pcVar4 = "METAL_RWBUFFER_";
        }
                    /* try { // try from 00c2ef9c to 00c2efa7 has its CatchHandler @ 00c2f0e4 */
        CodeStringStream::writeLine
                  ((char *)param_2,&DAT_0050dd2e,pcVar4,*(undefined8 *)(lVar14 + uVar15 * 0x40 + 8))
        ;
      }
      lVar14 = *(long *)param_3;
      lVar12 = *(long *)(lVar14 + uVar15 * 0x40 + 0x38);
      if ((lVar12 != 0) && (*(long *)(lVar12 + 0x10) != 0)) {
                    /* try { // try from 00c2efc0 to 00c2efcf has its CatchHandler @ 00c2f0f4 */
        CodeStringStream::writeLine((char *)param_2,&DAT_0050c971);
        lVar14 = *(long *)param_3;
      }
      bVar9 = true;
      bVar8 = uVar18 < (ulong)(*(long *)(param_3 + 8) - lVar14 >> 6);
      uVar15 = uVar18;
      uVar18 = (ulong)((int)uVar18 + 1);
    } while (bVar8);
    if (*(int *)(param_1 + 0x14) != 2) goto LAB_00c2f038;
LAB_00c2eff8:
                    /* try { // try from 00c2eff8 to 00c2f057 has its CatchHandler @ 00c2f0ec */
    CodeStringStream::writeLine((char *)param_2,&DAT_004df685);
  }
  CodeStringStream::writeLine((char *)param_2,&DAT_004d33bb,s_metalSysVars);
  CodeStringStream::writeLine
            ((char *)param_2,&DAT_0050508a,PTR_s_SysVar_subGroupInvocation_01046320);
LAB_00c2f038:
  CodeStringStream::writeLine((char *)param_2,&DAT_00506ae0);
  CodeStringStream::writeLine((char *)param_2,&DAT_004f82c1);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


