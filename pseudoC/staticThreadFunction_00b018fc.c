// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: staticThreadFunction
// Entry Point: 00b018fc
// Size: 80 bytes
// Signature: undefined __cdecl staticThreadFunction(void * param_1, bool * param_2)


/* SaveHelper::staticThreadFunction(void*, bool volatile&) */

undefined8 SaveHelper::staticThreadFunction(void *param_1,bool *param_2)

{
  long lVar1;
  byte bVar2;
  
                    /* WARNING: Load size is inaccurate */
  lVar1 = (long)param_1 + 9;
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    lVar1 = *(long *)((long)param_1 + 0x18);
  }
  bVar2 = (**(code **)(*param_1 + 0x10))(param_1,lVar1);
  *(byte *)((long)param_1 + 0x50) = bVar2 & 1;
  *(undefined *)((long)param_1 + 0x51) = 1;
  return 0;
}


