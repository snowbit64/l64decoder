// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>
// Entry Point: 00c02fcc
// Size: 1984 bytes
// Signature: void __cdecl __sort<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>(Entry * param_1, Entry * param_2, greater * param_3)


/* void std::__ndk1::__sort<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,
   DictionaryCreator::Main::Entry*>(DictionaryCreator::Main::Entry*,
   DictionaryCreator::Main::Entry*, std::__ndk1::greater<DictionaryCreator::Main::Entry>&) */

void std::__ndk1::
     __sort<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>
               (Entry *param_1,Entry *param_2,greater *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  Entry EVar3;
  Entry EVar4;
  undefined2 uVar5;
  byte bVar6;
  undefined uVar7;
  long lVar8;
  ulong *puVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  uint uVar17;
  ulong *puVar18;
  uint uVar19;
  undefined8 uVar20;
  ulong *puVar21;
  ulong *puVar22;
  long lVar23;
  ulong *puVar24;
  ulong uVar25;
  ulong uVar26;
  undefined6 uStack_78;
  undefined2 local_72;
  undefined6 uStack_70;
  
  lVar8 = tpidr_el0;
  lVar13 = *(long *)(lVar8 + 0x28);
LAB_00c03008:
  puVar21 = (ulong *)((long)param_2 + -0x20);
  puVar22 = (ulong *)param_1;
LAB_00c03020:
  param_1 = (Entry *)puVar22;
  uVar16 = (long)param_2 - (long)param_1;
  uVar14 = (long)uVar16 >> 5;
  switch(uVar14) {
  case 0:
  case 1:
    goto switchD_00c03640_caseD_0;
  case 2:
    uVar12 = *(uint *)param_1;
    if (uVar12 < *(uint *)((long)param_2 + -0x20)) {
      bVar6 = *(byte *)((long)param_1 + 8);
    }
    else {
      if (*(uint *)((long)param_2 + -0x20) < uVar12) goto switchD_00c03640_caseD_0;
      bVar6 = *(byte *)((long)param_1 + 8);
      uVar14 = (ulong)(*(byte *)((long)param_2 + -0x18) >> 1);
      if ((*(byte *)((long)param_2 + -0x18) & 1) != 0) {
        uVar14 = *(ulong *)((long)param_2 + -0x10);
      }
      uVar16 = (ulong)(bVar6 >> 1);
      if ((bVar6 & 1) != 0) {
        uVar16 = *(ulong *)((long)param_1 + 0x10);
      }
      if (uVar14 <= uVar16) goto switchD_00c03640_caseD_0;
    }
    uVar7 = *(undefined *)((long)param_1 + 9);
    uStack_78 = (undefined6)*(undefined8 *)((long)param_1 + 10);
    uVar14 = *(ulong *)((long)param_1 + 0x10);
    uVar16 = *(ulong *)((long)param_1 + 0x18);
    *(ulong *)((long)param_1 + 0x18) = 0;
    local_72 = (undefined2)uVar14;
    *(ulong *)((long)param_1 + 8) = 0;
    *(ulong *)((long)param_1 + 0x10) = 0;
    *(undefined4 *)param_1 = *(undefined4 *)((long)param_2 + -0x20);
    uVar26 = *(ulong *)((long)param_2 + -0x10);
    uVar25 = *(ulong *)((long)param_2 + -0x18);
    *(ulong *)((long)param_1 + 0x18) = *(ulong *)((long)param_2 + -8);
    *(ulong *)((long)param_1 + 0x10) = uVar26;
    *(ulong *)((long)param_1 + 8) = uVar25;
    *(uint *)((long)param_2 + -0x20) = uVar12;
    *(byte *)((long)param_2 + -0x18) = bVar6;
    *(undefined *)((long)param_2 + -0x17) = uVar7;
    *(ulong *)((long)param_2 + -8) = uVar16;
    *(ulong *)((long)param_2 + -0x10) = uVar14;
    *(ulong *)((long)param_2 + -0x16) = CONCAT26(local_72,uStack_78);
    goto switchD_00c03640_caseD_0;
  case 3:
    __sort3<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>
              (param_1,(Entry *)((long)param_1 + 0x20),(Entry *)puVar21,param_3);
    goto switchD_00c03640_caseD_0;
  case 4:
    __sort4<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>
              (param_1,(Entry *)((long)param_1 + 0x20),(Entry *)((long)param_1 + 0x40),
               (Entry *)puVar21,param_3);
    goto switchD_00c03640_caseD_0;
  case 5:
    FUN_00c03d6c(param_1,(ulong *)((long)param_1 + 0x20),(ulong *)((long)param_1 + 0x40),
                 (ulong *)((long)param_1 + 0x60),puVar21,param_3);
    goto switchD_00c03640_caseD_0;
  }
  if ((long)uVar16 < 0xe0) {
    __insertion_sort_3<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>
              (param_1,param_2,param_3);
    goto switchD_00c03640_caseD_0;
  }
  uVar25 = uVar14;
  if ((long)uVar14 < 0) {
    uVar25 = uVar14 + 1;
  }
  lVar23 = (long)uVar25 >> 1;
  puVar22 = (ulong *)((long)param_1 + lVar23 * 4 * 8);
  if (uVar16 < 0x7ce1) {
    uVar12 = __sort3<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>
                       (param_1,(Entry *)puVar22,(Entry *)puVar21,param_3);
  }
  else {
    uVar16 = uVar14 + 3;
    if (-1 < (long)uVar14) {
      uVar16 = uVar14;
    }
    uVar12 = FUN_00c03d6c(param_1,(ulong *)((long)param_1 + (uVar16 & 0x1ffffffffffffffc) * 8),
                          puVar22,puVar22 + (uVar16 & 0x1ffffffffffffffc),puVar21,param_3);
  }
  uVar17 = *(uint *)param_1;
  uVar1 = *(uint *)puVar22;
  puVar15 = puVar21;
  if (uVar17 <= uVar1) {
    if (uVar1 <= uVar17) {
      uVar14 = (ulong)(*(byte *)((long)param_1 + 8) >> 1);
      if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
        uVar14 = *(ulong *)((long)param_1 + 0x10);
      }
      uVar16 = (ulong)(*(byte *)((long)param_1 + (lVar23 * 4 + 1) * 8) >> 1);
      if ((*(byte *)((long)param_1 + (lVar23 * 4 + 1) * 8) & 1) != 0) {
        uVar16 = *(ulong *)((long)param_1 + (lVar23 * 4 + 2) * 8);
      }
      if (uVar16 < uVar14) goto LAB_00c030b0;
    }
    if ((ulong *)param_1 != (ulong *)((long)param_2 + -0x40)) {
      puVar15 = (ulong *)((long)param_2 + -0x40);
      do {
        if (uVar1 < *(uint *)puVar15) {
LAB_00c03300:
          uVar14 = *(ulong *)((long)param_1 + 0x10);
          uVar16 = *(ulong *)((long)param_1 + 0x18);
          uVar12 = uVar12 + 1;
          uVar20 = *(undefined8 *)((long)param_1 + 10);
          *(ulong *)((long)param_1 + 0x10) = 0;
          *(ulong *)((long)param_1 + 0x18) = 0;
          uVar5 = *(undefined2 *)((long)param_1 + 8);
          uStack_70 = (undefined6)(uVar14 >> 0x10);
          local_72 = (undefined2)((ulong)uVar20 >> 0x30);
          *(ulong *)((long)param_1 + 8) = 0;
          *(undefined4 *)param_1 = *(undefined4 *)puVar15;
          uVar25 = puVar15[2];
          uVar14 = puVar15[1];
          *(ulong *)((long)param_1 + 0x18) = puVar15[3];
          *(ulong *)((long)param_1 + 0x10) = uVar25;
          *(ulong *)((long)param_1 + 8) = uVar14;
          *(uint *)puVar15 = uVar17;
          *(undefined2 *)(puVar15 + 1) = uVar5;
          puVar15[2] = CONCAT62(uStack_70,local_72);
          puVar15[3] = uVar16;
          *(undefined8 *)((long)puVar15 + 10) = uVar20;
          goto LAB_00c030b0;
        }
        if (uVar1 <= *(uint *)puVar15) {
          uVar14 = (ulong)((byte)*(Entry *)(puVar15 + 1) >> 1);
          if (((byte)*(Entry *)(puVar15 + 1) & 1) != 0) {
            uVar14 = puVar15[2];
          }
          uVar16 = (ulong)(*(byte *)((long)param_1 + (lVar23 * 4 + 1) * 8) >> 1);
          if ((*(byte *)((long)param_1 + (lVar23 * 4 + 1) * 8) & 1) != 0) {
            uVar16 = *(ulong *)((long)param_1 + (lVar23 * 4 + 2) * 8);
          }
          if (uVar16 < uVar14) goto LAB_00c03300;
        }
        puVar15 = puVar15 + -4;
      } while (puVar15 != (ulong *)param_1);
    }
    puVar22 = (ulong *)((long)param_1 + 0x20);
    if (uVar17 <= *(uint *)puVar21) {
      if (*(uint *)puVar21 <= uVar17) {
        uVar14 = (ulong)(*(byte *)((long)param_1 + 8) >> 1);
        if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
          uVar14 = *(ulong *)((long)param_1 + 0x10);
        }
        uVar16 = (ulong)(*(byte *)((long)param_2 + -0x18) >> 1);
        if ((*(byte *)((long)param_2 + -0x18) & 1) != 0) {
          uVar16 = *(ulong *)((long)param_2 + -0x10);
        }
        if (uVar16 < uVar14) goto LAB_00c034fc;
      }
      if (puVar22 == puVar21) goto switchD_00c03640_caseD_0;
      puVar22 = (ulong *)((long)param_1 + 0x40);
      while( true ) {
        uVar12 = *(uint *)(puVar22 + -4);
        if (uVar12 < uVar17) break;
        if (uVar12 <= uVar17) {
          bVar6 = *(byte *)(puVar22 + -3);
          uVar14 = (ulong)(*(byte *)((long)param_1 + 8) >> 1);
          if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
            uVar14 = *(ulong *)((long)param_1 + 0x10);
          }
          uVar16 = (ulong)(bVar6 >> 1);
          if ((bVar6 & 1) != 0) {
            uVar16 = puVar22[-2];
          }
          if (uVar16 < uVar14) goto LAB_00c0349c;
        }
        bVar10 = puVar22 == puVar21;
        puVar22 = puVar22 + 4;
        if (bVar10) goto switchD_00c03640_caseD_0;
      }
      bVar6 = *(byte *)(puVar22 + -3);
