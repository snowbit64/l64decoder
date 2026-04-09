// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseText
// Entry Point: 00b8eb60
// Size: 1788 bytes
// Signature: undefined parseText(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Preprocessor::parseText() */

void Preprocessor::parseText(void)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  Preprocessor *in_x0;
  ulong uVar8;
  size_t sVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  COMMENT_MODE CVar13;
  byte *pbVar14;
  long lVar15;
  long lVar16;
  byte *pbVar17;
  char *pcVar18;
  char **ppcVar19;
  long lVar20;
  char **ppcVar21;
  undefined8 local_78;
  ulong local_70;
  char *local_68;
  uint local_60;
  uint local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar16 = *(long *)(in_x0 + 0x38);
  if (*(char *)(lVar16 + 0x4d) == '\0') {
    lVar15 = *(long *)(in_x0 + 0x30);
    local_5c = 0;
    lVar20 = *(long *)(lVar15 + 0x90);
    if (*(long *)(lVar15 + 0x98) != lVar20) {
      uVar8 = 0;
LAB_00b8ec64:
      pbVar17 = (byte *)(lVar20 + uVar8 * 0x40);
      if (*(int *)(pbVar17 + (ulong)*(uint *)(lVar16 + 0x50) * 4 + 0x34) != 1) {
        pbVar14 = pbVar17 + 1;
        if ((*pbVar17 & 1) != 0) {
          pbVar14 = *(byte **)(pbVar17 + 0x10);
        }
        uVar10 = matchSequence(in_x0,(char *)pbVar14,&local_5c);
        uVar6 = local_5c;
        if ((uVar10 & 1) == 0) {
          lVar15 = *(long *)(in_x0 + 0x30);
          goto LAB_00b8eca4;
        }
        lVar16 = lVar20 + uVar8 * 0x40;
        uVar10 = (ulong)local_5c;
        pcVar18 = (char *)(lVar16 + 0x19);
        if ((*(byte *)(lVar16 + 0x18) & 1) != 0) {
          pcVar18 = *(char **)(lVar16 + 0x28);
        }
        uVar7 = findCommentEnd(in_x0,pcVar18,*(char *)(lVar16 + 0x30),*(char *)(lVar16 + 0x31),
                               local_5c,*(uint *)(lVar16 + (ulong)*(uint *)(*(long *)(in_x0 + 0x38)
                                                                           + 0x50) * 4 + 0x34));
        pcVar18 = (char *)(lVar16 + 0x19);
        if ((*(byte *)(lVar16 + 0x18) & 1) != 0) {
          pcVar18 = *(char **)(lVar16 + 0x28);
        }
        local_60 = uVar7;
        if (((*pcVar18 != '\0') &&
            (uVar11 = matchSequence(in_x0,pcVar18,&local_60), (uVar11 & 1) != 0)) && (local_60 != 0)
           ) {
          uVar2 = local_60 - 1;
          uVar11 = getChar(in_x0,uVar2);
          if ((((uint)uVar11 & 0xff) < 0x21) && ((1L << (uVar11 & 0x3f) & 0x100000600U) != 0)) {
            local_60 = uVar2;
          }
        }
        ppcVar21 = *(char ***)(in_x0 + 0x38);
        if (((*(uint *)(lVar16 + (ulong)*(uint *)(ppcVar21 + 10) * 4 + 0x34) >> 1 & 1) != 0) &&
           (*(int *)(in_x0 + (ulong)*(uint *)(in_x0 + 300) * 4 + 100) == 0)) {
          ppcVar19 = (char **)ppcVar21[0xf];
          pcVar18 = *ppcVar21;
          if (*ppcVar19 != (char *)0x0) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      (*ppcVar19,(ulong)pcVar18);
          }
          plVar12 = (long *)ppcVar19[1];
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 0x30))(plVar12,pcVar18,uVar10);
          }
          uVar11 = uVar10;
          if (uVar6 != 0) {
            do {
              cVar5 = *pcVar18;
              if (cVar5 == '\n') {
                *(int *)(ppcVar19 + 5) = *(int *)(ppcVar19 + 5) + 1;
              }
              uVar11 = uVar11 - 1;
              pcVar18 = pcVar18 + 1;
              *(bool *)((long)ppcVar19 + 0x2e) = cVar5 == '\n';
            } while (uVar11 != 0);
          }
        }
        plVar12 = *(long **)(in_x0 + 0x38);
        CVar13 = *(COMMENT_MODE *)(plVar12 + 10);
        uVar2 = *(uint *)(lVar20 + uVar8 * 0x40 + (ulong)CVar13 * 4 + 0x34);
        if ((uVar2 >> 2 & 1) == 0) {
          if (((uVar2 & 1) != 0) && (*(int *)(in_x0 + (ulong)*(uint *)(in_x0 + 300) * 4 + 100) == 0)
             ) {
            ppcVar21 = (char **)plVar12[0xf];
            pcVar18 = (char *)(*plVar12 + uVar10);
            uVar10 = (ulong)(uVar7 - uVar6);
            if (*ppcVar21 != (char *)0x0) {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        (*ppcVar21,(ulong)pcVar18);
            }
            plVar12 = (long *)ppcVar21[1];
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x30))(plVar12,pcVar18,uVar10);
            }
            if (uVar7 - uVar6 != 0) {
              do {
                cVar5 = *pcVar18;
                if (cVar5 == '\n') {
                  *(int *)(ppcVar21 + 5) = *(int *)(ppcVar21 + 5) + 1;
                }
                uVar10 = uVar10 - 1;
                pcVar18 = pcVar18 + 1;
                *(bool *)((long)ppcVar21 + 0x2e) = cVar5 == '\n';
              } while (uVar10 != 0);
            }
          }
        }
        else {
          local_78 = 0;
          local_70 = 0;
          local_68 = (char *)0x0;
          lVar16 = *plVar12;
          *(undefined *)((long)plVar12 + 0x4d) = 1;
          if (uVar6 == 0) {
            bVar4 = *(char *)((long)plVar12 + 0x1c) != '\0';
          }
          else {
                    /* try { // try from 00b8ef34 to 00b8ef3b has its CatchHandler @ 00b8f25c */
            cVar5 = getChar(in_x0,uVar6 - 1);
            bVar4 = cVar5 == '\n';
            CVar13 = *(COMMENT_MODE *)(*(long *)(in_x0 + 0x38) + 0x50);
          }
                    /* try { // try from 00b8efe0 to 00b8efef has its CatchHandler @ 00b8f25c */
          processText(in_x0,(char *)(lVar16 + uVar10),uVar7 - uVar6,bVar4,CVar13,
                      (basic_string *)&local_78,false);
          if ((*(uint *)(lVar20 + uVar8 * 0x40 +
                         (ulong)*(uint *)(*(long *)(in_x0 + 0x38) + 0x50) * 4 + 0x34) & 1) != 0) {
            uVar10 = local_78 >> 1 & 0x7f;
            pcVar18 = (char *)((ulong)&local_78 | 1);
            if ((local_78 & 1) != 0) {
              uVar10 = local_70;
              pcVar18 = local_68;
            }
            if (*(int *)(in_x0 + (ulong)*(uint *)(in_x0 + 300) * 4 + 100) == 0) {
              ppcVar21 = *(char ***)(*(long *)(in_x0 + 0x38) + 0x78);
              if (*ppcVar21 != (char *)0x0) {
                    /* try { // try from 00b8f1f4 to 00b8f217 has its CatchHandler @ 00b8f25c */
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                append(*ppcVar21,(ulong)pcVar18);
              }
              plVar12 = (long *)ppcVar21[1];
              if (plVar12 != (long *)0x0) {
                (**(code **)(*plVar12 + 0x30))(plVar12,pcVar18,uVar10 & 0xffffffff);
              }
              if ((int)uVar10 != 0) {
                uVar10 = uVar10 & 0xffffffff;
                do {
                  cVar5 = *pcVar18;
                  if (cVar5 == '\n') {
                    *(int *)(ppcVar21 + 5) = *(int *)(ppcVar21 + 5) + 1;
                  }
                  uVar10 = uVar10 - 1;
                  pcVar18 = pcVar18 + 1;
                  *(bool *)((long)ppcVar21 + 0x2e) = cVar5 == '\n';
                } while (uVar10 != 0);
              }
            }
          }
          *(undefined *)(*(long *)(in_x0 + 0x38) + 0x4d) = 0;
          if ((local_78 & 1) != 0) {
            operator_delete(local_68);
          }
        }
        plVar12 = *(long **)(in_x0 + 0x38);
        lVar20 = lVar20 + uVar8 * 0x40;
        if (((*(uint *)(lVar20 + (ulong)*(uint *)(plVar12 + 10) * 4 + 0x34) >> 1 & 1) != 0) &&
           (*(int *)(in_x0 + (ulong)*(uint *)(in_x0 + 300) * 4 + 100) == 0)) {
          ppcVar21 = (char **)plVar12[0xf];
          pcVar18 = (char *)(*plVar12 + (ulong)uVar7);
          uVar7 = local_60 - uVar7;
          uVar8 = (ulong)uVar7;
          if (*ppcVar21 != (char *)0x0) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      (*ppcVar21,(ulong)pcVar18);
          }
          plVar12 = (long *)ppcVar21[1];
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 0x30))(plVar12,pcVar18,uVar8);
          }
          if (uVar7 != 0) {
            do {
              cVar5 = *pcVar18;
              if (cVar5 == '\n') {
                *(int *)(ppcVar21 + 5) = *(int *)(ppcVar21 + 5) + 1;
              }
              uVar8 = uVar8 - 1;
              pcVar18 = pcVar18 + 1;
              *(bool *)((long)ppcVar21 + 0x2e) = cVar5 == '\n';
            } while (uVar8 != 0);
          }
        }
        uVar6 = local_60;
        ppcVar21 = *(char ***)(in_x0 + 0x38);
        if ((*(int *)(lVar20 + (ulong)*(uint *)(ppcVar21 + 10) * 4 + 0x34) == 0 &&
             in_x0[0x130] != (Preprocessor)0x0) &&
           (uVar8 = (ulong)local_60, *(int *)(in_x0 + (ulong)*(uint *)(in_x0 + 300) * 4 + 100) == 0)
           ) {
          ppcVar19 = (char **)ppcVar21[0xf];
          pcVar18 = *ppcVar21;
          if (*ppcVar19 != (char *)0x0) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      (*ppcVar19,(ulong)pcVar18);
          }
          plVar12 = (long *)ppcVar19[1];
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 0x30))(plVar12,pcVar18,uVar8);
          }
          if (uVar6 != 0) {
            do {
              cVar5 = *pcVar18;
              if (cVar5 == '\n') {
                *(int *)(ppcVar19 + 5) = *(int *)(ppcVar19 + 5) + 1;
              }
              uVar8 = uVar8 - 1;
              pcVar18 = pcVar18 + 1;
              *(bool *)((long)ppcVar19 + 0x2e) = cVar5 == '\n';
            } while (uVar8 != 0);
          }
        }
        goto LAB_00b8f0bc;
      }
