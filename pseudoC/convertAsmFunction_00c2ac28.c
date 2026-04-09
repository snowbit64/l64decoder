// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertAsmFunction
// Entry Point: 00c2ac28
// Size: 1496 bytes
// Signature: undefined __cdecl convertAsmFunction(ConversionContext * param_1, CodeStringStream * param_2)


/* IR_HllConvertUtil::convertAsmFunction(IR_HllConvertUtil::ConversionContext&, CodeStringStream&)
    */

void IR_HllConvertUtil::convertAsmFunction(ConversionContext *param_1,CodeStringStream *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char *pcVar3;
  int *piVar4;
  char **ppcVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  IR_LANGUAGE IVar9;
  size_t __n;
  bool bVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  char *pcVar14;
  uint *puVar15;
  uint uVar16;
  char *pcVar17;
  ulong uVar18;
  ulong local_d8;
  size_t sStack_d0;
  char *local_c8;
  byte local_c0;
  undefined7 uStack_bf;
  size_t sStack_b8;
  char *local_b0;
  byte local_a8 [16];
  char *local_98;
  undefined8 local_90;
  size_t sStack_88;
  char *local_80;
  undefined4 local_70;
  undefined local_6c;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  piVar4 = *(int **)param_1;
  lVar13 = *(long *)(param_1 + 8);
  iVar6 = *(int *)(param_1 + 0x10);
  if (iVar6 == 5) {
    CodeStringStream::writeLine((char *)param_2,(ulong)(*piVar4 - 3U < 2) << 1,"static ");
  }
  ppcVar5 = *(char ***)(lVar13 + 0x68);
  if ((*(char ***)(lVar13 + 0x70) == ppcVar5) || (**ppcVar5 != '$')) {
    lVar12 = *(long *)(param_1 + 8);
    lVar11 = lVar12 + 0x19;
    if ((*(byte *)(lVar12 + 0x18) & 1) != 0) {
      lVar11 = *(long *)(lVar12 + 0x28);
    }
    CodeStringStream::writeLine((char *)param_2,"void %s(",lVar11);
    uVar16 = 0;
  }
  else {
    IR_Type::getTypeString((IR_LANGUAGE)ppcVar5[2]);
    lVar11 = *(long *)(param_1 + 8);
    pcVar17 = (char *)((ulong)&local_90 | 1);
    if ((local_90 & 1) != 0) {
      pcVar17 = local_80;
    }
    lVar12 = lVar11 + 0x19;
    if ((*(byte *)(lVar11 + 0x18) & 1) != 0) {
      lVar12 = *(long *)(lVar11 + 0x28);
    }
                    /* try { // try from 00c2ad00 to 00c2ad0f has its CatchHandler @ 00c2b244 */
    CodeStringStream::writeLine((char *)param_2,"%s %s(",pcVar17,lVar12);
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    uVar16 = 1;
  }
  lVar11 = *(long *)(lVar13 + 0x68);
  uVar18 = (ulong)uVar16;
  if (uVar18 < (ulong)(*(long *)(lVar13 + 0x70) - lVar11 >> 5)) {
    bVar10 = false;
    pcVar17 = (char *)((ulong)&local_90 | 1);
    do {
      uVar16 = uVar16 + 1;
      if (bVar10) {
        CodeStringStream::writeLine((char *)param_2,&DAT_005097bc);
      }
      puVar1 = (undefined8 *)(lVar11 + uVar18 * 0x20);
      iVar7 = *(int *)puVar1[2];
      puVar2 = &DAT_0050a39f;
      if (iVar6 != 5) {
        puVar2 = *(undefined **)
                  (IR_QualFlags::getInOutSpecifier()::pSpecifiers +
                  ((ulong)(*(uint *)(puVar1 + 3) >> 10) & 3) * 8);
      }
      IVar9 = (IR_LANGUAGE)(int *)puVar1[2];
      if (iVar7 == 8) {
        IR_Type::getTypeString(IVar9);
        pcVar14 = pcVar17;
        if ((local_90 & 1) != 0) {
          pcVar14 = local_80;
        }
                    /* try { // try from 00c2ae40 to 00c2ae4f has its CatchHandler @ 00c2b284 */
        CodeStringStream::writeLine((char *)param_2,"%s %s",pcVar14,*puVar1);
      }
      else if (iVar7 == 7) {
        IR_Type::getTypeString(IVar9);
        pcVar14 = pcVar17;
        if ((local_90 & 1) != 0) {
          pcVar14 = local_80;
        }
                    /* try { // try from 00c2ae0c to 00c2ae1b has its CatchHandler @ 00c2b288 */
        CodeStringStream::writeLine((char *)param_2,"%s %s",pcVar14,*puVar1);
      }
      else if ((iVar6 == 5) && ((*(uint *)(puVar1 + 3) >> 0xb & 1) != 0)) {
        IR_Type::getTypeString(IVar9);
        pcVar14 = pcVar17;
        if ((local_90 & 1) != 0) {
          pcVar14 = local_80;
        }
                    /* try { // try from 00c2ae80 to 00c2ae8f has its CatchHandler @ 00c2b280 */
        CodeStringStream::writeLine((char *)param_2,"thread %s& %s",pcVar14,*puVar1);
      }
      else {
        IR_Type::getTypeString(IVar9);
        pcVar14 = pcVar17;
        if ((local_90 & 1) != 0) {
          pcVar14 = local_80;
        }
                    /* try { // try from 00c2aeb4 to 00c2aec7 has its CatchHandler @ 00c2b27c */
        CodeStringStream::writeLine((char *)param_2,"%s %s %s",puVar2,pcVar14,*puVar1);
      }
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      lVar11 = *(long *)(lVar13 + 0x68);
      uVar18 = (ulong)uVar16;
      bVar10 = true;
    } while (uVar18 < (ulong)(*(long *)(lVar13 + 0x70) - lVar11 >> 5));
  }
  lVar13 = *(long *)(param_1 + 8);
  pcVar17 = (char *)(lVar13 + 0x41);
  uVar18 = (ulong)(*(byte *)(lVar13 + 0x40) >> 1);
  if ((*(byte *)(lVar13 + 0x40) & 1) != 0) {
    pcVar17 = *(char **)(lVar13 + 0x50);
    uVar18 = *(ulong *)(lVar13 + 0x48);
  }
  pcVar14 = (char *)0x0;
  if (uVar18 != 0) {
    pcVar14 = pcVar17;
  }
  __n = strlen(pcVar14);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    pcVar17 = (char *)((ulong)&local_90 | 1);
    local_90 = CONCAT71(local_90._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_00c2af6c;
  }
  else {
    uVar18 = __n + 0x10 & 0xfffffffffffffff0;
    pcVar17 = (char *)operator_new(uVar18);
    local_90 = uVar18 | 1;
    sStack_88 = __n;
    local_80 = pcVar17;
  }
  memcpy(pcVar17,pcVar14,__n);
LAB_00c2af6c:
  pcVar17[__n] = '\0';
  puVar15 = *(uint **)(*(long *)(param_1 + 8) + 0x58);
  if (puVar15 != (uint *)0x0) {
                    /* try { // try from 00c2af7c to 00c2af8f has its CatchHandler @ 00c2b268 */
    IR_Type::getTypeString((IR_LANGUAGE)puVar15);
    pcVar14 = (char *)((ulong)&local_90 | 1);
    pcVar17 = pcVar14;
    if ((local_90 & 1) != 0) {
      pcVar17 = local_80;
    }
    pcVar3 = (char *)((ulong)local_a8 | 1);
    if ((local_a8[0] & 1) != 0) {
      pcVar3 = local_98;
    }
                    /* try { // try from 00c2afbc to 00c2afcb has its CatchHandler @ 00c2b248 */
    asmMacroReplace(pcVar17,"AnyType",pcVar3);
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    local_90 = CONCAT71(uStack_bf,local_c0);
    sStack_88 = sStack_b8;
    local_80 = local_b0;
    if (*puVar15 < 2) {
      uVar16 = puVar15[2];
      if (uVar16 - 3 < 7) {
        if (uVar16 - 3 < 2) {
          pcVar17 = pcVar14;
          if ((local_c0 & 1) != 0) {
            pcVar17 = local_b0;
          }
          pcVar3 = (char *)((ulong)local_a8 | 1);
          if ((local_a8[0] & 1) != 0) {
            pcVar3 = local_98;
          }
                    /* try { // try from 00c2b030 to 00c2b03f has its CatchHandler @ 00c2b200 */
          asmMacroReplace(pcVar17,"AnyFloatN",pcVar3);
          if ((local_90 & 1) != 0) {
            operator_delete(local_80);
          }
          local_90 = (ulong)local_c0;
          sStack_88 = sStack_b8;
          uVar16 = puVar15[2];
        }
                    /* try { // try from 00c2b064 to 00c2b06f has its CatchHandler @ 00c2b240 */
        local_80 = local_b0;
        IVar9 = IR_TypeSet::getVectorType((IR_TypeSet *)(piVar4 + 4),uVar16,4);
                    /* try { // try from 00c2b070 to 00c2b07f has its CatchHandler @ 00c2b23c */
        IR_Type::getTypeString(IVar9);
        pcVar17 = pcVar14;
        if ((local_90 & 1) != 0) {
          pcVar17 = local_80;
        }
        pcVar3 = (char *)((ulong)&local_c0 | 1);
        if ((local_c0 & 1) != 0) {
          pcVar3 = local_b0;
        }
                    /* try { // try from 00c2b0a4 to 00c2b0b3 has its CatchHandler @ 00c2b208 */
        asmMacroReplace(pcVar17,"AnyUpcast",pcVar3);
        if (((byte)local_90 & 1) != 0) {
          operator_delete(local_80);
        }
        local_90 = local_d8;
        local_80 = local_c8;
        if (*puVar15 == 1) {
          uVar18 = (ulong)puVar15[5];
        }
        else {
          uVar18 = 1;
        }
        local_6c = 0;
        if ((local_d8 & 1) != 0) {
          pcVar14 = local_c8;
        }
        local_70 = 0x777a7978;
        *(undefined *)((long)&local_70 + uVar18) = 0;
                    /* try { // try from 00c2b114 to 00c2b127 has its CatchHandler @ 00c2b204 */
        asmMacroReplace(pcVar14,"AnyXYZW",(char *)&local_70);
        if ((local_90 & 1) != 0) {
          operator_delete(local_80);
        }
        sStack_88 = sStack_d0;
        local_90 = local_d8;
        local_80 = local_c8;
        if ((local_c0 & 1) != 0) {
          operator_delete(local_b0);
        }
      }
    }
    if ((local_a8[0] & 1) != 0) {
      operator_delete(local_98);
    }
  }
  pcVar17 = (char *)((ulong)&local_90 | 1);
  if ((local_90 & 1) != 0) {
    pcVar17 = local_80;
  }
  if (*pcVar17 == '\n') {
                    /* try { // try from 00c2b18c to 00c2b1af has its CatchHandler @ 00c2b26c */
    CodeStringStream::writeLine((char *)param_2,")\n{%s}\n\n");
  }
  else {
    CodeStringStream::writeLine((char *)param_2,") {%s}\n\n");
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar8 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


