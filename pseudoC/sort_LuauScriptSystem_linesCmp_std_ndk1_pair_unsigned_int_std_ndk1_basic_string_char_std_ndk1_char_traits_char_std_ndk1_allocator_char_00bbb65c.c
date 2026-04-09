// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<LuauScriptSystem::linesCmp&,std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>
// Entry Point: 00bbb65c
// Size: 2452 bytes
// Signature: void __cdecl __sort<LuauScriptSystem::linesCmp&,std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>(pair * param_1, pair * param_2, linesCmp * param_3)


/* void std::__ndk1::__sort<LuauScriptSystem::linesCmp&, std::__ndk1::pair<unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   >*>(std::__ndk1::pair<unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >*, std::__ndk1::pair<unsigned
   int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   > >*, LuauScriptSystem::linesCmp&) */

void std::__ndk1::
     __sort<LuauScriptSystem::linesCmp&,std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>
               (pair *param_1,pair *param_2,linesCmp *param_3)

{
  ulong uVar1;
  pair *ppVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  void *pvVar16;
  void *pvVar17;
  long lVar18;
  pair *ppVar19;
  pair *ppVar20;
  pair *ppVar21;
  uint *puVar22;
  uint *puVar23;
  uint uVar24;
  pair *ppVar25;
  uint uVar26;
  uint uVar27;
  pair *ppVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  
  lVar6 = tpidr_el0;
  lVar11 = *(long *)(lVar6 + 0x28);
LAB_00bbb698:
  ppVar28 = param_2 + -8;
  puVar22 = param_1;
LAB_00bbb6b8:
  param_1 = puVar22;
  uVar15 = (long)param_2 - (long)param_1;
  uVar12 = (long)uVar15 >> 5;
  switch(uVar12) {
  case 0:
  case 1:
    goto switchD_00bbbe90_caseD_0;
  case 2:
    uVar27 = param_2[-8];
    uVar9 = *param_1;
    if (uVar27 == uVar9) {
      bVar4 = *(byte *)(param_1 + 2);
      bVar5 = *(byte *)(param_2 + -6);
      uVar12 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar12 = *(ulong *)(param_1 + 4);
      }
      uVar15 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar15 = *(ulong *)(param_2 + -4);
      }
      sVar3 = uVar12;
      if (uVar15 <= uVar12) {
        sVar3 = uVar15;
      }
      if (sVar3 != 0) {
        pvVar16 = *(void **)(param_1 + 6);
        pvVar17 = *(void **)(param_2 + -2);
        if ((bVar4 & 1) == 0) {
          pvVar16 = (void *)((long)param_1 + 9);
        }
        if ((bVar5 & 1) == 0) {
          pvVar17 = (void *)((long)param_2 + -0x17);
        }
        iVar10 = memcmp(pvVar17,pvVar16,sVar3);
        if (iVar10 != 0) {
          if (iVar10 < 0) goto LAB_00bbbf74;
          goto switchD_00bbbe90_caseD_0;
        }
      }
      if (uVar12 <= uVar15) goto switchD_00bbbe90_caseD_0;
    }
    else if (uVar27 < uVar9) goto switchD_00bbbe90_caseD_0;
