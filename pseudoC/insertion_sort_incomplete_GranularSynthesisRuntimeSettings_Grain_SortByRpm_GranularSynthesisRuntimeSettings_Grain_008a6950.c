// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<GranularSynthesisRuntimeSettings::Grain::SortByRpm&,GranularSynthesisRuntimeSettings::Grain*>
// Entry Point: 008a6950
// Size: 1244 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<GranularSynthesisRuntimeSettings::Grain::SortByRpm&,GranularSynthesisRuntimeSettings::Grain*>(Grain * param_1, Grain * param_2, SortByRpm * param_3)


/* bool 
   std::__ndk1::__insertion_sort_incomplete<GranularSynthesisRuntimeSettings::Grain::SortByRpm&,
   GranularSynthesisRuntimeSettings::Grain*>(GranularSynthesisRuntimeSettings::Grain*,
   GranularSynthesisRuntimeSettings::Grain*, GranularSynthesisRuntimeSettings::Grain::SortByRpm&) */

bool std::__ndk1::
     __insertion_sort_incomplete<GranularSynthesisRuntimeSettings::Grain::SortByRpm&,GranularSynthesisRuntimeSettings::Grain*>
               (Grain *param_1,Grain *param_2,SortByRpm *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  
  lVar3 = tpidr_el0;
  lVar8 = *(long *)(lVar3 + 0x28);
  uVar6 = (long)param_2 - (long)param_1 >> 4;
  if (uVar6 < 6) {
    bVar5 = true;
    switch(uVar6) {
    default:
      goto switchD_008a69a8_caseD_0;
    case 2:
      if (*(float *)(param_2 + -8) < *(float *)(param_1 + 8)) {
        uVar14 = *(undefined8 *)param_1;
        bVar5 = true;
        uVar12 = *(undefined8 *)(param_2 + -0xb);
        uStack_58 = (undefined5)*(undefined8 *)(param_1 + 8);
        uStack_5b = (undefined3)((ulong)uVar14 >> 0x28);
        *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -0x10);
        *(undefined8 *)(param_1 + 5) = uVar12;
        *(ulong *)(param_2 + -0xb) = CONCAT53(uStack_58,uStack_5b);
        *(undefined8 *)(param_2 + -0x10) = uVar14;
        goto switchD_008a69a8_caseD_0;
      }
      break;
    case 3:
      fVar15 = *(float *)(param_1 + 0x18);
      puVar7 = (undefined8 *)(param_1 + 0x10);
      puVar9 = (undefined8 *)(param_2 + -0x10);
      if (*(float *)(param_1 + 8) <= fVar15) {
        if (*(float *)(param_2 + -8) < fVar15) {
          uVar14 = *puVar7;
          uVar12 = *(undefined8 *)(param_2 + -0xb);
          uStack_58 = (undefined5)*(undefined8 *)(param_1 + 0x18);
          uStack_5b = (undefined3)((ulong)uVar14 >> 0x28);
          *puVar7 = *puVar9;
          *(undefined8 *)(param_1 + 0x15) = uVar12;
          *(ulong *)(param_2 + -0xb) = CONCAT53(uStack_58,uStack_5b);
          *puVar9 = uVar14;
          if (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 8)) {
            uVar12 = *(undefined8 *)param_1;
            bVar5 = true;
            uStack_58 = (undefined5)*(undefined8 *)(param_1 + 8);
            uStack_5b = (undefined3)((ulong)uVar12 >> 0x28);
            *(undefined8 *)param_1 = *puVar7;
            *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_1 + 0x15);
            *puVar7 = uVar12;
            *(ulong *)(param_1 + 0x15) = CONCAT53(uStack_58,uStack_5b);
            goto switchD_008a69a8_caseD_0;
          }
        }
      }
      else {
        if (*(float *)(param_2 + -8) < fVar15) {
          uVar14 = *(undefined8 *)param_1;
          bVar5 = true;
          uVar12 = *(undefined8 *)(param_2 + -0xb);
          uStack_58 = (undefined5)*(undefined8 *)(param_1 + 8);
          uStack_5b = (undefined3)((ulong)uVar14 >> 0x28);
          *(undefined8 *)param_1 = *puVar9;
          *(undefined8 *)(param_1 + 5) = uVar12;
          *(ulong *)(param_2 + -0xb) = CONCAT53(uStack_58,uStack_5b);
          *puVar9 = uVar14;
          goto switchD_008a69a8_caseD_0;
        }
        uVar12 = *(undefined8 *)param_1;
        uStack_58 = (undefined5)*(undefined8 *)(param_1 + 8);
        uStack_5b = (undefined3)((ulong)uVar12 >> 0x28);
        *(undefined8 *)param_1 = *puVar7;
        *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_1 + 0x15);
        *puVar7 = uVar12;
        *(ulong *)(param_1 + 0x15) = CONCAT53(uStack_58,uStack_5b);
        if (*(float *)(param_2 + -8) < *(float *)(param_1 + 0x18)) {
          uVar14 = *puVar7;
          bVar5 = true;
          uVar12 = *(undefined8 *)(param_2 + -0xb);
          uStack_58 = (undefined5)*(undefined8 *)(param_1 + 0x18);
          uStack_5b = (undefined3)((ulong)uVar14 >> 0x28);
          *puVar7 = *puVar9;
          *(undefined8 *)(param_1 + 0x15) = uVar12;
          *(ulong *)(param_2 + -0xb) = CONCAT53(uStack_58,uStack_5b);
          *puVar9 = uVar14;
          goto switchD_008a69a8_caseD_0;
        }
      }
      break;
    case 4:
      __sort4<GranularSynthesisRuntimeSettings::Grain::SortByRpm&,GranularSynthesisRuntimeSettings::Grain*>
                (param_1,param_1 + 0x10,param_1 + 0x20,param_2 + -0x10,param_3);
      break;
    case 5:
      puVar7 = (undefined8 *)(param_1 + 0x10);
      puVar9 = (undefined8 *)(param_1 + 0x20);
      puVar1 = (undefined8 *)(param_1 + 0x30);
      __sort4<GranularSynthesisRuntimeSettings::Grain::SortByRpm&,GranularSynthesisRuntimeSettings::Grain*>
                (param_1,(Grain *)puVar7,(Grain *)puVar9,(Grain *)puVar1,param_3);
      if (*(float *)(param_2 + -8) < *(float *)(param_1 + 0x38)) {
        uVar14 = *puVar1;
        uVar12 = *(undefined8 *)(param_2 + -0xb);
        uStack_58 = (undefined5)*(undefined8 *)(param_1 + 0x38);
        uStack_5b = (undefined3)((ulong)uVar14 >> 0x28);
        *puVar1 = *(undefined8 *)(param_2 + -0x10);
        *(undefined8 *)(param_1 + 0x35) = uVar12;
        *(ulong *)(param_2 + -0xb) = CONCAT53(uStack_58,uStack_5b);
        *(undefined8 *)(param_2 + -0x10) = uVar14;
        if (*(float *)(param_1 + 0x38) < *(float *)(param_1 + 0x28)) {
          uVar12 = *puVar9;
          *puVar9 = *puVar1;
          *(undefined8 *)(param_1 + 0x25) = *(undefined8 *)(param_1 + 0x35);
          uStack_58 = (undefined5)*(undefined8 *)(param_1 + 0x28);
          uStack_5b = (undefined3)((ulong)uVar12 >> 0x28);
          *puVar1 = uVar12;
          *(ulong *)(param_1 + 0x35) = CONCAT53(uStack_58,uStack_5b);
          if (*(float *)(param_1 + 0x28) < *(float *)(param_1 + 0x18)) {
            uVar12 = *puVar7;
            *puVar7 = *puVar9;
            *(undefined8 *)(param_1 + 0x15) = *(undefined8 *)(param_1 + 0x25);
            uStack_58 = (undefined5)*(undefined8 *)(param_1 + 0x18);
            uStack_5b = (undefined3)((ulong)uVar12 >> 0x28);
            *puVar9 = uVar12;
            *(ulong *)(param_1 + 0x25) = CONCAT53(uStack_58,uStack_5b);
            if (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 8)) {
              uVar12 = *(undefined8 *)param_1;
              bVar5 = true;
              uStack_58 = (undefined5)*(undefined8 *)(param_1 + 8);
              uStack_5b = (undefined3)((ulong)uVar12 >> 0x28);
              *(undefined8 *)param_1 = *puVar7;
              *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_1 + 0x15);
              *puVar7 = uVar12;
              *(ulong *)(param_1 + 0x15) = CONCAT53(uStack_58,uStack_5b);
              goto switchD_008a69a8_caseD_0;
            }
          }
        }
      }
    }
  }
  else {
    fVar16 = *(float *)(param_1 + 0x18);
    puVar7 = (undefined8 *)(param_1 + 0x20);
    puVar9 = (undefined8 *)(param_1 + 0x10);
    fVar15 = *(float *)(param_1 + 0x28);
    if (*(float *)(param_1 + 8) <= fVar16) {
      if (fVar15 < fVar16) {
        uVar12 = *puVar9;
        *puVar9 = *puVar7;
        *(undefined8 *)(param_1 + 0x15) = *(undefined8 *)(param_1 + 0x25);
        uStack_58 = (undefined5)*(undefined8 *)(param_1 + 0x18);
        uStack_5b = (undefined3)((ulong)uVar12 >> 0x28);
        *puVar7 = uVar12;
        *(ulong *)(param_1 + 0x25) = CONCAT53(uStack_58,uStack_5b);
        if (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 8)) {
          uVar12 = *(undefined8 *)param_1;
          uStack_58 = (undefined5)*(undefined8 *)(param_1 + 8);
          uStack_5b = (undefined3)((ulong)uVar12 >> 0x28);
          *(undefined8 *)param_1 = *puVar9;
          *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_1 + 0x15);
          *puVar9 = uVar12;
          *(ulong *)(param_1 + 0x15) = CONCAT53(uStack_58,uStack_5b);
        }
      }
    }
    else if (fVar16 <= fVar15) {
      uVar12 = *(undefined8 *)param_1;
      uStack_58 = (undefined5)*(undefined8 *)(param_1 + 8);
      uStack_5b = (undefined3)((ulong)uVar12 >> 0x28);
      *(undefined8 *)param_1 = *puVar9;
      *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_1 + 0x15);
      *puVar9 = uVar12;
      *(ulong *)(param_1 + 0x15) = CONCAT53(uStack_58,uStack_5b);
      if (fVar15 < *(float *)(param_1 + 0x18)) {
        uVar12 = *puVar9;
        uStack_58 = (undefined5)*(undefined8 *)(param_1 + 0x18);
        uStack_5b = (undefined3)((ulong)uVar12 >> 0x28);
        *puVar9 = *puVar7;
        *(undefined8 *)(param_1 + 0x15) = *(undefined8 *)(param_1 + 0x25);
        *puVar7 = uVar12;
        *(ulong *)(param_1 + 0x25) = CONCAT53(uStack_58,uStack_5b);
      }
    }
    else {
      uVar12 = *(undefined8 *)param_1;
      uStack_58 = (undefined5)*(undefined8 *)(param_1 + 8);
      uStack_5b = (undefined3)((ulong)uVar12 >> 0x28);
      *(undefined8 *)param_1 = *puVar7;
      *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_1 + 0x25);
      *puVar7 = uVar12;
      *(ulong *)(param_1 + 0x25) = CONCAT53(uStack_58,uStack_5b);
    }
    if (param_1 + 0x30 != param_2) {
      lVar10 = 0;
      iVar11 = 0;
      puVar9 = (undefined8 *)(param_1 + 0x30);
      do {
        fVar15 = *(float *)(puVar9 + 1);
        if (fVar15 < *(float *)(puVar7 + 1)) {
          uVar12 = *puVar9;
          uVar2 = *(undefined4 *)((long)puVar9 + 0xc);
          lVar4 = lVar10;
          do {
            lVar13 = lVar4;
            *(undefined8 *)(param_1 + lVar13 + 0x30) = *(undefined8 *)(param_1 + lVar13 + 0x20);
            *(undefined8 *)(param_1 + lVar13 + 0x35) = *(undefined8 *)(param_1 + lVar13 + 0x25);
            puVar7 = (undefined8 *)param_1;
            if (lVar13 == -0x20) goto LAB_008a6d68;
            lVar4 = lVar13 + -0x10;
          } while (fVar15 < *(float *)(param_1 + lVar13 + 0x18));
          puVar7 = (undefined8 *)(param_1 + lVar13 + 0x20);
LAB_008a6d68:
          iVar11 = iVar11 + 1;
          *puVar7 = uVar12;
          *(float *)(puVar7 + 1) = fVar15;
          *(Grain *)((long)puVar7 + 0xc) = SUB41(uVar2,0);
          if (iVar11 == 8) {
            bVar5 = puVar9 + 2 == (undefined8 *)param_2;
            goto switchD_008a69a8_caseD_0;
          }
        }
        puVar1 = puVar9 + 2;
        lVar10 = lVar10 + 0x10;
        puVar7 = puVar9;
        puVar9 = puVar1;
      } while (puVar1 != (undefined8 *)param_2);
    }
  }
  bVar5 = true;
switchD_008a69a8_caseD_0:
  if (*(long *)(lVar3 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}


