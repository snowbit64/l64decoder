// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<GranularSynthesisRuntimeSettings::Grain::SortByWavIdx&,GranularSynthesisRuntimeSettings::Grain*>
// Entry Point: 008a6e2c
// Size: 2492 bytes
// Signature: void __cdecl __sort<GranularSynthesisRuntimeSettings::Grain::SortByWavIdx&,GranularSynthesisRuntimeSettings::Grain*>(Grain * param_1, Grain * param_2, SortByWavIdx * param_3)


/* void std::__ndk1::__sort<GranularSynthesisRuntimeSettings::Grain::SortByWavIdx&,
   GranularSynthesisRuntimeSettings::Grain*>(GranularSynthesisRuntimeSettings::Grain*,
   GranularSynthesisRuntimeSettings::Grain*, GranularSynthesisRuntimeSettings::Grain::SortByWavIdx&)
    */

void std::__ndk1::
     __sort<GranularSynthesisRuntimeSettings::Grain::SortByWavIdx&,GranularSynthesisRuntimeSettings::Grain*>
               (Grain *param_1,Grain *param_2,SortByWavIdx *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  long lVar23;
  long lVar24;
  undefined5 local_80;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  
  lVar5 = tpidr_el0;
  lVar9 = *(long *)(lVar5 + 0x28);
LAB_008a6e6c:
  puVar20 = (undefined8 *)((long)param_2 + -0x10);
  puVar14 = (undefined8 *)param_1;
LAB_008a6e74:
  param_1 = (Grain *)puVar14;
  uVar15 = (long)param_2 - (long)param_1;
  lVar10 = (long)uVar15 >> 4;
  switch(lVar10) {
  case 0:
  case 1:
    goto switchD_008a738c_caseD_0;
  case 2:
    if (*(uint *)((long)param_2 + -0xc) < *(uint *)((long)param_1 + 4)) {
      uVar21 = *(undefined8 *)param_1;
      uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 8);
      uStack_7b = (undefined3)((ulong)uVar21 >> 0x28);
      uVar16 = *(undefined8 *)((long)param_2 + -0x10);
      *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_2 + -0xb);
      *(undefined8 *)param_1 = uVar16;
      *(ulong *)((long)param_2 + -0xb) = CONCAT53(uStack_78,uStack_7b);
      *(undefined8 *)((long)param_2 + -0x10) = uVar21;
    }
    goto switchD_008a738c_caseD_0;
  case 3:
    uVar8 = *(uint *)((long)param_1 + 0x14);
    puVar14 = (undefined8 *)((long)param_1 + 0x10);
    if (uVar8 < *(uint *)((long)param_1 + 4)) {
      if (*(uint *)((long)param_2 + -0xc) < uVar8) {
        uVar21 = *(undefined8 *)param_1;
        uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 8);
        uStack_7b = (undefined3)((ulong)uVar21 >> 0x28);
        uVar16 = *puVar20;
        *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_2 + -0xb);
        *(undefined8 *)param_1 = uVar16;
        *(ulong *)((long)param_2 + -0xb) = CONCAT53(uStack_78,uStack_7b);
        *puVar20 = uVar21;
      }
      else {
        uVar16 = *(undefined8 *)param_1;
        uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 8);
        uStack_7b = (undefined3)((ulong)uVar16 >> 0x28);
        *(undefined8 *)param_1 = *puVar14;
        *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_1 + 0x15);
        *puVar14 = uVar16;
        *(ulong *)((long)param_1 + 0x15) = CONCAT53(uStack_78,uStack_7b);
        if (*(uint *)((long)param_2 + -0xc) < *(uint *)((long)param_1 + 0x14)) {
          uVar21 = *puVar14;
          uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 0x18);
          uStack_7b = (undefined3)((ulong)uVar21 >> 0x28);
          uVar16 = *puVar20;
          *(undefined8 *)((long)param_1 + 0x15) = *(undefined8 *)((long)param_2 + -0xb);
          *puVar14 = uVar16;
          *(ulong *)((long)param_2 + -0xb) = CONCAT53(uStack_78,uStack_7b);
          *puVar20 = uVar21;
        }
      }
    }
    else if (*(uint *)((long)param_2 + -0xc) < uVar8) {
      uVar21 = *puVar14;
      uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 0x18);
      uStack_7b = (undefined3)((ulong)uVar21 >> 0x28);
      uVar16 = *puVar20;
      *(undefined8 *)((long)param_1 + 0x15) = *(undefined8 *)((long)param_2 + -0xb);
      *puVar14 = uVar16;
      *(ulong *)((long)param_2 + -0xb) = CONCAT53(uStack_78,uStack_7b);
      *puVar20 = uVar21;
      if (*(uint *)((long)param_1 + 0x14) < *(uint *)((long)param_1 + 4)) {
        uVar16 = *(undefined8 *)param_1;
        uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 8);
        uStack_7b = (undefined3)((ulong)uVar16 >> 0x28);
        *(undefined8 *)param_1 = *puVar14;
        *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_1 + 0x15);
        *puVar14 = uVar16;
        *(ulong *)((long)param_1 + 0x15) = CONCAT53(uStack_78,uStack_7b);
      }
    }
    goto switchD_008a738c_caseD_0;
  case 4:
    __sort4<GranularSynthesisRuntimeSettings::Grain::SortByWavIdx&,GranularSynthesisRuntimeSettings::Grain*>
              (param_1,(Grain *)((long)param_1 + 0x10),(Grain *)((long)param_1 + 0x20),
               (Grain *)puVar20,param_3);
    goto switchD_008a738c_caseD_0;
  case 5:
    puVar14 = (undefined8 *)((long)param_1 + 0x10);
    puVar20 = (undefined8 *)((long)param_1 + 0x20);
    puVar13 = (undefined8 *)((long)param_1 + 0x30);
    __sort4<GranularSynthesisRuntimeSettings::Grain::SortByWavIdx&,GranularSynthesisRuntimeSettings::Grain*>
              (param_1,(Grain *)puVar14,(Grain *)puVar20,(Grain *)puVar13,param_3);
    if (*(uint *)((long)param_2 + -0xc) < *(uint *)((long)param_1 + 0x34)) {
      uVar21 = *puVar13;
      uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 0x38);
      uStack_7b = (undefined3)((ulong)uVar21 >> 0x28);
      uVar16 = *(undefined8 *)((long)param_2 + -0x10);
      *(undefined8 *)((long)param_1 + 0x35) = *(undefined8 *)((long)param_2 + -0xb);
      *puVar13 = uVar16;
      *(ulong *)((long)param_2 + -0xb) = CONCAT53(uStack_78,uStack_7b);
      *(undefined8 *)((long)param_2 + -0x10) = uVar21;
      if (*(uint *)((long)param_1 + 0x34) < *(uint *)((long)param_1 + 0x24)) {
        uVar16 = *puVar20;
        *puVar20 = *puVar13;
        *(undefined8 *)((long)param_1 + 0x25) = *(undefined8 *)((long)param_1 + 0x35);
        uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 0x28);
        uStack_7b = (undefined3)((ulong)uVar16 >> 0x28);
        *puVar13 = uVar16;
        *(ulong *)((long)param_1 + 0x35) = CONCAT53(uStack_78,uStack_7b);
        if (*(uint *)((long)param_1 + 0x24) < *(uint *)((long)param_1 + 0x14)) {
          uVar16 = *puVar14;
          uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 0x18);
          uStack_7b = (undefined3)((ulong)uVar16 >> 0x28);
          *puVar14 = *puVar20;
          *(undefined8 *)((long)param_1 + 0x15) = *(undefined8 *)((long)param_1 + 0x25);
          *puVar20 = uVar16;
          *(ulong *)((long)param_1 + 0x25) = CONCAT53(uStack_78,uStack_7b);
          if (*(uint *)((long)param_1 + 0x14) < *(uint *)((long)param_1 + 4)) {
            uVar16 = *(undefined8 *)param_1;
            uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 8);
            uStack_7b = (undefined3)((ulong)uVar16 >> 0x28);
            *(undefined8 *)param_1 = *puVar14;
            *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_1 + 0x15);
            *puVar14 = uVar16;
            *(ulong *)((long)param_1 + 0x15) = CONCAT53(uStack_78,uStack_7b);
          }
        }
      }
    }
    goto switchD_008a738c_caseD_0;
  }
  if ((long)uVar15 < 0x1f0) {
    uVar8 = *(uint *)((long)param_1 + 0x14);
    puVar14 = (undefined8 *)((long)param_1 + 0x20);
    puVar20 = (undefined8 *)((long)param_1 + 0x10);
    uVar2 = *(uint *)((long)param_1 + 0x24);
    if (uVar8 < *(uint *)((long)param_1 + 4)) {
      if (uVar2 < uVar8) {
        uVar21 = *(undefined8 *)param_1;
        uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 8);
        uStack_7b = (undefined3)((ulong)uVar21 >> 0x28);
        *(undefined8 *)param_1 = *puVar14;
        *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_1 + 0x25);
        uVar16 = CONCAT53(uStack_78,uStack_7b);
        *puVar14 = uVar21;
      }
      else {
        uVar16 = *(undefined8 *)param_1;
        uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 8);
        uStack_7b = (undefined3)((ulong)uVar16 >> 0x28);
        *(undefined8 *)param_1 = *puVar20;
        *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_1 + 0x15);
        *puVar20 = uVar16;
        *(ulong *)((long)param_1 + 0x15) = CONCAT53(uStack_78,uStack_7b);
        if (*(uint *)((long)param_1 + 0x14) <= uVar2) goto LAB_008a771c;
        uVar21 = *puVar20;
        uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 0x18);
        uStack_7b = (undefined3)((ulong)uVar21 >> 0x28);
        *puVar20 = *puVar14;
        uVar16 = CONCAT53(uStack_78,uStack_7b);
        *(undefined8 *)((long)param_1 + 0x15) = *(undefined8 *)((long)param_1 + 0x25);
        *puVar14 = uVar21;
      }
      *(undefined8 *)((long)param_1 + 0x25) = uVar16;
    }
    else if (uVar2 < uVar8) {
      uVar16 = *puVar20;
      *puVar20 = *puVar14;
      *(undefined8 *)((long)param_1 + 0x15) = *(undefined8 *)((long)param_1 + 0x25);
      uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 0x18);
      uStack_7b = (undefined3)((ulong)uVar16 >> 0x28);
      *puVar14 = uVar16;
      *(ulong *)((long)param_1 + 0x25) = CONCAT53(uStack_78,uStack_7b);
      if (*(uint *)((long)param_1 + 0x14) < *(uint *)((long)param_1 + 4)) {
        uVar16 = *(undefined8 *)param_1;
        uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 8);
        uStack_7b = (undefined3)((ulong)uVar16 >> 0x28);
        *(undefined8 *)param_1 = *puVar20;
        *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_1 + 0x15);
        *puVar20 = uVar16;
        *(ulong *)((long)param_1 + 0x15) = CONCAT53(uStack_78,uStack_7b);
      }
    }
