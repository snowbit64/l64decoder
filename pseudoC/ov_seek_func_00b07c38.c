// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_seek_func
// Entry Point: 00b07c38
// Size: 136 bytes
// Signature: undefined __cdecl ov_seek_func(void * param_1, longlong param_2, int param_3)


/* AudioLoaderOGG::ov_seek_func(void*, long long, int) */

int AudioLoaderOGG::ov_seek_func(void *param_1,longlong param_2,int param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)((long)param_1 + 0x10);
  if (plVar2 == (long *)0x0) {
    return -1;
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      param_2 = *(long *)((long)param_1 + 8) + param_2;
    }
    else {
      if (param_3 != 2) {
        param_2 = *(long *)((long)param_1 + 8);
        goto LAB_00b07c9c;
      }
      lVar3 = (**(code **)(*plVar2 + 0x48))();
      param_2 = lVar3 - param_2;
      plVar2 = *(long **)((long)param_1 + 0x10);
    }
  }
  *(longlong *)((long)param_1 + 8) = param_2;
LAB_00b07c9c:
  uVar1 = (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
  return (uVar1 & 1) - 1;
}


