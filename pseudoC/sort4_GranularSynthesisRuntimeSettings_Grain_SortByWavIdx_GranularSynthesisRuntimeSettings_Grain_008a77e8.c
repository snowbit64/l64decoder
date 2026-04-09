// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<GranularSynthesisRuntimeSettings::Grain::SortByWavIdx&,GranularSynthesisRuntimeSettings::Grain*>
// Entry Point: 008a77e8
// Size: 544 bytes
// Signature: uint __cdecl __sort4<GranularSynthesisRuntimeSettings::Grain::SortByWavIdx&,GranularSynthesisRuntimeSettings::Grain*>(Grain * param_1, Grain * param_2, Grain * param_3, Grain * param_4, SortByWavIdx * param_5)


/* unsigned int std::__ndk1::__sort4<GranularSynthesisRuntimeSettings::Grain::SortByWavIdx&,
   GranularSynthesisRuntimeSettings::Grain*>(GranularSynthesisRuntimeSettings::Grain*,
   GranularSynthesisRuntimeSettings::Grain*, GranularSynthesisRuntimeSettings::Grain*,
   GranularSynthesisRuntimeSettings::Grain*, GranularSynthesisRuntimeSettings::Grain::SortByWavIdx&)
    */

uint std::__ndk1::
     __sort4<GranularSynthesisRuntimeSettings::Grain::SortByWavIdx&,GranularSynthesisRuntimeSettings::Grain*>
               (Grain *param_1,Grain *param_2,Grain *param_3,Grain *param_4,SortByWavIdx *param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined3 uStack_2b;
  undefined5 uStack_28;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar2 = *(uint *)(param_2 + 4);
  if (uVar2 < *(uint *)(param_1 + 4)) {
    if (*(uint *)(param_3 + 4) < uVar2) {
      uVar6 = *(undefined8 *)param_1;
      uVar4 = *(undefined8 *)(param_3 + 5);
      uStack_28 = (undefined5)*(undefined8 *)(param_1 + 8);
      uStack_2b = (undefined3)((ulong)uVar6 >> 0x28);
      uVar5 = CONCAT53(uStack_28,uStack_2b);
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      uVar2 = 1;
      *(undefined8 *)(param_1 + 5) = uVar4;
    }
    else {
      uVar4 = *(undefined8 *)param_1;
      uVar5 = *(undefined8 *)(param_2 + 5);
      uStack_28 = (undefined5)*(undefined8 *)(param_1 + 8);
      uStack_2b = (undefined3)((ulong)uVar4 >> 0x28);
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 5) = uVar5;
      *(ulong *)(param_2 + 5) = CONCAT53(uStack_28,uStack_2b);
      *(undefined8 *)param_2 = uVar4;
      if (*(uint *)(param_2 + 4) <= *(uint *)(param_3 + 4)) goto LAB_008a7924;
      uVar6 = *(undefined8 *)param_2;
      uVar4 = *(undefined8 *)(param_3 + 5);
      uStack_28 = (undefined5)*(undefined8 *)(param_2 + 8);
      uStack_2b = (undefined3)((ulong)uVar6 >> 0x28);
      uVar5 = CONCAT53(uStack_28,uStack_2b);
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      uVar2 = 2;
      *(undefined8 *)(param_2 + 5) = uVar4;
    }
    *(undefined8 *)(param_3 + 5) = uVar5;
    *(undefined8 *)param_3 = uVar6;
  }
  else {
    if (uVar2 <= *(uint *)(param_3 + 4)) {
      uVar2 = 0;
      goto LAB_008a7928;
    }
    uVar4 = *(undefined8 *)param_2;
    uVar5 = *(undefined8 *)(param_3 + 5);
    uStack_28 = (undefined5)*(undefined8 *)(param_2 + 8);
    uStack_2b = (undefined3)((ulong)uVar4 >> 0x28);
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 5) = uVar5;
    *(ulong *)(param_3 + 5) = CONCAT53(uStack_28,uStack_2b);
    *(undefined8 *)param_3 = uVar4;
    if (*(uint *)(param_2 + 4) < *(uint *)(param_1 + 4)) {
      uVar4 = *(undefined8 *)param_1;
      uVar5 = *(undefined8 *)(param_2 + 5);
      uStack_28 = (undefined5)*(undefined8 *)(param_1 + 8);
      uStack_2b = (undefined3)((ulong)uVar4 >> 0x28);
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      uVar2 = 2;
      *(undefined8 *)(param_1 + 5) = uVar5;
      *(ulong *)(param_2 + 5) = CONCAT53(uStack_28,uStack_2b);
      *(undefined8 *)param_2 = uVar4;
      goto LAB_008a7928;
    }
LAB_008a7924:
    uVar2 = 1;
  }
LAB_008a7928:
  if (*(uint *)(param_4 + 4) < *(uint *)(param_3 + 4)) {
    uVar4 = *(undefined8 *)param_3;
    uVar5 = *(undefined8 *)(param_4 + 5);
    uStack_28 = (undefined5)*(undefined8 *)(param_3 + 8);
    uStack_2b = (undefined3)((ulong)uVar4 >> 0x28);
    *(undefined8 *)param_3 = *(undefined8 *)param_4;
    *(undefined8 *)(param_3 + 5) = uVar5;
    *(ulong *)(param_4 + 5) = CONCAT53(uStack_28,uStack_2b);
    *(undefined8 *)param_4 = uVar4;
    if (*(uint *)(param_3 + 4) < *(uint *)(param_2 + 4)) {
      uVar4 = *(undefined8 *)param_2;
      uVar5 = *(undefined8 *)(param_3 + 5);
      uStack_28 = (undefined5)*(undefined8 *)(param_2 + 8);
      uStack_2b = (undefined3)((ulong)uVar4 >> 0x28);
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 5) = uVar5;
      *(ulong *)(param_3 + 5) = CONCAT53(uStack_28,uStack_2b);
      *(undefined8 *)param_3 = uVar4;
      if (*(uint *)(param_2 + 4) < *(uint *)(param_1 + 4)) {
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
      else {
        uVar2 = uVar2 + 2;
      }
    }
    else {
      uVar2 = uVar2 + 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


