// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<std::__ndk1::__less<DictionaryCompressor::Main::DictString,DictionaryCompressor::Main::DictString>&,DictionaryCompressor::Main::DictString*>
// Entry Point: 00c05030
// Size: 2000 bytes
// Signature: void __cdecl __sort<std::__ndk1::__less<DictionaryCompressor::Main::DictString,DictionaryCompressor::Main::DictString>&,DictionaryCompressor::Main::DictString*>(DictString * param_1, DictString * param_2, __less * param_3)


/* void std::__ndk1::__sort<std::__ndk1::__less<DictionaryCompressor::Main::DictString,
   DictionaryCompressor::Main::DictString>&,
   DictionaryCompressor::Main::DictString*>(DictionaryCompressor::Main::DictString*,
   DictionaryCompressor::Main::DictString*,
   std::__ndk1::__less<DictionaryCompressor::Main::DictString,
   DictionaryCompressor::Main::DictString>&) */

void std::__ndk1::
     __sort<std::__ndk1::__less<DictionaryCompressor::Main::DictString,DictionaryCompressor::Main::DictString>&,DictionaryCompressor::Main::DictString*>
               (DictString *param_1,DictString *param_2,__less *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 *puVar14;
  
  lVar5 = tpidr_el0;
  lVar10 = *(long *)(lVar5 + 0x28);
LAB_00c0507c:
  puVar20 = (undefined8 *)((long)param_2 + -0xc);
  puVar21 = (undefined8 *)param_1;
LAB_00c05084:
  param_1 = (DictString *)puVar21;
  uVar11 = (long)param_2 - (long)param_1;
  if ((ulong)(((long)uVar11 >> 2) * -0x5555555555555555) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00c05608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_00c0560c +
              (ulong)*(ushort *)(&DAT_005289fe + ((long)uVar11 >> 2) * 0x5555555555555556) * 4))();
    return;
  }
  if ((long)uVar11 < 0x174) {
    puVar20 = (undefined8 *)((long)param_1 + 0xc);
    uVar3 = *(ushort *)puVar20;
    puVar21 = (undefined8 *)((long)param_1 + 0x18);
    uVar4 = *(ushort *)puVar21;
    if (uVar3 < *(ushort *)param_1) {
      if (uVar4 < uVar3) {
        uVar2 = *(undefined4 *)((long)param_1 + 8);
        uVar15 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *puVar21;
        *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)((long)param_1 + 0x20);
        *puVar21 = uVar15;
        *(undefined4 *)((long)param_1 + 0x20) = uVar2;
      }
      else {
        uVar2 = *(undefined4 *)((long)param_1 + 8);
        uVar15 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *puVar20;
        *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)((long)param_1 + 0x14);
        *puVar20 = uVar15;
        *(undefined4 *)((long)param_1 + 0x14) = uVar2;
        if (uVar4 < *(ushort *)((long)param_1 + 0xc)) {
          uVar15 = *puVar20;
          uVar2 = *(undefined4 *)((long)param_1 + 0x14);
          *puVar20 = *puVar21;
          *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_1 + 0x20);
          *puVar21 = uVar15;
          *(undefined4 *)((long)param_1 + 0x20) = uVar2;
        }
      }
    }
    else if (uVar4 < uVar3) {
      uVar15 = *puVar20;
      *puVar20 = *puVar21;
      uVar2 = *(undefined4 *)((long)param_1 + 0x20);
      *puVar21 = uVar15;
      *(undefined4 *)((long)param_1 + 0x20) = *(undefined4 *)((long)param_1 + 0x14);
      *(undefined4 *)((long)param_1 + 0x14) = uVar2;
      if (*(ushort *)puVar20 < *(ushort *)param_1) {
        uVar2 = *(undefined4 *)((long)param_1 + 8);
        uVar15 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *puVar20;
        *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)((long)param_1 + 0x14);
        *puVar20 = uVar15;
        *(undefined4 *)((long)param_1 + 0x14) = uVar2;
      }
    }
    if ((undefined8 *)((long)param_1 + 0x24) == (undefined8 *)param_2) goto LAB_00c05a2c;
    lVar12 = 0;
    puVar20 = (undefined8 *)((long)param_1 + 0x24);
    goto LAB_00c059c8;
  }
  if (uVar11 < 0x2ed5) {
    puVar21 = (undefined8 *)((long)param_1 + (ulong)(((uint)uVar11 & 0xffff) / 0x18) * 0xc);
    uVar3 = *(ushort *)puVar21;
    if (uVar3 < *(ushort *)param_1) {
      if (*(ushort *)puVar20 < uVar3) {
        local_70 = *(undefined4 *)((long)param_1 + 8);
        uVar9 = 1;
        local_78 = *(undefined8 *)param_1;
        uVar15 = *puVar20;
        *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)((long)param_2 + -4);
        *(undefined8 *)param_1 = uVar15;
      }
      else {
        uVar2 = *(undefined4 *)((long)param_1 + 8);
        uVar15 = *(undefined8 *)param_1;
        uVar16 = *puVar21;
        *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)(puVar21 + 1);
        *(undefined8 *)param_1 = uVar16;
        *(undefined4 *)(puVar21 + 1) = uVar2;
        *puVar21 = uVar15;
        if (((uint)uVar15 & 0xffff) <= (uint)*(ushort *)puVar20) {
LAB_00c0534c:
          uVar9 = 1;
          goto LAB_00c05360;
        }
        local_70 = *(undefined4 *)(puVar21 + 1);
        uVar9 = 2;
        local_78 = *puVar21;
        uVar15 = *puVar20;
        *(undefined4 *)(puVar21 + 1) = *(undefined4 *)((long)param_2 + -4);
        *puVar21 = uVar15;
      }
      *(undefined4 *)((long)param_2 + -4) = local_70;
      *puVar20 = local_78;
    }
    else if (*(ushort *)puVar20 < uVar3) {
      uVar2 = *(undefined4 *)(puVar21 + 1);
      uVar15 = *puVar21;
      uVar16 = *puVar20;
      *(undefined4 *)(puVar21 + 1) = *(undefined4 *)((long)param_2 + -4);
      *puVar21 = uVar16;
      *(undefined4 *)((long)param_2 + -4) = uVar2;
      *puVar20 = uVar15;
      if (*(ushort *)param_1 <= *(ushort *)puVar21) goto LAB_00c0534c;
      uVar2 = *(undefined4 *)((long)param_1 + 8);
      uVar9 = 2;
      uVar15 = *(undefined8 *)param_1;
      uVar16 = *puVar21;
      *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)(puVar21 + 1);
      *(undefined8 *)param_1 = uVar16;
      *(undefined4 *)(puVar21 + 1) = uVar2;
      *puVar21 = uVar15;
    }
    else {
      uVar9 = 0;
    }
  }
  else {
    puVar21 = (undefined8 *)((long)param_1 + (uVar11 / 0x18) * 0xc);
    lVar12 = (uVar11 / 0x30) * 0xc;
    puVar13 = (undefined8 *)((long)param_1 + lVar12);
    puVar17 = (undefined8 *)((long)puVar21 + lVar12);
    uVar9 = __sort4<std::__ndk1::__less<DictionaryCompressor::Main::DictString,DictionaryCompressor::Main::DictString>&,DictionaryCompressor::Main::DictString*>
                      (param_1,(DictString *)puVar13,(DictString *)puVar21,(DictString *)puVar17,
                       param_3);
    if (*(ushort *)puVar20 < *(ushort *)puVar17) {
      uVar2 = *(undefined4 *)(puVar17 + 1);
      uVar15 = *puVar17;
      uVar16 = *puVar20;
      *(undefined4 *)(puVar17 + 1) = *(undefined4 *)((long)param_2 + -4);
      *puVar17 = uVar16;
      *(undefined4 *)((long)param_2 + -4) = uVar2;
      *puVar20 = uVar15;
      if (*(ushort *)puVar17 < *(ushort *)puVar21) {
        uVar2 = *(undefined4 *)(puVar21 + 1);
        uVar15 = *puVar21;
        uVar16 = *puVar17;
        *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(puVar17 + 1);
        *puVar21 = uVar16;
        *(undefined4 *)(puVar17 + 1) = uVar2;
        *puVar17 = uVar15;
        if (*(ushort *)puVar21 < *(ushort *)puVar13) {
          uVar2 = *(undefined4 *)(puVar13 + 1);
          uVar15 = *puVar13;
          uVar16 = *puVar21;
          *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar21 + 1);
          *puVar13 = uVar16;
          *(undefined4 *)(puVar21 + 1) = uVar2;
          *puVar21 = uVar15;
          if (*(ushort *)puVar13 < *(ushort *)param_1) {
            uVar2 = *(undefined4 *)((long)param_1 + 8);
            uVar9 = uVar9 + 4;
            uVar15 = *(undefined8 *)param_1;
            uVar16 = *puVar13;
            *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)(puVar13 + 1);
            *(undefined8 *)param_1 = uVar16;
            *(undefined4 *)(puVar13 + 1) = uVar2;
            *puVar13 = uVar15;
          }
          else {
            uVar9 = uVar9 + 3;
          }
        }
        else {
          uVar9 = uVar9 + 2;
        }
      }
      else {
        uVar9 = uVar9 + 1;
      }
    }
  }