LAB_00bbbf74:
    *param_1 = uVar27;
    param_2[-8] = uVar9;
    uVar13 = *(undefined8 *)(param_1 + 6);
    uVar31 = *(undefined8 *)(param_1 + 4);
    uVar29 = *(undefined8 *)(param_1 + 2);
    uVar30 = *(undefined8 *)(param_2 + -6);
    uVar14 = *(undefined8 *)(param_2 + -2);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + -4);
    *(undefined8 *)(param_1 + 2) = uVar30;
    *(undefined8 *)(param_1 + 6) = uVar14;
    *(undefined8 *)(param_2 + -2) = uVar13;
    *(undefined8 *)(param_2 + -4) = uVar31;
    *(undefined8 *)(param_2 + -6) = uVar29;
    goto switchD_00bbbe90_caseD_0;
  case 3:
    __sort3<LuauScriptSystem::linesCmp&,std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>
              (param_1,param_1 + 8,ppVar28,param_3);
    goto switchD_00bbbe90_caseD_0;
  case 4:
    __sort4<LuauScriptSystem::linesCmp&,std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>
              (param_1,param_1 + 8,param_1 + 0x10,ppVar28,param_3);
    goto switchD_00bbbe90_caseD_0;
  case 5:
    FUN_00bbc6ac(param_1,param_1 + 8,param_1 + 0x10,param_1 + 0x18,ppVar28,param_3);
    goto switchD_00bbbe90_caseD_0;
  default:
    if ((long)uVar15 < 0xe0) {
      __insertion_sort_3<LuauScriptSystem::linesCmp&,std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>
                (param_1,param_2,param_3);
      goto switchD_00bbbe90_caseD_0;
    }
    uVar1 = uVar12;
    if ((long)uVar12 < 0) {
      uVar1 = uVar12 + 1;
    }
    lVar18 = (long)uVar1 >> 1;
    ppVar21 = param_1 + lVar18 * 8;
    if (uVar15 < 0x7ce1) {
      uVar9 = __sort3<LuauScriptSystem::linesCmp&,std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>
                        (param_1,ppVar21,ppVar28,param_3);
    }
    else {
      uVar15 = uVar12 + 3;
      if (-1 < (long)uVar12) {
        uVar15 = uVar12;
      }
      uVar9 = FUN_00bbc6ac(param_1,param_1 + (uVar15 & 0x1ffffffffffffffc) * 2,ppVar21,
                           ppVar21 + (uVar15 & 0x1ffffffffffffffc) * 2,ppVar28,param_3);
    }
    uVar27 = *param_1;
    uVar24 = *ppVar21;
    ppVar19 = ppVar28;
    if (uVar27 != uVar24) {
      if (uVar27 < uVar24) goto LAB_00bbb7b8;
LAB_00bbb9f4:
      ppVar25 = param_1 + 8;
      if (ppVar25 < ppVar19) {
LAB_00bbba00:
        uVar27 = *ppVar21;
        do {
          uVar24 = *ppVar25;
          if (uVar24 == uVar27) {
            bVar4 = *(byte *)(ppVar21 + 2);
            bVar5 = *(byte *)(ppVar25 + 2);
            uVar12 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              uVar12 = *(ulong *)(ppVar21 + 4);
            }
            uVar15 = (ulong)(bVar5 >> 1);
            if ((bVar5 & 1) != 0) {
              uVar15 = *(ulong *)(ppVar25 + 4);
            }
            sVar3 = uVar12;
            if (uVar15 <= uVar12) {
              sVar3 = uVar15;
            }
            uVar24 = uVar27;
            if (sVar3 != 0) {
              pvVar16 = (void *)((long)ppVar21 + 9);
              if ((bVar4 & 1) != 0) {
                pvVar16 = *(void **)(ppVar21 + 6);
              }
              pvVar17 = (void *)((long)ppVar25 + 9);
              if ((bVar5 & 1) != 0) {
                pvVar17 = *(void **)(ppVar25 + 6);
              }
              iVar10 = memcmp(pvVar17,pvVar16,sVar3);
              if (iVar10 != 0) {
                if (iVar10 < 0) goto LAB_00bbba10;
                goto LAB_00bbba94;
              }
            }
            if (uVar12 <= uVar15) goto LAB_00bbba94;
          }
          else if (uVar24 < uVar27) goto LAB_00bbba94;
LAB_00bbba10:
          ppVar25 = ppVar25 + 8;
        } while( true );
      }
      if (ppVar25 != ppVar21) goto LAB_00bbbb80;
      goto LAB_00bbbc38;
    }
    bVar4 = *(byte *)(param_1 + 2);
    bVar5 = *(byte *)(param_1 + lVar18 * 8 + 2);
    uVar12 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar12 = *(ulong *)(param_1 + lVar18 * 8 + 4);
    }
    uVar15 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar15 = *(ulong *)(param_1 + 4);
    }
    sVar3 = uVar12;
    if (uVar15 <= uVar12) {
      sVar3 = uVar15;
    }
    if (sVar3 != 0) {
      pvVar16 = *(void **)(param_1 + lVar18 * 8 + 6);
      pvVar17 = *(void **)(param_1 + 6);
      if ((bVar5 & 1) == 0) {
        pvVar16 = (void *)((long)param_1 + lVar18 * 0x20 + 9);
      }
      if ((bVar4 & 1) == 0) {
        pvVar17 = (void *)((long)param_1 + 9);
      }
      iVar10 = memcmp(pvVar17,pvVar16,sVar3);
      if (iVar10 != 0) {
        if (-1 < iVar10) goto LAB_00bbb7b8;
        goto LAB_00bbb9f4;
      }
    }
    if (uVar15 < uVar12) goto LAB_00bbb9f4;