LAB_008a771c:
    if ((undefined8 *)((long)param_1 + 0x30) == (undefined8 *)param_2)
    goto switchD_008a738c_caseD_0;
    lVar10 = 0;
    puVar20 = (undefined8 *)((long)param_1 + 0x30);
    goto LAB_008a7754;
  }
  lVar24 = lVar10;
  if (lVar10 < 0) {
    lVar24 = lVar10 + 1;
  }
  lVar24 = lVar24 >> 1;
  puVar14 = (undefined8 *)((long)param_1 + lVar24 * 2 * 8);
  if (uVar15 < 0x3e71) {
    puVar11 = (uint *)((long)puVar14 + 4);
    uVar8 = *puVar11;
    if (uVar8 < *(uint *)((long)param_1 + 4)) {
      if (*(uint *)((long)param_2 + -0xc) < uVar8) {
        uVar8 = 1;
        uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 8);
        local_80 = (undefined5)*(undefined8 *)param_1;
        uStack_7b = (undefined3)((ulong)*(undefined8 *)param_1 >> 0x28);
        uVar16 = *puVar20;
        *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_2 + -0xb);
        *(undefined8 *)param_1 = uVar16;
      }
      else {
        uVar21 = *(undefined8 *)param_1;
        uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 8);
        uStack_7b = (undefined3)((ulong)uVar21 >> 0x28);
        uVar16 = *puVar14;
        *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)puVar14 + 5);
        *(undefined8 *)param_1 = uVar16;
        *(ulong *)((long)puVar14 + 5) = CONCAT53(uStack_78,uStack_7b);
        *puVar14 = uVar21;
        if (*puVar11 <= *(uint *)((long)param_2 + -0xc)) {
LAB_008a70f4:
          uVar8 = 1;
          goto LAB_008a7108;
        }
        uVar8 = 2;
        uStack_78 = (undefined5)puVar14[1];
        local_80 = (undefined5)*puVar14;
        uStack_7b = (undefined3)((ulong)*puVar14 >> 0x28);
        uVar16 = *puVar20;
        *(undefined8 *)((long)puVar14 + 5) = *(undefined8 *)((long)param_2 + -0xb);
        *puVar14 = uVar16;
      }
      *(ulong *)((long)param_2 + -0xb) = CONCAT53(uStack_78,uStack_7b);
      *puVar20 = CONCAT35(uStack_7b,local_80);
    }
    else if (*(uint *)((long)param_2 + -0xc) < uVar8) {
      uVar21 = *puVar14;
      uStack_78 = (undefined5)puVar14[1];
      uStack_7b = (undefined3)((ulong)uVar21 >> 0x28);
      uVar16 = *puVar20;
      *(undefined8 *)((long)puVar14 + 5) = *(undefined8 *)((long)param_2 + -0xb);
      *puVar14 = uVar16;
      *(ulong *)((long)param_2 + -0xb) = CONCAT53(uStack_78,uStack_7b);
      *puVar20 = uVar21;
      if (*(uint *)((long)param_1 + 4) <= *puVar11) goto LAB_008a70f4;
      uVar21 = *(undefined8 *)param_1;
      uVar8 = 2;
      uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 8);
      uStack_7b = (undefined3)((ulong)uVar21 >> 0x28);
      uVar16 = *puVar14;
      *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)puVar14 + 5);
      *(undefined8 *)param_1 = uVar16;
      *(ulong *)((long)puVar14 + 5) = CONCAT53(uStack_78,uStack_7b);
      *puVar14 = uVar21;
    }
    else {
      uVar8 = 0;
    }
  }
  else {
    lVar23 = lVar10 + 3;
    if (-1 < lVar10) {
      lVar23 = lVar10;
    }
    lVar23 = lVar23 >> 2;
    puVar13 = (undefined8 *)((long)param_1 + lVar23 * 2 * 8);
    puVar18 = puVar14 + lVar23 * 2;
    uVar8 = __sort4<GranularSynthesisRuntimeSettings::Grain::SortByWavIdx&,GranularSynthesisRuntimeSettings::Grain*>
                      (param_1,(Grain *)puVar13,(Grain *)puVar14,(Grain *)puVar18,param_3);
    if (*(uint *)((long)param_2 + -0xc) < *(uint *)((long)puVar18 + 4)) {
      uVar21 = *puVar18;
      uStack_78 = (undefined5)puVar18[1];
      uStack_7b = (undefined3)((ulong)uVar21 >> 0x28);
      uVar16 = *puVar20;
      *(undefined8 *)((long)puVar18 + 5) = *(undefined8 *)((long)param_2 + -0xb);
      *puVar18 = uVar16;
      *(ulong *)((long)param_2 + -0xb) = CONCAT53(uStack_78,uStack_7b);
      *puVar20 = uVar21;
      puVar11 = (uint *)((long)param_1 + lVar24 * 0x10 + 4);
      if (*(uint *)((long)puVar18 + 4) < *puVar11) {
        uVar21 = *puVar14;
        uStack_78 = (undefined5)puVar14[1];
        uStack_7b = (undefined3)((ulong)uVar21 >> 0x28);
        uVar16 = *puVar18;
        *(undefined8 *)((long)puVar14 + 5) = *(undefined8 *)((long)puVar18 + 5);
        *puVar14 = uVar16;
        *(ulong *)((long)puVar18 + 5) = CONCAT53(uStack_78,uStack_7b);
        *puVar18 = uVar21;
        puVar17 = (uint *)((long)param_1 + lVar23 * 0x10 + 4);
        if (*puVar11 < *puVar17) {
          uVar21 = *puVar13;
          uStack_78 = (undefined5)puVar13[1];
          uStack_7b = (undefined3)((ulong)uVar21 >> 0x28);
          uVar16 = *puVar14;
          *(undefined8 *)((long)puVar13 + 5) = *(undefined8 *)((long)puVar14 + 5);
          *puVar13 = uVar16;
          *(ulong *)((long)puVar14 + 5) = CONCAT53(uStack_78,uStack_7b);
          *puVar14 = uVar21;
          if (*puVar17 < *(uint *)((long)param_1 + 4)) {
            uVar21 = *(undefined8 *)param_1;
            uVar8 = uVar8 + 4;
            uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 8);
            uStack_7b = (undefined3)((ulong)uVar21 >> 0x28);
            uVar16 = *puVar13;
            *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)puVar13 + 5);
            *(undefined8 *)param_1 = uVar16;
            *(ulong *)((long)puVar13 + 5) = CONCAT53(uStack_78,uStack_7b);
            *puVar13 = uVar21;
          }
          else {
            uVar8 = uVar8 + 3;
          }
        }
        else {
          uVar8 = uVar8 + 2;
        }
      }
      else {
        uVar8 = uVar8 + 1;
      }
    }
  }