LAB_00c05360:
  uVar3 = *(ushort *)param_1;
  puVar13 = puVar20;
  if (*(ushort *)puVar21 <= uVar3) {
    do {
      puVar17 = puVar13;
      puVar13 = (undefined8 *)((long)puVar17 + -0xc);
      if (puVar13 == (undefined8 *)param_1) {
        puVar13 = (undefined8 *)((long)param_1 + 0xc);
        puVar21 = puVar13;
        if (*(ushort *)puVar20 <= uVar3) goto joined_r0x00c05514;
        goto LAB_00c05564;
      }
    } while (*(ushort *)puVar21 <= *(ushort *)((long)puVar17 + -0xc));
    uVar2 = *(undefined4 *)((long)param_1 + 8);
    uVar9 = uVar9 + 1;
    uVar15 = *(undefined8 *)param_1;
    uVar16 = *puVar13;
    *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)((long)puVar17 + -4);
    *(undefined8 *)param_1 = uVar16;
    *(undefined4 *)((long)puVar17 + -4) = uVar2;
    *puVar13 = uVar15;
  }
  puVar17 = (undefined8 *)((long)param_1 + 0xc);
  puVar22 = puVar17;
  if (puVar17 < puVar13) {
    while( true ) {
      puVar17 = (undefined8 *)((long)puVar22 - 0xc);
      do {
        puVar18 = puVar17;
        puVar17 = (undefined8 *)((long)puVar18 + 0xc);
      } while (*(ushort *)puVar17 < *(ushort *)puVar21);
      puVar22 = puVar18 + 3;
      do {
        puVar14 = puVar13;
        puVar13 = (undefined8 *)((long)puVar14 + -0xc);
      } while (*(ushort *)puVar21 <= *(ushort *)puVar13);
      if (puVar13 < puVar17) break;
      uVar2 = *(undefined4 *)((long)puVar18 + 0x14);
      uVar15 = *puVar17;
      uVar9 = uVar9 + 1;
      puVar1 = puVar13;
      if (puVar17 != puVar21) {
        puVar1 = puVar21;
      }
      uVar16 = *puVar13;
      *(undefined4 *)((long)puVar18 + 0x14) = *(undefined4 *)((long)puVar14 + -4);
      *puVar17 = uVar16;
      *(undefined4 *)((long)puVar14 + -4) = uVar2;
      *puVar13 = uVar15;
      puVar21 = puVar1;
    }
  }
  if ((puVar17 != puVar21) && (*(ushort *)puVar21 < *(ushort *)puVar17)) {
    uVar2 = *(undefined4 *)(puVar17 + 1);
    uVar9 = uVar9 + 1;
    uVar15 = *puVar17;
    uVar16 = *puVar21;
    *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar21 + 1);
    *puVar17 = uVar16;
    *(undefined4 *)(puVar21 + 1) = uVar2;
    *puVar21 = uVar15;
  }
  if (uVar9 == 0) {
    bVar7 = __insertion_sort_incomplete<std::__ndk1::__less<DictionaryCompressor::Main::DictString,DictionaryCompressor::Main::DictString>&,DictionaryCompressor::Main::DictString*>
                      (param_1,(DictString *)puVar17,param_3);
    bVar8 = __insertion_sort_incomplete<std::__ndk1::__less<DictionaryCompressor::Main::DictString,DictionaryCompressor::Main::DictString>&,DictionaryCompressor::Main::DictString*>
                      ((DictString *)(undefined8 *)((long)puVar17 + 0xc),param_2,param_3);
    if (bVar8) goto LAB_00c055e8;
    puVar21 = (undefined8 *)((long)puVar17 + 0xc);
    if (bVar7) goto LAB_00c05084;
  }
  if (((long)param_2 - (long)puVar17 >> 2) * -0x5555555555555555 <=
      ((long)puVar17 - (long)param_1 >> 2) * -0x5555555555555555) {
    __sort<std::__ndk1::__less<DictionaryCompressor::Main::DictString,DictionaryCompressor::Main::DictString>&,DictionaryCompressor::Main::DictString*>
              ((DictString *)((long)puVar17 + 0xc),param_2,param_3);
    param_2 = (DictString *)puVar17;
    goto LAB_00c0507c;
  }
  __sort<std::__ndk1::__less<DictionaryCompressor::Main::DictString,DictionaryCompressor::Main::DictString>&,DictionaryCompressor::Main::DictString*>
            (param_1,(DictString *)puVar17,param_3);
  puVar21 = (undefined8 *)((long)puVar17 + 0xc);
  goto LAB_00c05084;
