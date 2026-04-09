// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 008b3134
// Size: 232 bytes
// Signature: undefined clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StaticSample::clone() */

undefined8 * StaticSample::clone(void)

{
  int iVar1;
  StaticSample *in_x0;
  undefined8 *this;
  
  this = (undefined8 *)operator_new(0x98);
                    /* try { // try from 008b3154 to 008b3157 has its CatchHandler @ 008b3234 */
  Sample::Sample((Sample *)this,*(char **)(in_x0 + 8));
  this[0x11] = 0;
  this[0x12] = 0;
  this[0xf] = 0;
  this[0x10] = 0;
  this[0xe] = 0;
  *this = &PTR__StaticSample_00fdd838;
  this[4] = &PTR__StaticSample_00fdd920;
  this[2] = this[2] | 0x4000000000;
  copyFrom((StaticSample *)this,in_x0);
  if (*(char *)(this + 6) == '\0') {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b31e4 to 008b31ef has its CatchHandler @ 008b321c */
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


