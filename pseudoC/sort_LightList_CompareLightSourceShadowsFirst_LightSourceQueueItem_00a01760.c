// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<LightList::CompareLightSourceShadowsFirst&,LightSourceQueueItem*>
// Entry Point: 00a01760
// Size: 1672 bytes
// Signature: void __cdecl __sort<LightList::CompareLightSourceShadowsFirst&,LightSourceQueueItem*>(LightSourceQueueItem * param_1, LightSourceQueueItem * param_2, CompareLightSourceShadowsFirst * param_3)


/* void std::__ndk1::__sort<LightList::CompareLightSourceShadowsFirst&,
   LightSourceQueueItem*>(LightSourceQueueItem*, LightSourceQueueItem*,
   LightList::CompareLightSourceShadowsFirst&) */

void std::__ndk1::__sort<LightList::CompareLightSourceShadowsFirst&,LightSourceQueueItem*>
               (LightSourceQueueItem *param_1,LightSourceQueueItem *param_2,
               CompareLightSourceShadowsFirst *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined4 local_80;
  undefined4 local_70;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
LAB_00a017a0:
  do {
    puVar20 = (undefined8 *)((long)param_2 + -0x28);
    puVar21 = (undefined8 *)((long)param_2 + -0x50);
    puVar17 = (undefined8 *)param_1;
LAB_00a017ac:
    while( true ) {
      param_1 = (LightSourceQueueItem *)puVar17;
      uVar8 = (long)param_2 - (long)param_1;
      switch(((long)uVar8 >> 3) * -0x3333333333333333) {
      case 0:
      case 1:
        goto switchD_00a01bf4_caseD_0;
      case 2:
        if ((*(long *)((long)param_2 + -0x20) != 0) &&
           ((*(long *)((long)param_1 + 8) == 0 ||
            (*(uint *)(*(long *)(*(long *)((long)param_1 + 8) + 8) + 8) <
             *(uint *)(*(long *)(*(long *)((long)param_2 + -0x20) + 8) + 8))))) {
          uVar26 = *(undefined8 *)((long)param_1 + 8);
          uVar23 = *(undefined8 *)param_1;
          uVar24 = *(undefined8 *)((long)param_1 + 0x18);
          uVar18 = *(undefined8 *)((long)param_1 + 0x10);
          uVar13 = *(undefined8 *)((long)param_1 + 0x20);
          uVar25 = *puVar20;
          uVar15 = *(undefined8 *)((long)param_2 + -0x10);
          uVar22 = *(undefined8 *)((long)param_2 + -0x18);
          uVar2 = *(undefined4 *)((long)param_2 + -8);
          *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_2 + -0x20);
          *(undefined8 *)param_1 = uVar25;
          *(undefined8 *)((long)param_1 + 0x18) = uVar15;
          *(undefined8 *)((long)param_1 + 0x10) = uVar22;
          *(undefined4 *)((long)param_1 + 0x20) = uVar2;
          local_70 = (undefined4)uVar13;
          *(undefined8 *)((long)param_2 + -0x20) = uVar26;
          *puVar20 = uVar23;
          *(undefined8 *)((long)param_2 + -0x10) = uVar24;
          *(undefined8 *)((long)param_2 + -0x18) = uVar18;
          *(undefined4 *)((long)param_2 + -8) = local_70;
        }
        goto switchD_00a01bf4_caseD_0;
      case 3:
        __sort3<LightList::CompareLightSourceShadowsFirst&,LightSourceQueueItem*>
                  (param_1,(LightSourceQueueItem *)((long)param_1 + 0x28),
                   (LightSourceQueueItem *)puVar20,param_3);
        goto switchD_00a01bf4_caseD_0;
      case 4:
        __sort4<LightList::CompareLightSourceShadowsFirst&,LightSourceQueueItem*>
                  (param_1,(LightSourceQueueItem *)((long)param_1 + 0x28),
                   (LightSourceQueueItem *)((long)param_1 + 0x50),(LightSourceQueueItem *)puVar20,
                   param_3);
        goto switchD_00a01bf4_caseD_0;
      case 5:
        FUN_00a020ec(param_1,(undefined8 *)((long)param_1 + 0x28),
                     (undefined8 *)((long)param_1 + 0x50),(undefined8 *)((long)param_1 + 0x78),
                     puVar20,param_3);
        goto switchD_00a01bf4_caseD_0;
      }
      if ((long)uVar8 < 0x4d8) {
        __sort3<LightList::CompareLightSourceShadowsFirst&,LightSourceQueueItem*>
                  (param_1,(LightSourceQueueItem *)((long)param_1 + 0x28),
                   (LightSourceQueueItem *)(undefined8 *)((long)param_1 + 0x50),param_3);
        if ((undefined8 *)((long)param_1 + 0x78) == (undefined8 *)param_2)
        goto switchD_00a01bf4_caseD_0;
        lVar11 = 0;
        puVar17 = (undefined8 *)((long)param_1 + 0x78);
        puVar20 = (undefined8 *)((long)param_1 + 0x50);
        goto LAB_00a01cfc;
      }
      puVar17 = puVar21;
      if (0x9c18 < uVar8) break;
      puVar10 = (undefined8 *)((long)param_1 + (ulong)(((uint)uVar8 & 0xffff) / 0x50) * 5 * 8);
      uVar6 = __sort3<LightList::CompareLightSourceShadowsFirst&,LightSourceQueueItem*>
                        (param_1,(LightSourceQueueItem *)puVar10,(LightSourceQueueItem *)puVar20,
                         param_3);
      lVar11 = *(long *)((long)param_1 + 8);
      if (lVar11 != 0) goto LAB_00a01850;
joined_r0x00a01880:
      for (; (undefined8 *)param_1 != puVar17; puVar17 = puVar17 + -5) {
        if ((puVar17[1] != 0) &&
           ((puVar10[1] == 0 ||
            (*(uint *)(*(long *)(puVar10[1] + 8) + 8) < *(uint *)(*(long *)(puVar17[1] + 8) + 8)))))
        {
          uVar26 = *(undefined8 *)((long)param_1 + 8);
          uVar23 = *(undefined8 *)param_1;
          uVar24 = *(undefined8 *)((long)param_1 + 0x18);
          uVar18 = *(undefined8 *)((long)param_1 + 0x10);
          uVar6 = uVar6 + 1;
          uVar13 = *(undefined8 *)((long)param_1 + 0x20);
          uVar25 = *puVar17;
          uVar15 = puVar17[3];
          uVar22 = puVar17[2];
          uVar2 = *(undefined4 *)(puVar17 + 4);
          *(undefined8 *)((long)param_1 + 8) = puVar17[1];
          *(undefined8 *)param_1 = uVar25;
          *(undefined8 *)((long)param_1 + 0x18) = uVar15;
          *(undefined8 *)((long)param_1 + 0x10) = uVar22;
          *(undefined4 *)((long)param_1 + 0x20) = uVar2;
          local_70 = (undefined4)uVar13;
          puVar17[1] = uVar26;
          *puVar17 = uVar23;
          puVar17[3] = uVar24;
          puVar17[2] = uVar18;
          *(undefined4 *)(puVar17 + 4) = local_70;
          puVar9 = puVar17;
          goto LAB_00a01918;
        }
      }
      puVar17 = (undefined8 *)((long)param_1 + 0x28);
      if ((lVar11 == 0) ||
         ((*(long *)((long)param_2 + -0x20) != 0 &&
          (*(uint *)(*(long *)(lVar11 + 8) + 8) <=
           *(uint *)(*(long *)(*(long *)((long)param_2 + -0x20) + 8) + 8))))) {
        while( true ) {
          if (puVar17 == puVar20) goto switchD_00a01bf4_caseD_0;
          if ((lVar11 != 0) &&
             ((puVar17[1] == 0 ||
              (*(uint *)(*(long *)(puVar17[1] + 8) + 8) < *(uint *)(*(long *)(lVar11 + 8) + 8)))))
          break;
          puVar17 = puVar17 + 5;
        }
        uVar26 = puVar17[1];
        uVar23 = *puVar17;
        uVar24 = puVar17[3];
        uVar18 = puVar17[2];
        uVar13 = puVar17[4];
        uVar25 = *puVar20;
        uVar15 = *(undefined8 *)((long)param_2 + -0x10);
        uVar22 = *(undefined8 *)((long)param_2 + -0x18);
        uVar2 = *(undefined4 *)((long)param_2 + -8);
        puVar17[1] = *(undefined8 *)((long)param_2 + -0x20);
        *puVar17 = uVar25;
        puVar17[3] = uVar15;
        puVar17[2] = uVar22;
        *(undefined4 *)(puVar17 + 4) = uVar2;
        puVar17 = puVar17 + 5;
        local_70 = (undefined4)uVar13;
        *(undefined8 *)((long)param_2 + -0x20) = uVar26;
        *puVar20 = uVar23;
        *(undefined8 *)((long)param_2 + -0x10) = uVar24;
        *(undefined8 *)((long)param_2 + -0x18) = uVar18;
        *(undefined4 *)((long)param_2 + -8) = local_70;
      }
      puVar10 = puVar20;
      if (puVar17 == puVar20) goto switchD_00a01bf4_caseD_0;
      while( true ) {
        lVar11 = *(long *)((long)param_1 + 8);
        while ((lVar11 == 0 ||
               ((puVar17[1] != 0 &&
                (*(uint *)(*(long *)(lVar11 + 8) + 8) <= *(uint *)(*(long *)(puVar17[1] + 8) + 8))))
               )) {
          puVar17 = puVar17 + 5;
        }
        do {
          do {
            puVar9 = puVar10;
            puVar10 = puVar9 + -5;
          } while (puVar9[-4] == 0);
        } while (*(uint *)(*(long *)(puVar9[-4] + 8) + 8) < *(uint *)(*(long *)(lVar11 + 8) + 8));
        if (puVar10 <= puVar17) break;
        uVar26 = puVar17[1];
        uVar23 = *puVar17;
        uVar24 = puVar17[3];
        uVar18 = puVar17[2];
        uVar13 = puVar17[4];
        uVar25 = *puVar10;
        uVar15 = puVar9[-2];
        uVar22 = puVar9[-3];
        uVar2 = *(undefined4 *)(puVar9 + -1);
        puVar17[1] = puVar9[-4];
        *puVar17 = uVar25;
        puVar17[3] = uVar15;
        puVar17[2] = uVar22;
        *(undefined4 *)(puVar17 + 4) = uVar2;
        puVar17 = puVar17 + 5;
        local_70 = (undefined4)uVar13;
        puVar9[-4] = uVar26;
        *puVar10 = uVar23;
        puVar9[-2] = uVar24;
        puVar9[-3] = uVar18;
        *(undefined4 *)(puVar9 + -1) = local_70;
      }
    }
    puVar10 = (undefined8 *)((long)param_1 + (uVar8 / 0x50) * 5 * 8);
    uVar6 = FUN_00a020ec(param_1,(undefined8 *)((long)param_1 + (uVar8 / 0xa0) * 5 * 8),puVar10,
                         puVar10 + (uVar8 / 0xa0) * 5,puVar20,param_3);
    lVar11 = *(long *)((long)param_1 + 8);
    if (lVar11 == 0) goto joined_r0x00a01880;
LAB_00a01850:
    puVar9 = puVar20;
    if ((puVar10[1] != 0) &&
       (*(uint *)(*(long *)(lVar11 + 8) + 8) <= *(uint *)(*(long *)(puVar10[1] + 8) + 8)))
    goto joined_r0x00a01880;
LAB_00a01918:
    puVar12 = (undefined8 *)((long)param_1 + 0x28);
    if (puVar12 < puVar9) {
      lVar11 = *(long *)((long)param_1 + 0x30);
      do {
        if (lVar11 != 0) {
          do {
            if ((puVar10[1] != 0) &&
               (*(uint *)(*(long *)(lVar11 + 8) + 8) <= *(uint *)(*(long *)(puVar10[1] + 8) + 8)))
            break;
            puVar17 = puVar12 + 5;
            lVar11 = puVar12[6];
            puVar12 = puVar17;
          } while (lVar11 != 0);
        }
        do {
          do {
            puVar17 = puVar9;
            puVar9 = puVar17 + -5;
          } while (puVar17[-4] == 0);
        } while ((puVar10[1] != 0) &&
                (*(uint *)(*(long *)(puVar17[-4] + 8) + 8) <=
                 *(uint *)(*(long *)(puVar10[1] + 8) + 8)));
        if (puVar9 < puVar12) break;
        uVar24 = puVar12[1];
        uVar22 = *puVar12;
        uVar18 = puVar12[3];
        uVar13 = puVar12[2];
        uVar6 = uVar6 + 1;
        puVar1 = puVar9;
        if (puVar10 != puVar12) {
          puVar1 = puVar10;
        }
        uVar15 = puVar12[4];
        uVar26 = *puVar9;
        uVar25 = puVar17[-2];
        uVar23 = puVar17[-3];
        uVar2 = *(undefined4 *)(puVar17 + -1);
        puVar12[1] = puVar17[-4];
        *puVar12 = uVar26;
        puVar12[3] = uVar25;
        puVar12[2] = uVar23;
        *(undefined4 *)(puVar12 + 4) = uVar2;
        local_70 = (undefined4)uVar15;
        puVar17[-4] = uVar24;
        *puVar9 = uVar22;
        puVar17[-2] = uVar18;
        puVar17[-3] = uVar13;
        *(undefined4 *)(puVar17 + -1) = local_70;
        lVar11 = puVar12[6];
        puVar12 = puVar12 + 5;
        puVar10 = puVar1;
      } while( true );
    }
    if (((puVar12 != puVar10) && (puVar10[1] != 0)) &&
       ((puVar12[1] == 0 ||
        (*(uint *)(*(long *)(puVar12[1] + 8) + 8) < *(uint *)(*(long *)(puVar10[1] + 8) + 8))))) {
      uVar26 = puVar12[1];
      uVar23 = *puVar12;
      uVar24 = puVar12[3];
      uVar18 = puVar12[2];
      uVar6 = uVar6 + 1;
      uVar13 = puVar12[4];
      uVar25 = *puVar10;
      uVar15 = puVar10[3];
      uVar22 = puVar10[2];
      uVar2 = *(undefined4 *)(puVar10 + 4);
      puVar12[1] = puVar10[1];
      *puVar12 = uVar25;
      puVar12[3] = uVar15;
      puVar12[2] = uVar22;
      *(undefined4 *)(puVar12 + 4) = uVar2;
      local_70 = (undefined4)uVar13;
      puVar10[1] = uVar26;
      *puVar10 = uVar23;
      puVar10[3] = uVar24;
      puVar10[2] = uVar18;
      *(undefined4 *)(puVar10 + 4) = local_70;
    }
    if (uVar6 != 0) goto LAB_00a01b84;
    bVar4 = __insertion_sort_incomplete<LightList::CompareLightSourceShadowsFirst&,LightSourceQueueItem*>
                      (param_1,(LightSourceQueueItem *)puVar12,param_3);
    bVar5 = __insertion_sort_incomplete<LightList::CompareLightSourceShadowsFirst&,LightSourceQueueItem*>
                      ((LightSourceQueueItem *)(puVar12 + 5),param_2,param_3);
    if (!bVar5) goto code_r0x00a01b80;
    param_2 = (LightSourceQueueItem *)puVar12;
  } while (!bVar4);
  goto switchD_00a01bf4_caseD_0;