LAB_00c0349c:
      uVar20 = *(undefined8 *)((long)puVar22 + -0x16);
      uVar7 = *(undefined *)((long)puVar22 + -0x17);
      uStack_70 = (undefined6)(puVar22[-2] >> 0x10);
      local_72 = (undefined2)((ulong)uVar20 >> 0x30);
      uVar14 = puVar22[-1];
      puVar22[-2] = 0;
      puVar22[-1] = 0;
      puVar22[-3] = 0;
      *(undefined4 *)(puVar22 + -4) = *(undefined4 *)((long)param_2 + -0x20);
      uVar25 = *(ulong *)((long)param_2 + -0x10);
      uVar16 = *(ulong *)((long)param_2 + -0x18);
      puVar22[-1] = *(ulong *)((long)param_2 + -8);
      puVar22[-2] = uVar25;
      puVar22[-3] = uVar16;
      *(uint *)((long)param_2 + -0x20) = uVar12;
      *(byte *)((long)param_2 + -0x18) = bVar6;
      *(undefined *)((long)param_2 + -0x17) = uVar7;
      *(ulong *)((long)param_2 + -8) = uVar14;
      *(ulong *)((long)param_2 + -0x10) = CONCAT62(uStack_70,local_72);
      *(undefined8 *)((long)param_2 + -0x16) = uVar20;
    }
