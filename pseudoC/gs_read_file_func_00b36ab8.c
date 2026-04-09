// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gs_read_file_func
// Entry Point: 00b36ab8
// Size: 252 bytes
// Signature: undefined __cdecl gs_read_file_func(void * param_1, void * param_2, void * param_3, ulong param_4)


/* ZIPFileArchive::gs_read_file_func(void*, void*, void*, unsigned long) */

uint ZIPFileArchive::gs_read_file_func(void *param_1,void *param_2,void *param_3,ulong param_4)

{
  uint *puVar1;
  size_t __n;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_4 == 0) {
    uVar5 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + 0x8058);
    uVar5 = 0;
    uVar3 = *puVar1;
    do {
      uVar2 = *(uint *)((long)param_1 + 0x805c);
      if (uVar2 <= uVar3) {
        (**(code **)(**(long **)((long)param_1 + 0x10) + 0x38))
                  (*(long **)((long)param_1 + 0x10),*(undefined8 *)((long)param_1 + 0x8060));
        uVar2 = (**(code **)(**(long **)((long)param_1 + 0x10) + 0x28))
                          (*(long **)((long)param_1 + 0x10),(long)param_1 + 0x58,0x8000);
        if ((int)uVar2 < 0) {
          *(undefined *)((long)param_1 + 0x8068) = 1;
          return uVar5;
        }
        uVar3 = 0;
        *puVar1 = 0;
        *(uint *)((long)param_1 + 0x805c) = uVar2;
        if (uVar2 == 0) {
          return uVar5;
        }
      }
      __n = (ulong)(uVar2 - uVar3);
      if (param_4 <= uVar2 - uVar3) {
        __n = param_4;
      }
      iVar4 = (int)__n;
      if (iVar4 != 0) {
        memcpy((void *)((long)param_3 + (ulong)uVar5),(void *)((long)param_1 + 0x58 + (ulong)uVar3),
               __n);
        uVar5 = uVar5 + iVar4;
        param_4 = param_4 - __n;
        uVar3 = *puVar1 + iVar4;
        *puVar1 = uVar3;
        *(size_t *)((long)param_1 + 0x8060) = *(long *)((long)param_1 + 0x8060) + __n;
      }
    } while (param_4 != 0);
  }
  return uVar5;
}


