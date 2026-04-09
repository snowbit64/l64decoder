// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>
// Entry Point: 00b81170
// Size: 1668 bytes
// Signature: void __cdecl __sort<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>(Triangle * param_1, Triangle * param_2, TriangleSorter * param_3)


/* void std::__ndk1::__sort<IndexedTriangleSetBuilder::TriangleSorter&,
   IndexedTriangleSetBuilder::Triangle*>(IndexedTriangleSetBuilder::Triangle*,
   IndexedTriangleSetBuilder::Triangle*, IndexedTriangleSetBuilder::TriangleSorter&) */

void std::__ndk1::
     __sort<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>
               (Triangle *param_1,Triangle *param_2,TriangleSorter *param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x28);
LAB_00b811ac:
  puVar16 = (undefined8 *)((long)param_2 + -0x10);
  puVar17 = (undefined8 *)param_1;
LAB_00b811b8:
  param_1 = (Triangle *)puVar17;
  uVar12 = (long)param_2 - (long)param_1;
  uVar9 = (long)uVar12 >> 4;
  switch(uVar9) {
  case 0:
  case 1:
    goto switchD_00b816e8_caseD_0;
  case 2:
    if (*(uint *)((long)param_1 + 0xc) <= *(uint *)((long)param_2 + -4)) {
      if (*(uint *)((long)param_1 + 0xc) < *(uint *)((long)param_2 + -4))
      goto switchD_00b816e8_caseD_0;
      if (*(uint *)param_1 <= *(uint *)puVar16) {
        if (*(uint *)param_1 < *(uint *)puVar16) goto switchD_00b816e8_caseD_0;
        if ((*(uint *)((long)param_1 + 4) <= *(uint *)((long)param_2 + -0xc)) &&
           ((*(uint *)((long)param_1 + 4) < *(uint *)((long)param_2 + -0xc) ||
            (*(uint *)((long)param_1 + 8) <= *(uint *)((long)param_2 + -8)))))
        goto switchD_00b816e8_caseD_0;
      }
    }
    uVar20 = *(undefined8 *)((long)param_1 + 8);
    uVar19 = *(undefined8 *)param_1;
    uVar21 = *puVar16;
    *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_2 + -8);
    *(undefined8 *)param_1 = uVar21;
    *(undefined8 *)((long)param_2 + -8) = uVar20;
    *puVar16 = uVar19;
    goto switchD_00b816e8_caseD_0;
  case 3:
    __sort3<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>
              (param_1,(Triangle *)((long)param_1 + 0x10),(Triangle *)puVar16,param_3);
    goto switchD_00b816e8_caseD_0;
  case 4:
    __sort4<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>
              (param_1,(Triangle *)((long)param_1 + 0x10),(Triangle *)((long)param_1 + 0x20),
               (Triangle *)puVar16,param_3);
    goto switchD_00b816e8_caseD_0;
  case 5:
    FUN_00b81bcc(param_1,(undefined8 *)((long)param_1 + 0x10),(undefined8 *)((long)param_1 + 0x20),
                 (undefined8 *)((long)param_1 + 0x30),puVar16,param_3);
    goto switchD_00b816e8_caseD_0;
  }
  if ((long)uVar12 < 0x1f0) {
    __insertion_sort_3<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>
              (param_1,param_2,param_3);
    goto switchD_00b816e8_caseD_0;
  }
  uVar1 = uVar9;
  if ((long)uVar9 < 0) {
    uVar1 = uVar9 + 1;
  }
  lVar18 = (long)uVar1 >> 1;
  puVar17 = (undefined8 *)((long)param_1 + lVar18 * 2 * 8);
  if (uVar12 < 0x3e71) {
    uVar7 = __sort3<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>
                      (param_1,(Triangle *)puVar17,(Triangle *)puVar16,param_3);
  }
  else {
    uVar12 = uVar9 + 3;
    if (-1 < (long)uVar9) {
      uVar12 = uVar9;
    }
    lVar10 = (uVar12 & 0x3ffffffffffffffc) * 4;
    uVar7 = FUN_00b81bcc(param_1,(uint *)((long)param_1 + lVar10),puVar17,
                         (uint *)((long)puVar17 + lVar10),puVar16,param_3);
  }
  uVar2 = *(uint *)((long)param_1 + 0xc);
  uVar15 = *(uint *)((long)param_1 + lVar18 * 0x10 + 0xc);
  puVar11 = puVar16;
  if (uVar15 <= uVar2) {
    if (uVar15 > uVar2 || uVar2 == uVar15) {
      if (*(uint *)param_1 < *(uint *)puVar17) goto LAB_00b8124c;
      if (*(uint *)param_1 <= *(uint *)puVar17) {
        uVar3 = *(uint *)((long)param_1 + lVar18 * 0x10 + 4);
        if ((*(uint *)((long)param_1 + 4) < uVar3) ||
           ((*(uint *)((long)param_1 + 4) <= uVar3 &&
            (*(uint *)((long)param_1 + 8) < *(uint *)((long)param_1 + (lVar18 * 2 + 1) * 8)))))
        goto LAB_00b8124c;
      }
    }
    if ((undefined8 *)param_1 != (undefined8 *)((long)param_2 + -0x20)) {
      puVar11 = (undefined8 *)((long)param_2 + -0x20);
      do {
        if (*(uint *)((long)puVar11 + 0xc) < uVar15) {
LAB_00b81408:
          uVar20 = *(undefined8 *)((long)param_1 + 8);
          uVar19 = *(undefined8 *)param_1;
          uVar7 = uVar7 + 1;
          uVar21 = *puVar11;
          *(undefined8 *)((long)param_1 + 8) = puVar11[1];
          *(undefined8 *)param_1 = uVar21;
          puVar11[1] = uVar20;
          *puVar11 = uVar19;
          goto LAB_00b8124c;
        }
        if (*(uint *)((long)puVar11 + 0xc) <= uVar15) {
          if (*(uint *)puVar11 < *(uint *)puVar17) goto LAB_00b81408;
          if (*(uint *)puVar11 <= *(uint *)puVar17) {
            uVar3 = *(uint *)((long)param_1 + lVar18 * 0x10 + 4);
            if ((*(uint *)((long)puVar11 + 4) < uVar3) ||
               ((*(uint *)((long)puVar11 + 4) <= uVar3 &&
                (*(uint *)(puVar11 + 1) < *(uint *)((long)param_1 + (lVar18 * 2 + 1) * 8)))))
            goto LAB_00b81408;
          }
        }
        puVar11 = puVar11 + -2;
      } while (puVar11 != (undefined8 *)param_1);
    }
    puVar11 = (undefined8 *)((long)param_1 + 0x10);
    if (*(uint *)((long)param_2 + -4) <= uVar2) {
      if (*(uint *)((long)param_2 + -4) < uVar2) goto LAB_00b81520;
      if (*(uint *)puVar16 <= *(uint *)param_1) {
        if (*(uint *)puVar16 < *(uint *)param_1) {
LAB_00b81520:
          do {
            if (puVar11 == puVar16) goto switchD_00b816e8_caseD_0;
            if (uVar2 < *(uint *)((long)puVar11 + 0xc)) goto LAB_00b81570;
            if (uVar2 <= *(uint *)((long)puVar11 + 0xc)) {
              if (*(uint *)param_1 < *(uint *)puVar11) goto LAB_00b81570;
              if (*(uint *)param_1 <= *(uint *)puVar11) {
                if ((*(uint *)((long)param_1 + 4) < *(uint *)((long)puVar11 + 4)) ||
                   ((*(uint *)((long)param_1 + 4) <= *(uint *)((long)puVar11 + 4) &&
                    (*(uint *)((long)param_1 + 8) < *(uint *)(puVar11 + 1))))) goto LAB_00b81570;
              }
            }
            puVar11 = puVar11 + 2;
          } while( true );
        }
        if ((*(uint *)((long)param_2 + -0xc) <= *(uint *)((long)param_1 + 4)) &&
           ((*(uint *)((long)param_2 + -0xc) < *(uint *)((long)param_1 + 4) ||
            (*(uint *)((long)param_2 + -8) <= *(uint *)((long)param_1 + 8))))) goto LAB_00b81520;
      }
    }
    goto LAB_00b81588;
  }
