// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<GranularSynthesisRuntimeSettings::Grain::SortByRpm&,GranularSynthesisRuntimeSettings::Grain*>
// Entry Point: 008a5d78
// Size: 2488 bytes
// Signature: void __cdecl __sort<GranularSynthesisRuntimeSettings::Grain::SortByRpm&,GranularSynthesisRuntimeSettings::Grain*>(Grain * param_1, Grain * param_2, SortByRpm * param_3)


/* void std::__ndk1::__sort<GranularSynthesisRuntimeSettings::Grain::SortByRpm&,
   GranularSynthesisRuntimeSettings::Grain*>(GranularSynthesisRuntimeSettings::Grain*,
   GranularSynthesisRuntimeSettings::Grain*, GranularSynthesisRuntimeSettings::Grain::SortByRpm&) */

void std::__ndk1::
     __sort<GranularSynthesisRuntimeSettings::Grain::SortByRpm&,GranularSynthesisRuntimeSettings::Grain*>
               (Grain *param_1,Grain *param_2,SortByRpm *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  undefined5 local_80;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
LAB_008a5db8:
  puVar16 = (undefined8 *)((long)param_2 + -0x10);
  puVar11 = (undefined8 *)param_1;
LAB_008a5dc0:
  param_1 = (Grain *)puVar11;
  uVar12 = (long)param_2 - (long)param_1;
  lVar8 = (long)uVar12 >> 4;
  switch(lVar8) {
  case 0:
  case 1:
    goto switchD_008a62d8_caseD_0;
  case 2:
    if (*(float *)((long)param_2 + -8) < *(float *)((long)param_1 + 8)) {
      uVar17 = *(undefined8 *)param_1;
      uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 8);
      uStack_7b = (undefined3)((ulong)uVar17 >> 0x28);
      uVar13 = *(undefined8 *)((long)param_2 + -0x10);
      *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_2 + -0xb);
      *(undefined8 *)param_1 = uVar13;
      *(ulong *)((long)param_2 + -0xb) = CONCAT53(uStack_78,uStack_7b);
      *(undefined8 *)((long)param_2 + -0x10) = uVar17;
    }
    goto switchD_008a62d8_caseD_0;
  case 3:
    fVar21 = *(float *)((long)param_1 + 0x18);
    puVar11 = (undefined8 *)((long)param_1 + 0x10);
    if (*(float *)((long)param_1 + 8) <= fVar21) {
      if (*(float *)((long)param_2 + -8) < fVar21) {
        uVar17 = *puVar11;
        uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 0x18);
        uStack_7b = (undefined3)((ulong)uVar17 >> 0x28);
        uVar13 = *puVar16;
        *(undefined8 *)((long)param_1 + 0x15) = *(undefined8 *)((long)param_2 + -0xb);
        *puVar11 = uVar13;
        *(ulong *)((long)param_2 + -0xb) = CONCAT53(uStack_78,uStack_7b);
        *puVar16 = uVar17;
        if (*(float *)((long)param_1 + 0x18) < *(float *)((long)param_1 + 8)) {
          uVar13 = *(undefined8 *)param_1;
          uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 8);
          uStack_7b = (undefined3)((ulong)uVar13 >> 0x28);
          *(undefined8 *)param_1 = *puVar11;
          *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_1 + 0x15);
          *puVar11 = uVar13;
          *(ulong *)((long)param_1 + 0x15) = CONCAT53(uStack_78,uStack_7b);
        }
      }
    }
    else if (fVar21 <= *(float *)((long)param_2 + -8)) {
      uVar13 = *(undefined8 *)param_1;
      uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 8);
      uStack_7b = (undefined3)((ulong)uVar13 >> 0x28);
      *(undefined8 *)param_1 = *puVar11;
      *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_1 + 0x15);
      *puVar11 = uVar13;
      *(ulong *)((long)param_1 + 0x15) = CONCAT53(uStack_78,uStack_7b);
      if (*(float *)((long)param_2 + -8) < *(float *)((long)param_1 + 0x18)) {
        uVar17 = *puVar11;
        uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 0x18);
        uStack_7b = (undefined3)((ulong)uVar17 >> 0x28);
        uVar13 = *puVar16;
        *(undefined8 *)((long)param_1 + 0x15) = *(undefined8 *)((long)param_2 + -0xb);
        *puVar11 = uVar13;
        *(ulong *)((long)param_2 + -0xb) = CONCAT53(uStack_78,uStack_7b);
        *puVar16 = uVar17;
      }
    }
    else {
      uVar17 = *(undefined8 *)param_1;
      uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 8);
      uStack_7b = (undefined3)((ulong)uVar17 >> 0x28);
      uVar13 = *puVar16;
      *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_2 + -0xb);
      *(undefined8 *)param_1 = uVar13;
      *(ulong *)((long)param_2 + -0xb) = CONCAT53(uStack_78,uStack_7b);
      *puVar16 = uVar17;
    }
    goto switchD_008a62d8_caseD_0;
  case 4:
    __sort4<GranularSynthesisRuntimeSettings::Grain::SortByRpm&,GranularSynthesisRuntimeSettings::Grain*>
              (param_1,(Grain *)((long)param_1 + 0x10),(Grain *)((long)param_1 + 0x20),
               (Grain *)puVar16,param_3);
    goto switchD_008a62d8_caseD_0;
  case 5:
    puVar11 = (undefined8 *)((long)param_1 + 0x10);
    puVar16 = (undefined8 *)((long)param_1 + 0x20);
    puVar10 = (undefined8 *)((long)param_1 + 0x30);
    __sort4<GranularSynthesisRuntimeSettings::Grain::SortByRpm&,GranularSynthesisRuntimeSettings::Grain*>
              (param_1,(Grain *)puVar11,(Grain *)puVar16,(Grain *)puVar10,param_3);
    if (*(float *)((long)param_2 + -8) < *(float *)((long)param_1 + 0x38)) {
      uVar17 = *puVar10;
      uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 0x38);
      uStack_7b = (undefined3)((ulong)uVar17 >> 0x28);
      uVar13 = *(undefined8 *)((long)param_2 + -0x10);
      *(undefined8 *)((long)param_1 + 0x35) = *(undefined8 *)((long)param_2 + -0xb);
      *puVar10 = uVar13;
      *(ulong *)((long)param_2 + -0xb) = CONCAT53(uStack_78,uStack_7b);
      *(undefined8 *)((long)param_2 + -0x10) = uVar17;
      if (*(float *)((long)param_1 + 0x38) < *(float *)((long)param_1 + 0x28)) {
        uVar13 = *puVar16;
        *puVar16 = *puVar10;
        *(undefined8 *)((long)param_1 + 0x25) = *(undefined8 *)((long)param_1 + 0x35);
        uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 0x28);
        uStack_7b = (undefined3)((ulong)uVar13 >> 0x28);
        *puVar10 = uVar13;
        *(ulong *)((long)param_1 + 0x35) = CONCAT53(uStack_78,uStack_7b);
        if (*(float *)((long)param_1 + 0x28) < *(float *)((long)param_1 + 0x18)) {
          uVar13 = *puVar11;
          *puVar11 = *puVar16;
          *(undefined8 *)((long)param_1 + 0x15) = *(undefined8 *)((long)param_1 + 0x25);
          uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 0x18);
          uStack_7b = (undefined3)((ulong)uVar13 >> 0x28);
          *puVar16 = uVar13;
          *(ulong *)((long)param_1 + 0x25) = CONCAT53(uStack_78,uStack_7b);
          if (*(float *)((long)param_1 + 0x18) < *(float *)((long)param_1 + 8)) {
            uVar13 = *(undefined8 *)param_1;
            uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 8);
            uStack_7b = (undefined3)((ulong)uVar13 >> 0x28);
            *(undefined8 *)param_1 = *puVar11;
            *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_1 + 0x15);
            *puVar11 = uVar13;
            *(ulong *)((long)param_1 + 0x15) = CONCAT53(uStack_78,uStack_7b);
          }
        }
      }
    }
    goto switchD_008a62d8_caseD_0;
  }
  if ((long)uVar12 < 0x1f0) {
    fVar22 = *(float *)((long)param_1 + 0x18);
    puVar11 = (undefined8 *)((long)param_1 + 0x20);
    puVar16 = (undefined8 *)((long)param_1 + 0x10);
    fVar21 = *(float *)((long)param_1 + 0x28);
    if (*(float *)((long)param_1 + 8) <= fVar22) {
      if (fVar21 < fVar22) {
        uVar13 = *puVar16;
        *puVar16 = *puVar11;
        *(undefined8 *)((long)param_1 + 0x15) = *(undefined8 *)((long)param_1 + 0x25);
        uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 0x18);
        uStack_7b = (undefined3)((ulong)uVar13 >> 0x28);
        *puVar11 = uVar13;
        *(ulong *)((long)param_1 + 0x25) = CONCAT53(uStack_78,uStack_7b);
        if (*(float *)((long)param_1 + 0x18) < *(float *)((long)param_1 + 8)) {
          uVar13 = *(undefined8 *)param_1;
          uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 8);
          uStack_7b = (undefined3)((ulong)uVar13 >> 0x28);
          *(undefined8 *)param_1 = *puVar16;
          *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_1 + 0x15);
          *puVar16 = uVar13;
          *(ulong *)((long)param_1 + 0x15) = CONCAT53(uStack_78,uStack_7b);
        }
      }
    }
    else {
      if (fVar22 <= fVar21) {
        uVar13 = *(undefined8 *)param_1;
        uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 8);
        uStack_7b = (undefined3)((ulong)uVar13 >> 0x28);
        *(undefined8 *)param_1 = *puVar16;
        *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_1 + 0x15);
        *puVar16 = uVar13;
        *(ulong *)((long)param_1 + 0x15) = CONCAT53(uStack_78,uStack_7b);
        if (*(float *)((long)param_1 + 0x18) <= fVar21) goto LAB_008a6668;
        uVar17 = *puVar16;
        uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 0x18);
        uStack_7b = (undefined3)((ulong)uVar17 >> 0x28);
        *puVar16 = *puVar11;
        uVar13 = CONCAT53(uStack_78,uStack_7b);
        *(undefined8 *)((long)param_1 + 0x15) = *(undefined8 *)((long)param_1 + 0x25);
        *puVar11 = uVar17;
      }
      else {
        uVar17 = *(undefined8 *)param_1;
        uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 8);
        uStack_7b = (undefined3)((ulong)uVar17 >> 0x28);
        *(undefined8 *)param_1 = *puVar11;
        *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_1 + 0x25);
        uVar13 = CONCAT53(uStack_78,uStack_7b);
        *puVar11 = uVar17;
      }
      *(undefined8 *)((long)param_1 + 0x25) = uVar13;
    }