LAB_00c034fc:
    puVar15 = puVar21;
    if (puVar22 != puVar21) {
LAB_00c03508:
      uVar12 = *(uint *)param_1;
      uVar17 = *(uint *)puVar22;
      while (uVar12 <= uVar17) {
        if (uVar17 <= uVar12) {
          uVar14 = (ulong)(*(byte *)((long)param_1 + 8) >> 1);
          if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
            uVar14 = *(ulong *)((long)param_1 + 0x10);
          }
          uVar16 = (ulong)(*(byte *)(puVar22 + 1) >> 1);
          if ((*(byte *)(puVar22 + 1) & 1) != 0) {
            uVar16 = puVar22[2];
          }
          if (uVar16 < uVar14) break;
        }
        puVar22 = puVar22 + 4;
        uVar17 = *(uint *)puVar22;
      }
      puVar15 = puVar15 + -2;
      do {
        if (uVar12 <= *(uint *)(puVar15 + -2)) {
          if (uVar12 < *(uint *)(puVar15 + -2)) goto LAB_00c035a4;
          uVar14 = (ulong)(*(byte *)((long)param_1 + 8) >> 1);
          if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
            uVar14 = *(ulong *)((long)param_1 + 0x10);
          }
          uVar16 = (ulong)(*(byte *)(puVar15 + -1) >> 1);
          if ((*(byte *)(puVar15 + -1) & 1) != 0) {
            uVar16 = *puVar15;
          }
          if (uVar14 <= uVar16) goto LAB_00c035a4;
        }
        puVar15 = puVar15 + -4;
      } while( true );
    }
    goto switchD_00c03640_caseD_0;
  }
