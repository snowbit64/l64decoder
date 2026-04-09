// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addOverlayLayer
// Entry Point: 008e8804
// Size: 852 bytes
// Signature: undefined __thiscall addOverlayLayer(BaseTerrain * this, char * param_1, char * param_2, char * param_3, char * param_4, char * param_5, float param_6, float param_7, float param_8, float param_9)


/* WARNING: Type propagation algorithm not settling */
/* BaseTerrain::addOverlayLayer(char const*, char const*, char const*, char const*, char const*,
   float, float, float, float) */

undefined4 __thiscall
BaseTerrain::addOverlayLayer
          (BaseTerrain *this,char *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
          float param_6,float param_7,float param_8,float param_9)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 local_120 [2];
  ulong local_118;
  undefined8 uStack_110;
  void *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  void *local_e0;
  ulong local_d8;
  undefined8 uStack_d0;
  void *local_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  void *local_98;
  undefined8 local_90;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  lVar4 = EngineManager::getInstance();
  if (param_3 == (char *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 008e8ac4 to 008e8acf has its CatchHandler @ 008e8b60 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      pcVar6 = "Error: Terrain layer texture not set.\n";
LAB_008e8b28:
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    else {
      pcVar6 = "Error: Terrain layer texture not set.\n";
    }
  }
  else if ((param_4 == (char *)0x0) && (*(int *)(lVar4 + 0x210) != 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 008e8aec to 008e8af7 has its CatchHandler @ 008e8b5c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      pcVar6 = "Error: Terrain layer normal map not set.\n";
      goto LAB_008e8b28;
    }
    pcVar6 = "Error: Terrain layer normal map not set.\n";
  }
  else {
    uVar5 = 1;
    if ((param_5 != (char *)0x0) || (*(int *)(lVar4 + 0x210) == 0)) goto LAB_008e88e4;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 008e8b14 to 008e8b1f has its CatchHandler @ 008e8b58 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      pcVar6 = "Error: Terrain layer height map not set.\n";
      goto LAB_008e8b28;
    }
    pcVar6 = "Error: Terrain layer height map not set.\n";
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar6);
  uVar5 = 0;
LAB_008e88e4:
  OverlayLayer::OverlayLayer
            ((OverlayLayer *)local_120,
             (int)((ulong)(*(long *)(this + 0x28) - *(long *)(this + 0x20)) >> 3) * 0x286bca1b,
             (*(float *)(this + 0xa8) * (float)(ulong)(*(int *)(this + 0x90) - 1)) / param_6,param_7
             ,param_8,param_1,param_2,param_3,param_4,param_5,param_9);
  puVar1 = *(undefined4 **)(this + 0x28);
  if (puVar1 < *(undefined4 **)(this + 0x30)) {
    *puVar1 = local_120[0];
    *(void **)(puVar1 + 6) = local_108;
    *(undefined8 *)(puVar1 + 4) = uStack_110;
    *(ulong *)(puVar1 + 2) = local_118;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = (void *)0x0;
    *(undefined8 *)(puVar1 + 8) = local_100;
    puVar1[10] = local_f8;
    *(undefined8 *)(puVar1 + 0xe) = uStack_e8;
    *(ulong *)(puVar1 + 0xc) = local_f0;
    *(void **)(puVar1 + 0x10) = local_e0;
    uStack_e8 = 0;
    local_e0 = (void *)0x0;
    local_f0 = 0;
    *(void **)(puVar1 + 0x16) = local_c8;
    *(undefined8 *)(puVar1 + 0x14) = uStack_d0;
    *(ulong *)(puVar1 + 0x12) = local_d8;
    local_d8 = 0;
    uStack_d0 = 0;
    *(void **)(puVar1 + 0x1c) = local_b0;
    *(undefined8 *)(puVar1 + 0x1a) = uStack_b8;
    *(ulong *)(puVar1 + 0x18) = local_c0;
    local_c8 = (void *)0x0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = (void *)0x0;
    *(void **)(puVar1 + 0x22) = local_98;
    *(undefined8 *)(puVar1 + 0x20) = uStack_a0;
    *(ulong *)(puVar1 + 0x1e) = local_a8;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = (void *)0x0;
    *(undefined8 *)(puVar1 + 0x24) = local_90;
    *(undefined4 **)(this + 0x28) = puVar1 + 0x26;
  }
  else {
                    /* try { // try from 008e8a28 to 008e8a33 has its CatchHandler @ 008e8b78 */
    std::__ndk1::vector<BaseTerrain::OverlayLayer,std::__ndk1::allocator<BaseTerrain::OverlayLayer>>
    ::__push_back_slow_path<BaseTerrain::OverlayLayer>
              ((vector<BaseTerrain::OverlayLayer,std::__ndk1::allocator<BaseTerrain::OverlayLayer>>
                *)(this + 0x20),(OverlayLayer *)local_120);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
  }
  if ((local_d8 & 1) != 0) {
    operator_delete(local_c8);
  }
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  if ((local_118 & 1) != 0) {
    operator_delete(local_108);
  }
  if (*(long *)(lVar2 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}