LAB_00b8eca4:
      lVar20 = *(long *)(lVar15 + 0x90);
      uVar8 = (ulong)((int)uVar8 + 1);
      if (uVar8 < (ulong)(*(long *)(lVar15 + 0x98) - lVar20 >> 6)) goto code_r0x00b8ecb8;
    }
  }
  uVar8 = parsePossibleMeta();
  if (((uVar8 & 1) != 0) || (uVar8 = parsePossibleUser(), (uVar8 & 1) != 0)) goto LAB_00b8f0c0;
  if (*(char *)(*(long *)(in_x0 + 0x38) + 0x54) == '\0') {
LAB_00b8ecc0:
    uVar6 = identifierEnd(in_x0,0);
    if (uVar6 == 0) {
      uVar6 = 1;
    }
    if (*(int *)(in_x0 + (ulong)*(uint *)(in_x0 + 300) * 4 + 100) == 0) {
      uVar8 = 0;
      lVar16 = **(long **)(in_x0 + 0x38);
      do {
        cVar5 = *(char *)(lVar16 + uVar8);
        if (cVar5 == *(char *)(*(long *)(in_x0 + 0x30) + 0x30)) {
          uVar8 = uVar8 + 1;
          if ((uint)uVar8 == uVar6) break;
          cVar5 = *(char *)(lVar16 + uVar8);
        }
        local_78 = CONCAT71(local_78._1_7_,cVar5);
        ppcVar21 = *(char ***)(*(long *)(in_x0 + 0x38) + 0x78);
        if (*ppcVar21 != (char *)0x0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    (*ppcVar21,(ulong)&local_78);
        }
        plVar12 = (long *)ppcVar21[1];
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x30))(plVar12,&local_78,1);
        }
        if ((char)local_78 == '\n') {
          *(int *)(ppcVar21 + 5) = *(int *)(ppcVar21 + 5) + 1;
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulong)uVar7;
        *(bool *)((long)ppcVar21 + 0x2e) = (char)local_78 == '\n';
      } while (uVar7 < uVar6);
    }
  }
  else {
    local_78 = local_78 & 0xffffffff00000000;
    uVar8 = matchSequence(in_x0,*(char **)(*(long *)(in_x0 + 0x30) + 0x28),(uint *)&local_78);
    if ((uVar8 & 1) == 0) goto LAB_00b8ecc0;
    uVar6 = (uint)local_78;
    cVar5 = getChar(in_x0,(uint)local_78);
    bVar1 = cVar5 - 0x31;
    if (8 < bVar1) goto LAB_00b8ecc0;
    if ((int)(uint)bVar1 < *(int *)(*(long *)(in_x0 + 0x38) + 0x58)) {
      pbVar14 = *(byte **)(*(long *)(*(long *)(in_x0 + 0x38) + 0x60) + (ulong)bVar1 * 8);
      pbVar17 = *(byte **)(pbVar14 + 0x10);
      if ((*pbVar14 & 1) == 0) {
        pbVar17 = pbVar14 + 1;
      }
      sVar9 = strlen((char *)pbVar17);
      sendout(in_x0,(char *)pbVar17,(uint)sVar9,false);
    }
    uVar6 = uVar6 + 1;
  }
LAB_00b8f0bc:
  shiftInput(in_x0,uVar6);
LAB_00b8f0c0:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
code_r0x00b8ecb8:
  lVar16 = *(long *)(in_x0 + 0x38);
  goto LAB_00b8ec64;
}


