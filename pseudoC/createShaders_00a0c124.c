// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createShaders
// Entry Point: 00a0c124
// Size: 624 bytes
// Signature: undefined createShaders(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IndirectLightRenderController::createShaders() */

uint IndirectLightRenderController::createShaders(void)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  long in_x0;
  ShaderStructLayout local_78 [16];
  void *local_68;
  byte *local_58;
  byte *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(in_x0 + 0x48) == 0) {
    ShaderStructLayout::ShaderStructLayout(local_78,"EnvmapPrefilterCsParam",0);
                    /* try { // try from 00a0c16c to 00a0c2bf has its CatchHandler @ 00a0c3a8 */
    ShaderStructLayout::addField(local_78,"g_invView",2,4,4,false,0);
    ShaderStructLayout::addField(local_78,"g_specularMaxMip",2,0,0,false,0);
    ShaderStructLayout::addField(local_78,"g_roughnessMipScale",2,0,0,false,0);
    ShaderStructLayout::addField(local_78,"g_mipLevel",2,0,0,false,0);
    ShaderStructLayout::addField(local_78,"g_face",2,0,0,false,0);
    ShaderStructLayout::addField(local_78,"g_subResourceSize",2,0,0,false,0);
    ShaderStructLayout::addField(local_78,"g_sourceCubeMapResolution",2,0,0,false,0);
    ShaderStructLayout::endDefinition();
    uVar4 = AdhocShader::load((AdhocShader *)(in_x0 + 0x40),*(IRenderDevice **)(in_x0 + 0x18),
                              "envmap_prefilter_cs.cg",(char *)0x0,0,local_78,1);
    if ((uVar4 & 1) == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0))
      {
                    /* try { // try from 00a0c358 to 00a0c363 has its CatchHandler @ 00a0c394 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Cannot load envmap_prefilter_cs.cg\n");
    }
    pbVar3 = local_58;
    if (local_58 != (byte *)0x0) {
      while (pbVar2 = local_50, pbVar2 != pbVar3) {
        local_50 = pbVar2 + -0x20;
        if ((*local_50 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -0x10));
        }
      }
      local_50 = pbVar3;
      operator_delete(local_58);
    }
    if (((byte)local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
  }
  else {
    uVar4 = 1;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4 & 1;
}