LAB_008a6668:
    if ((undefined8 *)((long)param_1 + 0x30) == (undefined8 *)param_2)
    goto switchD_008a62d8_caseD_0;
    lVar8 = 0;
    puVar16 = (undefined8 *)((long)param_1 + 0x30);
    goto LAB_008a669c;
  }
  lVar20 = lVar8;
  if (lVar8 < 0) {
    lVar20 = lVar8 + 1;
  }
  lVar20 = lVar20 >> 1;
  puVar11 = (undefined8 *)((long)param_1 + lVar20 * 2 * 8);
  if (uVar12 < 0x3e71) {
    puVar10 = puVar11 + 1;
    fVar21 = *(float *)puVar10;
    if (*(float *)((long)param_1 + 8) <= fVar21) {
      if (fVar21 <= *(float *)((long)param_2 + -8)) {
        uVar6 = 0;
      }
      else {
        uVar17 = *puVar11;
        uStack_78 = (undefined5)puVar11[1];
        uStack_7b = (undefined3)((ulong)uVar17 >> 0x28);
        uVar13 = *puVar16;
        *(undefined8 *)((long)puVar11 + 5) = *(undefined8 *)((long)param_2 + -0xb);
        *puVar11 = uVar13;
        *(ulong *)((long)param_2 + -0xb) = CONCAT53(uStack_78,uStack_7b);
        *puVar16 = uVar17;
        if (*(float *)((long)param_1 + 8) <= *(float *)puVar10) goto LAB_008a6040;
        uVar17 = *(undefined8 *)param_1;
        uVar6 = 2;
        uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 8);
        uStack_7b = (undefined3)((ulong)uVar17 >> 0x28);
        uVar13 = *puVar11;
        *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)puVar11 + 5);
        *(undefined8 *)param_1 = uVar13;
        *(ulong *)((long)puVar11 + 5) = CONCAT53(uStack_78,uStack_7b);
        *puVar11 = uVar17;
      }
    }
    else {
      if (fVar21 <= *(float *)((long)param_2 + -8)) {
        uVar17 = *(undefined8 *)param_1;
        uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 8);
        uStack_7b = (undefined3)((ulong)uVar17 >> 0x28);
        uVar13 = *puVar11;
        *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)puVar11 + 5);
        *(undefined8 *)param_1 = uVar13;
        *(ulong *)((long)puVar11 + 5) = CONCAT53(uStack_78,uStack_7b);
        *puVar11 = uVar17;
        if (*(float *)puVar10 <= *(float *)((long)param_2 + -8)) {
LAB_008a6040:
          uVar6 = 1;
          goto LAB_008a6054;
        }
        uVar6 = 2;
        uStack_78 = (undefined5)puVar11[1];
        local_80 = (undefined5)*puVar11;
        uStack_7b = (undefined3)((ulong)*puVar11 >> 0x28);
        uVar13 = *puVar16;
        *(undefined8 *)((long)puVar11 + 5) = *(undefined8 *)((long)param_2 + -0xb);
        *puVar11 = uVar13;
      }
      else {
        uVar6 = 1;
        uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 8);
        local_80 = (undefined5)*(undefined8 *)param_1;
        uStack_7b = (undefined3)((ulong)*(undefined8 *)param_1 >> 0x28);
        uVar13 = *puVar16;
        *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_2 + -0xb);
        *(undefined8 *)param_1 = uVar13;
      }
      *(ulong *)((long)param_2 + -0xb) = CONCAT53(uStack_78,uStack_7b);
      *puVar16 = CONCAT35(uStack_7b,local_80);
    }
  }
  else {
    lVar19 = lVar8 + 3;
    if (-1 < lVar8) {
      lVar19 = lVar8;
    }
    lVar19 = lVar19 >> 2;
    puVar10 = (undefined8 *)((long)param_1 + lVar19 * 2 * 8);
    puVar14 = puVar11 + lVar19 * 2;
    uVar6 = __sort4<GranularSynthesisRuntimeSettings::Grain::SortByRpm&,GranularSynthesisRuntimeSettings::Grain*>
                      (param_1,(Grain *)puVar10,(Grain *)puVar11,(Grain *)puVar14,param_3);
    if (*(float *)((long)param_2 + -8) < *(float *)(puVar14 + 1)) {
      uVar17 = *puVar14;
      uStack_78 = (undefined5)puVar14[1];
      uStack_7b = (undefined3)((ulong)uVar17 >> 0x28);
      uVar13 = *puVar16;
      *(undefined8 *)((long)puVar14 + 5) = *(undefined8 *)((long)param_2 + -0xb);
      *puVar14 = uVar13;
      *(ulong *)((long)param_2 + -0xb) = CONCAT53(uStack_78,uStack_7b);
      *puVar16 = uVar17;
      if (*(float *)(undefined8 *)((long)param_1 + (lVar20 * 2 + 1) * 8) <= *(float *)(puVar14 + 1))
      {
        uVar6 = uVar6 + 1;
      }
      else {
        uVar17 = *puVar11;
        uStack_78 = (undefined5)puVar11[1];
        uStack_7b = (undefined3)((ulong)uVar17 >> 0x28);
        uVar13 = *puVar14;
        *(undefined8 *)((long)puVar11 + 5) = *(undefined8 *)((long)puVar14 + 5);
        *puVar11 = uVar13;
        *(ulong *)((long)puVar14 + 5) = CONCAT53(uStack_78,uStack_7b);
        fVar21 = *(float *)(undefined8 *)((long)param_1 + (lVar20 * 2 + 1) * 8);
        *puVar14 = uVar17;
        if (*(float *)(undefined8 *)((long)param_1 + (lVar19 * 2 + 1) * 8) <= fVar21) {
          uVar6 = uVar6 + 2;
        }
        else {
          uVar17 = *puVar10;
          uStack_78 = (undefined5)puVar10[1];
          uStack_7b = (undefined3)((ulong)uVar17 >> 0x28);
          uVar13 = *puVar11;
          *(undefined8 *)((long)puVar10 + 5) = *(undefined8 *)((long)puVar11 + 5);
          *puVar10 = uVar13;
          *(ulong *)((long)puVar11 + 5) = CONCAT53(uStack_78,uStack_7b);
          fVar21 = *(float *)(undefined8 *)((long)param_1 + (lVar19 * 2 + 1) * 8);
          *puVar11 = uVar17;
          if (*(float *)((long)param_1 + 8) <= fVar21) {
            uVar6 = uVar6 + 3;
          }
          else {
            uVar17 = *(undefined8 *)param_1;
            uVar6 = uVar6 + 4;
            uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 8);
            uStack_7b = (undefined3)((ulong)uVar17 >> 0x28);
            uVar13 = *puVar10;
            *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)puVar10 + 5);
            *(undefined8 *)param_1 = uVar13;
            *(ulong *)((long)puVar10 + 5) = CONCAT53(uStack_78,uStack_7b);
            *puVar10 = uVar17;
          }
        }
      }
    }
  }
