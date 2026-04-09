// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 008b3bb0
// Size: 268 bytes
// Signature: undefined clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoopSynthesisSample::clone() */

undefined8 * LoopSynthesisSample::clone(void)

{
  int iVar1;
  LoopSynthesisSample *in_x0;
  undefined8 *this;
  
  this = (undefined8 *)operator_new(0x138);
                    /* try { // try from 008b3bd4 to 008b3bd7 has its CatchHandler @ 008b3cf4 */
  Sample::Sample((Sample *)this,*(char **)(in_x0 + 8));
  *this = &PTR__LoopSynthesisSample_00fdd968;
  this[4] = &PTR__LoopSynthesisSample_00fdda50;
                    /* try { // try from 008b3bf4 to 008b3bfb has its CatchHandler @ 008b3ce4 */
  LoopSynthesisGenerator::LoopSynthesisGenerator((LoopSynthesisGenerator *)(this + 0x10));
                    /* try { // try from 008b3c00 to 008b3c03 has its CatchHandler @ 008b3cd4 */
  LoopSynthesisStreamSource::LoopSynthesisStreamSource((LoopSynthesisStreamSource *)(this + 0x20));
  this[0x26] = 0;
  this[0x25] = 0;
  this[2] = this[2] | 0x10000000000;
  this[0x24] = 0;
  this[0x23] = 0;
  copyFrom((LoopSynthesisSample *)this,in_x0);
  if (*(char *)(this + 6) == '\0') {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b3c84 to 008b3c8f has its CatchHandler @ 008b3cbc */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Can\'t clone sample \'%s\'.\n",*(undefined8 *)(in_x0 + 8));
  }
  return this;
}


