// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveImageToDDS
// Entry Point: 00af6408
// Size: 740 bytes
// Signature: undefined __thiscall saveImageToDDS(GiantsAdsProvider * this, basic_string * param_1, bool param_2, basic_string * param_3, uchar * * param_4, uint * param_5)


/* GiantsAdsProvider::saveImageToDDS(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned char*&, unsigned
   int&) */

uint __thiscall
GiantsAdsProvider::saveImageToDDS
          (GiantsAdsProvider *this,basic_string *param_1,bool param_2,basic_string *param_3,
          uchar **param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  uchar *puVar11;
  char *pcVar12;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  void *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined4 local_d4;
  undefined2 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  uchar *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined2 local_80;
  undefined4 local_7c;
  undefined2 local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  local_c0 = 0x100000001;
  puVar11 = *(uchar **)(param_1 + 4);
  bVar6 = (*(byte *)param_1 & 1) == 0;
  local_c8 = 0;
  if (bVar6) {
    puVar11 = (uchar *)((long)param_1 + 1);
  }
  uVar7 = (uint)(*(byte *)param_1 >> 1);
  if (!bVar6) {
    uVar7 = param_1[2];
  }
  local_88 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = (uchar *)0x0;
  uVar9 = ImageLoadUtil::loadImage("",puVar11,uVar7,0,(ImageDesc *)&local_c8,0);
  uVar7 = 0;
  if ((uVar9 & 1) != 0) {
    if ((((((int)local_88 == 3) && (local_b8._4_4_ == 3)) && (local_c0._4_4_ == 1)) &&
        (((int)local_c0 == 1 && ((int)local_b8 == 0)))) && ((int)local_b0 == 1)) {
      uVar7 = (uint)local_c8;
      uVar5 = local_c8._4_4_;
      if (((uint)local_c8 & 3 | local_c8._4_4_ & 3) != 0) {
        iVar8 = 0;
        if ((local_c8 & 3) != 0) {
          iVar8 = 4 - ((uint)local_c8 & 3);
        }
        iVar3 = 0;
        if ((local_c8 & 0x300000000) != 0) {
          iVar3 = 4 - (local_c8._4_4_ & 3);
        }
        uVar1 = iVar8 + (uint)local_c8;
        uVar2 = iVar3 + local_c8._4_4_;
        puVar11 = (uchar *)operator_new__((ulong)(uVar1 * uVar2 * 3));
        ImageScale::scaleImageBilinear(local_a0,uVar7,uVar5,3,puVar11,0,uVar1,uVar2);
        if (local_a0 != (uchar *)0x0) {
          operator_delete__(local_a0);
        }
        local_a8 = 0;
        local_c8 = CONCAT44(uVar2,uVar1);
        local_a0 = puVar11;
      }
      local_110 = 0;
      uStack_108 = 0;
      local_100 = 0;
      local_120 = 0;
      local_e0 = 0;
      local_118 = 0x100000001;
      local_d8 = 0;
      local_d4 = 0;
      local_d0 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_f8 = (void *)0x0;
      DXTUtil::encodeToBC1((ImageDesc *)&local_c8,param_2,(ImageDesc *)&local_120);
      if (local_a0 != (uchar *)0x0) {
        operator_delete__(local_a0);
      }
      local_a0 = (uchar *)0x0;
      local_a8 = 0;
      uVar7 = DDSUtil::saveImageToBuffer((ImageDesc *)&local_120,param_4,param_5);
      if ((uVar7 & 1) != 0) {
        pcVar12 = *(char **)(param_3 + 4);
        if ((*(byte *)param_3 & 1) == 0) {
          pcVar12 = (char *)((long)param_3 + 1);
        }
        plVar10 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,
                                           pcVar12,1,false);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x30))(plVar10,*param_4,*param_5);
          (**(code **)(*plVar10 + 8))(plVar10);
        }
      }
      if (local_f8 != (void *)0x0) {
        operator_delete__(local_f8);
      }
    }
    else {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0))
      {
                    /* try { // try from 00af66b0 to 00af66bb has its CatchHandler @ 00af66ec */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "[gads] Error: saveImageToDDS: Invalid format.\n");
      uVar7 = 0;
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return uVar7 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