joined_r0x00c05514:
  if (puVar21 == puVar20) goto LAB_00c05a2c;
  if (uVar3 < *(ushort *)puVar21) goto LAB_00c05534;
  puVar21 = (undefined8 *)((long)puVar21 + 0xc);
  goto joined_r0x00c05514;
LAB_00c05534:
  uVar2 = *(undefined4 *)(puVar21 + 1);
  uVar15 = *puVar21;
  uVar16 = *puVar20;
  *(undefined4 *)(puVar21 + 1) = *(undefined4 *)((long)param_2 + -4);
  puVar13 = (undefined8 *)((long)puVar21 + 0xc);
  *puVar21 = uVar16;
  *(undefined4 *)((long)param_2 + -4) = uVar2;
  *puVar20 = uVar15;
LAB_00c05564:
  puVar17 = puVar20;
  if (puVar13 == puVar20) goto LAB_00c05a2c;
  while( true ) {
    puVar21 = (undefined8 *)((long)puVar13 + -0xc);
    do {
      puVar22 = puVar21;
      puVar21 = (undefined8 *)((long)puVar22 + 0xc);
    } while (*(ushort *)puVar21 <= *(ushort *)param_1);
    puVar13 = puVar22 + 3;
    do {
      puVar18 = puVar17;
      puVar17 = (undefined8 *)((long)puVar18 + -0xc);
    } while (*(ushort *)param_1 < *(ushort *)puVar17);
    if (puVar17 <= puVar21) break;
    uVar2 = *(undefined4 *)((long)puVar22 + 0x14);
    uVar15 = *puVar21;
    uVar16 = *puVar17;
    *(undefined4 *)((long)puVar22 + 0x14) = *(undefined4 *)((long)puVar18 + -4);
    *puVar21 = uVar16;
    *(undefined4 *)((long)puVar18 + -4) = uVar2;
    *puVar17 = uVar15;
  }
  goto LAB_00c05084;
