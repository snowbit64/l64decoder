// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<GranularSynthesisRuntimeSettings::Grain::SortByWavIdx&,GranularSynthesisRuntimeSettings::Grain*>
// Entry Point: 008a7a08
// Size: 1248 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<GranularSynthesisRuntimeSettings::Grain::SortByWavIdx&,GranularSynthesisRuntimeSettings::Grain*>(Grain * param_1, Grain * param_2, SortByWavIdx * param_3)


/* bool 
   std::__ndk1::__insertion_sort_incomplete<GranularSynthesisRuntimeSettings::Grain::SortByWavIdx&,
   GranularSynthesisRuntimeSettings::Grain*>(GranularSynthesisRuntimeSettings::Grain*,
   GranularSynthesisRuntimeSettings::Grain*, GranularSynthesisRuntimeSettings::Grain::SortByWavIdx&)
    */

bool std::__ndk1::
     __insertion_sort_incomplete<GranularSynthesisRuntimeSettings::Grain::SortByWavIdx&,GranularSynthesisRuntimeSettings::Grain*>
               (Grain *param_1,Grain *param_2,SortByWavIdx *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  
  lVar5 = tpidr_el0;
  lVar10 = *(long *)(lVar5 + 0x28);
  uVar8 = (long)param_2 - (long)param_1 >> 4;
  if (uVar8 < 6) {
    bVar7 = true;
    switch(uVar8) {
    default:
      goto switchD_008a7a60_caseD_0;
    case 2:
      if (*(uint *)(param_2 + -0xc) < *(uint *)(param_1 + 4)) {
        uVar17 = *(undefined8 *)param_1;
        bVar7 = true;
        uVar14 = *(undefined8 *)(param_2 + -0xb);
        uStack_58 = (undefined5)*(undefined8 *)(param_1 + 8);
        uStack_5b = (undefined3)((ulong)uVar17 >> 0x28);
        *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -0x10);
        *(undefined8 *)(param_1 + 5) = uVar14;
        *(ulong *)(param_2 + -0xb) = CONCAT53(uStack_58,uStack_5b);
        *(undefined8 *)(param_2 + -0x10) = uVar17;
        goto switchD_008a7a60_caseD_0;
      }
      break;
    case 3:
      uVar2 = *(uint *)(param_1 + 0x14);
      puVar9 = (undefined8 *)(param_1 + 0x10);
      puVar11 = (undefined8 *)(param_2 + -0x10);
      if (uVar2 < *(uint *)(param_1 + 4)) {
        if (*(uint *)(param_2 + -0xc) < uVar2) {
          uVar17 = *(undefined8 *)param_1;
          bVar7 = true;
          uVar14 = *(undefined8 *)(param_2 + -0xb);
          uStack_58 = (undefined5)*(undefined8 *)(param_1 + 8);
          uStack_5b = (undefined3)((ulong)uVar17 >> 0x28);
          *(undefined8 *)param_1 = *puVar11;
          *(undefined8 *)(param_1 + 5) = uVar14;
          *(ulong *)(param_2 + -0xb) = CONCAT53(uStack_58,uStack_5b);
          *puVar11 = uVar17;
          goto switchD_008a7a60_caseD_0;
        }
        uVar14 = *(undefined8 *)param_1;
        uStack_58 = (undefined5)*(undefined8 *)(param_1 + 8);
        uStack_5b = (undefined3)((ulong)uVar14 >> 0x28);
        *(undefined8 *)param_1 = *puVar9;
        *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_1 + 0x15);
        *puVar9 = uVar14;
        *(ulong *)(param_1 + 0x15) = CONCAT53(uStack_58,uStack_5b);
        if (*(uint *)(param_2 + -0xc) < *(uint *)(param_1 + 0x14)) {
          uVar17 = *puVar9;
          bVar7 = true;
          uVar14 = *(undefined8 *)(param_2 + -0xb);
          uStack_58 = (undefined5)*(undefined8 *)(param_1 + 0x18);
          uStack_5b = (undefined3)((ulong)uVar17 >> 0x28);
          *puVar9 = *puVar11;
          *(undefined8 *)(param_1 + 0x15) = uVar14;
          *(ulong *)(param_2 + -0xb) = CONCAT53(uStack_58,uStack_5b);
          *puVar11 = uVar17;
          goto switchD_008a7a60_caseD_0;
        }
      }
      else if (*(uint *)(param_2 + -0xc) < uVar2) {
        uVar17 = *puVar9;
        uVar14 = *(undefined8 *)(param_2 + -0xb);
        uStack_58 = (undefined5)*(undefined8 *)(param_1 + 0x18);
        uStack_5b = (undefined3)((ulong)uVar17 >> 0x28);
        *puVar9 = *puVar11;
        *(undefined8 *)(param_1 + 0x15) = uVar14;
        *(ulong *)(param_2 + -0xb) = CONCAT53(uStack_58,uStack_5b);
        *puVar11 = uVar17;
        if (*(uint *)(param_1 + 0x14) < *(uint *)(param_1 + 4)) {
          uVar14 = *(undefined8 *)param_1;
          bVar7 = true;
          uStack_58 = (undefined5)*(undefined8 *)(param_1 + 8);
          uStack_5b = (undefined3)((ulong)uVar14 >> 0x28);
          *(undefined8 *)param_1 = *puVar9;
          *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_1 + 0x15);
          *puVar9 = uVar14;
          *(ulong *)(param_1 + 0x15) = CONCAT53(uStack_58,uStack_5b);
          goto switchD_008a7a60_caseD_0;
        }
      }
      break;
    case 4:
      __sort4<GranularSynthesisRuntimeSettings::Grain::SortByWavIdx&,GranularSynthesisRuntimeSettings::Grain*>
                (param_1,param_1 + 0x10,param_1 + 0x20,param_2 + -0x10,param_3);
      break;
    case 5:
      puVar9 = (undefined8 *)(param_1 + 0x10);
      puVar11 = (undefined8 *)(param_1 + 0x20);
      puVar1 = (undefined8 *)(param_1 + 0x30);
      __sort4<GranularSynthesisRuntimeSettings::Grain::SortByWavIdx&,GranularSynthesisRuntimeSettings::Grain*>
                (param_1,(Grain *)puVar9,(Grain *)puVar11,(Grain *)puVar1,param_3);
      if (*(uint *)(param_2 + -0xc) < *(uint *)(param_1 + 0x34)) {
        uVar17 = *puVar1;
        uVar14 = *(undefined8 *)(param_2 + -0xb);
        uStack_58 = (undefined5)*(undefined8 *)(param_1 + 0x38);
        uStack_5b = (undefined3)((ulong)uVar17 >> 0x28);
        *puVar1 = *(undefined8 *)(param_2 + -0x10);
        *(undefined8 *)(param_1 + 0x35) = uVar14;
        *(ulong *)(param_2 + -0xb) = CONCAT53(uStack_58,uStack_5b);
        *(undefined8 *)(param_2 + -0x10) = uVar17;
        if (*(uint *)(param_1 + 0x34) < *(uint *)(param_1 + 0x24)) {
          uVar14 = *puVar11;
          *puVar11 = *puVar1;
          *(undefined8 *)(param_1 + 0x25) = *(undefined8 *)(param_1 + 0x35);
          uStack_58 = (undefined5)*(undefined8 *)(param_1 + 0x28);
          uStack_5b = (undefined3)((ulong)uVar14 >> 0x28);
          *puVar1 = uVar14;
          *(ulong *)(param_1 + 0x35) = CONCAT53(uStack_58,uStack_5b);
          if (*(uint *)(param_1 + 0x24) < *(uint *)(param_1 + 0x14)) {
            uVar14 = *puVar9;
            *puVar9 = *puVar11;
            *(undefined8 *)(param_1 + 0x15) = *(undefined8 *)(param_1 + 0x25);
            uStack_58 = (undefined5)*(undefined8 *)(param_1 + 0x18);
            uStack_5b = (undefined3)((ulong)uVar14 >> 0x28);
            *puVar11 = uVar14;
            *(ulong *)(param_1 + 0x25) = CONCAT53(uStack_58,uStack_5b);
            if (*(uint *)(param_1 + 0x14) < *(uint *)(param_1 + 4)) {
              uVar14 = *(undefined8 *)param_1;
              bVar7 = true;
              uStack_58 = (undefined5)*(undefined8 *)(param_1 + 8);
              uStack_5b = (undefined3)((ulong)uVar14 >> 0x28);
              *(undefined8 *)param_1 = *puVar9;
              *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_1 + 0x15);
              *puVar9 = uVar14;
              *(ulong *)(param_1 + 0x15) = CONCAT53(uStack_58,uStack_5b);
              goto switchD_008a7a60_caseD_0;
            }
          }
        }
      }
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x14);
    puVar9 = (undefined8 *)(param_1 + 0x20);
    puVar11 = (undefined8 *)(param_1 + 0x10);
    uVar3 = *(uint *)(param_1 + 0x24);
    if (uVar2 < *(uint *)(param_1 + 4)) {
      if (uVar3 < uVar2) {
        uVar14 = *(undefined8 *)param_1;
        uStack_58 = (undefined5)*(undefined8 *)(param_1 + 8);
        uStack_5b = (undefined3)((ulong)uVar14 >> 0x28);
        *(undefined8 *)param_1 = *puVar9;
        *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_1 + 0x25);
        *puVar9 = uVar14;
        *(ulong *)(param_1 + 0x25) = CONCAT53(uStack_58,uStack_5b);
      }
      else {
        uVar14 = *(undefined8 *)param_1;
        uStack_58 = (undefined5)*(undefined8 *)(param_1 + 8);
        uStack_5b = (undefined3)((ulong)uVar14 >> 0x28);
        *(undefined8 *)param_1 = *puVar11;
        *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_1 + 0x15);
        *puVar11 = uVar14;
        *(ulong *)(param_1 + 0x15) = CONCAT53(uStack_58,uStack_5b);
        if (uVar3 < *(uint *)(param_1 + 0x14)) {
          uVar14 = *puVar11;
          uStack_58 = (undefined5)*(undefined8 *)(param_1 + 0x18);
          uStack_5b = (undefined3)((ulong)uVar14 >> 0x28);
          *puVar11 = *puVar9;
          *(undefined8 *)(param_1 + 0x15) = *(undefined8 *)(param_1 + 0x25);
          *puVar9 = uVar14;
          *(ulong *)(param_1 + 0x25) = CONCAT53(uStack_58,uStack_5b);
        }
      }
    }
    else if (uVar3 < uVar2) {
      uVar14 = *puVar11;
      *puVar11 = *puVar9;
      *(undefined8 *)(param_1 + 0x15) = *(undefined8 *)(param_1 + 0x25);
      uStack_58 = (undefined5)*(undefined8 *)(param_1 + 0x18);
      uStack_5b = (undefined3)((ulong)uVar14 >> 0x28);
      *puVar9 = uVar14;
      *(ulong *)(param_1 + 0x25) = CONCAT53(uStack_58,uStack_5b);
      if (*(uint *)(param_1 + 0x14) < *(uint *)(param_1 + 4)) {
        uVar14 = *(undefined8 *)param_1;
        uStack_58 = (undefined5)*(undefined8 *)(param_1 + 8);
        uStack_5b = (undefined3)((ulong)uVar14 >> 0x28);
        *(undefined8 *)param_1 = *puVar11;
        *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_1 + 0x15);
        *puVar11 = uVar14;
        *(ulong *)(param_1 + 0x15) = CONCAT53(uStack_58,uStack_5b);
      }
    }
    if (param_1 + 0x30 != param_2) {
      lVar12 = 0;
      iVar13 = 0;
      puVar11 = (undefined8 *)(param_1 + 0x30);
      do {
        uVar2 = *(uint *)((long)puVar11 + 4);
        if (uVar2 < *(uint *)((long)puVar9 + 4)) {
          uVar4 = *(undefined4 *)puVar11;
          uVar14 = puVar11[1];
          lVar6 = lVar12;
          do {
            lVar16 = lVar6;
            *(undefined8 *)(param_1 + lVar16 + 0x30) = *(undefined8 *)(param_1 + lVar16 + 0x20);
            *(undefined8 *)(param_1 + lVar16 + 0x35) = *(undefined8 *)(param_1 + lVar16 + 0x25);
            puVar15 = (undefined4 *)param_1;
            if (lVar16 == -0x20) goto LAB_008a7e20;
            lVar6 = lVar16 + -0x10;
          } while (uVar2 < *(uint *)(param_1 + lVar16 + 0x14));
          puVar15 = (undefined4 *)(param_1 + lVar16 + 0x20);
LAB_008a7e20:
          iVar13 = iVar13 + 1;
          *puVar15 = uVar4;
          puVar15[1] = uVar2;
          puVar15[2] = (int)uVar14;
          *(char *)(puVar15 + 3) = (char)((ulong)uVar14 >> 0x20);
          if (iVar13 == 8) {
            bVar7 = puVar11 + 2 == (undefined8 *)param_2;
            goto switchD_008a7a60_caseD_0;
          }
        }
        puVar1 = puVar11 + 2;
        lVar12 = lVar12 + 0x10;
        puVar9 = puVar11;
        puVar11 = puVar1;
      } while (puVar1 != (undefined8 *)param_2);
    }
  }
  bVar7 = true;
switchD_008a7a60_caseD_0:
  if (*(long *)(lVar5 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar7;
}