LAB_008a7108:
  uVar2 = *(uint *)((long)param_1 + 4);
  uVar3 = *(uint *)((long)param_1 + lVar24 * 0x10 + 4);
  puVar13 = puVar20;
  if (uVar3 <= uVar2) {
    do {
      puVar18 = puVar13;
      puVar13 = puVar18 + -2;
      if (puVar13 == (undefined8 *)param_1) {
        puVar13 = (undefined8 *)((long)param_1 + 0x10);
        puVar14 = puVar13;
        if (*(uint *)((long)param_2 + -0xc) <= uVar2) goto joined_r0x008a72a0;
        goto LAB_008a72e8;
      }
    } while (uVar3 <= *(uint *)((long)puVar18 + -0xc));
    uVar21 = *(undefined8 *)param_1;
    uVar8 = uVar8 + 1;
    uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 8);
    uStack_7b = (undefined3)((ulong)uVar21 >> 0x28);
    uVar16 = *puVar13;
    *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)puVar18 + -0xb);
    *(undefined8 *)param_1 = uVar16;
    *(ulong *)((long)puVar18 + -0xb) = CONCAT53(uStack_78,uStack_7b);
    *puVar13 = uVar21;
  }
  puVar18 = (undefined8 *)((long)param_1 + 0x10);
  puVar22 = puVar18;
  if (puVar18 < puVar13) {
    while( true ) {
      puVar18 = puVar22 + -2;
      do {
        puVar19 = puVar18;
        puVar18 = puVar19 + 2;
      } while (*(uint *)((long)puVar19 + 0x14) < *(uint *)((long)puVar14 + 4));
      puVar22 = puVar19 + 4;
      do {
        puVar12 = puVar13;
        puVar13 = puVar12 + -2;
      } while (*(uint *)((long)puVar14 + 4) <= *(uint *)((long)puVar12 + -0xc));
      if (puVar13 < puVar18) break;
      uVar16 = *puVar18;
      uVar8 = uVar8 + 1;
      puVar1 = puVar13;
      if (puVar18 != puVar14) {
        puVar1 = puVar14;
      }
      uStack_78 = (undefined5)puVar19[3];
      uStack_7b = (undefined3)((ulong)uVar16 >> 0x28);
      uVar21 = *puVar13;
      *(undefined8 *)((long)puVar19 + 0x15) = *(undefined8 *)((long)puVar12 + -0xb);
      *puVar18 = uVar21;
      *(ulong *)((long)puVar12 + -0xb) = CONCAT53(uStack_78,uStack_7b);
      *puVar13 = uVar16;
      puVar14 = puVar1;
    }
  }
  if ((puVar18 != puVar14) && (*(uint *)((long)puVar14 + 4) < *(uint *)((long)puVar18 + 4))) {
    uVar21 = *puVar18;
    uVar8 = uVar8 + 1;
    uStack_78 = (undefined5)puVar18[1];
    uStack_7b = (undefined3)((ulong)uVar21 >> 0x28);
    uVar16 = *puVar14;
    *(undefined8 *)((long)puVar18 + 5) = *(undefined8 *)((long)puVar14 + 5);
    *puVar18 = uVar16;
    *(ulong *)((long)puVar14 + 5) = CONCAT53(uStack_78,uStack_7b);
    *puVar14 = uVar21;
  }
  if (uVar8 == 0) {
    bVar6 = __insertion_sort_incomplete<GranularSynthesisRuntimeSettings::Grain::SortByWavIdx&,GranularSynthesisRuntimeSettings::Grain*>
                      (param_1,(Grain *)puVar18,param_3);
    bVar7 = __insertion_sort_incomplete<GranularSynthesisRuntimeSettings::Grain::SortByWavIdx&,GranularSynthesisRuntimeSettings::Grain*>
                      ((Grain *)(puVar18 + 2),param_2,param_3);
    if (bVar7) goto LAB_008a736c;
    puVar14 = puVar18 + 2;
    if (bVar6) goto LAB_008a6e74;
  }
  if ((long)param_2 - (long)puVar18 <= (long)puVar18 - (long)param_1) {
    __sort<GranularSynthesisRuntimeSettings::Grain::SortByWavIdx&,GranularSynthesisRuntimeSettings::Grain*>
              ((Grain *)(puVar18 + 2),param_2,param_3);
    param_2 = (Grain *)puVar18;
    goto LAB_008a6e6c;
  }
  __sort<GranularSynthesisRuntimeSettings::Grain::SortByWavIdx&,GranularSynthesisRuntimeSettings::Grain*>
            (param_1,(Grain *)puVar18,param_3);
  puVar14 = puVar18 + 2;
  goto LAB_008a6e74;
