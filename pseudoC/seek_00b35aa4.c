// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: seek
// Entry Point: 00b35aa4
// Size: 124 bytes
// Signature: undefined __thiscall seek(ThreadedFileReader * this, ulonglong param_1)


/* ThreadedFileReader::seek(unsigned long long) */

undefined8 __thiscall ThreadedFileReader::seek(ThreadedFileReader *this,ulonglong param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)operator_new(0x18);
  plVar1[2] = param_1;
  *(undefined4 *)(plVar1 + 1) = 1;
  do {
    lVar3 = *(long *)(this + 0x68);
    *plVar1 = lVar3;
    lVar2 = FUN_00f275d0(lVar3,plVar1);
  } while (lVar3 != lVar2);
  FUN_00f27700(1,this + 0x70);
  Semaphore::post();
  *(ulonglong *)(this + 0x20) = param_1;
  return 1;
}