LAB_00bbb7b8:
    if (param_1 != param_2 + -0x10) {
      ppVar19 = param_2 + -0x10;
      do {
        uVar26 = *ppVar19;
        if (uVar26 == uVar24) {
          bVar4 = *(byte *)(param_1 + lVar18 * 8 + 2);
          bVar5 = *(byte *)(ppVar19 + 2);
          uVar12 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            uVar12 = *(ulong *)(param_1 + lVar18 * 8 + 4);
          }
          uVar15 = (ulong)(bVar5 >> 1);
          if ((bVar5 & 1) != 0) {
            uVar15 = *(ulong *)(ppVar19 + 4);
          }
          sVar3 = uVar12;
          if (uVar15 <= uVar12) {
            sVar3 = uVar15;
          }
          uVar26 = uVar24;
          if (sVar3 != 0) {
            pvVar16 = (void *)((long)param_1 + lVar18 * 0x20 + 9);
            if ((bVar4 & 1) != 0) {
              pvVar16 = *(void **)(param_1 + lVar18 * 8 + 6);
            }
            pvVar17 = (void *)((long)ppVar19 + 9);
            if ((bVar5 & 1) != 0) {
              pvVar17 = *(void **)(ppVar19 + 6);
            }
            iVar10 = memcmp(pvVar17,pvVar16,sVar3);
            if (iVar10 != 0) {
              if (iVar10 < 0) goto LAB_00bbb9b0;
              goto LAB_00bbb7ec;
            }
          }
          if (uVar15 < uVar12) {
LAB_00bbb9b0:
            *param_1 = uVar26;
            uVar9 = uVar9 + 1;
            *ppVar19 = uVar27;
            uVar13 = *(undefined8 *)(param_1 + 6);
            uVar31 = *(undefined8 *)(param_1 + 4);
            uVar29 = *(undefined8 *)(param_1 + 2);
            uVar30 = *(undefined8 *)(ppVar19 + 2);
            uVar14 = *(undefined8 *)(ppVar19 + 6);
            *(undefined8 *)(param_1 + 4) = *(undefined8 *)(ppVar19 + 4);
            *(undefined8 *)(param_1 + 2) = uVar30;
            *(undefined8 *)(param_1 + 6) = uVar14;
            *(undefined8 *)(ppVar19 + 6) = uVar13;
            *(undefined8 *)(ppVar19 + 4) = uVar31;
            *(undefined8 *)(ppVar19 + 2) = uVar29;
            goto LAB_00bbb9f4;
          }
        }
        else if (uVar24 <= uVar26) goto LAB_00bbb9b0;
LAB_00bbb7ec:
        ppVar19 = ppVar19 + -8;
      } while (ppVar19 != param_1);
    }
    puVar22 = param_1 + 8;
    uVar9 = *ppVar28;
    if (uVar27 != uVar9) {
      if (uVar9 <= uVar27) break;
LAB_00bbb914:
      if (puVar22 != ppVar28) {
        do {
          uVar24 = *puVar22;
          if (uVar27 == uVar24) {
            bVar4 = *(byte *)(puVar22 + 2);
            bVar5 = *(byte *)(param_1 + 2);
            uVar12 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              uVar12 = *(ulong *)(puVar22 + 4);
            }
            uVar15 = (ulong)(bVar5 >> 1);
            if ((bVar5 & 1) != 0) {
              uVar15 = *(ulong *)(param_1 + 4);
            }
            sVar3 = uVar12;
            if (uVar15 <= uVar12) {
              sVar3 = uVar15;
            }
            uVar24 = uVar27;
            if (sVar3 != 0) {
              pvVar16 = (void *)((long)puVar22 + 9);
              if ((bVar4 & 1) != 0) {
                pvVar16 = *(void **)(puVar22 + 6);
              }
              pvVar17 = (void *)((long)param_1 + 9);
              if ((bVar5 & 1) != 0) {
                pvVar17 = *(void **)(param_1 + 6);
              }
              iVar10 = memcmp(pvVar17,pvVar16,sVar3);
              if (iVar10 != 0) {
                if (-1 < iVar10) goto LAB_00bbb928;
                goto LAB_00bbbcac;
              }
            }
            if (uVar15 < uVar12) goto LAB_00bbbcac;
          }
          else if (uVar24 <= uVar27) goto LAB_00bbbcac;
LAB_00bbb928:
          puVar22 = puVar22 + 8;
          if (puVar22 == ppVar28) break;
        } while( true );
      }
      goto switchD_00bbbe90_caseD_0;
    }
    bVar5 = *(byte *)(param_2 + -6);
    bVar4 = *(byte *)(param_1 + 2);
    uVar12 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar12 = *(ulong *)(param_2 + -4);
    }
    uVar15 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar15 = *(ulong *)(param_1 + 4);
    }
    sVar3 = uVar12;
    if (uVar15 <= uVar12) {
      sVar3 = uVar15;
    }
    if (sVar3 != 0) {
      pvVar17 = *(void **)(param_1 + 6);
      pvVar16 = (void *)((long)param_2 + -0x17);
      if ((bVar5 & 1) != 0) {
        pvVar16 = *(void **)(param_2 + -2);
      }
      if ((bVar4 & 1) == 0) {
        pvVar17 = (void *)((long)param_1 + 9);
      }
      iVar10 = memcmp(pvVar17,pvVar16,sVar3);
      if (iVar10 != 0) {
        if (-1 < iVar10) goto LAB_00bbb914;
        break;
      }
    }
    if (uVar12 <= uVar15) goto LAB_00bbb914;
  }
  goto LAB_00bbbcec;
  while (uVar26 < uVar27) {
LAB_00bbba94:
    ppVar20 = ppVar19;
    ppVar19 = ppVar20 + -8;
    uVar26 = *ppVar19;
    if (uVar26 == uVar27) {
      bVar4 = *(byte *)(ppVar21 + 2);
      bVar5 = *(byte *)(ppVar20 + -6);
      uVar12 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar12 = *(ulong *)(ppVar21 + 4);
      }
      uVar15 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar15 = *(ulong *)(ppVar20 + -4);
      }
      sVar3 = uVar12;
      if (uVar15 <= uVar12) {
        sVar3 = uVar15;
      }
      uVar26 = uVar27;
      if (sVar3 != 0) {
        pvVar16 = (void *)((long)ppVar21 + 9);
        if ((bVar4 & 1) != 0) {
          pvVar16 = *(void **)(ppVar21 + 6);
        }
        pvVar17 = (void *)((long)ppVar20 + -0x17);
        if ((bVar5 & 1) != 0) {
          pvVar17 = *(void **)(ppVar20 + -2);
        }
        iVar10 = memcmp(pvVar17,pvVar16,sVar3);
        if (iVar10 != 0) {
          if (iVar10 < 0) break;
          goto LAB_00bbba94;
        }
      }
      if (uVar15 < uVar12) break;
      goto LAB_00bbba94;
    }
  }
  if (ppVar19 < ppVar25) goto LAB_00bbbb74;
  *ppVar25 = uVar26;
  *ppVar19 = uVar24;
  uVar9 = uVar9 + 1;
  uVar13 = *(undefined8 *)(ppVar25 + 6);
  ppVar2 = ppVar19;
  if (ppVar25 != ppVar21) {
    ppVar2 = ppVar21;
  }
  uVar30 = *(undefined8 *)(ppVar25 + 4);
  uVar14 = *(undefined8 *)(ppVar25 + 2);
  uVar31 = *(undefined8 *)(ppVar20 + -4);
  uVar29 = *(undefined8 *)(ppVar20 + -6);
  *(undefined8 *)(ppVar25 + 6) = *(undefined8 *)(ppVar20 + -2);
  *(undefined8 *)(ppVar25 + 4) = uVar31;
  *(undefined8 *)(ppVar25 + 2) = uVar29;
  ppVar25 = ppVar25 + 8;
  *(undefined8 *)(ppVar20 + -2) = uVar13;
  *(undefined8 *)(ppVar20 + -4) = uVar30;
  *(undefined8 *)(ppVar20 + -6) = uVar14;
  ppVar21 = ppVar2;
  goto LAB_00bbba00;