LAB_008a6054:
  fVar21 = *(float *)((long)param_1 + 8);
  puVar10 = puVar16;
  if (*(float *)((long)param_1 + (lVar20 * 2 + 1) * 8) <= fVar21) {
    do {
      puVar14 = puVar10;
      puVar10 = puVar14 + -2;
      if (puVar10 == (undefined8 *)param_1) {
        puVar10 = (undefined8 *)((long)param_1 + 0x10);
        puVar11 = puVar10;
        if (*(float *)((long)param_2 + -8) <= fVar21) goto joined_r0x008a61ec;
        goto LAB_008a6234;
      }
    } while (*(float *)((long)param_1 + (lVar20 * 2 + 1) * 8) <= *(float *)(puVar14 + -1));
    uVar17 = *(undefined8 *)param_1;
    uVar6 = uVar6 + 1;
    uStack_78 = (undefined5)*(undefined8 *)((long)param_1 + 8);
    uStack_7b = (undefined3)((ulong)uVar17 >> 0x28);
    uVar13 = *puVar10;
    *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)puVar14 + -0xb);
    *(undefined8 *)param_1 = uVar13;
    *(ulong *)((long)puVar14 + -0xb) = CONCAT53(uStack_78,uStack_7b);
    *puVar10 = uVar17;
  }
  puVar14 = (undefined8 *)((long)param_1 + 0x10);
  puVar18 = puVar14;
  if (puVar14 < puVar10) {
    while( true ) {
      puVar14 = puVar18 + -2;
      do {
        puVar15 = puVar14;
        puVar14 = puVar15 + 2;
      } while (*(float *)(puVar15 + 3) < *(float *)(puVar11 + 1));
      puVar18 = puVar15 + 4;
      do {
        puVar9 = puVar10;
        puVar10 = puVar9 + -2;
      } while (*(float *)(puVar11 + 1) <= *(float *)(puVar9 + -1));
      if (puVar10 < puVar14) break;
      uVar13 = *puVar14;
      uVar6 = uVar6 + 1;
      puVar1 = puVar10;
      if (puVar14 != puVar11) {
        puVar1 = puVar11;
      }
      uStack_78 = (undefined5)puVar15[3];
      uStack_7b = (undefined3)((ulong)uVar13 >> 0x28);
      uVar17 = *puVar10;
      *(undefined8 *)((long)puVar15 + 0x15) = *(undefined8 *)((long)puVar9 + -0xb);
      *puVar14 = uVar17;
      *(ulong *)((long)puVar9 + -0xb) = CONCAT53(uStack_78,uStack_7b);
      *puVar10 = uVar13;
      puVar11 = puVar1;
    }
  }
  if ((puVar14 != puVar11) && (*(float *)(puVar11 + 1) < *(float *)(puVar14 + 1))) {
    uVar17 = *puVar14;
    uVar6 = uVar6 + 1;
    uStack_78 = (undefined5)puVar14[1];
    uStack_7b = (undefined3)((ulong)uVar17 >> 0x28);
    uVar13 = *puVar11;
    *(undefined8 *)((long)puVar14 + 5) = *(undefined8 *)((long)puVar11 + 5);
    *puVar14 = uVar13;
    *(ulong *)((long)puVar11 + 5) = CONCAT53(uStack_78,uStack_7b);
    *puVar11 = uVar17;
  }
  if (uVar6 == 0) {
    bVar4 = __insertion_sort_incomplete<GranularSynthesisRuntimeSettings::Grain::SortByRpm&,GranularSynthesisRuntimeSettings::Grain*>
                      (param_1,(Grain *)puVar14,param_3);
    bVar5 = __insertion_sort_incomplete<GranularSynthesisRuntimeSettings::Grain::SortByRpm&,GranularSynthesisRuntimeSettings::Grain*>
                      ((Grain *)(puVar14 + 2),param_2,param_3);
    if (bVar5) goto LAB_008a62b8;
    puVar11 = puVar14 + 2;
    if (bVar4) goto LAB_008a5dc0;
  }
  if ((long)param_2 - (long)puVar14 <= (long)puVar14 - (long)param_1) {
    __sort<GranularSynthesisRuntimeSettings::Grain::SortByRpm&,GranularSynthesisRuntimeSettings::Grain*>
              ((Grain *)(puVar14 + 2),param_2,param_3);
    param_2 = (Grain *)puVar14;
    goto LAB_008a5db8;
  }
  __sort<GranularSynthesisRuntimeSettings::Grain::SortByRpm&,GranularSynthesisRuntimeSettings::Grain*>
            (param_1,(Grain *)puVar14,param_3);
  puVar11 = puVar14 + 2;
  goto LAB_008a5dc0;
