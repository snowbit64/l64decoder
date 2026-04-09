// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ThreadedFileReader
// Entry Point: 00b3516c
// Size: 632 bytes
// Signature: undefined __thiscall ThreadedFileReader(ThreadedFileReader * this, char * param_1, uint param_2, uint param_3)


/* ThreadedFileReader::ThreadedFileReader(char const*, unsigned int, unsigned int) */

void __thiscall
ThreadedFileReader::ThreadedFileReader
          (ThreadedFileReader *this,char *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  
  File::File((File *)this);
  *(undefined ***)this = &PTR__ThreadedFileReader_00fe9940;
  *(uint *)(this + 8) = param_2;
  plVar7 = (long *)(this + 0x28);
  *plVar7 = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(long **)(this + 0x38) = plVar7;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(ThreadedFileReader **)(this + 0x58) = this + 0x48;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(ThreadedFileReader **)(this + 0x78) = this + 0x68;
  *(undefined8 *)(this + 0x80) = 0;
                    /* try { // try from 00b351f8 to 00b3520f has its CatchHandler @ 00b35410 */
  FileReader::FileReader((FileReader *)(this + 0x98),param_1);
                    /* try { // try from 00b35214 to 00b3521b has its CatchHandler @ 00b35408 */
  Thread::Thread((Thread *)(this + 0xa8));
                    /* try { // try from 00b35220 to 00b3522b has its CatchHandler @ 00b35400 */
  Semaphore::Semaphore((Semaphore *)(this + 0xf0),0);
                    /* try { // try from 00b35234 to 00b3523f has its CatchHandler @ 00b353f8 */
  Semaphore::Semaphore((Semaphore *)(this + 0x100),0);
  s_securityCount = s_securityCount + 1;
  if (2 < s_securityCount) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00b353ac to 00b353b7 has its CatchHandler @ 00b353e4 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 00b35270 to 00b352b3 has its CatchHandler @ 00b35418 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Too many ThreadedFileReader at the same time: %u\n",(ulong)s_securityCount);
  }
  bVar1 = FileReader::isValid();
  this[0xc] = (ThreadedFileReader)(bVar1 & 1);
  if ((bVar1 & 1) == 0) {
    *(undefined8 *)(this + 0x10) = 0;
  }
  else {
    uVar3 = FileReader::getSize();
    *(undefined8 *)(this + 0x10) = uVar3;
    if (this[0xc] != (ThreadedFileReader)0x0) {
      uVar3 = FileReader::getTimestamp();
      *(undefined8 *)(this + 0x18) = uVar3;
      *(undefined8 *)(this + 0x20) = 0;
      *(undefined8 *)(this + 0x88) = 0;
      *(undefined4 *)(this + 0x90) = 0;
      *(undefined4 *)(this + 0x110) = 0;
      if (this[0xc] == (ThreadedFileReader)0x0) {
        return;
      }
      if (param_3 != 0) {
        uVar9 = 0;
        do {
                    /* try { // try from 00b352d8 to 00b352df has its CatchHandler @ 00b3542c */
          plVar4 = (long *)operator_new(0x20);
          *plVar4 = 0;
                    /* try { // try from 00b352e8 to 00b352ef has its CatchHandler @ 00b3541c */
          pvVar5 = operator_new__((ulong)param_2);
          plVar4[1] = (long)pvVar5;
          *(uint *)(plVar4 + 2) = param_2;
          *(undefined4 *)((long)plVar4 + 0x14) = 0;
          plVar4[3] = 0;
          do {
            lVar8 = *plVar7;
            *plVar4 = lVar8;
            lVar6 = FUN_00f275d0(lVar8,plVar4,plVar7);
          } while (lVar8 != lVar6);
          FUN_00f27700(1,this + 0x30);
                    /* try { // try from 00b35328 to 00b3532f has its CatchHandler @ 00b3542c */
          Semaphore::post();
          uVar9 = uVar9 + 1;
        } while (uVar9 != param_3);
      }
                    /* try { // try from 00b3533c to 00b35363 has its CatchHandler @ 00b35418 */
      Thread::start((Thread *)(this + 0xa8),workerThreadEntry,this,0xffffffff,
                    "GIANTS ThreadedFileReader",1,0x2000);
      return;
    }
  }
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  return;
}