LAB_00bbbb74:
  if (ppVar25 == ppVar21) goto LAB_00bbbc38;
LAB_00bbbb80:
  uVar27 = *ppVar21;
  uVar24 = *ppVar25;
  if (uVar27 == uVar24) {
    bVar4 = *(byte *)(ppVar25 + 2);
    bVar5 = *(byte *)(ppVar21 + 2);
    uVar12 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar12 = *(ulong *)(ppVar25 + 4);
    }
    uVar15 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar15 = *(ulong *)(ppVar21 + 4);
    }
    sVar3 = uVar12;
    if (uVar15 <= uVar12) {
      sVar3 = uVar15;
    }
    if (sVar3 != 0) {
      pvVar16 = *(void **)(ppVar25 + 6);
      pvVar17 = *(void **)(ppVar21 + 6);
      if ((bVar4 & 1) == 0) {
        pvVar16 = (void *)((long)ppVar25 + 9);
      }
      if ((bVar5 & 1) == 0) {
        pvVar17 = (void *)((long)ppVar21 + 9);
      }
      iVar10 = memcmp(pvVar17,pvVar16,sVar3);
      if (iVar10 != 0) {
        if (-1 < iVar10) goto LAB_00bbbc38;
        goto LAB_00bbbbfc;
      }
    }
    if (uVar12 <= uVar15) goto LAB_00bbbc38;
  }
  else if (uVar27 < uVar24) goto LAB_00bbbc38;
