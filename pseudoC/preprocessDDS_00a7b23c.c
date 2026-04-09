// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: preprocessDDS
// Entry Point: 00a7b23c
// Size: 696 bytes
// Signature: undefined __cdecl preprocessDDS(char * param_1, uchar * param_2, uint param_3, uchar * param_4, uint * param_5, uint param_6)


/* DDSUtil::preprocessDDS(char const*, unsigned char*, unsigned int, unsigned char*, unsigned int&,
   unsigned int) */

uint DDSUtil::preprocessDDS
               (char *param_1,uchar *param_2,uint param_3,uchar *param_4,uint *param_5,uint param_6)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  byte bVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  int iVar10;
  Logger *this;
  undefined8 uVar11;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  void *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined2 local_100;
  undefined4 local_fc;
  undefined2 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uStack_90 = *(undefined8 *)(param_2 + 100);
  uStack_7c = *(undefined8 *)(param_2 + 0x78);
  uStack_98 = *(undefined8 *)(param_2 + 0x5c);
  local_a0 = *(undefined8 *)(param_2 + 0x54);
  uVar11 = *(undefined8 *)(param_2 + 0x4c);
  local_b0 = *(undefined8 *)(param_2 + 0x44);
  uStack_88 = (undefined4)*(undefined8 *)(param_2 + 0x6c);
  uStack_e8 = *(undefined8 *)(param_2 + 0xc);
  local_f0 = *(undefined8 *)(param_2 + 4);
  local_84 = (undefined4)*(undefined8 *)(param_2 + 0x70);
  uStack_80 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x70) >> 0x20);
  uStack_d8 = *(undefined8 *)(param_2 + 0x1c);
  local_e0 = *(undefined8 *)(param_2 + 0x14);
  uStack_a8._4_1_ = (byte)((ulong)uVar11 >> 0x20);
  uStack_c8 = *(undefined8 *)(param_2 + 0x2c);
  local_d0 = *(undefined8 *)(param_2 + 0x24);
  uStack_b8 = *(undefined8 *)(param_2 + 0x3c);
  local_c0 = *(undefined8 *)(param_2 + 0x34);
  bVar6 = (int)local_a0 == 0x30315844 & uStack_a8._4_1_ >> 2;
  uStack_a8 = uVar11;
  if (bVar6 == 1) {
    if (param_3 < 0x94) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar10 != 0
         )) {
                    /* try { // try from 00a7b4b0 to 00a7b4b7 has its CatchHandler @ 00a7b504 */
        this = (Logger *)operator_new(0x38);
                    /* try { // try from 00a7b4bc to 00a7b4bf has its CatchHandler @ 00a7b4f4 */
        Logger::Logger(this);
        LogManager::getInstance()::singletonLogManager = this;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Invalid dx10 dds file \'%s\'\n",param_1);
      uVar9 = 0;
      goto LAB_00a7b46c;
    }
    uStack_158 = *(undefined8 *)(param_2 + 0x88);
    local_160 = *(undefined8 *)(param_2 + 0x80);
    local_150 = *(undefined4 *)(param_2 + 0x90);
  }
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_148 = 0;
  local_108 = 0;
  local_140 = 0x100000001;
  local_100 = 0;
  local_fc = 0;
  local_f8 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_120 = (void *)0x0;
  uVar9 = loadImage(param_1,param_2,param_3,1,(ImageDesc *)&local_148,param_6);
  pvVar8 = local_120;
  uVar7 = local_128;
  if ((uVar9 & 1) != 0) {
    uVar4 = (uint)uStack_e8;
    uVar3 = uStack_e8._4_4_;
    uStack_e8 = CONCAT44((uint)local_148,local_148._4_4_);
    uVar2 = 0;
    if ((uint)local_148 != 0) {
      uVar2 = uVar3 / (uint)local_148;
    }
    local_d0._4_4_ = local_d0._4_4_ | 1;
    uVar3 = 0;
    if (local_148._4_4_ != 0) {
      uVar3 = uVar4 / local_148._4_4_;
    }
    uVar4 = 0;
    if (uVar3 * uVar2 != 0) {
      uVar4 = (uint)local_e0 / (uVar3 * uVar2);
    }
    uVar1 = *(undefined4 *)param_2;
    *(undefined8 *)(param_4 + 0x3c) = uStack_b8;
    *(undefined8 *)(param_4 + 0x34) = local_c0;
    *(undefined8 *)(param_4 + 0x5c) = uStack_98;
    *(undefined8 *)(param_4 + 0x54) = local_a0;
    *(undefined8 *)(param_4 + 0x4c) = uStack_a8;
    *(undefined8 *)(param_4 + 0x44) = local_b0;
    *(undefined8 *)(param_4 + 0xc) = uStack_e8;
    *(undefined8 *)(param_4 + 4) = local_f0;
    local_e0 = CONCAT44(local_e0._4_4_,uVar4);
    *(undefined4 *)param_4 = uVar1;
    if (uStack_d8._4_4_ != 0x288ae8d9) {
      local_d0._4_4_ = 1;
    }
    uStack_d8 = CONCAT44(0x288ae8d9,(int)local_138 + 1);
    local_d0 = CONCAT44(local_d0._4_4_,param_6);
    *(undefined8 *)(param_4 + 0x1c) = uStack_d8;
    *(undefined8 *)(param_4 + 0x14) = local_e0;
    *(undefined8 *)(param_4 + 0x2c) = uStack_c8;
    *(undefined8 *)(param_4 + 0x24) = local_d0;
    *(undefined8 *)(param_4 + 0x78) = uStack_7c;
    *(ulong *)(param_4 + 0x70) = CONCAT44(uStack_80,local_84);
    *(ulong *)(param_4 + 0x6c) = CONCAT44(local_84,uStack_88);
    *(undefined8 *)(param_4 + 100) = uStack_90;
    if (bVar6 == 0) {
      memcpy(param_4 + 0x80,local_120,(ulong)local_128);
      *param_5 = uVar7 + 0x80;
    }
    else {
      *(undefined8 *)(param_4 + 0x88) = uStack_158;
      *(undefined8 *)(param_4 + 0x80) = local_160;
      *(undefined4 *)(param_4 + 0x90) = local_150;
      memcpy(param_4 + 0x94,local_120,(ulong)local_128);
      *param_5 = uVar7 + 0x94;
    }
    if (pvVar8 != (void *)0x0) {
      operator_delete__(pvVar8);
    }
  }
LAB_00a7b46c:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return uVar9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


