// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exportInit
// Entry Point: 0075a594
// Size: 1764 bytes
// Signature: undefined exportInit(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProfilerStats::exportInit() */

void ProfilerStats::exportInit(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long **pplVar5;
  long lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  long *plVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 local_118;
  undefined auStack_110 [8];
  undefined auStack_108 [8];
  undefined8 local_100;
  undefined auStack_f8 [8];
  undefined local_f0 [2];
  undefined uStack_ee;
  undefined uStack_ed;
  undefined uStack_ec;
  undefined4 uStack_eb;
  undefined7 uStack_e7;
  undefined uStack_e0;
  undefined uStack_df;
  undefined6 uStack_de;
  undefined8 local_d8;
  undefined uStack_d0;
  undefined4 local_cf;
  undefined local_cb;
  undefined2 uStack_ca;
  undefined local_c8;
  undefined7 uStack_c7;
  uint local_c0;
  undefined4 uStack_bc;
  undefined uStack_b8;
  undefined7 uStack_b7;
  undefined local_b0;
  undefined uStack_af;
  undefined6 uStack_ae;
  uint local_a0;
  undefined4 uStack_9c;
  undefined uStack_98;
  undefined2 uStack_97;
  undefined2 uStack_95;
  undefined uStack_93;
  undefined2 uStack_92;
  undefined uStack_90;
  undefined uStack_8f;
  undefined6 uStack_8e;
  undefined local_88 [6];
  undefined2 uStack_82;
  undefined uStack_80;
  undefined5 uStack_7f;
  undefined local_7a;
  undefined uStack_79;
  char *local_78;
  undefined8 local_70;
  undefined uStack_68;
  undefined7 uStack_67;
  char *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar3 = EngineManager::getInstance();
  uVar4 = *(ulong *)(lVar3 + 0xb8);
  if (uVar4 != 0) {
    pplVar5 = (long **)Renderer::getSharedRenderArgs();
    plVar10 = *pplVar5;
    if (plVar10 != (long *)0x0) {
      lVar6 = (**(code **)(*plVar10 + 0x28))(plVar10);
      ProfilerManager::getInstance();
      ProfilerManager::getStoredResultData();
      puVar7 = s_pJsonObject;
      s_samplingIndex = 0;
      if (s_pJsonObject != (undefined8 *)0x0) {
        JSONUtil::Object::~Object((Object *)s_pJsonObject);
        operator_delete(puVar7);
      }
      puVar7 = (undefined8 *)operator_new(0x28);
      s_pJsonObject = puVar7;
      *(undefined4 *)(puVar7 + 4) = 0x3f800000;
      local_70._0_1_ = 0x1e;
      puVar7[1] = 0;
      *puVar7 = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
      local_60 = (char *)((ulong)local_60 & 0xffffffffffffff00);
      local_70._1_7_ = 0x72617764726168;
      uStack_68 = 0x65;
      uStack_67 = 0x656c69666f7250;
                    /* try { // try from 0075a66c to 0075a67f has its CatchHandler @ 0075ad64 */
      pcVar8 = (char *)HardwareScalability::getPerformanceClassStr
                                 (*(PERFORMANCE_CLASS *)(lVar3 + 0x1b0));
      JSONUtil::Object::addAtom((Object *)puVar7,(basic_string *)&local_70,pcVar8);
      if (((byte)local_70 & 1) != 0) {
        operator_delete(local_60);
      }
      local_70._0_1_ = 0;
      local_70._1_7_ = 0;
      uStack_68 = 0;
      uStack_67 = 0;
      local_60 = (char *)0x0;
                    /* try { // try from 0075a698 to 0075a6a3 has its CatchHandler @ 0075ad30 */
      EnvUtil::getOSVersionName((basic_string *)&local_70);
      local_7a = 0;
      local_88[0] = 0x1a;
      pcVar8 = (char *)((ulong)&local_70 | 1);
      if (((byte)local_70 & 1) != 0) {
        pcVar8 = local_60;
      }
      local_88._1_5_ = 0x726556736f;
      uStack_82 = 0x6973;
      uStack_80 = 0x6f;
      uStack_7f = 0x656d614e6e;
                    /* try { // try from 0075a6e0 to 0075a6e7 has its CatchHandler @ 0075ad20 */
      JSONUtil::Object::addAtom((Object *)s_pJsonObject,(basic_string *)local_88,pcVar8);
      if ((local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
      local_88[0] = 0;
      local_88._1_5_ = 0;
      uStack_82 = 0;
      uStack_80 = 0;
      uStack_7f = 0;
      local_7a = 0;
      uStack_79 = 0;
      local_78 = (char *)0x0;
                    /* try { // try from 0075a700 to 0075a70b has its CatchHandler @ 0075ad18 */
      EnvUtil::getComputerName((basic_string *)local_88);
      uStack_97 = 0x614e;
      uStack_95 = 0x656d;
      pcVar8 = (char *)((ulong)local_88 | 1);
      if ((local_88[0] & 1) != 0) {
        pcVar8 = local_78;
      }
      local_a0 = 0x6d6f6318;
      uStack_9c = 0x65747570;
      uStack_98 = 0x72;
      uStack_93 = 0;
                    /* try { // try from 0075a74c to 0075a753 has its CatchHandler @ 0075ad14 */
      JSONUtil::Object::addAtom((Object *)s_pJsonObject,&local_a0,pcVar8);
      if ((local_a0 & 1) != 0) {
        operator_delete((void *)CONCAT62(uStack_8e,CONCAT11(uStack_8f,uStack_90)));
      }
      puVar7 = s_pJsonObject;
      uStack_93 = 0;
      uStack_97 = 0x7669;
      uStack_95 = 0x7265;
      local_a0 = 0x6e657218;
      uStack_9c = 0x44726564;
      uStack_98 = 0x72;
                    /* try { // try from 0075a790 to 0075a7a7 has its CatchHandler @ 0075ad74 */
      RenderDeviceManager::getInstance();
      pcVar8 = (char *)RenderDeviceManager::getCurrentRenderDeviceTypeName();
      JSONUtil::Object::addAtom((Object *)puVar7,&local_a0,pcVar8);
      if ((local_a0 & 1) != 0) {
        operator_delete((void *)CONCAT62(uStack_8e,CONCAT11(uStack_8f,uStack_90)));
      }
      local_a0 = 0x7570670e;
      pcVar8 = "Unknown";
      if (*(char *)(lVar6 + 0x38) != '\0') {
        pcVar8 = *(char **)(lVar6 + 0x40);
      }
      uStack_9c = 0x656d614e;
      uStack_98 = 0;
                    /* try { // try from 0075a7f8 to 0075a7ff has its CatchHandler @ 0075ad10 */
      JSONUtil::Object::addAtom((Object *)s_pJsonObject,&local_a0,pcVar8);
      if ((local_a0 & 1) != 0) {
        operator_delete((void *)CONCAT62(uStack_8e,CONCAT11(uStack_8f,uStack_90)));
      }
      puVar7 = s_pJsonObject;
      uStack_97 = 0x72;
      local_a0 = 0x75706712;
      uStack_9c = 0x646e6556;
      uStack_98 = 0x6f;
                    /* try { // try from 0075a834 to 0075a84b has its CatchHandler @ 0075ad60 */
      pcVar8 = (char *)RenderDeviceInformation::getVendorString();
      JSONUtil::Object::addAtom((Object *)puVar7,&local_a0,pcVar8);
      if ((local_a0 & 1) != 0) {
        operator_delete((void *)CONCAT62(uStack_8e,CONCAT11(uStack_8f,uStack_90)));
      }
      uStack_8f = 0;
      pcVar8 = "Unknown";
      if (*(char *)(lVar6 + 0x10) != '\0') {
        pcVar8 = *(char **)(lVar6 + 0x18);
      }
      uStack_97 = 0x5672;
      uStack_95 = 0x7265;
      uStack_93 = 0x73;
      uStack_92 = 0x6f69;
      uStack_90 = 0x6e;
      local_a0 = 0x75706720;
      uStack_9c = 0x76697244;
      uStack_98 = 0x65;
                    /* try { // try from 0075a88c to 0075a893 has its CatchHandler @ 0075ad0c */
      JSONUtil::Object::addAtom((Object *)s_pJsonObject,&local_a0,pcVar8);
      if ((local_a0 & 1) != 0) {
        operator_delete((void *)CONCAT62(uStack_8e,CONCAT11(uStack_8f,uStack_90)));
      }
      local_a0 = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_97 = 0;
      uStack_95 = 0;
      uStack_93 = 0;
      uStack_92 = 0;
      uStack_90 = 0;
      uStack_8f = 0;
      uStack_8e = 0;
                    /* try { // try from 0075a8ac to 0075a8b7 has its CatchHandler @ 0075ad08 */
      EnvUtil::getProcessorName(&local_a0);
      local_c0 = 0x7570630e;
      pcVar8 = (char *)((ulong)&local_a0 | 1);
      if ((local_a0 & 1) != 0) {
        pcVar8 = (char *)CONCAT62(uStack_8e,CONCAT11(uStack_8f,uStack_90));
      }
      uStack_bc = 0x656d614e;
      uStack_b8 = 0;
                    /* try { // try from 0075a8f4 to 0075a8fb has its CatchHandler @ 0075acf8 */
      JSONUtil::Object::addAtom((Object *)s_pJsonObject,&local_c0,pcVar8);
      if ((local_c0 & 1) != 0) {
        operator_delete((void *)CONCAT62(uStack_ae,CONCAT11(uStack_af,local_b0)));
      }
                    /* try { // try from 0075a90c to 0075a927 has its CatchHandler @ 0075ad50 */
      uVar4 = EnvUtil::getProcessorFreq();
      std::__ndk1::to_string((double)(unkuint9)uVar4 * 9.313225746154785e-10);
                    /* try { // try from 0075a928 to 0075a937 has its CatchHandler @ 0075ace4 */
      puVar7 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((char *)&local_d8);
      uVar9 = puVar7[2];
      local_b0 = (undefined)uVar9;
      uStack_af = (undefined)((ulong)uVar9 >> 8);
      uStack_ae = (undefined6)((ulong)uVar9 >> 0x10);
      uStack_b8 = (undefined)puVar7[1];
      uStack_b7 = (undefined7)((ulong)puVar7[1] >> 8);
      local_c0 = (uint)*puVar7;
      uStack_bc = (undefined4)((ulong)*puVar7 >> 0x20);
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      if (((byte)local_d8 & 1) != 0) {
        operator_delete((void *)CONCAT71(uStack_c7,local_c8));
      }
      local_cb = 0;
      local_d8._0_1_ = 0x18;
      local_cf = 0x79636e65;
      pcVar8 = (char *)((ulong)&local_c0 | 1);
      if ((local_c0 & 1) != 0) {
        pcVar8 = (char *)CONCAT62(uStack_ae,CONCAT11(uStack_af,local_b0));
      }
      local_d8._1_7_ = 0x71657246757063;
      uStack_d0 = 0x75;
                    /* try { // try from 0075a9a4 to 0075a9ab has its CatchHandler @ 0075accc */
      JSONUtil::Object::addAtom((Object *)s_pJsonObject,(basic_string *)&local_d8,pcVar8);
      if (((byte)local_d8 & 1) != 0) {
        operator_delete((void *)CONCAT71(uStack_c7,local_c8));
      }
                    /* try { // try from 0075a9bc to 0075a9cb has its CatchHandler @ 0075ad38 */
      uVar2 = EnvUtil::getNumOfProcessors();
      std::__ndk1::to_string(uVar2);
      uStack_df = 0;
      local_f0[0] = 0x20;
      pcVar8 = (char *)((ulong)&local_d8 | 1);
      if (((byte)local_d8 & 1) != 0) {
        pcVar8 = (char *)CONCAT71(uStack_c7,local_c8);
      }
      uStack_e7 = 0x726f737365636f;
      uStack_e0 = 0x73;
      local_f0[1] = 'c';
      uStack_ee = 'p';
      uStack_ed = 'u';
      uStack_ec = 'N';
      uStack_eb._0_1_ = 'u';
      uStack_eb._1_1_ = 'm';
      uStack_eb._2_1_ = 'P';
      uStack_eb._3_1_ = 'r';
                    /* try { // try from 0075aa00 to 0075aa07 has its CatchHandler @ 0075acac */
      JSONUtil::Object::addAtom((Object *)s_pJsonObject,(basic_string *)local_f0,pcVar8);
      if ((local_f0[0] & 1) != 0) {
        operator_delete((void *)CONCAT62(uStack_de,CONCAT11(uStack_df,uStack_e0)));
      }
      if (((byte)local_d8 & 1) != 0) {
        operator_delete((void *)CONCAT71(uStack_c7,local_c8));
      }
      if ((local_c0 & 1) != 0) {
        operator_delete((void *)CONCAT62(uStack_ae,CONCAT11(uStack_af,local_b0)));
      }
      if ((local_a0 & 1) != 0) {
        operator_delete((void *)CONCAT62(uStack_8e,CONCAT11(uStack_8f,uStack_90)));
      }
                    /* try { // try from 0075aa38 to 0075aa57 has its CatchHandler @ 0075aca4 */
      (**(code **)(*plVar10 + 0x58))
                (plVar10,local_f0,auStack_f8,&local_100,auStack_108,auStack_110,&local_118);
      dVar11 = (double)NEON_ucvtf(local_100);
                    /* try { // try from 0075aa6c to 0075aa73 has its CatchHandler @ 0075ac9c */
      std::__ndk1::to_string(dVar11 * 9.313225746154785e-10);
                    /* try { // try from 0075aa74 to 0075aa83 has its CatchHandler @ 0075ac88 */
      puVar7 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((char *)&local_c0);
      uVar9 = puVar7[2];
      uVar12 = puVar7[1];
      uStack_90 = (undefined)uVar9;
      uStack_8f = (undefined)((ulong)uVar9 >> 8);
      uStack_8e = (undefined6)((ulong)uVar9 >> 0x10);
      uStack_98 = (undefined)uVar12;
      uStack_97 = (undefined2)((ulong)uVar12 >> 8);
      uStack_95 = (undefined2)((ulong)uVar12 >> 0x18);
      uStack_93 = (undefined)((ulong)uVar12 >> 0x28);
      uStack_92 = (undefined2)((ulong)uVar12 >> 0x30);
      local_a0 = (uint)*puVar7;
      uStack_9c = (undefined4)((ulong)*puVar7 >> 0x20);
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      if ((local_c0 & 1) != 0) {
        operator_delete((void *)CONCAT62(uStack_ae,CONCAT11(uStack_af,local_b0)));
      }
      uStack_af = 0;
      pcVar8 = (char *)((ulong)&local_a0 | 1);
      if ((local_a0 & 1) != 0) {
        pcVar8 = (char *)CONCAT62(uStack_8e,CONCAT11(uStack_8f,uStack_90));
      }
      uStack_b7 = 0x65676475426d61;
      local_b0 = 0x74;
      local_c0 = 0x6d656d20;
      uStack_bc = 0x5679726f;
      uStack_b8 = 0x72;
                    /* try { // try from 0075aae4 to 0075aaeb has its CatchHandler @ 0075ac84 */
      JSONUtil::Object::addAtom((Object *)s_pJsonObject,&local_c0,pcVar8);
      if ((local_c0 & 1) != 0) {
        operator_delete((void *)CONCAT62(uStack_ae,CONCAT11(uStack_af,local_b0)));
      }
      dVar11 = (double)NEON_ucvtf(local_118);
                    /* try { // try from 0075ab10 to 0075ab17 has its CatchHandler @ 0075ac80 */
      std::__ndk1::to_string(dVar11 * 9.313225746154785e-10);
                    /* try { // try from 0075ab18 to 0075ab27 has its CatchHandler @ 0075ac7c */
      puVar7 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((char *)&local_d8);
      uVar9 = puVar7[2];
      local_b0 = (undefined)uVar9;
      uStack_af = (undefined)((ulong)uVar9 >> 8);
      uStack_ae = (undefined6)((ulong)uVar9 >> 0x10);
      uStack_b8 = (undefined)puVar7[1];
      uStack_b7 = (undefined7)((ulong)puVar7[1] >> 8);
      local_c0 = (uint)*puVar7;
      uStack_bc = (undefined4)((ulong)*puVar7 >> 0x20);
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      if (((byte)local_d8 & 1) != 0) {
        operator_delete((void *)CONCAT71(uStack_c7,local_c8));
      }
      local_c8 = 0;
      local_d8._0_1_ = 0x1e;
      local_d8._1_7_ = 0x4d79726f6d656d;
      uStack_d0 = 0x61;
      local_cf = 0x6f546e69;
      local_cb = 0x74;
      uStack_ca = 0x6c61;
      pcVar8 = (char *)((ulong)&local_c0 | 1);
      if ((local_c0 & 1) != 0) {
        pcVar8 = (char *)CONCAT62(uStack_ae,CONCAT11(uStack_af,local_b0));
      }
                    /* try { // try from 0075ab90 to 0075ab97 has its CatchHandler @ 0075ac78 */
      JSONUtil::Object::addAtom((Object *)s_pJsonObject,(basic_string *)&local_d8,pcVar8);
      if (((byte)local_d8 & 1) != 0) {
        operator_delete((void *)CONCAT71(uStack_c7,local_c8));
      }
      if ((local_c0 & 1) != 0) {
        operator_delete((void *)CONCAT62(uStack_ae,CONCAT11(uStack_af,local_b0)));
      }
      if ((local_a0 & 1) != 0) {
        operator_delete((void *)CONCAT62(uStack_8e,CONCAT11(uStack_8f,uStack_90)));
      }
      if ((local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
      if (((byte)local_70 & 1) != 0) {
        operator_delete(local_60);
      }
    }
    uVar4 = (ulong)(plVar10 != (long *)0x0);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


