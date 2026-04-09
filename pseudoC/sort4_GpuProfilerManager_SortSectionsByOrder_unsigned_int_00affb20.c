// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<GpuProfilerManager::SortSectionsByOrder&,unsigned_int*>
// Entry Point: 00affb20
// Size: 408 bytes
// Signature: uint __cdecl __sort4<GpuProfilerManager::SortSectionsByOrder&,unsigned_int*>(uint * param_1, uint * param_2, uint * param_3, uint * param_4, SortSectionsByOrder * param_5)


/* unsigned int std::__ndk1::__sort4<GpuProfilerManager::SortSectionsByOrder&, unsigned
   int*>(unsigned int*, unsigned int*, unsigned int*, unsigned int*,
   GpuProfilerManager::SortSectionsByOrder&) */

uint std::__ndk1::__sort4<GpuProfilerManager::SortSectionsByOrder&,unsigned_int*>
               (uint *param_1,uint *param_2,uint *param_3,uint *param_4,SortSectionsByOrder *param_5
               )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  
  lVar7 = *(long *)param_5;
  uVar5 = *param_2;
  uVar1 = *param_1;
  uVar2 = *param_3;
  uVar8 = (ulong)uVar2;
  uVar3 = *(uint *)(lVar7 + (ulong)uVar5 * 0x78 + 0x18);
  puVar6 = (uint *)(lVar7 + (ulong)uVar1 * 0x78 + 0x18);
  uVar4 = *(uint *)(lVar7 + uVar8 * 0x78 + 0x18);
  if (uVar3 < *puVar6) {
    if (uVar4 < uVar3) {
      *param_1 = uVar2;
      uVar5 = 1;
    }
    else {
      *param_1 = uVar5;
      *param_2 = uVar1;
      uVar2 = *param_3;
      uVar8 = (ulong)uVar2;
      if (*puVar6 <= *(uint *)(lVar7 + (ulong)uVar2 * 0x78 + 0x18)) goto LAB_00affc08;
      uVar5 = 2;
      *param_2 = uVar2;
    }
    uVar8 = (ulong)uVar1;
    *param_3 = uVar1;
  }
  else {
    if (uVar3 <= uVar4) {
      uVar5 = 0;
      goto LAB_00affc14;
    }
    *param_2 = uVar2;
    *param_3 = uVar5;
    uVar1 = *param_1;
    uVar8 = (ulong)uVar5;
    if (*(uint *)(lVar7 + (ulong)*param_2 * 0x78 + 0x18) <
        *(uint *)(lVar7 + (ulong)uVar1 * 0x78 + 0x18)) {
      *param_1 = *param_2;
      uVar5 = 2;
      *param_2 = uVar1;
      uVar8 = (ulong)*param_3;
      goto LAB_00affc14;
    }
LAB_00affc08:
    uVar5 = 1;
  }
LAB_00affc14:
  if (*(uint *)(lVar7 + (ulong)*param_4 * 0x78 + 0x18) < *(uint *)(lVar7 + uVar8 * 0x78 + 0x18)) {
    *param_3 = *param_4;
    *param_4 = (uint)uVar8;
    uVar1 = *param_2;
    if (*(uint *)(lVar7 + (ulong)uVar1 * 0x78 + 0x18) <=
        *(uint *)(lVar7 + (ulong)*param_3 * 0x78 + 0x18)) {
      return uVar5 + 1;
    }
    *param_2 = *param_3;
    *param_3 = uVar1;
    uVar1 = *param_1;
    if (*(uint *)(lVar7 + (ulong)uVar1 * 0x78 + 0x18) <=
        *(uint *)(lVar7 + (ulong)*param_2 * 0x78 + 0x18)) {
      return uVar5 + 2;
    }
    uVar5 = uVar5 + 3;
    *param_1 = *param_2;
    *param_2 = uVar1;
  }
  return uVar5;
}


