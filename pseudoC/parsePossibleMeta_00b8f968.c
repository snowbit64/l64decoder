// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parsePossibleMeta
// Entry Point: 00b8f968
// Size: 1312 bytes
// Signature: undefined parsePossibleMeta(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Preprocessor::parsePossibleMeta() */

undefined4 Preprocessor::parsePossibleMeta(void)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  __tree_iterator _Var7;
  int iVar8;
  Preprocessor *in_x0;
  ulong uVar9;
  uint uVar11;
  byte *pbVar12;
  ulong uVar13;
  undefined8 *puVar14;
  int *piVar15;
  undefined8 *puVar16;
  int *piVar17;
  undefined4 uVar18;
  ulong uVar19;
  void *__dest;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  uint local_3c0;
  uint local_3bc;
  uint local_3b8;
  uint local_3b4;
  uint local_3b0;
  uint local_3ac;
  undefined8 local_3a8;
  ulong local_3a0;
  void *local_398;
  uint local_390;
  uint local_38c;
  undefined8 local_388 [50];
  undefined8 local_1f8 [50];
  long local_68;
  Preprocessor *pPVar10;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_390 = 0;
  uVar9 = matchSequence(in_x0,*(char **)(*(long *)(in_x0 + 0x30) + 0x48),&local_390);
  uVar11 = local_390;
  uVar18 = 0;
  if ((uVar9 & 1) == 0) goto LAB_00b8fd44;
  uVar9 = (ulong)local_390;
  uVar5 = identifierEnd(in_x0,local_390);
  if ((uVar5 != 0) && (cVar4 = getChar(in_x0,uVar5 - 1), cVar4 == '\0')) {
    uVar18 = 0;
    goto LAB_00b8fd44;
  }
  uVar11 = uVar5 - uVar11;
  uVar19 = (ulong)uVar11;
  lVar20 = **(long **)(in_x0 + 0x38);
  if (uVar11 < 0x17) {
    __dest = (void *)((ulong)&local_3a8 | 1);
    local_3a8 = CONCAT71(local_3a8._1_7_,(char)uVar11 * '\x02');
    if (uVar11 != 0) goto LAB_00b8fa2c;
  }
  else {
    uVar13 = uVar19 + 0x10 & 0x1fffffff0;
    __dest = operator_new(uVar13);
    local_3a8 = uVar13 | 1;
    local_3a0 = uVar19;
    local_398 = __dest;
LAB_00b8fa2c:
    memcpy(__dest,(void *)(lVar20 + uVar9),uVar19);
  }
  *(undefined *)((long)__dest + uVar19) = 0;
  uVar19 = (ulong)((byte)local_3a8 >> 1);
  uVar9 = uVar19;
  if ((local_3a8 & 1) != 0) {
    uVar9 = local_3a0;
  }
  if (uVar9 == 6) {
                    /* try { // try from 00b8fa5c to 00b8fa77 has its CatchHandler @ 00b8fe8c */
    iVar6 = std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
                      ((ulong)&local_3a8,0,(char *)0xffffffffffffffff,0x4cd8eb);
    if (iVar6 != 0) {
      uVar19 = (ulong)((byte)local_3a8 >> 1);
      goto LAB_00b8fa8c;
    }
LAB_00b8fac4:
    uVar11 = 1;
  }
  else {
LAB_00b8fa8c:
    if (((byte)local_3a8 & 1) != 0) {
      uVar19 = local_3a0;
    }
                    /* try { // try from 00b8fa9c to 00b8fab7 has its CatchHandler @ 00b8fe88 */
    if ((uVar19 == 7) &&
       (iVar6 = std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                compare((ulong)&local_3a8,0,(char *)0xffffffffffffffff,0x4d2742), iVar6 == 0))
    goto LAB_00b8fac4;
    uVar11 = 0;
  }
  local_3c0 = 0;
                    /* try { // try from 00b8facc to 00b8faff has its CatchHandler @ 00b8fe90 */
  iVar6 = findMetaArgs(in_x0,uVar5,uVar11,&local_3ac,&local_3b0,&local_3b4,&local_3b8,&local_3bc,
                       &local_3c0,(uint *)local_1f8,(uint *)local_388);
  uVar11 = local_3b8;
  if (iVar6 == -1) {
LAB_00b8fd30:
    uVar18 = 0;
  }
  else {
    if (iVar6 == 1) {
LAB_00b8fbec:
      uVar11 = local_3b0;
      for (pbVar12 = *(byte **)(*(long *)(in_x0 + 0x30) + 0x58);
          (bVar1 = *pbVar12, bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100000600U) != 0 ||
          (bVar1 - 1 < 4)); pbVar12 = pbVar12 + 1) {
      }
      uVar3 = local_3ac;
      uVar5 = local_3ac;
      if (bVar1 == 0) {
        do {
          do {
            local_38c = uVar3;
            if (uVar11 <= uVar5) {
              iVar6 = 0;
              goto LAB_00b8fcb8;
            }
                    /* try { // try from 00b8fc60 to 00b8fc8f has its CatchHandler @ 00b8fe98 */
            skipPossibleComments(in_x0,&local_38c,0,true);
            uVar3 = local_38c;
            uVar5 = local_38c;
          } while (uVar11 <= local_38c);
          uVar5 = local_38c + 1;
          local_38c = uVar5;
          uVar9 = getChar(in_x0,uVar3);
        } while ((((uint)uVar9 & 0xff) < 0x21) &&
                (uVar3 = local_38c, (1L << (uVar9 & 0x3f) & 0x100000600U) != 0));
      }
      iVar6 = 1;
    }
    else if (iVar6 == 2) {
      for (pbVar12 = *(byte **)(*(long *)(in_x0 + 0x30) + 0x60);
          (bVar1 = *pbVar12, bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100000600U) != 0 ||
          (bVar1 - 1 < 4)); pbVar12 = pbVar12 + 1) {
      }
      uVar3 = local_3b4;
      uVar5 = local_3b4;
      if (bVar1 == 0) {
        do {
          do {
            local_38c = uVar3;
            if (uVar11 <= uVar5) goto LAB_00b8fbec;
                    /* try { // try from 00b8fb98 to 00b8fbc7 has its CatchHandler @ 00b8fe94 */
            skipPossibleComments(in_x0,&local_38c,0,true);
            uVar3 = local_38c;
            uVar5 = local_38c;
          } while (uVar11 <= local_38c);
          uVar5 = local_38c + 1;
          local_38c = uVar5;
          uVar9 = getChar(in_x0,uVar3);
        } while ((((uint)uVar9 & 0xff) < 0x21) &&
                (uVar3 = local_38c, (1L << (uVar9 & 0x3f) & 0x100000600U) != 0));
      }
      iVar6 = 2;
    }