joined_r0x008a61ec:
  if (puVar11 == puVar16) goto switchD_008a62d8_caseD_0;
  if (fVar21 < *(float *)(puVar11 + 1)) goto LAB_008a620c;
  puVar11 = puVar11 + 2;
  goto joined_r0x008a61ec;
LAB_008a620c:
  uVar17 = *puVar11;
  uStack_78 = (undefined5)puVar11[1];
  uStack_7b = (undefined3)((ulong)uVar17 >> 0x28);
  uVar13 = *puVar16;
  *(undefined8 *)((long)puVar11 + 5) = *(undefined8 *)((long)param_2 + -0xb);
  puVar10 = puVar11 + 2;
  *puVar11 = uVar13;
  *(ulong *)((long)param_2 + -0xb) = CONCAT53(uStack_78,uStack_7b);
  *puVar16 = uVar17;
LAB_008a6234:
  puVar14 = puVar16;
  if (puVar10 == puVar16) goto switchD_008a62d8_caseD_0;
  while( true ) {
    puVar11 = puVar10 + -2;
    do {
      puVar18 = puVar11;
      puVar11 = puVar18 + 2;
    } while (*(float *)(puVar18 + 3) <= *(float *)((long)param_1 + 8));
    puVar10 = puVar18 + 4;
    do {
      puVar15 = puVar14;
      puVar14 = puVar15 + -2;
    } while (*(float *)((long)param_1 + 8) < *(float *)(puVar15 + -1));
    if (puVar14 <= puVar11) break;
    uVar17 = *puVar11;
    uStack_78 = (undefined5)puVar18[3];
    uStack_7b = (undefined3)((ulong)uVar17 >> 0x28);
    uVar13 = *puVar14;
    *(undefined8 *)((long)puVar18 + 0x15) = *(undefined8 *)((long)puVar15 + -0xb);
    *puVar11 = uVar13;
    *(ulong *)((long)puVar15 + -0xb) = CONCAT53(uStack_78,uStack_7b);
    *puVar14 = uVar17;
  }
  goto LAB_008a5dc0;