LAB_00bbbbfc:
  *ppVar25 = uVar27;
  uVar9 = uVar9 + 1;
  *ppVar21 = uVar24;
  uVar13 = *(undefined8 *)(ppVar25 + 6);
  uVar31 = *(undefined8 *)(ppVar25 + 4);
  uVar29 = *(undefined8 *)(ppVar25 + 2);
  uVar30 = *(undefined8 *)(ppVar21 + 2);
  uVar14 = *(undefined8 *)(ppVar21 + 6);
  *(undefined8 *)(ppVar25 + 4) = *(undefined8 *)(ppVar21 + 4);
  *(undefined8 *)(ppVar25 + 2) = uVar30;
  *(undefined8 *)(ppVar25 + 6) = uVar14;
  *(undefined8 *)(ppVar21 + 6) = uVar13;
  *(undefined8 *)(ppVar21 + 4) = uVar31;
  *(undefined8 *)(ppVar21 + 2) = uVar29;
LAB_00bbbc38:
  if (uVar9 == 0) {
    bVar7 = __insertion_sort_incomplete<LuauScriptSystem::linesCmp&,std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>
                      (param_1,ppVar25,param_3);
    bVar8 = __insertion_sort_incomplete<LuauScriptSystem::linesCmp&,std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>
                      (ppVar25 + 8,param_2,param_3);
    if (bVar8) goto LAB_00bbbe70;
    puVar22 = ppVar25 + 8;
    if (bVar7) goto LAB_00bbb6b8;
  }
  if ((long)param_2 - (long)ppVar25 <= (long)ppVar25 - (long)param_1) {
    __sort<LuauScriptSystem::linesCmp&,std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>
              (ppVar25 + 8,param_2,param_3);
    param_2 = ppVar25;
    goto LAB_00bbb698;
  }
  __sort<LuauScriptSystem::linesCmp&,std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>
            (param_1,ppVar25,param_3);
  puVar22 = ppVar25 + 8;
  goto LAB_00bbb6b8;
