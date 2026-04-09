// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onChildCompleteCallback
// Entry Point: 008891c0
// Size: 56 bytes
// Signature: undefined __cdecl onChildCompleteCallback(void * param_1, uint param_2)


/* BTModifyResult::onChildCompleteCallback(void*, unsigned int) */

void BTModifyResult::onChildCompleteCallback(void *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((long)param_1 + 0x3c);
  if (iVar1 != 2) {
    if (iVar1 != 0) {
      *(undefined4 *)((long)param_1 + 0x38) = 1;
      return;
    }
    iVar1 = 1;
    if (*(int *)(*(long *)((long)param_1 + 0x30) + 8) == 1) {
      iVar1 = 2;
    }
  }
  *(int *)((long)param_1 + 0x38) = iVar1;
  return;
}


