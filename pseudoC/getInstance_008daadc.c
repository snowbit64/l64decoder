// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 008daadc
// Size: 120 bytes
// Signature: undefined getInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* InstancedGeometryManager::getInstance() */

undefined1 * InstancedGeometryManager::getInstance(void)

{
  int iVar1;
  
  if (((getInstance()::s_instance & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&getInstance()::s_instance), iVar1 != 0)) {
                    /* try { // try from 008dab1c to 008dab27 has its CatchHandler @ 008dab54 */
    InstancedGeometryManager((InstancedGeometryManager *)getInstance()::s_instance);
    __cxa_atexit(~InstancedGeometryManager,getInstance()::s_instance,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&getInstance()::s_instance);
  }
  return getInstance()::s_instance;
}