LAB_00b8124c:
  puVar13 = (undefined8 *)((long)param_1 + 0x10);
  if (puVar13 < puVar11) {
LAB_00b81290:
    uVar2 = *(uint *)((long)puVar17 + 0xc);
    do {
      if (uVar2 <= *(uint *)((long)puVar13 + 0xc)) {
        if (uVar2 < *(uint *)((long)puVar13 + 0xc)) goto LAB_00b812e4;
        if (*(uint *)puVar17 <= *(uint *)puVar13) {
          if (*(uint *)puVar17 < *(uint *)puVar13) goto LAB_00b812e4;
          if ((*(uint *)((long)puVar17 + 4) <= *(uint *)((long)puVar13 + 4)) &&
             ((*(uint *)((long)puVar17 + 4) < *(uint *)((long)puVar13 + 4) ||
              (*(uint *)(puVar17 + 1) <= *(uint *)(puVar13 + 1))))) goto LAB_00b812e4;
        }
      }
      puVar13 = puVar13 + 2;
    } while( true );
  }
LAB_00b8135c:
  if (puVar13 != puVar17) {
    uVar2 = *(uint *)((long)puVar17 + 0xc);
    uVar15 = *(uint *)((long)puVar13 + 0xc);
    if (uVar15 <= uVar2) {
      if (uVar15 > uVar2 || uVar2 == uVar15) {
        if (*(uint *)puVar17 < *(uint *)puVar13) goto LAB_00b81374;
        if (*(uint *)puVar17 <= *(uint *)puVar13) {
          if ((*(uint *)((long)puVar17 + 4) < *(uint *)((long)puVar13 + 4)) ||
             ((*(uint *)((long)puVar17 + 4) <= *(uint *)((long)puVar13 + 4) &&
              (*(uint *)(puVar17 + 1) < *(uint *)(puVar13 + 1))))) goto LAB_00b81374;
        }
      }
    }
    else {
LAB_00b81374:
      uVar20 = puVar13[1];
      uVar19 = *puVar13;
      uVar7 = uVar7 + 1;
      uVar21 = *puVar17;
      puVar13[1] = puVar17[1];
      *puVar13 = uVar21;
      puVar17[1] = uVar20;
      *puVar17 = uVar19;
    }
  }
  if (uVar7 == 0) {
    bVar5 = __insertion_sort_incomplete<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>
                      (param_1,(Triangle *)puVar13,param_3);
    bVar6 = __insertion_sort_incomplete<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>
                      ((Triangle *)(puVar13 + 2),param_2,param_3);
    if (bVar6) goto LAB_00b816c8;
    puVar17 = puVar13 + 2;
    if (bVar5) goto LAB_00b811b8;
  }
  if ((long)param_2 - (long)puVar13 <= (long)puVar13 - (long)param_1) {
    __sort<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>
              ((Triangle *)(puVar13 + 2),param_2,param_3);
    param_2 = (Triangle *)puVar13;
    goto LAB_00b811ac;
  }
  __sort<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>
            (param_1,(Triangle *)puVar13,param_3);
  puVar17 = puVar13 + 2;
  goto LAB_00b811b8;