joined_r0x008a72a0:
  if (puVar14 == puVar20) goto switchD_008a738c_caseD_0;
  if (uVar2 < *(uint *)((long)puVar14 + 4)) goto LAB_008a72c0;
  puVar14 = puVar14 + 2;
  goto joined_r0x008a72a0;
LAB_008a72c0:
  uVar21 = *puVar14;
  uStack_78 = (undefined5)puVar14[1];
  uStack_7b = (undefined3)((ulong)uVar21 >> 0x28);
  uVar16 = *puVar20;
  *(undefined8 *)((long)puVar14 + 5) = *(undefined8 *)((long)param_2 + -0xb);
  puVar13 = puVar14 + 2;
  *puVar14 = uVar16;
  *(ulong *)((long)param_2 + -0xb) = CONCAT53(uStack_78,uStack_7b);
  *puVar20 = uVar21;
LAB_008a72e8:
  puVar18 = puVar20;
  if (puVar13 == puVar20) goto switchD_008a738c_caseD_0;
  while( true ) {
    puVar14 = puVar13 + -2;
    do {
      puVar22 = puVar14;
      puVar14 = puVar22 + 2;
    } while (*(uint *)((long)puVar22 + 0x14) <= *(uint *)((long)param_1 + 4));
    puVar13 = puVar22 + 4;
    do {
      puVar19 = puVar18;
      puVar18 = puVar19 + -2;
    } while (*(uint *)((long)param_1 + 4) < *(uint *)((long)puVar19 + -0xc));
    if (puVar18 <= puVar14) break;
    uVar21 = *puVar14;
    uStack_78 = (undefined5)puVar22[3];
    uStack_7b = (undefined3)((ulong)uVar21 >> 0x28);
    uVar16 = *puVar18;
    *(undefined8 *)((long)puVar22 + 0x15) = *(undefined8 *)((long)puVar19 + -0xb);
    *puVar14 = uVar16;
    *(ulong *)((long)puVar19 + -0xb) = CONCAT53(uStack_78,uStack_7b);
    *puVar18 = uVar21;
  }
  goto LAB_008a6e74;