LAB_00b8fcb8:
                    /* try { // try from 00b8fcb8 to 00b8fe73 has its CatchHandler @ 00b8fe9c */
    _Var7 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
                        *)in_x0,(basic_string *)&local_3a8);
    pPVar10 = (Preprocessor *)(ulong)_Var7;
    if (in_x0 + 8 == pPVar10) goto LAB_00b8fd30;
    cVar4 = getChar(in_x0,0);
    if (cVar4 == '\n') {
      shiftInput(in_x0,1);
      local_3ac = local_3ac - 1;
      local_3b0 = local_3b0 - 1;
      uVar9 = (ulong)local_3c0;
      local_3b4 = local_3b4 - 1;
      local_3b8 = local_3b8 - 1;
      if (local_3c0 != 0) {
        if (local_3c0 < 8) {
          uVar13 = 0;
        }
        else {
          uVar13 = uVar9 & 0xfffffff8;
          puVar14 = local_1f8 + 2;
          puVar16 = local_388 + 2;
          uVar19 = uVar13;
          do {
            uVar19 = uVar19 - 8;
            uVar22 = puVar16[-1];
            uVar21 = puVar16[-2];
            uVar24 = puVar16[1];
            uVar23 = *puVar16;
            puVar14[-1] = CONCAT44((int)((ulong)puVar14[-1] >> 0x20) + -1,(int)puVar14[-1] + -1);
            puVar14[-2] = CONCAT44((int)((ulong)puVar14[-2] >> 0x20) + -1,(int)puVar14[-2] + -1);
            puVar14[1] = CONCAT44((int)((ulong)puVar14[1] >> 0x20) + -1,(int)puVar14[1] + -1);
            *puVar14 = CONCAT44((int)((ulong)*puVar14 >> 0x20) + -1,(int)*puVar14 + -1);
            puVar14 = puVar14 + 4;
            puVar16[-1] = CONCAT44((int)((ulong)uVar22 >> 0x20) + -1,(int)uVar22 + -1);
            puVar16[-2] = CONCAT44((int)((ulong)uVar21 >> 0x20) + -1,(int)uVar21 + -1);
            puVar16[1] = CONCAT44((int)((ulong)uVar24 >> 0x20) + -1,(int)uVar24 + -1);
            *puVar16 = CONCAT44((int)((ulong)uVar23 >> 0x20) + -1,(int)uVar23 + -1);
            puVar16 = puVar16 + 4;
          } while (uVar19 != 0);
          if (uVar13 == uVar9) goto LAB_00b8fe04;
        }
        lVar20 = uVar9 - uVar13;
        piVar15 = (int *)((long)local_1f8 + uVar13 * 4);
        piVar17 = (int *)((long)local_388 + uVar13 * 4);
        do {
          lVar20 = lVar20 + -1;
          iVar8 = *piVar17;
          *piVar15 = *piVar15 + -1;
          *piVar17 = iVar8 + -1;
          piVar15 = piVar15 + 1;
          piVar17 = piVar17 + 1;
        } while (lVar20 != 0);
      }
LAB_00b8fe04:
      local_3bc = local_3bc - 1;
    }
    iVar8 = (**(code **)(**(long **)(pPVar10 + 0x38) + 8))();
    if ((iVar6 == 0) && (iVar8 != 0)) {
      printError(in_x0,"missing argument in meta macro");
    }
    (**(code **)**(undefined8 **)(pPVar10 + 0x38))();
    shiftInput(in_x0,local_3bc);
    uVar18 = 1;
  }
  if ((local_3a8 & 1) != 0) {
    operator_delete(local_398);
  }
LAB_00b8fd44:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar18;
}


