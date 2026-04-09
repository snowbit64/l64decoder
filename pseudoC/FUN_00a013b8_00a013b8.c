// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00a013b8
// Entry Point: 00a013b8
// Size: 380 bytes
// Signature: undefined FUN_00a013b8(void)


uint FUN_00a013b8(LightSourceQueueItem **param_1,LightSourceQueueItem **param_2,
                 LightSourceQueueItem **param_3,LightSourceQueueItem **param_4,
                 LightSourceQueueItem **param_5,CompareLightSourceByShadowImportance *param_6)

{
  uint uVar1;
  LightSourceQueueItem *pLVar2;
  LightSourceQueueItem *pLVar3;
  
  uVar1 = std::__ndk1::
          __sort4<LightList::CompareLightSourceByShadowImportance&,LightSourceQueueItem**>
                    (param_1,param_2,param_3,param_4,param_6);
  pLVar2 = *param_5;
  pLVar3 = *param_4;
  if ((*(int *)(pLVar2 + 0x20) == 0) == (*(int *)(pLVar3 + 0x20) != 0)) {
    if (*(int *)(pLVar2 + 0x20) != 0) {
      return uVar1;
    }
  }
  else if (*(float *)(pLVar2 + 0x18) <= *(float *)(pLVar3 + 0x18)) {
    return uVar1;
  }
  *param_4 = pLVar2;
  *param_5 = pLVar3;
  pLVar2 = *param_4;
  pLVar3 = *param_3;
  if ((*(int *)(pLVar2 + 0x20) == 0) == (*(int *)(pLVar3 + 0x20) != 0)) {
    if (*(int *)(pLVar2 + 0x20) != 0) {
      return uVar1 + 1;
    }
  }
  else if (*(float *)(pLVar2 + 0x18) <= *(float *)(pLVar3 + 0x18)) {
    return uVar1 + 1;
  }
  *param_3 = pLVar2;
  *param_4 = pLVar3;
  pLVar2 = *param_3;
  pLVar3 = *param_2;
  if ((*(int *)(pLVar2 + 0x20) == 0) == (*(int *)(pLVar3 + 0x20) != 0)) {
    if (*(int *)(pLVar2 + 0x20) != 0) {
      return uVar1 + 2;
    }
  }
  else if (*(float *)(pLVar2 + 0x18) <= *(float *)(pLVar3 + 0x18)) {
    return uVar1 + 2;
  }
  *param_2 = pLVar2;
  *param_3 = pLVar3;
  pLVar2 = *param_2;
  pLVar3 = *param_1;
  if ((*(int *)(pLVar2 + 0x20) == 0) == (*(int *)(pLVar3 + 0x20) != 0)) {
    if (*(int *)(pLVar2 + 0x20) != 0) {
      return uVar1 + 3;
    }
  }
  else if (*(float *)(pLVar2 + 0x18) <= *(float *)(pLVar3 + 0x18)) {
    return uVar1 + 3;
  }
  *param_1 = pLVar2;
  *param_2 = pLVar3;
  return uVar1 + 4;
}


