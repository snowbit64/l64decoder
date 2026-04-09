// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processMacro
// Entry Point: 00b949d4
// Size: 1428 bytes
// Signature: undefined __cdecl processMacro(Preprocessor * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint * param_8, uint * param_9)


/* WARNING: Type propagation algorithm not settling */
/* PreprocessorMetaMacroFor::processMacro(Preprocessor*, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int*, unsigned int*) */

void PreprocessorMetaMacroFor::processMacro
               (Preprocessor *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
               uint param_6,uint param_7,uint *param_8,uint *param_9)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  undefined8 uVar8;
  char *pcVar9;
  StringUtil *pSVar10;
  char *pcVar11;
  Preprocessor *this;
  char *pcVar12;
  char *extraout_x1;
  StringUtil *pSVar13;
  StringUtil *pSVar14;
  StringUtil *pSVar15;
  StringUtil *pSVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  int iVar21;
  StringUtil *pSVar22;
  long lVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  int local_dc;
  undefined8 local_d8;
  ulong local_d0;
  undefined8 local_c8;
  char *local_c0;
  ulong local_b8;
  ulong uStack_b0;
  char *local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  StringUtil *local_90;
  ulong local_88;
  ulong local_80;
  StringUtil *local_78;
  uint local_70;
  uint uStack_6c;
  long local_68;
  
  this = (Preprocessor *)(ulong)param_2;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_70 = param_4;
  uStack_6c = param_3;
  if (param_7 < 2) {
    Preprocessor::printError(this,"#for needs 2 parameters");
LAB_00b94a20:
    uVar8 = 0;
  }
  else {
    if (*(int *)(this + (ulong)*(uint *)(this + 300) * 4 + 100) == 0) {
      Preprocessor::whiteout(this,&uStack_6c,&local_70);
      uVar5 = uStack_6c;
      uVar1 = local_70;
      local_88 = 0;
      local_80 = 0;
      local_78 = (StringUtil *)0x0;
      uVar24 = (ulong)uStack_6c;
      lVar23 = **(long **)(this + 0x38);
                    /* try { // try from 00b94a98 to 00b94ac3 has its CatchHandler @ 00b95008 */
      bVar7 = Preprocessor::getIsLineStart(this,uStack_6c);
      Preprocessor::processText
                (this,(char *)(lVar23 + uVar24),uVar1 - uVar5,(bool)(bVar7 & 1),0,
                 (basic_string *)&local_88,false);
      pSVar10 = local_78;
      uVar4 = local_88;
      uVar24 = local_88 >> 1 & 0x7f;
      if ((local_88 & 1) != 0) {
        uVar24 = local_80;
      }
      if (uVar24 == 0) {
                    /* try { // try from 00b94ba8 to 00b94bb7 has its CatchHandler @ 00b95008 */
        Preprocessor::printError(this,"#for invalid param format");
LAB_00b94bf4:
        bVar6 = true;
      }
      else {
        pSVar13 = (StringUtil *)((ulong)&local_88 | 1);
        if ((local_88 & 1) != 0) {
          pSVar13 = local_78;
        }
        pSVar22 = pSVar13 + uVar24;
        pcVar9 = strchr(*(char **)(*(long *)(this + 0x30) + 0x80),(uint)(byte)*pSVar13);
        if (pcVar9 != (char *)0x0) {
          pSVar13 = (StringUtil *)((ulong)&local_88 | 2);
          pSVar22 = pSVar22 + -1;
          if ((uVar4 & 1) != 0) {
            pSVar13 = pSVar10 + 1;
          }
          pcVar9 = strchr(*(char **)(*(long *)(this + 0x30) + 0x88),(uint)(byte)*pSVar22);
          if (pcVar9 == (char *)0x0) {
                    /* try { // try from 00b94bd0 to 00b94bdf has its CatchHandler @ 00b94f88 */
            Preprocessor::printError(this,"#for invalid param format");
            goto LAB_00b94bf4;
          }
        }
        pSVar10 = (StringUtil *)strchr((char *)pSVar13,0x3d);
        if (pSVar10 == (StringUtil *)0x0) {
                    /* try { // try from 00b94bbc to 00b94bcb has its CatchHandler @ 00b94f90 */
          Preprocessor::printError(this,"#for invalid param format");
          goto LAB_00b94bf4;
        }
        pcVar9 = strchr((char *)(pSVar10 + 1),0x2c);
        if (pcVar9 == (char *)0x0) {
                    /* try { // try from 00b94be4 to 00b94bf3 has its CatchHandler @ 00b94f6c */
          Preprocessor::printError(this,"#for invalid param format");
          goto LAB_00b94bf4;
        }
        pcVar12 = (char *)0x2c;
        pcVar11 = strchr(pcVar9 + 1,0x2c);
        uVar24 = (long)pSVar10 - (long)pSVar13;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = (StringUtil *)0x0;
        if (uVar24 < 0x17) {
          local_a0._0_1_ = 0;
        }
        else {
                    /* try { // try from 00b94b80 to 00b94b9b has its CatchHandler @ 00b94f8c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__grow_by
                    ((ulong)&local_a0,0x16,uVar24 - 0x16,0,0,0);
          pcVar12 = extraout_x1;
        }
        uVar4 = local_a0;
        pSVar14 = (StringUtil *)((ulong)&local_a0 | 1);
        if (((byte)local_a0 & 1) != 0) {
          pSVar14 = local_90;
        }
        pSVar15 = pSVar14;
        if (pSVar13 != pSVar10) {
          if ((0x1f < uVar24) && ((pSVar10 <= pSVar14 || (pSVar14 + uVar24 <= pSVar13)))) {
            uVar17 = uVar24 & 0xffffffffffffffe0;
            puVar19 = (undefined8 *)(pSVar13 + 0x10);
            pSVar15 = pSVar14 + uVar17;
            pSVar13 = pSVar13 + uVar17;
            puVar18 = (undefined8 *)(pSVar14 + 0x10);
            uVar20 = uVar17;
            do {
              puVar3 = puVar19 + -1;
              uVar8 = puVar19[-2];
              uVar26 = puVar19[1];
              uVar25 = *puVar19;
              puVar19 = puVar19 + 4;
              uVar20 = uVar20 - 0x20;
              puVar18[-1] = *puVar3;
              puVar18[-2] = uVar8;
              puVar18[1] = uVar26;
              *puVar18 = uVar25;
              puVar18 = puVar18 + 4;
            } while (uVar20 != 0);
            pSVar14 = pSVar15;
            if (uVar24 == uVar17) goto LAB_00b94c6c;
          }
          do {
            pSVar16 = pSVar13 + 1;
            pSVar15 = pSVar14 + 1;
            *pSVar14 = *pSVar13;
            pSVar14 = pSVar15;
            pSVar13 = pSVar16;
          } while (pSVar16 != pSVar10);
        }
LAB_00b94c6c:
        *pSVar15 = (StringUtil)0x0;
        if ((local_a0 & 1) == 0) {
          local_a0 = CONCAT71(local_a0._1_7_,(char)((int)uVar24 << 1));
          uVar24 = uStack_98;
        }
        uStack_98 = uVar24;
        pSVar13 = (StringUtil *)((ulong)&local_a0 | 1);
        if ((uVar4 & 1) != 0) {
          pSVar13 = local_90;
        }
                    /* try { // try from 00b94c94 to 00b94c9b has its CatchHandler @ 00b94f94 */
        StringUtil::trim(pSVar13,pcVar12);
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
        uStack_98 = uStack_b0;
        local_a0 = local_b8;
        uVar24 = local_b8 >> 1 & 0x7f;
        if ((local_b8 & 1) != 0) {
          uVar24 = uStack_b0;
        }
        local_90 = (StringUtil *)local_a8;
        if (uVar24 == 0) {
                    /* try { // try from 00b94e84 to 00b94e93 has its CatchHandler @ 00b94f8c */
          Preprocessor::printError(this,"#for invalid param format");
          bVar6 = true;
        }
        else {
          local_b8 = 0;
          uStack_b0 = 0;
          local_a8 = (char *)0x0;
                    /* try { // try from 00b94ce4 to 00b94cff has its CatchHandler @ 00b94f74 */
          Preprocessor::processText
                    (this,(char *)(pSVar10 + 1),(uint)pcVar9 + ~(uint)pSVar10,false,0,
                     (basic_string *)&local_b8,false);
          local_d0 = 0;
          local_c8 = 0;
          local_c0 = (char *)0x0;
          uVar1 = (uint)pSVar22;
          if (pcVar11 != (char *)0x0) {
            uVar1 = (uint)pcVar11;
          }
                    /* try { // try from 00b94d1c to 00b94d33 has its CatchHandler @ 00b94f70 */
          Preprocessor::processText
                    (this,pcVar9 + 1,uVar1 + ~(uint)pcVar9,false,0,(basic_string *)&local_d0,false);
          local_d8 = 0;
          bVar6 = (local_b8 & 1) != 0;
          pcVar9 = (char *)((ulong)&local_b8 | 1);
          if (bVar6) {
            pcVar9 = local_a8;
          }
          uVar1 = (uint)((byte)local_b8 >> 1);
          if (bVar6) {
            uVar1 = (uint)uStack_b0;
          }
                    /* try { // try from 00b94d5c to 00b94d9b has its CatchHandler @ 00b94fa8 */
          uVar24 = StringArithmeticUtil::doArithmeticEval
                             (pcVar9,0,uVar1,(int *)((long)&local_d8 + 4));
          if ((uVar24 & 1) == 0) {
LAB_00b94e48:
                    /* try { // try from 00b94e48 to 00b94e57 has its CatchHandler @ 00b94fa8 */
            Preprocessor::printError(this,"#for invalid param format");
LAB_00b94e58:
            bVar6 = true;
          }
          else {
            bVar6 = (local_d0 & 1) != 0;
            pcVar9 = (char *)((ulong)&local_d0 | 1);
            if (bVar6) {
              pcVar9 = local_c0;
            }
            uVar1 = (uint)((byte)local_d0 >> 1);
            if (bVar6) {
              uVar1 = (uint)local_c8;
            }
            uVar24 = StringArithmeticUtil::doArithmeticEval(pcVar9,0,uVar1,(int *)&local_d8);
            if ((uVar24 & 1) == 0) goto LAB_00b94e48;
            local_dc = 1;
                    /* try { // try from 00b94db8 to 00b94e03 has its CatchHandler @ 00b94f68 */
            if ((pcVar11 != (char *)0x0) &&
               ((uVar24 = StringArithmeticUtil::doArithmeticEval
                                    (pcVar11 + 1,0,~(uint)pcVar11 + (uint)pSVar22,&local_dc),
                (uVar24 & 1) == 0 || (local_dc == 0)))) {
                    /* try { // try from 00b94ef0 to 00b94eff has its CatchHandler @ 00b94f68 */
              Preprocessor::printError(this,"#for invalid param format");
              goto LAB_00b94e58;
            }
            lVar23 = Preprocessor::findMacro(this,(basic_string *)&local_a0);
            if ((lVar23 != 0) &&
               (Preprocessor::deleteMacro(this,(basic_string *)&local_a0),
               this[0x60] != (Preprocessor)0x0)) {
              Preprocessor::printWarning(this,"#for loop variable already defined");
            }
            if (local_dc < 1) {
              iVar21 = local_d8._4_4_;
              if ((int)local_d8 <= local_d8._4_4_) {
                do {
                    /* try { // try from 00b94f0c to 00b94f23 has its CatchHandler @ 00b94f84 */
                  PreprocessorMetaMacro::outputLoopBody
                            (this,(basic_string *)&local_a0,iVar21,param_5,param_6);
                  iVar21 = local_dc + iVar21;
                } while ((int)local_d8 <= iVar21);
              }
            }
            else {
              iVar21 = local_d8._4_4_;
              if (local_d8._4_4_ <= (int)local_d8) {
                do {
                    /* try { // try from 00b94e1c to 00b94e33 has its CatchHandler @ 00b94fa4 */
                  PreprocessorMetaMacro::outputLoopBody
                            (this,(basic_string *)&local_a0,iVar21,param_5,param_6);
                  iVar21 = local_dc + iVar21;
                } while (iVar21 <= (int)local_d8);
              }
            }
            bVar6 = false;
          }
          if ((local_d0 & 1) != 0) {
            operator_delete(local_c0);
          }
          if ((local_b8 & 1) != 0) {
            operator_delete(local_a8);
          }
        }
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if (bVar6) goto LAB_00b94a20;
    }
    uVar8 = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


