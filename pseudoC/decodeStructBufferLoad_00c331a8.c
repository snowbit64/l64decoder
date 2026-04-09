// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decodeStructBufferLoad
// Entry Point: 00c331a8
// Size: 1216 bytes
// Signature: undefined __cdecl decodeStructBufferLoad(ConversionContext * param_1, basic_string param_2, ShaderStructLayout * param_3, vector * param_4, uint * param_5, uint * param_6, IR_Type * * param_7)


/* IR_HllConvertUtil::decodeStructBufferLoad(IR_HllConvertUtil::ConversionContext&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   ShaderStructLayout const*, std::__ndk1::vector<IR_HllConvertUtil::RegContents,
   std::__ndk1::allocator<IR_HllConvertUtil::RegContents> > const&, unsigned int const*, unsigned
   int&, IR_Type*&) */

void IR_HllConvertUtil::decodeStructBufferLoad
               (ConversionContext *param_1,basic_string param_2,ShaderStructLayout *param_3,
               vector *param_4,uint *param_5,uint *param_6,IR_Type **param_7)

{
  basic_string *pbVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  IR_Type *pIVar8;
  byte *pbVar9;
  char *pcVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  ShaderStructLayout *__s1;
  byte *pbVar16;
  uint uVar17;
  char **ppcVar18;
  uint local_2ac;
  ulong local_2a8;
  undefined8 uStack_2a0;
  void *local_298;
  undefined8 local_290;
  ulong local_288;
  ulong local_280;
  char *local_278;
  ulong local_270;
  undefined8 uStack_268;
  void *local_260;
  undefined auStack_170 [256];
  long local_70;
  
  pbVar9 = (byte *)(ulong)param_2;
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  uVar11 = param_5[1];
  local_288 = 0;
  local_280 = 0;
  uVar17 = *param_6;
  local_278 = (char *)0x0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  uVar2 = uVar11 & 0xffff;
  local_298 = (void *)0x0;
  if (uVar17 < uVar2) {
    lVar14 = *(long *)param_1;
    do {
      if ((int)param_5[uVar17 + (uVar11 >> 0x10) + 2] < 0) {
        uVar12 = (ulong)param_5[uVar17 + (uVar11 >> 0x10) + 2] & 0x7fffffff;
        lVar15 = *(long *)(*(long *)(param_1 + 8) + 0x80);
        iVar6 = *(int *)(lVar15 + uVar12 * 0x18);
        if (iVar6 - 5U < 2) {
          local_270 = 0;
          uStack_268 = 0;
          local_260 = (void *)0x0;
          FUN_00c2f578(auStack_170,0x100,&DAT_004cf2ba,*(undefined4 *)(lVar15 + uVar12 * 0x18 + 8));
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((char *)&local_270);
          goto LAB_00c332dc;
        }
        if (iVar6 == 0xc) {
          local_2ac = 0;
          ppcVar18 = (char **)(lVar15 + uVar12 * 0x18 + 8);
                    /* try { // try from 00c33358 to 00c3337b has its CatchHandler @ 00c3367c */
          ShaderStructLayout::findField(param_3,*ppcVar18,&local_2ac);
          pbVar1 = (basic_string *)(*(long *)(param_3 + 0x20) + (ulong)local_2ac * 0x20);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_2a8,pbVar1);
          local_290 = *(ulong *)(pbVar1 + 6);
                    /* try { // try from 00c33390 to 00c33397 has its CatchHandler @ 00c33674 */
          lVar15 = IR_Struct::getField(*(IR_Struct **)(*param_7 + 8),*ppcVar18,(uint *)0x0);
          piVar7 = *(int **)(lVar15 + 0x10);
          *param_7 = (IR_Type *)piVar7;
          if (*piVar7 == 3) {
            lVar15 = **(long **)(param_1 + 0x18);
            lVar4 = (*(long **)(param_1 + 0x18))[1] - lVar15;
            if (lVar4 == 0) {
              param_3 = (ShaderStructLayout *)0x0;
            }
            else {
              pbVar13 = *(byte **)(piVar7 + 2);
              uVar12 = 0;
              pbVar16 = *(byte **)(pbVar13 + 0x10);
              if ((*pbVar13 & 1) == 0) {
                pbVar16 = pbVar13 + 1;
              }
              do {
                param_3 = (ShaderStructLayout *)(lVar15 + uVar12 * 0x40);
                __s1 = *(ShaderStructLayout **)(param_3 + 0x10);
                if (((byte)*param_3 & 1) == 0) {
                  __s1 = param_3 + 1;
                }
                iVar6 = strcmp((char *)__s1,(char *)pbVar16);
                if (iVar6 == 0) goto LAB_00c334dc;
                uVar12 = (ulong)((int)uVar12 + 1);
              } while (uVar12 < (ulong)(lVar4 >> 6));
              param_3 = (ShaderStructLayout *)0x0;
            }
          }
LAB_00c334dc:
                    /* try { // try from 00c334e8 to 00c33507 has its CatchHandler @ 00c33678 */
          FUN_00c2f578(&local_270,0x100," + %u /*%s*/",(ushort)local_290 >> 2,*ppcVar18);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&local_288);
          if ((local_290._6_1_ | local_290._2_1_) == 0) {
            *param_6 = uVar17 + 1;
            pbVar16 = *(byte **)(pbVar9 + 0x10);
            if ((*pbVar9 & 1) == 0) {
              pbVar16 = pbVar9 + 1;
            }
            pcVar10 = (char *)((ulong)&local_288 | 1);
            if ((local_288 & 1) != 0) {
              pcVar10 = local_278;
            }
                    /* try { // try from 00c33554 to 00c33563 has its CatchHandler @ 00c33668 */
            codeStructBufferLoad
                      (param_1,(char *)pbVar16,pcVar10,(Field *)&local_2a8,(ushort)local_290 & 3);
            goto LAB_00c335c4;
          }
        }
      }
      else {
        local_270 = 0;
        uStack_268 = 0;
        local_260 = (void *)0x0;
                    /* try { // try from 00c3327c to 00c33327 has its CatchHandler @ 00c3368c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)&local_270);
LAB_00c332dc:
        uVar12 = local_288 >> 1 & 0x7f;
        if ((local_288 & 1) != 0) {
          uVar12 = local_280;
        }
        if (uVar12 == 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_288,(basic_string *)&local_270);
          *param_7 = *(IR_Type **)(*param_7 + 8);
        }
        else {
          piVar7 = (int *)*param_7;
          iVar6 = *piVar7;
          if (iVar6 == 2) {
            pIVar8 = (IR_Type *)
                     IR_Type::getMatrixRowType((IR_Type *)piVar7,(IR_TypeSet *)(lVar14 + 0x10));
            uVar11 = 1;
            *param_7 = pIVar8;
            local_290._0_3_ = (uint3)(ushort)local_290;
          }
          else if (iVar6 == 4) {
                    /* try { // try from 00c33414 to 00c334af has its CatchHandler @ 00c33690 */
            pIVar8 = (IR_Type *)
                     IR_Type::getElementType((IR_Type *)piVar7,(IR_TypeSet *)(lVar14 + 0x10));
            *param_7 = pIVar8;
            if (param_3[0x18] == (ShaderStructLayout)0x0) {
              if (local_290._2_1_ == 0) goto LAB_00c33460;
              uVar11 = (uint)local_290._2_1_ << 2;
            }
            else if (local_290._2_1_ == 0) {
LAB_00c33460:
              uVar11 = (uint)local_290._3_1_;
              if (uVar11 == 0) {
                uVar11 = 0;
              }
            }
            else {
              uVar11 = (uint)local_290._3_1_ * (uint)local_290._2_1_;
            }
            uVar11 = uVar11 >> 2;
            uVar12 = local_290 >> 0x30;
            local_290._0_6_ = CONCAT24(1,(undefined4)local_290);
            local_290 = CONCAT26((short)uVar12,(undefined6)local_290) & 0xff00ffffffffffff;
          }
          else {
            if (iVar6 == 1) {
              *param_6 = uVar17;
              pbVar16 = *(byte **)(pbVar9 + 0x10);
              if ((*pbVar9 & 1) == 0) {
                pbVar16 = pbVar9 + 1;
              }
              pcVar10 = (char *)((ulong)&local_288 | 1);
              if ((local_288 & 1) != 0) {
                pcVar10 = local_278;
              }
                    /* try { // try from 00c3363c to 00c3364f has its CatchHandler @ 00c3366c */
              codeStructBufferLoad(param_1,(char *)pbVar16,pcVar10,(Field *)&local_2a8,0);
              if ((local_270 & 1) != 0) {
                operator_delete(local_260);
              }
              goto LAB_00c335c4;
            }
            uVar11 = 1;
          }
          pvVar3 = (void *)((ulong)&local_270 | 1);
          if ((local_270 & 1) != 0) {
            pvVar3 = local_260;
          }
          FUN_00c2f578(auStack_170,0x100," + (%s * %u)",pvVar3,uVar11);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&local_288);
        }
        if ((local_270 & 1) != 0) {
          operator_delete(local_260);
        }
      }
      uVar17 = uVar17 + 1;
      if (uVar17 == uVar2) goto LAB_00c33580;
      uVar11 = param_5[1];
    } while( true );
  }
  *param_6 = uVar2;
  pbVar16 = *(byte **)(pbVar9 + 0x10);
  if ((*pbVar9 & 1) == 0) {
    pbVar16 = pbVar9 + 1;
  }
LAB_00c335a4:
  pcVar10 = (char *)((ulong)&local_288 | 1);
LAB_00c335b4:
                    /* try { // try from 00c335b4 to 00c335c3 has its CatchHandler @ 00c33670 */
  codeStructBufferLoad(param_1,(char *)pbVar16,pcVar10,(Field *)&local_2a8,0);
LAB_00c335c4:
  if ((local_2a8 & 1) != 0) {
    operator_delete(local_298);
  }
  if ((local_288 & 1) != 0) {
    operator_delete(local_278);
  }
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00c33580:
  *param_6 = uVar2;
  pbVar16 = *(byte **)(pbVar9 + 0x10);
  if ((*pbVar9 & 1) == 0) {
    pbVar16 = pbVar9 + 1;
  }
  pcVar10 = local_278;
  if ((local_288 & 1) != 0) goto LAB_00c335b4;
  goto LAB_00c335a4;
}


