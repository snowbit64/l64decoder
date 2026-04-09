// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<GranularSynthesisRuntimeSettings::Grain::SortByRpm&,GranularSynthesisRuntimeSettings::Grain*>
// Entry Point: 008a6730
// Size: 544 bytes
// Signature: uint __cdecl __sort4<GranularSynthesisRuntimeSettings::Grain::SortByRpm&,GranularSynthesisRuntimeSettings::Grain*>(Grain * param_1, Grain * param_2, Grain * param_3, Grain * param_4, SortByRpm * param_5)


/* unsigned int std::__ndk1::__sort4<GranularSynthesisRuntimeSettings::Grain::SortByRpm&,
   GranularSynthesisRuntimeSettings::Grain*>(GranularSynthesisRuntimeSettings::Grain*,
   GranularSynthesisRuntimeSettings::Grain*, GranularSynthesisRuntimeSettings::Grain*,
   GranularSynthesisRuntimeSettings::Grain*, GranularSynthesisRuntimeSettings::Grain::SortByRpm&) */

uint std::__ndk1::
     __sort4<GranularSynthesisRuntimeSettings::Grain::SortByRpm&,GranularSynthesisRuntimeSettings::Grain*>
               (Grain *param_1,Grain *param_2,Grain *param_3,Grain *param_4,SortByRpm *param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined3 uStack_2b;
  undefined5 uStack_28;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  fVar6 = *(float *)(param_2 + 8);
  if (*(float *)(param_1 + 8) <= fVar6) {
    if (fVar6 <= *(float *)(param_3 + 8)) {
      uVar2 = 0;
      goto LAB_008a6870;
    }
    uVar4 = *(undefined8 *)param_2;
    uVar5 = *(undefined8 *)(param_3 + 5);
    uStack_28 = (undefined5)*(undefined8 *)(param_2 + 8);
    uStack_2b = (undefined3)((ulong)uVar4 >> 0x28);
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 5) = uVar5;
    *(ulong *)(param_3 + 5) = CONCAT53(uStack_28,uStack_2b);
    *(undefined8 *)param_3 = uVar4;
    if (*(float *)(param_2 + 8) < *(float *)(param_1 + 8)) {
      uVar4 = *(undefined8 *)param_1;
      uVar5 = *(undefined8 *)(param_2 + 5);
      uStack_28 = (undefined5)*(undefined8 *)(param_1 + 8);
      uStack_2b = (undefined3)((ulong)uVar4 >> 0x28);
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      uVar2 = 2;
      *(undefined8 *)(param_1 + 5) = uVar5;
      *(ulong *)(param_2 + 5) = CONCAT53(uStack_28,uStack_2b);
      *(undefined8 *)param_2 = uVar4;
      goto LAB_008a6870;
    }
LAB_008a686c:
    uVar2 = 1;
  }
  else {
    if (fVar6 <= *(float *)(param_3 + 8)) {
      uVar4 = *(undefined8 *)param_1;
      uVar5 = *(undefined8 *)(param_2 + 5);
      uStack_28 = (undefined5)*(undefined8 *)(param_1 + 8);
      uStack_2b = (undefined3)((ulong)uVar4 >> 0x28);
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 5) = uVar5;
      *(ulong *)(param_2 + 5) = CONCAT53(uStack_28,uStack_2b);
      *(undefined8 *)param_2 = uVar4;
      if (*(float *)(param_2 + 8) <= *(float *)(param_3 + 8)) goto LAB_008a686c;
      uVar7 = *(undefined8 *)param_2;
      uVar4 = *(undefined8 *)(param_3 + 5);
      uStack_28 = (undefined5)*(undefined8 *)(param_2 + 8);
      uStack_2b = (undefined3)((ulong)uVar7 >> 0x28);
      uVar5 = CONCAT53(uStack_28,uStack_2b);
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      uVar2 = 2;
      *(undefined8 *)(param_2 + 5) = uVar4;
    }
    else {
      uVar7 = *(undefined8 *)param_1;
      uVar4 = *(undefined8 *)(param_3 + 5);
      uStack_28 = (undefined5)*(undefined8 *)(param_1 + 8);
      uStack_2b = (undefined3)((ulong)uVar7 >> 0x28);
      uVar5 = CONCAT53(uStack_28,uStack_2b);
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      uVar2 = 1;
      *(undefined8 *)(param_1 + 5) = uVar4;
    }
    *(undefined8 *)(param_3 + 5) = uVar5;
    *(undefined8 *)param_3 = uVar7;
  }
LAB_008a6870:
  if (*(float *)(param_4 + 8) < *(float *)(param_3 + 8)) {
    uVar4 = *(undefined8 *)param_3;
    uVar5 = *(undefined8 *)(param_4 + 5);
    uStack_28 = (undefined5)*(undefined8 *)(param_3 + 8);
    uStack_2b = (undefined3)((ulong)uVar4 >> 0x28);
    *(undefined8 *)param_3 = *(undefined8 *)param_4;
    *(undefined8 *)(param_3 + 5) = uVar5;
    *(ulong *)(param_4 + 5) = CONCAT53(uStack_28,uStack_2b);
    *(undefined8 *)param_4 = uVar4;
    if (*(float *)(param_2 + 8) <= *(float *)(param_3 + 8)) {
      uVar2 = uVar2 + 1;
    }
    else {
      uVar4 = *(undefined8 *)param_2;
      uVar5 = *(undefined8 *)(param_3 + 5);
      uStack_28 = (undefined5)*(undefined8 *)(param_2 + 8);
      uStack_2b = (undefined3)((ulong)uVar4 >> 0x28);
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 5) = uVar5;
      *(ulong *)(param_3 + 5) = CONCAT53(uStack_28,uStack_2b);
      *(undefined8 *)param_3 = uVar4;
      if (*(float *)(param_1 + 8) <= *(float *)(param_2 + 8)) {
        uVar2 = uVar2 + 2;
      }
      else {
        uVar4 = *(undefined8 *)param_1;
        uVar2 = uVar2 + 3;
        uVar5 = *(undefined8 *)(param_2 + 5);
        uStack_28 = (undefined5)*(undefined8 *)(param_1 + 8);
        uStack_2b = (undefined3)((ulong)uVar4 >> 0x28);
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        *(undefined8 *)(param_1 + 5) = uVar5;
        *(ulong *)(param_2 + 5) = CONCAT53(uStack_28,uStack_2b);
        *(undefined8 *)param_2 = uVar4;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


