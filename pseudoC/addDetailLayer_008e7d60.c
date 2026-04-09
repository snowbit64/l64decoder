// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addDetailLayer
// Entry Point: 008e7d60
// Size: 896 bytes
// Signature: undefined __thiscall addDetailLayer(BaseTerrain * this, char * param_1, char * param_2, char * param_3, char * param_4, float param_5, float param_6, float param_7, char * param_8, float param_9, vector * param_10)


/* WARNING: Type propagation algorithm not settling */
/* BaseTerrain::addDetailLayer(char const*, char const*, char const*, char const*, float, float,
   float, char const*, float, std::__ndk1::vector<float, std::__ndk1::allocator<float> > const&) */

undefined4 __thiscall
BaseTerrain::addDetailLayer
          (BaseTerrain *this,char *param_1,char *param_2,char *param_3,char *param_4,float param_5,
          float param_6,float param_7,char *param_8,float param_9,vector *param_10)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined8 local_140;
  undefined8 uStack_138;
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  ulong local_118;
  undefined8 uStack_110;
  void *local_108;
  ulong local_100;
  undefined8 uStack_f8;
  void *local_f0;
  ulong local_e8;
  undefined8 uStack_e0;
  void *local_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  void *local_c0;
  undefined4 local_b8;
  void *local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  long local_90;
  
  lVar2 = tpidr_el0;
  local_90 = *(long *)(lVar2 + 0x28);
  lVar4 = EngineManager::getInstance();
  if (param_2 == (char *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 008e804c to 008e8057 has its CatchHandler @ 008e80e8 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      pcVar6 = "Error: Terrain layer texture not set.\n";
LAB_008e80b0:
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    else {
      pcVar6 = "Error: Terrain layer texture not set.\n";
    }
  }
  else if ((param_3 == (char *)0x0) && (*(int *)(lVar4 + 0x210) != 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 008e8074 to 008e807f has its CatchHandler @ 008e80e4 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      pcVar6 = "Error: Terrain layer normal map not set.\n";
      goto LAB_008e80b0;
    }
    pcVar6 = "Error: Terrain layer normal map not set.\n";
  }
  else {
    uVar5 = 1;
    if ((param_4 != (char *)0x0) || (*(int *)(lVar4 + 0x210) == 0)) goto LAB_008e7e44;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 008e809c to 008e80a7 has its CatchHandler @ 008e80e0 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      pcVar6 = "Error: Terrain layer height map not set.\n";
      goto LAB_008e80b0;
    }
    pcVar6 = "Error: Terrain layer height map not set.\n";
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar6);
  uVar5 = 0;
LAB_008e7e44:
  DetailLayer::DetailLayer
            ((DetailLayer *)&local_140,
             (int)((ulong)(*(long *)(this + 0x10) - *(long *)(this + 8)) >> 4) * -0x45d1745d,
             (*(float *)(this + 0xa8) * (float)(ulong)(*(int *)(this + 0x90) - 1)) / param_5,param_6
             ,param_7,param_1,param_2,param_3,param_4,param_8,param_9,param_10);
  puVar1 = *(undefined8 **)(this + 0x10);
  if (puVar1 < *(undefined8 **)(this + 0x18)) {
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[1] = uStack_138;
    *puVar1 = local_140;
    puVar1[4] = local_120;
    puVar1[3] = uStack_128;
    puVar1[2] = local_130;
    local_130 = 0;
    uStack_128 = 0;
    puVar1[6] = uStack_110;
    puVar1[5] = local_118;
    puVar1[7] = local_108;
    local_120 = (void *)0x0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = (void *)0x0;
    puVar1[10] = local_f0;
    puVar1[9] = uStack_f8;
    puVar1[8] = local_100;
    local_100 = 0;
    uStack_f8 = 0;
    puVar1[0xd] = local_d8;
    puVar1[0xc] = uStack_e0;
    puVar1[0xb] = local_e8;
    local_f0 = (void *)0x0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = (void *)0x0;
    puVar1[0x10] = local_c0;
    puVar1[0xf] = uStack_c8;
    puVar1[0xe] = local_d0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = (void *)0x0;
    *(undefined4 *)(puVar1 + 0x11) = local_b8;
    puVar1[0x12] = local_b0;
    puVar1[0x13] = local_a8;
    local_b0 = (void *)0x0;
    local_a8 = (void *)0x0;
    puVar1[0x14] = local_a0;
    local_a0 = 0;
    *(undefined4 *)(puVar1 + 0x15) = local_98;
    *(undefined8 **)(this + 0x10) = puVar1 + 0x16;
  }
  else {
                    /* try { // try from 008e7f70 to 008e7f7b has its CatchHandler @ 008e8100 */
    std::__ndk1::vector<BaseTerrain::DetailLayer,std::__ndk1::allocator<BaseTerrain::DetailLayer>>::
    __push_back_slow_path<BaseTerrain::DetailLayer>
              ((vector<BaseTerrain::DetailLayer,std::__ndk1::allocator<BaseTerrain::DetailLayer>> *)
               (this + 8),(DetailLayer *)&local_140);
    if (local_b0 != (void *)0x0) {
      local_a8 = local_b0;
      operator_delete(local_b0);
    }
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_e8 & 1) != 0) {
    operator_delete(local_d8);
  }
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  if ((local_118 & 1) != 0) {
    operator_delete(local_108);
  }
  if ((local_130 & 1) != 0) {
    operator_delete(local_120);
  }
  if (*(long *)(lVar2 + 0x28) == local_90) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