LAB_00b81570:
  uVar20 = puVar11[1];
  uVar19 = *puVar11;
  uVar21 = *puVar16;
  puVar11[1] = *(undefined8 *)((long)param_2 + -8);
  *puVar11 = uVar21;
  *(undefined8 *)((long)param_2 + -8) = uVar20;
  *puVar16 = uVar19;
  puVar11 = puVar11 + 2;
LAB_00b81588:
  puVar13 = puVar16;
  if (puVar11 != puVar16) {
    do {
      uVar7 = *(uint *)((long)param_1 + 0xc);
      uVar2 = *(uint *)((long)puVar11 + 0xc);
      puVar17 = puVar11;
      while (uVar2 <= uVar7) {
        if (uVar7 <= uVar2) {
          if (*(uint *)param_1 < *(uint *)puVar17) break;
          if (*(uint *)param_1 <= *(uint *)puVar17) {
            if ((*(uint *)((long)param_1 + 4) < *(uint *)((long)puVar17 + 4)) ||
               ((*(uint *)((long)param_1 + 4) <= *(uint *)((long)puVar17 + 4) &&
                (*(uint *)((long)param_1 + 8) < *(uint *)(puVar17 + 1))))) break;
          }
        }
        uVar2 = *(uint *)((long)puVar17 + 0x1c);
        puVar17 = puVar17 + 2;
      }
      do {
        do {
          do {
            puVar14 = puVar13;
            puVar13 = puVar14 + -2;
          } while (uVar7 < *(uint *)((long)puVar14 + -4));
          if (*(uint *)((long)puVar14 + -4) < uVar7) goto LAB_00b815f4;
        } while (*(uint *)param_1 < *(uint *)puVar13);
        if (*(uint *)puVar13 < *(uint *)param_1) break;
      } while ((*(uint *)((long)param_1 + 4) < *(uint *)((long)puVar14 + -0xc)) ||
              ((*(uint *)((long)param_1 + 4) <= *(uint *)((long)puVar14 + -0xc) &&
               (*(uint *)((long)param_1 + 8) < *(uint *)(puVar14 + -1)))));
LAB_00b815f4:
      if (puVar13 <= puVar17) goto LAB_00b811b8;
      uVar20 = puVar17[1];
      uVar19 = *puVar17;
      puVar11 = puVar17 + 2;
      uVar21 = *puVar13;
      puVar17[1] = puVar14[-1];
      *puVar17 = uVar21;
      puVar14[-1] = uVar20;
      *puVar13 = uVar19;
    } while( true );
  }
  goto switchD_00b816e8_caseD_0;
