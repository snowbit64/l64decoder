// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parsePossibleUser
// Entry Point: 00b8feb8
// Size: 2084 bytes
// Signature: undefined parsePossibleUser(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Preprocessor::parsePossibleUser() */

void Preprocessor::parsePossibleUser(void)

{
  byte **ppbVar1;
  uint uVar2;
  Macro *pMVar3;
  byte bVar4;
  Macro MVar5;
  byte bVar6;
  long lVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  __tree_iterator _Var11;
  Preprocessor *in_x0;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  void *pvVar15;
  size_t sVar16;
  long *plVar17;
  size_t sVar18;
  size_t sVar19;
  ulong uVar20;
  long lVar21;
  byte *pbVar22;
  ulong uVar23;
  int iVar24;
  long lVar25;
  byte **ppbVar26;
  undefined4 uVar27;
  uint uVar28;
  char **ppcVar29;
  byte *pbVar30;
  long lVar31;
  uint *puVar32;
  uint uVar33;
  uint *puVar34;
  void **ppvVar35;
  char *pcVar36;
  Macro *local_6d0;
  bool local_6c8 [4];
  uint local_6c4;
  uint local_6c0;
  uint local_6bc;
  uint local_6b8;
  char local_6b4 [4];
  byte *local_6b0 [100];
  uint local_390 [100];
  uint local_200 [100];
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  local_6b8 = 0;
  local_6d0 = (Macro *)0x0;
  uVar12 = findPossibleUserMacro
                     (in_x0,&local_6b8,&local_6bc,&local_6c0,local_200,local_390,&local_6c4,
                      local_6c8,&local_6d0,1);
  uVar13 = 0;
  if ((uVar12 & 1) == 0) goto LAB_00b90498;
  if (local_6c8[0] == false) {
    plVar17 = *(long **)(in_x0 + 0x38);
    if ((plVar17[0xe] != 0) && (uVar33 = *(uint *)(plVar17 + 0xd), uVar33 != 0)) {
      uVar20 = (ulong)local_6b8;
      lVar31 = *plVar17;
      uVar12 = 0;
      ppvVar35 = (void **)(plVar17[0xe] + 0x10);
      uVar28 = local_6bc - local_6b8;
      do {
        bVar4 = *(byte *)(ppvVar35 + -2);
        uVar2 = (uint)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar2 = *(uint *)(ppvVar35 + -1);
        }
        if (uVar28 == uVar2) {
          pvVar15 = (void *)((long)ppvVar35 + -0xf);
          if ((bVar4 & 1) != 0) {
            pvVar15 = *ppvVar35;
          }
          iVar10 = memcmp(pvVar15,(void *)(lVar31 + uVar20),(ulong)uVar28);
          if (iVar10 == 0) {
            if (-1 < (int)uVar12) {
              if ((int)uVar12 < *(int *)(plVar17 + 0xb)) {
                pbVar22 = *(byte **)(plVar17[0xc] + uVar12 * 8);
                uVar12 = *(ulong *)(pbVar22 + 8);
                pbVar30 = *(byte **)(pbVar22 + 0x10);
                if ((*pbVar22 & 1) == 0) {
                  pbVar30 = pbVar22 + 1;
                  uVar12 = (ulong)(*pbVar22 >> 1);
                }
                if (*(int *)(in_x0 + (ulong)*(uint *)(in_x0 + 300) * 4 + 100) == 0) {
                  ppcVar29 = (char **)plVar17[0xf];
                  if (*ppcVar29 != (char *)0x0) {
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append(*ppcVar29,(ulong)pbVar30);
                  }
                  plVar17 = (long *)ppcVar29[1];
                  if (plVar17 != (long *)0x0) {
                    (**(code **)(*plVar17 + 0x30))(plVar17,pbVar30,uVar12 & 0xffffffff);
                  }
                  if ((int)uVar12 != 0) {
                    uVar12 = uVar12 & 0xffffffff;
                    do {
                      bVar4 = *pbVar30;
                      if (bVar4 == 10) {
                        *(int *)(ppcVar29 + 5) = *(int *)(ppcVar29 + 5) + 1;
                      }
                      uVar12 = uVar12 - 1;
                      pbVar30 = pbVar30 + 1;
                      *(bool *)((long)ppcVar29 + 0x2e) = bVar4 == 10;
                    } while (uVar12 != 0);
                  }
                }
              }
              goto LAB_00b90488;
            }
            break;
          }
        }
        uVar12 = uVar12 + 1;
        ppvVar35 = ppvVar35 + 3;
      } while (uVar33 != uVar12);
    }
  }
  if (local_6d0 == (Macro *)0x0) {
LAB_00b90020:
    uVar13 = 0;
    goto LAB_00b90498;
  }
  if (*(int *)(local_6d0 + 0x30) == -2) {
    if (local_6c4 != 1) goto LAB_00b90020;
    local_6b0[0] = (byte *)0x0;
    local_6b0[1] = (byte *)0x0;
    local_6b0[2] = (byte *)0x0;
                    /* try { // try from 00b8ff64 to 00b8ff77 has its CatchHandler @ 00b906dc */
    removeComments(in_x0,local_200[0],local_390[0],1,(basic_string *)local_6b0);
    while( true ) {
      uVar20 = (ulong)local_6b0[0] & 0xff;
      bVar8 = ((ulong)local_6b0[0] & 1) != 0;
      uVar12 = (ulong)local_6b0[0] >> 1 & 0x7f;
      if (bVar8) {
        uVar12 = (ulong)local_6b0[1];
      }
      if (uVar12 == 0) break;
      pbVar30 = (byte *)((ulong)local_6b0 | 1);
      if (bVar8) {
        pbVar30 = local_6b0[2];
      }
      bVar4 = (pbVar30 + uVar12)[-1];
      if (0x20 < bVar4 || (1L << ((ulong)bVar4 & 0x3f) & 0x100000600U) == 0) break;
                    /* try { // try from 00b8ffc8 to 00b8ffd3 has its CatchHandler @ 00b906e0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      erase((ulong)local_6b0,(long)(pbVar30 + uVar12 + -1) - (long)pbVar30);
    }
    while( true ) {
      pbVar30 = (byte *)((ulong)local_6b0 | 1);
      if ((uVar20 & 1) != 0) {
        pbVar30 = local_6b0[2];
      }
      if (0x20 < *pbVar30 || (1L << ((ulong)*pbVar30 & 0x3f) & 0x100000600U) == 0) break;
                    /* try { // try from 00b9000c to 00b9001b has its CatchHandler @ 00b906e4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      erase((ulong)local_6b0,0);
      uVar20 = (ulong)local_6b0[0] & 0xff;
    }
                    /* try { // try from 00b902d8 to 00b903ab has its CatchHandler @ 00b906dc */
    _Var11 = std::__ndk1::
             __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>>>
             ::
             find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                       ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>>>
                         *)(in_x0 + 0x18),(basic_string *)local_6b0);
    if ((in_x0 + 0x20 == (Preprocessor *)(ulong)_Var11) ||
       (*(long *)((Preprocessor *)(ulong)_Var11 + 0x38) == 0)) {
      ppcVar29 = *(char ***)(*(long *)(in_x0 + 0x38) + 0x78);
      local_6b4[0] = '0';
      if (*ppcVar29 != (char *)0x0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(*ppcVar29,(ulong)local_6b4);
      }
      plVar17 = (long *)ppcVar29[1];
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 0x30))(plVar17,local_6b4,1);
      }
    }
    else {
      ppcVar29 = *(char ***)(*(long *)(in_x0 + 0x38) + 0x78);
      local_6b4[0] = '1';
      if (*ppcVar29 != (char *)0x0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(*ppcVar29,(ulong)local_6b4);
      }
      plVar17 = (long *)ppcVar29[1];
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 0x30))(plVar17,local_6b4,1);
      }
    }
    if (local_6b4[0] == '\n') {
      *(int *)(ppcVar29 + 5) = *(int *)(ppcVar29 + 5) + 1;
    }
    *(bool *)((long)ppcVar29 + 0x2e) = local_6b4[0] == '\n';
    shiftInput(in_x0,local_6c0);
    if (((ulong)local_6b0[0] & 1) != 0) {
      operator_delete(local_6b0[2]);
    }
  }
  else {
    uVar12 = (ulong)((byte)local_6d0[0x18] >> 1);
    if (((byte)local_6d0[0x18] & 1) != 0) {
      uVar12 = *(ulong *)(local_6d0 + 0x20);
    }
    if (uVar12 != 0) {
      uVar12 = (ulong)local_6c4;
      if (local_6c4 != 0) {
        ppbVar26 = local_6b0;
        puVar32 = local_200;
        puVar34 = local_390;
        uVar20 = uVar12;
        do {
          puVar14 = (undefined8 *)operator_new(0x18);
          plVar17 = *(long **)(in_x0 + 0x38);
          puVar14[1] = 0;
          puVar14[2] = 0;
          uVar33 = *puVar32;
          *puVar14 = 0;
          uVar28 = *puVar34;
          *ppbVar26 = (byte *)puVar14;
          lVar31 = *plVar17;
          if (uVar33 == 0) {
            bVar8 = *(char *)((long)plVar17 + 0x1c) != '\0';
          }
          else {
            cVar9 = getChar(in_x0,uVar33 - 1);
            puVar14 = (undefined8 *)*ppbVar26;
            bVar8 = cVar9 == '\n';
          }
          processText(in_x0,(char *)(lVar31 + (ulong)uVar33),uVar28 - uVar33,bVar8,1,
                      (basic_string *)puVar14,false);
          ppbVar26 = ppbVar26 + 1;
          puVar32 = puVar32 + 1;
          puVar34 = puVar34 + 1;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      lVar31 = *(long *)(in_x0 + 0x38);
      pvVar15 = operator_new(0x80);
      *(undefined8 *)((long)pvVar15 + 0x30) = 0;
      *(undefined8 *)((long)pvVar15 + 0x38) = 0;
      *(void **)(in_x0 + 0x38) = pvVar15;
      *(undefined8 *)((long)pvVar15 + 0x20) = 0;
      *(undefined8 *)((long)pvVar15 + 0x28) = 0;
      uVar13 = *(undefined8 *)(lVar31 + 0x78);
      *(uint *)((long)pvVar15 + 0x58) = local_6c4;
      *(byte ***)((long)pvVar15 + 0x60) = local_6b0;
      *(undefined8 *)((long)pvVar15 + 0x78) = uVar13;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (undefined8 *)((long)pvVar15 + 0x28),(basic_string *)(lVar31 + 0x28));
      ppcVar29 = *(char ***)(in_x0 + 0x38);
      pcVar36 = *(char **)(lVar31 + 0x40);
      *(undefined *)((long)ppcVar29 + 0x54) = 1;
      ppcVar29[8] = pcVar36;
      *(undefined4 *)(ppcVar29 + 9) = 0;
      if (((*(int *)(local_6d0 + 0x30) == -1) && (local_6c8[0] != false)) &&
         (**(char **)(*(long *)(in_x0 + 0x30) + 8) == '\0')) {
        uVar33 = (uint)((byte)local_6d0[0x18] >> 1);
        if (((byte)local_6d0[0x18] & 1) != 0) {
          uVar33 = *(uint *)(local_6d0 + 0x20);
        }
        sVar16 = strlen(*(char **)(*(long *)(in_x0 + 0x30) + 0x10));
        lVar21 = *(long *)(in_x0 + 0x30);
        sVar18 = strlen(*(char **)(lVar21 + 0x20));
        sVar19 = strlen(*(char **)(lVar21 + 0x18));
        uVar33 = uVar33 + 1;
        iVar10 = (local_6c4 - 2) * (int)sVar19;
        if (local_6c4 < 2) {
          iVar10 = 0;
        }
        iVar10 = uVar33 + (int)sVar16 + (int)sVar18 + iVar10;
        if (local_6c4 != 0) {
          if (local_6c4 == 1) {
            uVar23 = 0;
          }
          else {
            uVar23 = uVar12 & 0xfffffffe;
            iVar24 = 0;
            ppbVar26 = local_6b0 + 1;
            uVar20 = uVar23;
            do {
              ppbVar1 = ppbVar26 + -1;
              pbVar30 = *ppbVar26;
              ppbVar26 = ppbVar26 + 2;
              bVar4 = **ppbVar1;
              bVar6 = *pbVar30;
              uVar28 = (uint)(bVar4 >> 1);
              if ((bVar4 & 1) != 0) {
                uVar28 = *(uint *)(*ppbVar1 + 8);
              }
              uVar2 = (uint)(bVar6 >> 1);
              if ((bVar6 & 1) != 0) {
                uVar2 = *(uint *)(pbVar30 + 8);
              }
              iVar10 = iVar10 + uVar28;
              iVar24 = iVar24 + uVar2;
              uVar20 = uVar20 - 2;
            } while (uVar20 != 0);
            iVar10 = iVar24 + iVar10;
            if (uVar23 == uVar12) goto LAB_00b905c4;
          }
          lVar21 = uVar12 - uVar23;
          ppbVar26 = local_6b0 + uVar23;
          do {
            bVar4 = **ppbVar26;
            uVar28 = (uint)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              uVar28 = *(uint *)(*ppbVar26 + 8);
            }
            lVar21 = lVar21 + -1;
            iVar10 = iVar10 + uVar28;
            ppbVar26 = ppbVar26 + 1;
          } while (lVar21 != 0);
        }
LAB_00b905c4:
        pcVar36 = (char *)operator_new__((ulong)(iVar10 + 1));
        ppcVar29 = *(char ***)(in_x0 + 0x38);
        *ppcVar29 = pcVar36;
        ppcVar29[1] = pcVar36;
        pMVar3 = local_6d0 + 0x19;
        if (((byte)local_6d0[0x18] & 1) != 0) {
          pMVar3 = *(Macro **)(local_6d0 + 0x28);
        }
        strcpy(pcVar36,(char *)pMVar3);
        if (1 < uVar33) {
          do {
            uVar28 = uVar33 - 1;
            bVar4 = *(byte *)(**(long **)(in_x0 + 0x38) + (ulong)uVar28);
            if (0x20 < bVar4 || (1L << ((ulong)bVar4 & 0x3f) & 0x100000600U) == 0)
            goto LAB_00b90638;
            uVar33 = uVar28;
          } while ((uVar28 & 0xfffffffe) != 0);
          uVar33 = 1;
        }
LAB_00b90638:
        strcpy((char *)((*(long **)(in_x0 + 0x38))[1] + (ulong)uVar33),
               *(char **)(*(long *)(in_x0 + 0x30) + 0x10));
        if (local_6c4 != 0) {
          pbVar30 = *(byte **)(local_6b0[0] + 0x10);
          if ((*local_6b0[0] & 1) == 0) {
            pbVar30 = local_6b0[0] + 1;
          }
          strcat(*(char **)(*(long *)(in_x0 + 0x38) + 8),(char *)pbVar30);
          if (local_6c4 != 1) {
            ppbVar26 = local_6b0;
            lVar21 = uVar12 - 1;
            do {
              ppbVar26 = ppbVar26 + 1;
              strcat(*(char **)(*(long *)(in_x0 + 0x38) + 8),
                     *(char **)(*(long *)(in_x0 + 0x30) + 0x18));
              pbVar22 = *ppbVar26;
              pbVar30 = *(byte **)(pbVar22 + 0x10);
              if ((*pbVar22 & 1) == 0) {
                pbVar30 = pbVar22 + 1;
              }
              strcat(*(char **)(*(long *)(in_x0 + 0x38) + 8),(char *)pbVar30);
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
          }
        }
        strcat(*(char **)(*(long *)(in_x0 + 0x38) + 8),*(char **)(*(long *)(in_x0 + 0x30) + 0x20));
        ppcVar29 = *(char ***)(in_x0 + 0x38);
        *(undefined *)((long)ppcVar29 + 0x54) = 0;
      }
      else {
        uVar20 = (ulong)((byte)local_6d0[0x18] >> 1);
        if (((byte)local_6d0[0x18] & 1) != 0) {
          uVar20 = *(ulong *)(local_6d0 + 0x20);
        }
        pcVar36 = (char *)operator_new__(uVar20 + 1);
        *ppcVar29 = pcVar36;
        ppcVar29[1] = pcVar36;
        pMVar3 = local_6d0 + 0x19;
        if (((byte)local_6d0[0x18] & 1) != 0) {
          pMVar3 = *(Macro **)(local_6d0 + 0x28);
        }
        strcpy(pcVar36,(char *)pMVar3);
        ppcVar29 = *(char ***)(in_x0 + 0x38);
      }
      sVar16 = strlen(*ppcVar29);
      lVar21 = *(long *)(in_x0 + 0x38);
      *(undefined *)(lVar21 + 0x1c) = 1;
      *(int *)(lVar21 + 0x14) = (int)sVar16;
      *(int *)(lVar21 + 0x18) = (int)sVar16 + 1;
      *(undefined *)(lVar21 + 0x4c) = 0;
      lVar25 = *(long *)(local_6d0 + 0x38);
      if (lVar25 == 0) {
        uVar27 = 0;
      }
      else {
        uVar27 = *(undefined4 *)(local_6d0 + 0x30);
      }
      *(undefined4 *)(lVar21 + 0x68) = uVar27;
      *(long *)(lVar21 + 0x70) = lVar25;
      MVar5 = local_6d0[0x40];
      *(undefined4 *)(lVar21 + 0x50) = 0;
      *(Macro *)(lVar21 + 0x4d) = MVar5;
      processContext();
      pvVar15 = *(void **)(in_x0 + 0x38);
      if (*(void **)((long)pvVar15 + 8) == (void *)0x0) {
LAB_00b903fc:
        if ((*(byte *)((long)pvVar15 + 0x28) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar15 + 0x38));
        }
        operator_delete(pvVar15);
      }
      else {
        operator_delete__(*(void **)((long)pvVar15 + 8));
        pvVar15 = *(void **)(in_x0 + 0x38);
        if (pvVar15 != (void *)0x0) goto LAB_00b903fc;
      }
      *(long *)(in_x0 + 0x38) = lVar31;
      if (local_6c4 != 0) {
        ppbVar26 = local_6b0;
        do {
          pbVar30 = *ppbVar26;
          if (pbVar30 != (byte *)0x0) {
            if ((*pbVar30 & 1) != 0) {
              operator_delete(*(void **)(pbVar30 + 0x10));
            }
            operator_delete(pbVar30);
          }
          ppbVar26 = ppbVar26 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
LAB_00b90488:
    shiftInput(in_x0,local_6c0);
  }
  uVar13 = 1;
LAB_00b90498:
  if (*(long *)(lVar7 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar13);
  }
  return;
}


