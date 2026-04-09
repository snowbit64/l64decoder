// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: inflateGetDictionary
// Entry Point: 00e2c924
// Size: 212 bytes
// Signature: undefined inflateGetDictionary(void)


undefined8 inflateGetDictionary(long param_1,void *param_2,undefined4 *param_3)

{
  long *plVar1;
  
  if (((((param_1 == 0) || (*(long *)(param_1 + 0x40) == 0)) || (*(long *)(param_1 + 0x48) == 0)) ||
      ((plVar1 = *(long **)(param_1 + 0x38), plVar1 == (long *)0x0 || (*plVar1 != param_1)))) ||
     (0x1f < *(int *)(plVar1 + 1) - 0x3f34U)) {
    return 0xfffffffe;
  }
  if ((param_2 != (void *)0x0) && (*(int *)(plVar1 + 8) != 0)) {
    memcpy(param_2,(void *)(plVar1[9] + (ulong)*(uint *)((long)plVar1 + 0x44)),
           (ulong)(*(int *)(plVar1 + 8) - *(uint *)((long)plVar1 + 0x44)));
    memcpy((void *)((long)param_2 +
                   ((ulong)*(uint *)(plVar1 + 8) - (ulong)*(uint *)((long)plVar1 + 0x44))),
           (void *)plVar1[9],(ulong)*(uint *)((long)plVar1 + 0x44));
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(plVar1 + 8);
    return 0;
  }
  return 0;
}