LAB_00c030b0:
  puVar24 = (ulong *)((long)param_1 + 0x20);
  if (puVar24 < puVar15) {
LAB_00c030bc:
    uVar17 = *(uint *)puVar22;
    do {
      uVar1 = *(uint *)puVar24;
      if (uVar1 <= uVar17) {
        if (uVar1 < uVar17) goto LAB_00c03108;
        uVar14 = (ulong)((byte)*(Entry *)(puVar24 + 1) >> 1);
        if (((byte)*(Entry *)(puVar24 + 1) & 1) != 0) {
          uVar14 = puVar24[2];
        }
        uVar16 = (ulong)((byte)*(Entry *)(puVar22 + 1) >> 1);
        if (((byte)*(Entry *)(puVar22 + 1) & 1) != 0) {
          uVar16 = puVar22[2];
        }
        if (uVar14 <= uVar16) goto LAB_00c03108;
      }
      puVar24 = puVar24 + 4;
    } while( true );
  }
LAB_00c031e8:
  if (puVar24 != puVar22) {
    uVar17 = *(uint *)puVar24;
    if (uVar17 < *(uint *)puVar22) {
      EVar3 = *(Entry *)(puVar24 + 1);
LAB_00c03208:
      uVar14 = puVar24[2];
      uVar16 = puVar24[3];
      uVar12 = uVar12 + 1;
      uVar20 = *(undefined8 *)((long)puVar24 + 10);
      EVar4 = *(Entry *)((long)puVar24 + 9);
      puVar24[2] = 0;
      puVar24[3] = 0;
      uStack_70 = (undefined6)(uVar14 >> 0x10);
      local_72 = (undefined2)((ulong)uVar20 >> 0x30);
      puVar24[1] = 0;
      *(undefined4 *)puVar24 = *(undefined4 *)puVar22;
      uVar25 = puVar22[2];
      uVar14 = puVar22[1];
      puVar24[3] = puVar22[3];
      puVar24[2] = uVar25;
      puVar24[1] = uVar14;
      *(uint *)puVar22 = uVar17;
      *(Entry *)(puVar22 + 1) = EVar3;
      *(Entry *)((long)puVar22 + 9) = EVar4;
      *(undefined8 *)((long)puVar22 + 10) = uVar20;
      puVar22[2] = CONCAT62(uStack_70,local_72);
      puVar22[3] = uVar16;
    }
    else if (uVar17 <= *(uint *)puVar22) {
      EVar3 = *(Entry *)(puVar24 + 1);
      uVar14 = (ulong)((byte)*(Entry *)(puVar22 + 1) >> 1);
      if (((byte)*(Entry *)(puVar22 + 1) & 1) != 0) {
        uVar14 = puVar22[2];
      }
      uVar16 = (ulong)((byte)EVar3 >> 1);
      if (((byte)EVar3 & 1) != 0) {
        uVar16 = puVar24[2];
      }
      if (uVar16 < uVar14) goto LAB_00c03208;
    }
  }
  if (uVar12 == 0) {
    bVar10 = __insertion_sort_incomplete<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>
                       (param_1,(Entry *)puVar24,param_3);
    bVar11 = __insertion_sort_incomplete<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>
                       ((Entry *)(puVar24 + 4),param_2,param_3);
    if (bVar11) goto LAB_00c03620;
    puVar22 = puVar24 + 4;
    if (bVar10) goto LAB_00c03020;
  }
  if ((long)param_2 - (long)puVar24 <= (long)puVar24 - (long)param_1) {
    __sort<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>
              ((Entry *)(puVar24 + 4),param_2,param_3);
    param_2 = (Entry *)puVar24;
    goto LAB_00c03008;
  }
  __sort<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>
            (param_1,(Entry *)puVar24,param_3);
  puVar22 = puVar24 + 4;
  goto LAB_00c03020;
