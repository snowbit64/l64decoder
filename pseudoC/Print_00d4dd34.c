// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Print
// Entry Point: 00d4dd34
// Size: 2620 bytes
// Signature: undefined Print(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::Graph::Print() const */

void HACD::Graph::Print(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long in_x0;
  basic_ostream *pbVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  void *pvVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  void *pvVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  undefined *puVar19;
  long *plVar20;
  sentry local_90 [16];
  undefined8 local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&std::__ndk1::cout,"-----------------------------",0x1d);
  std::__ndk1::ios_base::getloc();
  plVar6 = (long *)std::__ndk1::locale::use_facet((id *)&local_80);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_80);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&std::__ndk1::cout,"vertices (",10);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(ulong *)(in_x0 + 0x10));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,")",1);
  std::__ndk1::ios_base::getloc();
  plVar6 = (long *)std::__ndk1::locale::use_facet((id *)&local_80);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_80);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  lVar17 = *(long *)(in_x0 + 0x38);
  lVar12 = *(long *)(in_x0 + 0x40);
  if (lVar12 != lVar17) {
    uVar13 = 0;
    pvVar14 = (void *)((ulong)&local_80 | 1);
    do {
      if (*(char *)(lVar17 + uVar13 * 0x310 + 0xa8) == '\0') {
        plVar6 = (long *)(lVar17 + uVar13 * 0x310);
        pbVar5 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&std::__ndk1::cout
                            ,*plVar6);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"\t",1);
        if (plVar6[0x13] != 0) {
          uVar15 = 0;
          do {
            plVar20 = plVar6 + 2;
            if (plVar6[0x14] != 0x10) {
              plVar20 = (long *)plVar6[0x12];
            }
            lVar17 = plVar20[uVar15];
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry
                      (local_90,(basic_ostream *)&std::__ndk1::cout);
            if (local_90[0] != (sentry)0x0) {
              lVar12 = *(long *)(std::__ndk1::cout + -0x18);
              uVar4 = *(uint *)(std::__ndk1::condition_variable::wait + lVar12);
              plVar20 = *(long **)(fseek + lVar12);
              puVar1 = &DAT_0050332d;
              if ((*(uint *)(std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::
                             operator<< + lVar12) & 0xb0) == 0x20) {
                puVar1 = &UNK_0050332e;
              }
              if (uVar4 == 0xffffffff) {
                std::__ndk1::ios_base::getloc();
                plVar18 = (long *)std::__ndk1::locale::use_facet((id *)&local_80);
                uVar4 = (**(code **)(*plVar18 + 0x38))(plVar18,0x20);
                std::__ndk1::locale::~locale((locale *)&local_80);
                uVar4 = uVar4 & 0xff;
                *(uint *)(std::__ndk1::condition_variable::wait + lVar12) = uVar4;
              }
              if (plVar20 != (long *)0x0) {
                uVar2 = *(long *)(getenv + lVar12) - 1;
                if (uVar2 == 0 || *(long *)(getenv + lVar12) < 1) {
                  uVar2 = 0;
                }
                puVar19 = puVar1 + -0x50332d;
                if (((long)puVar19 < 1) ||
                   (puVar9 = (undefined *)
                             (**(code **)(*plVar20 + 0x60))(plVar20,&DAT_0050332d,puVar19),
                   puVar9 == puVar19)) {
                  if (uVar2 != 0) {
                    if (uVar2 < 0x17) {
                      local_80 = CONCAT71(local_80._1_7_,(char)((int)uVar2 << 1));
                      pvVar10 = pvVar14;
                    }
                    else {
                      uVar11 = uVar2 + 0x10 & 0xfffffffffffffff0;
                      pvVar10 = operator_new(uVar11);
                      local_80 = uVar11 | 1;
                      local_78 = uVar2;
                      local_70 = pvVar10;
                    }
                    memset(pvVar10,uVar4,uVar2);
                    *(undefined *)((long)pvVar10 + uVar2) = 0;
                    pvVar10 = pvVar14;
                    if ((local_80 & 1) != 0) {
                      pvVar10 = local_70;
                    }
                    uVar11 = (**(code **)(*plVar20 + 0x60))(plVar20,pvVar10,uVar2);
                    if ((local_80 & 1) != 0) {
                      operator_delete(local_70);
                    }
                    if (uVar11 != uVar2) goto LAB_00d4e19c;
                  }
                  lVar16 = (long)&UNK_0050332e - (long)puVar1;
                  if ((lVar16 < 1) ||
                     (lVar7 = (**(code **)(*plVar20 + 0x60))(plVar20,puVar1,lVar16), lVar7 == lVar16
                     )) {
                    *(undefined8 *)(getenv + lVar12) = 0;
                    goto LAB_00d4e1b8;
                  }
                }
              }
LAB_00d4e19c:
              std::__ndk1::ios_base::clear
                        ((int)*(undefined8 *)(std::__ndk1::cout + -0x18) + 0x2249c68);
            }
LAB_00d4e1b8:
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry
                      (local_90);
            plVar20 = (long *)std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::
                              operator<<((basic_ostream<char,std::__ndk1::char_traits<char>> *)
                                         &std::__ndk1::cout,
                                         *(long *)(*(long *)(in_x0 + 0x20) + lVar17 * 0x30 + 8));
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry
                      (local_90,(basic_ostream *)plVar20);
            if (local_90[0] != (sentry)0x0) {
              lVar12 = *(long *)(*plVar20 + -0x18);
              uVar4 = *(uint *)((long)plVar20 + lVar12 + 0x90);
              plVar18 = *(long **)((long)plVar20 + lVar12 + 0x28);
              puVar1 = &DAT_004df685;
              if ((*(uint *)((long)plVar20 + lVar12 + 8) & 0xb0) == 0x20) {
                puVar1 = &UNK_004df686;
              }
              if (uVar4 == 0xffffffff) {
                std::__ndk1::ios_base::getloc();
                plVar8 = (long *)std::__ndk1::locale::use_facet((id *)&local_80);
                uVar4 = (**(code **)(*plVar8 + 0x38))(plVar8,0x20);
                std::__ndk1::locale::~locale((locale *)&local_80);
                uVar4 = uVar4 & 0xff;
                *(uint *)((long)plVar20 + lVar12 + 0x90) = uVar4;
              }
              if (plVar18 != (long *)0x0) {
                lVar16 = *(long *)((long)plVar20 + lVar12 + 0x18);
                uVar2 = lVar16 - 1;
                if (uVar2 == 0 || lVar16 < 1) {
                  uVar2 = 0;
                }
                puVar19 = puVar1 + -0x4df685;
                if (((long)puVar19 < 1) ||
                   (puVar9 = (undefined *)
                             (**(code **)(*plVar18 + 0x60))(plVar18,&DAT_004df685,puVar19),
                   puVar9 == puVar19)) {
                  if (uVar2 != 0) {
                    if (uVar2 < 0x17) {
                      local_80 = CONCAT71(local_80._1_7_,(char)((int)uVar2 << 1));
                      pvVar10 = pvVar14;
                    }
                    else {
                      uVar11 = uVar2 + 0x10 & 0xfffffffffffffff0;
                      pvVar10 = operator_new(uVar11);
                      local_80 = uVar11 | 1;
                      local_78 = uVar2;
                      local_70 = pvVar10;
                    }
                    memset(pvVar10,uVar4,uVar2);
                    *(undefined *)((long)pvVar10 + uVar2) = 0;
                    pvVar10 = pvVar14;
                    if ((local_80 & 1) != 0) {
                      pvVar10 = local_70;
                    }
                    uVar11 = (**(code **)(*plVar18 + 0x60))(plVar18,pvVar10,uVar2);
                    if ((local_80 & 1) != 0) {
                      operator_delete(local_70);
                    }
                    if (uVar11 != uVar2) goto LAB_00d4e394;
                  }
                  lVar16 = (long)&UNK_004df686 - (long)puVar1;
                  if ((lVar16 < 1) ||
                     (lVar7 = (**(code **)(*plVar18 + 0x60))(plVar18,puVar1,lVar16), lVar7 == lVar16
                     )) {
                    *(undefined8 *)((long)plVar20 + lVar12 + 0x18) = 0;
                    goto LAB_00d4e3b8;
                  }
                }
              }
LAB_00d4e394:
              std::__ndk1::ios_base::clear((int)plVar20 + (int)*(undefined8 *)(*plVar20 + -0x18));
            }
LAB_00d4e3b8:
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry
                      (local_90);
            plVar20 = (long *)std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::
                              operator<<((basic_ostream<char,std::__ndk1::char_traits<char>> *)
                                         plVar20,*(long *)(*(long *)(in_x0 + 0x20) + lVar17 * 0x30 +
                                                          0x10));
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry
                      (local_90,(basic_ostream *)plVar20);
            if (local_90[0] != (sentry)0x0) {
              lVar17 = *(long *)(*plVar20 + -0x18);
              uVar4 = *(uint *)((long)plVar20 + lVar17 + 0x90);
              plVar18 = *(long **)((long)plVar20 + lVar17 + 0x28);
              puVar1 = &UNK_00516400;
              if ((*(uint *)((long)plVar20 + lVar17 + 8) & 0xb0) != 0x20) {
                puVar1 = &DAT_005163fe;
              }
              if (uVar4 == 0xffffffff) {
                std::__ndk1::ios_base::getloc();
                plVar8 = (long *)std::__ndk1::locale::use_facet((id *)&local_80);
                uVar4 = (**(code **)(*plVar8 + 0x38))(plVar8,0x20);
                std::__ndk1::locale::~locale((locale *)&local_80);
                uVar4 = uVar4 & 0xff;
                *(uint *)((long)plVar20 + lVar17 + 0x90) = uVar4;
              }
              if (plVar18 != (long *)0x0) {
                lVar12 = *(long *)((long)plVar20 + lVar17 + 0x18);
                uVar2 = lVar12 - 2;
                if (uVar2 == 0 || lVar12 < 2) {
                  uVar2 = 0;
                }
                puVar19 = puVar1 + -0x5163fe;
                if (((long)puVar19 < 1) ||
                   (puVar9 = (undefined *)
                             (**(code **)(*plVar18 + 0x60))(plVar18,&DAT_005163fe,puVar19),
                   puVar9 == puVar19)) {
                  if (uVar2 != 0) {
                    if (uVar2 < 0x17) {
                      local_80 = CONCAT71(local_80._1_7_,(char)((int)uVar2 << 1));
                      pvVar10 = pvVar14;
                    }
                    else {
                      uVar11 = uVar2 + 0x10 & 0xfffffffffffffff0;
                      pvVar10 = operator_new(uVar11);
                      local_80 = uVar11 | 1;
                      local_78 = uVar2;
                      local_70 = pvVar10;
                    }
                    memset(pvVar10,uVar4,uVar2);
                    *(undefined *)((long)pvVar10 + uVar2) = 0;
                    pvVar10 = pvVar14;
                    if ((local_80 & 1) != 0) {
                      pvVar10 = local_70;
                    }
                    uVar11 = (**(code **)(*plVar18 + 0x60))(plVar18,pvVar10,uVar2);
                    if ((local_80 & 1) != 0) {
                      operator_delete(local_70);
                    }
                    if (uVar11 != uVar2) goto LAB_00d4df80;
                  }
                  lVar12 = (long)&UNK_00516400 - (long)puVar1;
                  if ((lVar12 < 1) ||
                     (lVar16 = (**(code **)(*plVar18 + 0x60))(plVar18,puVar1,lVar12),
                     lVar16 == lVar12)) {
                    *(undefined8 *)((long)plVar20 + lVar17 + 0x18) = 0;
                    goto LAB_00d4dfa4;
                  }
                }
              }
LAB_00d4df80:
              std::__ndk1::ios_base::clear((int)plVar20 + (int)*(undefined8 *)(*plVar20 + -0x18));
            }
LAB_00d4dfa4:
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry
                      (local_90);
            uVar15 = uVar15 + 1;
          } while (uVar15 < (ulong)plVar6[0x13]);
        }
        std::__ndk1::ios_base::getloc();
        plVar6 = (long *)std::__ndk1::locale::use_facet((id *)&local_80);
        (**(code **)(*plVar6 + 0x38))(plVar6,10);
        std::__ndk1::locale::~locale((locale *)&local_80);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put('h');
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
        lVar17 = *(long *)(in_x0 + 0x38);
        lVar12 = *(long *)(in_x0 + 0x40);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < (ulong)((lVar12 - lVar17 >> 4) * 0x7d6343eb1a1f58d1));
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&std::__ndk1::cout,"vertices (",10);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(ulong *)(in_x0 + 0x18));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,")",1);
  std::__ndk1::ios_base::getloc();
  plVar6 = (long *)std::__ndk1::locale::use_facet((id *)&local_80);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_80);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  lVar17 = *(long *)(in_x0 + 0x20);
  lVar12 = *(long *)(in_x0 + 0x28);
  if (lVar12 != lVar17) {
    lVar16 = 0;
    uVar13 = 0;
    do {
      if (*(char *)(lVar17 + lVar16 + 0x28) == '\0') {
        pbVar5 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&std::__ndk1::cout
                            ,*(long *)(lVar17 + lVar16));
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar5,"\t(",2);
        pbVar5 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                            *(long *)(*(long *)(in_x0 + 0x20) + lVar16 + 8));
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar5,",",1);
        pbVar5 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                            *(long *)(*(long *)(in_x0 + 0x20) + lVar16 + 0x10));
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar5,") ",2);
        std::__ndk1::ios_base::getloc();
        plVar6 = (long *)std::__ndk1::locale::use_facet((id *)&local_80);
        (**(code **)(*plVar6 + 0x38))(plVar6,10);
        std::__ndk1::locale::~locale((locale *)&local_80);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
        lVar17 = *(long *)(in_x0 + 0x20);
        lVar12 = *(long *)(in_x0 + 0x28);
      }
      uVar13 = uVar13 + 1;
      lVar16 = lVar16 + 0x30;
    } while (uVar13 < (ulong)((lVar12 - lVar17 >> 4) * -0x5555555555555555));
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