LAB_008a736c:
  param_2 = (Grain *)puVar18;
  if (bVar6) goto switchD_008a738c_caseD_0;
  goto LAB_008a6e6c;
LAB_008a7754:
  do {
    uVar8 = *(uint *)((long)puVar20 + 4);
    if (uVar8 < *(uint *)((long)puVar14 + 4)) {
      uVar4 = *(undefined4 *)puVar20;
      uVar16 = puVar20[1];
      lVar24 = lVar10;
      do {
        lVar23 = lVar24;
        *(undefined8 *)((long)param_1 + lVar23 + 0x30) =
             *(undefined8 *)((long)param_1 + lVar23 + 0x20);
        *(undefined8 *)((long)param_1 + lVar23 + 0x35) =
             *(undefined8 *)((long)param_1 + lVar23 + 0x25);
        puVar14 = (undefined8 *)param_1;
        if (lVar23 == -0x20) goto LAB_008a7734;
        lVar24 = lVar23 + -0x10;
      } while (uVar8 < *(uint *)((long)param_1 + lVar23 + 0x14));
      puVar14 = (undefined8 *)((long)param_1 + lVar23 + 0x20);
LAB_008a7734:
      *(undefined4 *)puVar14 = uVar4;
      *(uint *)((long)puVar14 + 4) = uVar8;
      *(int *)(puVar14 + 1) = (int)uVar16;
      *(char *)((long)puVar14 + 0xc) = (char)((ulong)uVar16 >> 0x20);
    }
    puVar13 = puVar20 + 2;
    lVar10 = lVar10 + 0x10;
    puVar14 = puVar20;
    puVar20 = puVar13;
  } while (puVar13 != (undefined8 *)param_2);
switchD_008a738c_caseD_0:
  if (*(long *)(lVar5 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