LAB_00b812e4:
  uVar15 = *(uint *)((long)puVar11 + -4);
  puVar14 = puVar11 + -2;
  if (uVar2 <= uVar15) {
    puVar11 = puVar11 + -1;
    do {
      if (uVar15 <= uVar2) {
        if (*(uint *)(puVar11 + -1) < *(uint *)puVar17) goto joined_r0x00b81264;
        if (*(uint *)(puVar11 + -1) <= *(uint *)puVar17) {
          if (*(uint *)((long)puVar11 + -4) < *(uint *)((long)puVar17 + 4)) goto joined_r0x00b81264;
          if ((*(uint *)((long)puVar11 + -4) <= *(uint *)((long)puVar17 + 4)) &&
             (*(uint *)puVar11 < *(uint *)(puVar17 + 1))) break;
        }
      }
      uVar15 = *(uint *)((long)puVar11 + -0xc);
      puVar14 = puVar14 + -2;
      puVar11 = puVar11 + -2;
    } while (uVar2 <= uVar15);
    puVar14 = puVar11 + -1;
  }
joined_r0x00b81264:
  puVar11 = puVar14;
  if (puVar11 < puVar13) goto LAB_00b8135c;
  uVar21 = puVar13[1];
  uVar19 = *puVar13;
  uVar7 = uVar7 + 1;
  puVar14 = puVar11;
  if (puVar13 != puVar17) {
    puVar14 = puVar17;
  }
  uVar20 = *puVar11;
  puVar13[1] = puVar11[1];
  *puVar13 = uVar20;
  puVar13 = puVar13 + 2;
  puVar11[1] = uVar21;
  *puVar11 = uVar19;
  puVar17 = puVar14;
  goto LAB_00b81290;
LAB_00b816c8:
  param_2 = (Triangle *)puVar13;
  if (bVar5) {
switchD_00b816e8_caseD_0:
    if (*(long *)(lVar4 + 0x28) == lVar8) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_00b811ac;
}