code_r0x00a01b80:
  puVar17 = puVar12 + 5;
  if (!bVar4) {
LAB_00a01b84:
    if (((long)param_2 - (long)puVar12 >> 3) * -0x3333333333333333 <=
        ((long)puVar12 - (long)param_1 >> 3) * -0x3333333333333333) {
      __sort<LightList::CompareLightSourceShadowsFirst&,LightSourceQueueItem*>
                ((LightSourceQueueItem *)(puVar12 + 5),param_2,param_3);
      param_2 = (LightSourceQueueItem *)puVar12;
      goto LAB_00a017a0;
    }
    __sort<LightList::CompareLightSourceShadowsFirst&,LightSourceQueueItem*>
              (param_1,(LightSourceQueueItem *)puVar12,param_3);
    puVar17 = puVar12 + 5;
  }
  goto LAB_00a017ac;
LAB_00a01cfc:
  do {
    puVar21 = puVar17;
    lVar14 = puVar21[1];
    if ((lVar14 != 0) &&
       ((puVar20[1] == 0 ||
        (*(uint *)(*(long *)(puVar20[1] + 8) + 8) < *(uint *)(*(long *)(lVar14 + 8) + 8))))) {
      uVar15 = puVar21[3];
      uVar22 = puVar21[2];
      uVar18 = puVar21[4];
      uVar13 = *puVar21;
      uVar24 = *puVar20;
      uVar25 = puVar20[3];
      uVar23 = puVar20[2];
      uVar2 = *(undefined4 *)(puVar20 + 4);
      puVar21[1] = puVar20[1];
      *puVar21 = uVar24;
      puVar21[3] = uVar25;
      puVar21[2] = uVar23;
      *(undefined4 *)(puVar21 + 4) = uVar2;
      lVar16 = lVar11;
      puVar17 = (undefined8 *)param_1;
      if (puVar20 != (undefined8 *)param_1) {
        do {
          lVar19 = *(long *)((long)param_1 + lVar16 + 0x30);
          if ((lVar19 != 0) &&
             (*(uint *)(*(long *)(lVar14 + 8) + 8) <= *(uint *)(*(long *)(lVar19 + 8) + 8))) {
            puVar17 = (undefined8 *)((long)param_1 + lVar16 + 0x50);
            break;
          }
          lVar19 = lVar16 + -0x28;
          *(undefined8 *)((long)param_1 + lVar16 + 0x58) =
               *(undefined8 *)((long)param_1 + lVar16 + 0x30);
          *(undefined8 *)((long)param_1 + lVar16 + 0x50) =
               *(undefined8 *)((long)param_1 + lVar16 + 0x28);
          *(undefined8 *)((long)param_1 + lVar16 + 0x68) =
               *(undefined8 *)((long)param_1 + lVar16 + 0x40);
          *(undefined8 *)((long)param_1 + lVar16 + 0x60) =
               *(undefined8 *)((long)param_1 + lVar16 + 0x38);
          *(undefined4 *)((long)param_1 + lVar16 + 0x70) =
               *(undefined4 *)((long)param_1 + lVar16 + 0x48);
          lVar16 = lVar19;
        } while (lVar19 != -0x50);
      }
      *puVar17 = uVar13;
      puVar17[1] = lVar14;
      local_80 = (undefined4)uVar18;
      puVar17[3] = uVar15;
      puVar17[2] = uVar22;
      *(undefined4 *)(puVar17 + 4) = local_80;
    }
    lVar11 = lVar11 + 0x28;
    puVar17 = puVar21 + 5;
    puVar20 = puVar21;
  } while (puVar21 + 5 != (undefined8 *)param_2);
switchD_00a01bf4_caseD_0:
  if (*(long *)(lVar3 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


