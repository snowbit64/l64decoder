// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort3<LightList::CompareLightSourceByShadowImportance&,LightSourceQueueItem**>
// Entry Point: 00a0110c
// Size: 392 bytes
// Signature: uint __cdecl __sort3<LightList::CompareLightSourceByShadowImportance&,LightSourceQueueItem**>(LightSourceQueueItem * * param_1, LightSourceQueueItem * * param_2, LightSourceQueueItem * * param_3, CompareLightSourceByShadowImportance * param_4)


/* unsigned int std::__ndk1::__sort3<LightList::CompareLightSourceByShadowImportance&,
   LightSourceQueueItem**>(LightSourceQueueItem**, LightSourceQueueItem**, LightSourceQueueItem**,
   LightList::CompareLightSourceByShadowImportance&) */

uint std::__ndk1::__sort3<LightList::CompareLightSourceByShadowImportance&,LightSourceQueueItem**>
               (LightSourceQueueItem **param_1,LightSourceQueueItem **param_2,
               LightSourceQueueItem **param_3,CompareLightSourceByShadowImportance *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  LightSourceQueueItem *pLVar4;
  LightSourceQueueItem *pLVar5;
  LightSourceQueueItem *pLVar6;
  
  pLVar4 = *param_2;
  pLVar5 = *param_1;
  iVar1 = *(int *)(pLVar4 + 0x20);
  iVar2 = *(int *)(pLVar5 + 0x20);
  if ((iVar1 == 0) == (iVar2 != 0)) {
    if (iVar1 != 0) goto LAB_00a01184;
  }
  else if (*(float *)(pLVar4 + 0x18) <= *(float *)(pLVar5 + 0x18)) {
LAB_00a01184:
    pLVar5 = *param_3;
    if ((iVar1 != 0) == (*(int *)(pLVar5 + 0x20) == 0)) {
      if (*(int *)(pLVar5 + 0x20) != 0) {
        return 0;
      }
    }
    else if (*(float *)(pLVar5 + 0x18) <= *(float *)(pLVar4 + 0x18)) {
      return 0;
    }
    *param_2 = pLVar5;
    *param_3 = pLVar4;
    pLVar4 = *param_2;
    pLVar5 = *param_1;
    if ((*(int *)(pLVar4 + 0x20) == 0) == (*(int *)(pLVar5 + 0x20) != 0)) {
      if (*(int *)(pLVar4 + 0x20) != 0) {
        return 1;
      }
    }
    else if (*(float *)(pLVar4 + 0x18) <= *(float *)(pLVar5 + 0x18)) {
      return 1;
    }
    *param_1 = pLVar4;
    *param_2 = pLVar5;
    return 2;
  }
  pLVar6 = *param_3;
  if ((iVar1 != 0) == (*(int *)(pLVar6 + 0x20) == 0)) {
    if (*(int *)(pLVar6 + 0x20) != 0) goto LAB_00a01214;
  }
  else if (*(float *)(pLVar6 + 0x18) <= *(float *)(pLVar4 + 0x18)) {
LAB_00a01214:
    *param_1 = pLVar4;
    *param_2 = pLVar5;
    pLVar4 = *param_3;
    if ((iVar2 != 0) == (*(int *)(pLVar4 + 0x20) == 0)) {
      if (*(int *)(pLVar4 + 0x20) != 0) {
        return 1;
      }
    }
    else if (*(float *)(pLVar4 + 0x18) <= *(float *)(pLVar5 + 0x18)) {
      return 1;
    }
    uVar3 = 2;
    *param_2 = pLVar4;
    goto LAB_00a01288;
  }
  uVar3 = 1;
  *param_1 = pLVar6;
LAB_00a01288:
  *param_3 = pLVar5;
  return uVar3;
}


