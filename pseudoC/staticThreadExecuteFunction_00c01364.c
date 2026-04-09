// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: staticThreadExecuteFunction
// Entry Point: 00c01364
// Size: 184 bytes
// Signature: undefined __cdecl staticThreadExecuteFunction(void * param_1, bool * param_2)


/* MapFold::staticThreadExecuteFunction(void*, bool volatile&) */

undefined8 MapFold::staticThreadExecuteFunction(void *param_1,bool *param_2)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)((long)param_1 + 0x18);
  if (uVar2 == 0) {
LAB_00c013f8:
    *(undefined *)((long)param_1 + 0x1c) = 1;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    plVar3 = *param_1;
    if (*param_2 == false) {
      uVar4 = 0;
      do {
        uVar1 = (**(code **)(*plVar3 + 0x10))
                          (plVar3,*(undefined8 *)(*(long *)((long)param_1 + 0x10) + uVar4 * 8),
                           *(undefined8 *)((long)param_1 + 8));
        if ((uVar1 & 1) == 0) {
          uVar2 = *(uint *)((long)param_1 + 0x18);
          break;
        }
        FUN_00f27700(0xffffffff,plVar3 + 1);
        uVar2 = *(uint *)((long)param_1 + 0x18);
        uVar4 = uVar4 + 1;
        if (uVar2 <= uVar4) goto LAB_00c013f8;
      } while (*param_2 == false);
    }
    else {
      uVar4 = 0;
    }
    FUN_00f27700((int)uVar4 - uVar2,plVar3 + 1);
    *(undefined *)((long)param_1 + 0x1c) = 0;
    *param_2 = true;
  }
  return 0;
}


