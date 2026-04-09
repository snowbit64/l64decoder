// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyGraphicsData
// Entry Point: 006d49b0
// Size: 200 bytes
// Signature: undefined destroyGraphicsData(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Console::destroyGraphicsData() */

void Console::destroyGraphicsData(void)

{
  int iVar1;
  long in_x0;
  
  if (*(long *)(in_x0 + 0x110) != 0) {
    if (((ShaderManager::getInstance()::instance & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar1 != 0)) {
                    /* try { // try from 006d4a40 to 006d4a4b has its CatchHandler @ 006d4a78 */
      ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
      __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&ShaderManager::getInstance()::instance);
    }
    *(undefined8 *)(in_x0 + 0x110) = 0;
    if (*(long **)(in_x0 + 0x120) != (long *)0x0) {
      (**(code **)(**(long **)(in_x0 + 0x120) + 8))();
    }
    *(undefined8 *)(in_x0 + 0x120) = 0;
    if (*(long **)(in_x0 + 0x118) != (long *)0x0) {
      (**(code **)(**(long **)(in_x0 + 0x118) + 8))();
    }
    *(undefined8 *)(in_x0 + 0x118) = 0;
    if (*(long **)(in_x0 + 0x128) != (long *)0x0) {
      (**(code **)(**(long **)(in_x0 + 0x128) + 8))();
    }
    *(undefined8 *)(in_x0 + 0x128) = 0;
  }
  return;
}


