// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileShaders
// Entry Point: 00a0eac8
// Size: 844 bytes
// Signature: undefined __thiscall compileShaders(EnvMapBlender * this, IRenderDevice * param_1)


/* EnvMapBlender::compileShaders(IRenderDevice*) */

undefined4 __thiscall EnvMapBlender::compileShaders(EnvMapBlender *this,IRenderDevice *param_1)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  ulong uVar5;
  undefined4 uVar6;
  ShaderStructLayout local_78 [16];
  void *local_68;
  byte *local_58;
  byte *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x540] == (EnvMapBlender)0x0) {
    uVar6 = 1;
  }
  else {
    ShaderStructLayout::ShaderStructLayout(local_78,"EnvMapBlendingParams",0);
                    /* try { // try from 00a0eb0c to 00a0ebc7 has its CatchHandler @ 00a0ee30 */
    ShaderStructLayout::addField(local_78,"g_mipIndex",2,0,0,false,0);
    ShaderStructLayout::addField(local_78,"g_blendWeight0",2,0,0,false,0);
    ShaderStructLayout::addField(local_78,"g_blendWeight1",2,0,0,false,0);
    ShaderStructLayout::addField(local_78,"g_blendWeight2",2,0,0,false,0);
    ShaderStructLayout::addField(local_78,"g_blendWeight3",2,0,0,false,0);
    ShaderStructLayout::endDefinition();
                    /* try { // try from 00a0ebd4 to 00a0ecfb has its CatchHandler @ 00a0ee2c */
    if ((((((*(long *)(this + 0x580) == 0) &&
           (uVar5 = AdhocShader::load((AdhocShader *)(this + 0x578),param_1,"envmap_blending.cg",
                                      "#define POS_X_FACE\n",1,local_78,1), (uVar5 & 1) == 0)) ||
          ((*(long *)(this + 0x680) == 0 &&
           (uVar5 = AdhocShader::load((AdhocShader *)(this + 0x678),param_1,"envmap_blending.cg",
                                      "#define NEG_X_FACE\n",2,local_78,1), (uVar5 & 1) == 0)))) ||
         ((*(long *)(this + 0x780) == 0 &&
          (uVar5 = AdhocShader::load((AdhocShader *)(this + 0x778),param_1,"envmap_blending.cg",
                                     "#define POS_Y_FACE\n",4,local_78,1), (uVar5 & 1) == 0)))) ||
        ((*(long *)(this + 0x880) == 0 &&
         (uVar5 = AdhocShader::load((AdhocShader *)(this + 0x878),param_1,"envmap_blending.cg",
                                    "#define NEG_Y_FACE\n",8,local_78,1), (uVar5 & 1) == 0)))) ||
       (((*(long *)(this + 0x980) == 0 &&
         (uVar5 = AdhocShader::load((AdhocShader *)(this + 0x978),param_1,"envmap_blending.cg",
                                    "#define POS_Z_FACE\n",0x10,local_78,1), (uVar5 & 1) == 0)) ||
        ((*(long *)(this + 0xa80) == 0 &&
         (uVar5 = AdhocShader::load((AdhocShader *)(this + 0xa78),param_1,"envmap_blending.cg",
                                    "#define NEG_Z_FACE\n",0x20,local_78,1), (uVar5 & 1) == 0))))))
    {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 00a0edd8 to 00a0ede3 has its CatchHandler @ 00a0ee14 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
                    /* try { // try from 00a0ed20 to 00a0ed33 has its CatchHandler @ 00a0ee28 */
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Cannot load envmap_blending.cg\n");
      uVar6 = 0;
      pbVar2 = local_58;
    }
    else {
      uVar6 = 1;
      pbVar2 = local_58;
    }
    local_58 = pbVar2;
    if (pbVar2 != (byte *)0x0) {
      while (pbVar3 = local_50, pbVar3 != pbVar2) {
        local_50 = pbVar3 + -0x20;
        if ((*local_50 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -0x10));
        }
      }
      operator_delete(local_58);
    }
    if (((byte)local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


