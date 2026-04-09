// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ThreadedFileReader
// Entry Point: 00b355cc
// Size: 472 bytes
// Signature: undefined __thiscall ~ThreadedFileReader(ThreadedFileReader * this)


/* ThreadedFileReader::~ThreadedFileReader() */

void __thiscall ThreadedFileReader::~ThreadedFileReader(ThreadedFileReader *this)

{
  void *pvVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  *(undefined ***)this = &PTR__ThreadedFileReader_00fe9940;
  if (this[0xc] != (ThreadedFileReader)0x0) {
                    /* try { // try from 00b355f8 to 00b355ff has its CatchHandler @ 00b357a8 */
    plVar2 = (long *)operator_new(0x18);
    *(undefined4 *)(plVar2 + 1) = 0;
    do {
      lVar5 = *(long *)(this + 0x68);
      *plVar2 = lVar5;
      lVar3 = FUN_00f275d0(lVar5,plVar2);
    } while (lVar5 != lVar3);
    FUN_00f27700(1,this + 0x70);
                    /* try { // try from 00b35638 to 00b35643 has its CatchHandler @ 00b357a8 */
    Semaphore::post();
    Thread::join();
  }
  plVar2 = *(long **)(this + 0x88);
  if (plVar2 != (long *)0x0) {
    do {
      lVar5 = *(long *)(this + 0x28);
      *plVar2 = lVar5;
      lVar3 = FUN_00f275d0(lVar5,plVar2);
    } while (lVar5 != lVar3);
    FUN_00f27700(1,this + 0x30);
                    /* try { // try from 00b3567c to 00b3567f has its CatchHandler @ 00b357a4 */
    Semaphore::post();
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined4 *)(this + 0x90) = 0;
  }
  s_securityCount = s_securityCount + -1;
  Semaphore::~Semaphore((Semaphore *)(this + 0x100));
  Semaphore::~Semaphore((Semaphore *)(this + 0xf0));
  Thread::~Thread((Thread *)(this + 0xa8));
  FileReader::~FileReader((FileReader *)(this + 0x98));
  while (puVar4 = *(undefined8 **)(this + 0x80), puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(this + 0x80) = *puVar4;
    operator_delete(puVar4);
  }
  while (*(long *)(this + 0x68) != 0) {
    puVar4 = *(undefined8 **)(this + 0x68);
    *(undefined8 *)(this + 0x68) = *puVar4;
    operator_delete(puVar4);
  }
  while (puVar4 = *(undefined8 **)(this + 0x60), puVar4 != (undefined8 *)0x0) {
    pvVar1 = (void *)puVar4[1];
    *(undefined8 *)(this + 0x60) = *puVar4;
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
    operator_delete(puVar4);
  }
  while (*(long *)(this + 0x48) != 0) {
    puVar4 = *(undefined8 **)(this + 0x48);
    *(undefined8 *)(this + 0x48) = *puVar4;
    if ((void *)puVar4[1] != (void *)0x0) {
      operator_delete__((void *)puVar4[1]);
    }
    operator_delete(puVar4);
  }
  while (puVar4 = *(undefined8 **)(this + 0x40), puVar4 != (undefined8 *)0x0) {
    pvVar1 = (void *)puVar4[1];
    *(undefined8 *)(this + 0x40) = *puVar4;
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
    operator_delete(puVar4);
  }
  while (*(long *)(this + 0x28) != 0) {
    puVar4 = *(undefined8 **)(this + 0x28);
    *(undefined8 *)(this + 0x28) = *puVar4;
    if ((void *)puVar4[1] != (void *)0x0) {
      operator_delete__((void *)puVar4[1]);
    }
    operator_delete(puVar4);
  }
  File::~File((File *)this);
  return;
}


