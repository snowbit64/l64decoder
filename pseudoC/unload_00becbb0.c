// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unload
// Entry Point: 00becbb0
// Size: 212 bytes
// Signature: undefined unload(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AdhocShader::unload() */

void AdhocShader::unload(void)

{
  int iVar1;
  char *in_x0;
  
  if (*in_x0 != '\0') {
    if (((ShaderManager::getInstance()::instance & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar1 != 0)) {
                    /* try { // try from 00becc4c to 00becc57 has its CatchHandler @ 00becc84 */
      ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
      __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&ShaderManager::getInstance()::instance);
    }
    *(undefined8 *)(in_x0 + 8) = 0;
    *in_x0 = '\0';
    *(undefined8 *)(in_x0 + 0xa8) = *(undefined8 *)(in_x0 + 0xa0);
    *(undefined8 *)(in_x0 + 0x18) = *(undefined8 *)(in_x0 + 0x10);
    *(undefined8 *)(in_x0 + 0x60) = *(undefined8 *)(in_x0 + 0x58);
    *(undefined8 *)(in_x0 + 0xc0) = *(undefined8 *)(in_x0 + 0xb8);
    *(undefined8 *)(in_x0 + 0x30) = *(undefined8 *)(in_x0 + 0x28);
    *(undefined8 *)(in_x0 + 0x78) = *(undefined8 *)(in_x0 + 0x70);
    *(undefined8 *)(in_x0 + 0xd8) = *(undefined8 *)(in_x0 + 0xd0);
    *(undefined8 *)(in_x0 + 0x48) = *(undefined8 *)(in_x0 + 0x40);
    *(undefined8 *)(in_x0 + 0x90) = *(undefined8 *)(in_x0 + 0x88);
    *(undefined8 *)(in_x0 + 0xf0) = *(undefined8 *)(in_x0 + 0xe8);
  }
  return;
}


