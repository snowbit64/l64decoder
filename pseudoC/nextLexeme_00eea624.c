// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: nextLexeme
// Entry Point: 00eea624
// Size: 716 bytes
// Signature: undefined nextLexeme(void)


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::nextLexeme() */

void Luau::Parser::nextLexeme(void)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long in_x0;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  char *pcVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  ulong uStack_78;
  char *local_70;
  long local_68;
  char *pcVar9;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  piVar5 = (int *)Lexer::next((Lexer *)(in_x0 + 8),false,true);
  puVar17 = (undefined8 *)((ulong)&local_98 | 4);
  puVar1 = (undefined8 *)(in_x0 + 0x2c);
  while (*piVar5 - 0x118U < 4 && *piVar5 - 0x118U != 2) {
    if (*(char *)(in_x0 + 3) != '\0') {
      local_98 = *(undefined4 *)(in_x0 + 0x28);
      uVar19 = *puVar1;
      puVar17[1] = *(undefined8 *)(in_x0 + 0x34);
      *puVar17 = uVar19;
      FUN_00ef7274(in_x0 + 0x88,&local_98);
    }
    if (*(int *)(in_x0 + 0x28) == 0x118) {
      uVar2 = *(uint *)(in_x0 + 0x3c);
      uVar15 = (ulong)uVar2;
      if ((uVar2 != 0) && (pcVar16 = *(char **)(in_x0 + 0x40), *pcVar16 == '!')) {
        lVar13 = 0;
        uVar18 = uVar15;
        while( true ) {
          uVar18 = uVar18 - 1;
          if ((4 < (byte)pcVar16[lVar13 + (ulong)(uVar2 - 1)] - 9) &&
             ((byte)pcVar16[lVar13 + (ulong)(uVar2 - 1)] != 0x20)) break;
          lVar13 = lVar13 + -1;
          if (uVar2 + (int)lVar13 == 0) {
            uVar19 = *puVar1;
            local_98 = CONCAT31(local_98._1_3_,*(undefined *)(in_x0 + 0xb8));
            puVar17[1] = *(undefined8 *)(in_x0 + 0x34);
            *puVar17 = uVar19;
            goto LAB_00eea8e4;
          }
        }
        uVar19 = *puVar1;
        uVar14 = (uVar15 + lVar13) - 1;
        local_98 = CONCAT31(local_98._1_3_,*(undefined *)(in_x0 + 0xb8));
        puVar17[1] = *(undefined8 *)(in_x0 + 0x34);
        *puVar17 = uVar19;
        if (0xffffffffffffffef < uVar14) {
LAB_00eea8e4:
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (uVar14 < 0x17) {
          local_80 = CONCAT71(local_80._1_7_,(char)((int)uVar14 << 1));
          pcVar7 = (char *)((long)&local_80 + 1);
        }
        else {
          uVar10 = uVar15 + lVar13 + 0xf & 0x1fffffff0;
          local_70 = (char *)operator_new(uVar10);
          local_80 = uVar10 | 1;
          uStack_78 = uVar14;
          pcVar7 = local_70;
        }
        if ((int)uVar14 != 0) {
          pcVar9 = pcVar16 + 1;
          uVar14 = (uVar15 + lVar13) - 1;
          pcVar6 = pcVar7;
          if ((0x1f < uVar14) &&
             ((pcVar16 + lVar13 + uVar15 <= pcVar7 || (pcVar7 + lVar13 + uVar15 + -1 <= pcVar9)))) {
            uVar10 = uVar14 & 0xffffffffffffffe0;
            puVar11 = (undefined8 *)(pcVar7 + 0x10);
            pcVar7 = pcVar7 + uVar10;
            puVar12 = (undefined8 *)(pcVar16 + 0x11);
            uVar18 = uVar18 & 0xffffffffffffffe0;
            do {
              puVar4 = puVar12 + -1;
              uVar19 = puVar12[-2];
              uVar21 = puVar12[1];
              uVar20 = *puVar12;
              puVar12 = puVar12 + 4;
              uVar18 = uVar18 - 0x20;
              puVar11[-1] = *puVar4;
              puVar11[-2] = uVar19;
              puVar11[1] = uVar21;
              *puVar11 = uVar20;
              puVar11 = puVar11 + 4;
            } while (uVar18 != 0);
            pcVar6 = pcVar7;
            pcVar9 = pcVar9 + uVar10;
            if (uVar14 == uVar10) goto LAB_00eea840;
          }
          do {
            pcVar8 = pcVar9 + 1;
            pcVar7 = pcVar6 + 1;
            *pcVar6 = *pcVar9;
            pcVar6 = pcVar7;
            pcVar9 = pcVar8;
          } while (pcVar8 != pcVar16 + lVar13 + uVar15);
        }
LAB_00eea840:
        *pcVar7 = '\0';
        puVar11 = *(undefined8 **)(in_x0 + 0xa8);
        if (puVar11 < *(undefined8 **)(in_x0 + 0xb0)) {
          *(undefined4 *)(puVar11 + 2) = local_88;
          puVar11[1] = uStack_90;
          *puVar11 = CONCAT44(uStack_94,local_98);
          puVar11[5] = local_70;
          puVar11[4] = uStack_78;
          puVar11[3] = local_80;
          *(undefined8 **)(in_x0 + 0xa8) = puVar11 + 6;
        }
        else {
                    /* try { // try from 00eea880 to 00eea88b has its CatchHandler @ 00eea8f0 */
          std::__ndk1::vector<Luau::HotComment,std::__ndk1::allocator<Luau::HotComment>>::
          __push_back_slow_path<Luau::HotComment>
                    ((vector<Luau::HotComment,std::__ndk1::allocator<Luau::HotComment>> *)
                     (in_x0 + 0xa0),(HotComment *)&local_98);
          if ((local_80 & 1) != 0) {
            operator_delete(local_70);
          }
        }
      }
    }
    else if (*(int *)(in_x0 + 0x28) == 0x11b) break;
    piVar5 = (int *)Lexer::next((Lexer *)(in_x0 + 8),false,false);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