LAB_00bbbe70:
  param_2 = ppVar25;
  if (bVar7) {
switchD_00bbbe90_caseD_0:
    if (*(long *)(lVar6 + 0x28) == lVar11) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_00bbb698;
LAB_00bbbcac:
  *puVar22 = uVar9;
  *ppVar28 = uVar24;
  uVar13 = *(undefined8 *)(puVar22 + 6);
  uVar30 = *(undefined8 *)(puVar22 + 4);
  uVar14 = *(undefined8 *)(puVar22 + 2);
  uVar31 = *(undefined8 *)(param_2 + -4);
  uVar29 = *(undefined8 *)(param_2 + -6);
  *(undefined8 *)(puVar22 + 6) = *(undefined8 *)(param_2 + -2);
  *(undefined8 *)(puVar22 + 4) = uVar31;
  *(undefined8 *)(puVar22 + 2) = uVar29;
  puVar22 = puVar22 + 8;
  *(undefined8 *)(param_2 + -2) = uVar13;
  *(undefined8 *)(param_2 + -4) = uVar30;
  *(undefined8 *)(param_2 + -6) = uVar14;
LAB_00bbbcec:
  if (puVar22 != ppVar28) {
    ppVar21 = ppVar28;
LAB_00bbbcfc:
    uVar9 = *param_1;
    do {
      uVar27 = *puVar22;
      if (uVar9 == uVar27) {
        bVar4 = *(byte *)(puVar22 + 2);
        bVar5 = *(byte *)(param_1 + 2);
        uVar12 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar12 = *(ulong *)(puVar22 + 4);
        }
        uVar15 = (ulong)(bVar5 >> 1);
        if ((bVar5 & 1) != 0) {
          uVar15 = *(ulong *)(param_1 + 4);
        }
        sVar3 = uVar12;
        if (uVar15 <= uVar12) {
          sVar3 = uVar15;
        }
        uVar27 = uVar9;
        if (sVar3 != 0) {
          pvVar16 = (void *)((long)puVar22 + 9);
          if ((bVar4 & 1) != 0) {
            pvVar16 = *(void **)(puVar22 + 6);
          }
          pvVar17 = (void *)((long)param_1 + 9);
          if ((bVar5 & 1) != 0) {
            pvVar17 = *(void **)(param_1 + 6);
          }
          iVar10 = memcmp(pvVar17,pvVar16,sVar3);
          if (iVar10 != 0) {
            if (-1 < iVar10) goto LAB_00bbbd08;
            goto LAB_00bbbd8c;
          }
        }
        if (uVar15 < uVar12) goto LAB_00bbbd8c;
      }
      else if (uVar27 <= uVar9) goto LAB_00bbbd8c;
LAB_00bbbd08:
      puVar22 = puVar22 + 8;
    } while( true );
  }
  goto switchD_00bbbe90_caseD_0;
  while (uVar24 <= uVar9) {
LAB_00bbbd8c:
    puVar23 = ppVar21;
    ppVar21 = puVar23 + -8;
    uVar24 = *ppVar21;
    if (uVar9 == uVar24) {
      bVar4 = *(byte *)(puVar23 + -6);
      bVar5 = *(byte *)(param_1 + 2);
      uVar12 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar12 = *(ulong *)(puVar23 + -4);
      }
      uVar15 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar15 = *(ulong *)(param_1 + 4);
      }
      sVar3 = uVar12;
      if (uVar15 <= uVar12) {
        sVar3 = uVar15;
      }
      uVar24 = uVar9;
      if (sVar3 != 0) {
        pvVar16 = (void *)((long)puVar23 + -0x17);
        if ((bVar4 & 1) != 0) {
          pvVar16 = *(void **)(puVar23 + -2);
        }
        pvVar17 = (void *)((long)param_1 + 9);
        if ((bVar5 & 1) != 0) {
          pvVar17 = *(void **)(param_1 + 6);
        }
        iVar10 = memcmp(pvVar17,pvVar16,sVar3);
        if (iVar10 != 0) {
          if (-1 < iVar10) break;
          goto LAB_00bbbd8c;
        }
      }
      if (uVar12 <= uVar15) break;
      goto LAB_00bbbd8c;
    }
  }
  if (ppVar21 <= puVar22) goto LAB_00bbb6b8;
  *puVar22 = uVar24;
  *ppVar21 = uVar27;
  uVar13 = *(undefined8 *)(puVar22 + 6);
  uVar30 = *(undefined8 *)(puVar22 + 4);
  uVar14 = *(undefined8 *)(puVar22 + 2);
  uVar31 = *(undefined8 *)(puVar23 + -4);
  uVar29 = *(undefined8 *)(puVar23 + -6);
  *(undefined8 *)(puVar22 + 6) = *(undefined8 *)(puVar23 + -2);
  *(undefined8 *)(puVar22 + 4) = uVar31;
  *(undefined8 *)(puVar22 + 2) = uVar29;
  puVar22 = puVar22 + 8;
  *(undefined8 *)(puVar23 + -2) = uVar13;
  *(undefined8 *)(puVar23 + -4) = uVar30;
  *(undefined8 *)(puVar23 + -6) = uVar14;
  goto LAB_00bbbcfc;
}