LAB_00c055e8:
  param_2 = (DictString *)puVar17;
  if (bVar7) goto LAB_00c05a2c;
  goto LAB_00c0507c;
LAB_00c059c8:
  do {
    uVar3 = *(ushort *)puVar20;
    if (uVar3 < *(ushort *)puVar21) {
      uVar4 = *(ushort *)((long)puVar20 + 10);
      uVar15 = *(undefined8 *)((long)puVar20 + 2);
      lVar6 = lVar12;
      do {
        lVar19 = lVar6;
        *(undefined8 *)((long)param_1 + lVar19 + 0x24) =
             *(undefined8 *)((long)param_1 + lVar19 + 0x18);
        *(undefined4 *)((long)param_1 + lVar19 + 0x2c) =
             *(undefined4 *)((long)param_1 + lVar19 + 0x20);
        puVar21 = (undefined8 *)param_1;
        if (lVar19 == -0x18) goto LAB_00c059a4;
        lVar6 = lVar19 + -0xc;
      } while (uVar3 < *(ushort *)((long)param_1 + lVar19 + 0xc));
      puVar21 = (undefined8 *)((long)param_1 + lVar19 + 0x18);
LAB_00c059a4:
      *(ushort *)puVar21 = uVar3;
      *(ushort *)((long)puVar21 + 10) = uVar4;
      *(undefined8 *)((long)puVar21 + 2) = uVar15;
    }
    puVar13 = (undefined8 *)((long)puVar20 + 0xc);
    lVar12 = lVar12 + 0xc;
    puVar21 = puVar20;
    puVar20 = puVar13;
  } while (puVar13 != (undefined8 *)param_2);
LAB_00c05a2c:
  if (*(long *)(lVar5 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


