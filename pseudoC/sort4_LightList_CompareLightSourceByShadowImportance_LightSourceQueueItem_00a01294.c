// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<LightList::CompareLightSourceByShadowImportance&,LightSourceQueueItem**>
// Entry Point: 00a01294
// Size: 292 bytes
// Signature: uint __cdecl __sort4<LightList::CompareLightSourceByShadowImportance&,LightSourceQueueItem**>(LightSourceQueueItem * * param_1, LightSourceQueueItem * * param_2, LightSourceQueueItem * * param_3, LightSourceQueueItem * * param_4, CompareLightSourceByShadowImportance * param_5)


/* unsigned int std::__ndk1::__sort4<LightList::CompareLightSourceByShadowImportance&,
   LightSourceQueueItem**>(LightSourceQueueItem**, LightSourceQueueItem**, LightSourceQueueItem**,
   LightSourceQueueItem**, LightList::CompareLightSourceByShadowImportance&) */

uint std::__ndk1::__sort4<LightList::CompareLightSourceByShadowImportance&,LightSourceQueueItem**>
               (LightSourceQueueItem **param_1,LightSourceQueueItem **param_2,
               LightSourceQueueItem **param_3,LightSourceQueueItem **param_4,
               CompareLightSourceByShadowImportance *param_5)

{
  uint uVar1;
  LightSourceQueueItem *pLVar2;
  LightSourceQueueItem *pLVar3;
  
  uVar1 = __sort3<LightList::CompareLightSourceByShadowImportance&,LightSourceQueueItem**>
                    (param_1,param_2,param_3,param_5);
  pLVar2 = *param_4;
  pLVar3 = *param_3;
  if ((*(int *)(pLVar2 + 0x20) == 0) == (*(int *)(pLVar3 + 0x20) != 0)) {
    if (*(int *)(pLVar2 + 0x20) != 0) {
      return uVar1;
    }
  }
  else if (*(float *)(pLVar2 + 0x18) <= *(float *)(pLVar3 + 0x18)) {
    return uVar1;
  }
  *param_3 = pLVar2;
  *param_4 = pLVar3;
  pLVar2 = *param_3;
  pLVar3 = *param_2;
  if ((*(int *)(pLVar2 + 0x20) == 0) == (*(int *)(pLVar3 + 0x20) != 0)) {
    if (*(int *)(pLVar2 + 0x20) != 0) {
      return uVar1 + 1;
    }
  }
  else if (*(float *)(pLVar2 + 0x18) <= *(float *)(pLVar3 + 0x18)) {
    return uVar1 + 1;
  }
  *param_2 = pLVar2;
  *param_3 = pLVar3;
  pLVar2 = *param_2;
  pLVar3 = *param_1;
  if ((*(int *)(pLVar2 + 0x20) == 0) == (*(int *)(pLVar3 + 0x20) != 0)) {
    if (*(int *)(pLVar2 + 0x20) != 0) {
      return uVar1 + 2;
    }
  }
  else if (*(float *)(pLVar2 + 0x18) <= *(float *)(pLVar3 + 0x18)) {
    return uVar1 + 2;
  }
  *param_1 = pLVar2;
  *param_2 = pLVar3;
  return uVar1 + 3;
}