LAB_00c035a4:
  if (puVar15 + -2 <= puVar22) goto LAB_00c03020;
  uVar14 = puVar22[2];
  uVar16 = puVar22[3];
  uVar20 = *(undefined8 *)((long)puVar22 + 10);
  puVar22[2] = 0;
  puVar22[3] = 0;
  uVar2 = *(undefined4 *)puVar22;
  uVar5 = *(undefined2 *)(puVar22 + 1);
  uStack_70 = (undefined6)(uVar14 >> 0x10);
  local_72 = (undefined2)((ulong)uVar20 >> 0x30);
  puVar22[1] = 0;
  *(undefined4 *)puVar22 = *(undefined4 *)(puVar15 + -2);
  uVar25 = *puVar15;
  uVar14 = puVar15[-1];
  puVar22[3] = puVar15[1];
  puVar22[2] = uVar25;
  puVar22[1] = uVar14;
  puVar22 = puVar22 + 4;
  *(undefined4 *)(puVar15 + -2) = uVar2;
  *(undefined2 *)(puVar15 + -1) = uVar5;
  *puVar15 = CONCAT62(uStack_70,local_72);
  puVar15[1] = uVar16;
  *(undefined8 *)((long)puVar15 + -6) = uVar20;
  puVar15 = puVar15 + -2;
  goto LAB_00c03508;
LAB_00c03108:
  puVar18 = puVar15 + -4;
  uVar19 = *(uint *)puVar18;
  puVar9 = puVar15;
  puVar15 = puVar18;
  if (uVar19 <= uVar17) {
    do {
      if (uVar17 <= uVar19) {
        uVar14 = (ulong)((byte)*(Entry *)(puVar18 + 1) >> 1);
        if (((byte)*(Entry *)(puVar18 + 1) & 1) != 0) {
          uVar14 = puVar18[2];
        }
        uVar16 = (ulong)((byte)*(Entry *)(puVar22 + 1) >> 1);
        if (((byte)*(Entry *)(puVar22 + 1) & 1) != 0) {
          uVar16 = puVar22[2];
        }
        if (uVar16 < uVar14) break;
      }
      puVar18 = puVar18 + -4;
      uVar19 = *(uint *)puVar18;
    } while (uVar19 <= uVar17);
    puVar9 = puVar18 + 4;
    puVar15 = puVar18;
  }
  if (puVar15 < puVar24) goto LAB_00c031e8;
  uVar20 = *(undefined8 *)((long)puVar24 + 10);
  uVar12 = uVar12 + 1;
  EVar3 = *(Entry *)(puVar24 + 1);
  puVar18 = puVar15;
  if (puVar24 != puVar22) {
    puVar18 = puVar22;
  }
  EVar4 = *(Entry *)((long)puVar24 + 9);
  uStack_70 = (undefined6)(puVar24[2] >> 0x10);
  local_72 = (undefined2)((ulong)uVar20 >> 0x30);
  puVar24[1] = 0;
  puVar24[2] = 0;
  uVar14 = puVar24[3];
  puVar24[3] = 0;
  *(undefined4 *)puVar24 = *(undefined4 *)puVar15;
  uVar25 = puVar9[-3];
  uVar16 = puVar9[-1];
  puVar24[2] = puVar9[-2];
  puVar24[1] = uVar25;
  puVar24[3] = uVar16;
  puVar24 = puVar24 + 4;
  *(uint *)puVar15 = uVar1;
  *(Entry *)(puVar9 + -3) = EVar3;
  *(Entry *)((long)puVar15 + 9) = EVar4;
  *(undefined8 *)((long)puVar15 + 10) = uVar20;
  puVar15[2] = CONCAT62(uStack_70,local_72);
  puVar9[-1] = uVar14;
  puVar22 = puVar18;
  goto LAB_00c030bc;
LAB_00c03620:
  param_2 = (Entry *)puVar24;
  if (bVar10) {
switchD_00c03640_caseD_0:
    if (*(long *)(lVar8 + 0x28) != lVar13) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  goto LAB_00c03008;
}


