// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: collectGlobals
// Entry Point: 00c2fe5c
// Size: 868 bytes
// Signature: undefined __cdecl collectGlobals(ConversionContext * param_1, vector * param_2)


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IR_HllConvertUtil::collectGlobals(IR_HllConvertUtil::ConversionContext&,
   std::__ndk1::vector<IR_HllConvertUtil::GlobalData,
   std::__ndk1::allocator<IR_HllConvertUtil::GlobalData> >&) */

uint IR_HllConvertUtil::collectGlobals(ConversionContext *param_1,vector *param_2)

{
  __tree_node **pp_Var1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  ShaderLanguage *pSVar9;
  uint **ppuVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong local_c0;
  void *local_b0;
  undefined8 local_a8;
  __tree_node *p_Stack_a0;
  uint *local_98;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  long local_78;
  long lStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pSVar9 = (ShaderLanguage *)(param_1 + 0x10);
  if (*pSVar9 == 5) {
    lVar11 = *(long *)(param_1 + 8);
    lVar13 = *(long *)(lVar11 + 0x68);
    if (*(long *)(lVar11 + 0x70) != lVar13) {
      uVar12 = 0;
      do {
        lVar5 = lVar13 + uVar12 * 0x20;
        if ((*(uint *)(lVar5 + 0x18) & 0xc00) == 0x400) {
          ppuVar10 = (uint **)(lVar5 + 0x10);
          uVar4 = **ppuVar10;
          if (uVar4 < 2) {
            pcVar7 = *(char **)(lVar13 + uVar12 * 0x20 + 8);
            if (((pcVar7 != (char *)0x0) &&
                (lVar5 = getSystemVariableInfo(pSVar9,pcVar7), lVar5 != 0)) &&
               (*(char *)(lVar5 + 0x18) != '\0')) {
              local_90 = 0;
              uStack_88 = 0;
              local_80 = (void *)0x0;
              local_a8 = (__tree_node **)CONCAT44(local_a8._4_4_,5);
              p_Stack_a0 = *(__tree_node **)(lVar13 + uVar12 * 0x20);
                    /* try { // try from 00c2ff48 to 00c2ff53 has its CatchHandler @ 00c301c8 */
              IR_Type::getTypeString((IR_LANGUAGE)*ppuVar10);
              if ((local_90 & 1) != 0) {
                operator_delete(local_80);
              }
              local_90 = local_c0;
              local_80 = local_b0;
              local_98 = *ppuVar10;
              if (*local_98 == 0) {
                uVar4 = 1;
              }
              else if (*local_98 == 1) {
                uVar4 = local_98[5];
              }
              else {
                uVar4 = 0;
              }
              puVar2 = *(undefined8 **)(param_2 + 8);
              local_78 = (ulong)uVar4 << 0x20;
              lStack_70 = lVar5;
              if (puVar2 == *(undefined8 **)(param_2 + 0x10)) {
                    /* try { // try from 00c30124 to 00c3012f has its CatchHandler @ 00c301c0 */
                std::__ndk1::
                vector<IR_HllConvertUtil::GlobalData,std::__ndk1::allocator<IR_HllConvertUtil::GlobalData>>
                ::__push_back_slow_path<IR_HllConvertUtil::GlobalData_const&>
                          ((vector<IR_HllConvertUtil::GlobalData,std::__ndk1::allocator<IR_HllConvertUtil::GlobalData>>
                            *)param_2,(GlobalData *)&local_a8);
              }
              else {
                puVar2[2] = local_98;
                puVar2[1] = p_Stack_a0;
                *puVar2 = local_a8;
                    /* try { // try from 00c30104 to 00c3010b has its CatchHandler @ 00c301c4 */
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string((basic_string *)(puVar2 + 3));
                puVar2[7] = lStack_70;
                puVar2[6] = local_78;
                *(undefined8 **)(param_2 + 8) = puVar2 + 8;
              }
              if ((local_90 & 1) != 0) {
                operator_delete(local_80);
              }
            }
          }
          else if (uVar4 == 3) {
            lVar5 = *(long *)(*ppuVar10 + 2);
            lVar13 = *(long *)(lVar5 + 0x30);
            uVar8 = (*(long *)(lVar5 + 0x38) - lVar13 >> 3) * 0xb6db6db7;
            if ((int)uVar8 != 0) {
              lVar14 = 0;
              while( true ) {
                pcVar7 = *(char **)(lVar13 + lVar14 + 8);
                if (((pcVar7 != (char *)0x0) &&
                    (lVar6 = getSystemVariableInfo(pSVar9,pcVar7), lVar6 != 0)) &&
                   (*(char *)(lVar6 + 0x18) != '\0')) {
                  pp_Var1 = (__tree_node **)(lVar13 + lVar14);
                  local_90 = 0;
                  uStack_88 = 0;
                  local_80 = (void *)0x0;
                  local_a8 = (__tree_node **)CONCAT44(local_a8._4_4_,5);
                  p_Stack_a0 = *pp_Var1;
                    /* try { // try from 00c30020 to 00c3002b has its CatchHandler @ 00c301f0 */
                  IR_Type::getTypeString((IR_LANGUAGE)pp_Var1[2]);
                  if ((local_90 & 1) != 0) {
                    operator_delete(local_80);
                  }
                  puVar2 = *(undefined8 **)(param_2 + 8);
                  local_90 = local_c0;
                  local_80 = local_b0;
                  local_98 = (uint *)pp_Var1[2];
                  local_78 = 0;
                  lStack_70 = lVar6;
                  if (puVar2 == *(undefined8 **)(param_2 + 0x10)) {
                    /* try { // try from 00c3009c to 00c300a7 has its CatchHandler @ 00c301e0 */
                    std::__ndk1::
                    vector<IR_HllConvertUtil::GlobalData,std::__ndk1::allocator<IR_HllConvertUtil::GlobalData>>
                    ::__push_back_slow_path<IR_HllConvertUtil::GlobalData_const&>
                              ((vector<IR_HllConvertUtil::GlobalData,std::__ndk1::allocator<IR_HllConvertUtil::GlobalData>>
                                *)param_2,(GlobalData *)&local_a8);
                  }
                  else {
                    puVar2[2] = local_98;
                    puVar2[1] = p_Stack_a0;
                    *puVar2 = local_a8;
                    /* try { // try from 00c30078 to 00c3007f has its CatchHandler @ 00c301e4 */
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    basic_string((basic_string *)(puVar2 + 3));
                    puVar2[7] = lStack_70;
                    puVar2[6] = local_78;
                    *(undefined8 **)(param_2 + 8) = puVar2 + 8;
                  }
                  if ((local_90 & 1) != 0) {
                    operator_delete(local_80);
                  }
                }
                if ((uVar8 & 0xffffffff) * 0x38 + -0x38 == lVar14) break;
                lVar13 = *(long *)(lVar5 + 0x30);
                lVar14 = lVar14 + 0x38;
              }
            }
          }
        }
        lVar13 = *(long *)(lVar11 + 0x68);
        uVar12 = (ulong)((int)uVar12 + 1);
      } while (uVar12 < (ulong)(*(long *)(lVar11 + 0x70) - lVar13 >> 5));
    }
  }
  local_a8 = &p_Stack_a0;
  p_Stack_a0 = (__tree_node *)0x0;
  local_98 = (uint *)0x0;
                    /* try { // try from 00c30168 to 00c30173 has its CatchHandler @ 00c301cc */
  uVar4 = collectGlobals(param_1,**(IR_Section ***)(*(long *)(param_1 + 8) + 0xb8),param_2,
                         (set *)&local_a8);
  std::__ndk1::
  __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  ::destroy((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)&local_a8,p_Stack_a0);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