LAB_008a62b8:
  param_2 = (Grain *)puVar14;
  if (bVar4) goto switchD_008a62d8_caseD_0;
  goto LAB_008a5db8;
LAB_008a669c:
  do {
    fVar21 = *(float *)(puVar16 + 1);
    if (fVar21 < *(float *)(puVar11 + 1)) {
      uVar13 = *puVar16;
      uVar2 = *(undefined4 *)((long)puVar16 + 0xc);
      lVar20 = lVar8;
      do {
        lVar19 = lVar20;
        *(undefined8 *)((long)param_1 + lVar19 + 0x30) =
             *(undefined8 *)((long)param_1 + lVar19 + 0x20);
        *(undefined8 *)((long)param_1 + lVar19 + 0x35) =
             *(undefined8 *)((long)param_1 + lVar19 + 0x25);
        puVar11 = (undefined8 *)param_1;
        if (lVar19 == -0x20) goto LAB_008a6680;
        lVar20 = lVar19 + -0x10;
      } while (fVar21 < *(float *)((long)param_1 + lVar19 + 0x18));
      puVar11 = (undefined8 *)((long)param_1 + lVar19 + 0x20);
LAB_008a6680:
      *puVar11 = uVar13;
      *(float *)(puVar11 + 1) = fVar21;
      *(char *)((long)puVar11 + 0xc) = (char)uVar2;
    }
    puVar10 = puVar16 + 2;
    lVar8 = lVar8 + 0x10;
    puVar11 = puVar16;
    puVar16 = puVar10;
  } while (puVar10 != (undefined8 *)param_2);
switchD_008a62d8_caseD_0:
  if (*(long *)(lVar3 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


