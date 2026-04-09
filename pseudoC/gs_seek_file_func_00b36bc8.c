// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gs_seek_file_func
// Entry Point: 00b36bc8
// Size: 160 bytes
// Signature: undefined __cdecl gs_seek_file_func(void * param_1, void * param_2, ulonglong param_3, int param_4)


/* ZIPFileArchive::gs_seek_file_func(void*, void*, unsigned long long, int) */

undefined8
ZIPFileArchive::gs_seek_file_func(void *param_1,void *param_2,ulonglong param_3,int param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)((long)param_1 + 0x8060);
  if (param_4 != 0) {
    if (param_4 == 2) {
      lVar2 = (**(code **)(**(long **)((long)param_1 + 0x10) + 0x48))();
      param_3 = lVar2 - param_3;
    }
    else {
      if (param_4 != 1) {
        return 0xffffffffffffffff;
      }
      param_3 = lVar4 + param_3;
    }
  }
  puVar1 = (undefined8 *)((long)param_1 + 0x8058);
  uVar3 = lVar4 - (ulong)*(uint *)puVar1;
  if (param_3 < uVar3 || uVar3 + *(uint *)((long)param_1 + 0x805c) <= param_3) {
    *puVar1 = 0;
  }
  else {
    *(int *)puVar1 = (int)param_3 - (int)uVar3;
  }
  *(ulonglong *)((long)param_1 + 0x8060) = param_3;
  return 0;
}


