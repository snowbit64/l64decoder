// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exportAddSampleBegin
// Entry Point: 0075b110
// Size: 5344 bytes
// Signature: undefined exportAddSampleBegin(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProfilerStats::exportAddSampleBegin() */

void ProfilerStats::exportAddSampleBegin(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long **pplVar5;
  GpuProfilerManager *this;
  ProfilerManager *this_00;
  undefined8 *puVar6;
  longlong lVar7;
  long lVar8;
  char *pcVar9;
  size_t __n;
  char *__dest;
  PROFILE_SECTION PVar10;
  long *plVar11;
  ulong uVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  byte local_448;
  undefined4 local_447;
  undefined local_443;
  void *local_438;
  undefined local_430 [5];
  undefined local_42b;
  char *local_420;
  undefined8 local_418;
  size_t local_410;
  char *local_408;
  undefined local_400 [2];
  undefined uStack_3fe;
  undefined uStack_3fd;
  undefined uStack_3fc;
  undefined4 uStack_3fb;
  undefined7 uStack_3f7;
  undefined4 uStack_3f0;
  uint uStack_3ec;
  undefined local_3e8 [2];
  undefined uStack_3e6;
  undefined uStack_3e5;
  undefined uStack_3e4;
  undefined4 uStack_3e3;
  undefined7 uStack_3df;
  undefined uStack_3d8;
  undefined4 uStack_3d7;
  undefined uStack_3d3;
  undefined2 uStack_3d2;
  ulong local_3d0;
  undefined8 uStack_3c8;
  undefined8 *local_3c0;
  undefined local_3b8 [2];
  undefined uStack_3b6;
  undefined uStack_3b5;
  undefined uStack_3b4;
  undefined4 uStack_3b3;
  undefined4 local_3af;
  undefined local_3ab;
  char *local_3a8;
  ulong local_3a0;
  undefined8 uStack_398;
  undefined8 *local_390;
  undefined local_388 [2];
  undefined uStack_386;
  undefined uStack_385;
  undefined uStack_384;
  undefined4 uStack_383;
  undefined6 uStack_37f;
  undefined uStack_379;
  undefined uStack_378;
  undefined6 uStack_377;
  undefined uStack_371;
  undefined local_370 [6];
  undefined3 uStack_36a;
  undefined5 uStack_367;
  undefined local_362;
  char *local_360;
  undefined local_358 [7];
  undefined2 uStack_351;
  undefined6 uStack_34f;
  undefined local_349;
  char *local_348;
  undefined local_340 [6];
  undefined3 uStack_33a;
  undefined5 uStack_337;
  undefined local_332;
  char *local_330;
  undefined local_328 [2];
  undefined uStack_326;
  undefined uStack_325;
  undefined uStack_324;
  undefined4 uStack_323;
  undefined7 uStack_31f;
  undefined uStack_318;
  undefined2 uStack_317;
  undefined uStack_315;
  undefined4 uStack_314;
  undefined local_310 [7];
  undefined2 uStack_309;
  undefined6 uStack_307;
  undefined local_301;
  char *local_300;
  undefined local_2f8 [7];
  undefined2 uStack_2f1;
  undefined6 uStack_2ef;
  undefined local_2e9;
  char *local_2e8;
  undefined local_2e0 [2];
  undefined uStack_2de;
  undefined uStack_2dd;
  undefined uStack_2dc;
  undefined4 uStack_2db;
  undefined7 uStack_2d7;
  undefined uStack_2d0;
  undefined2 uStack_2cf;
  undefined uStack_2cd;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined uStack_2c0;
  undefined7 uStack_2bf;
  undefined local_2b8;
  undefined7 uStack_2b7;
  undefined local_2b0 [2];
  undefined uStack_2ae;
  undefined uStack_2ad;
  undefined uStack_2ac;
  undefined4 uStack_2ab;
  undefined7 uStack_2a7;
  undefined uStack_2a0;
  undefined uStack_29f;
  undefined6 uStack_29e;
  undefined local_298 [2];
  undefined uStack_296;
  undefined uStack_295;
  undefined uStack_294;
  undefined4 uStack_293;
  undefined7 uStack_28f;
  undefined uStack_288;
  undefined2 uStack_287;
  undefined5 uStack_285;
  undefined8 local_280;
  undefined uStack_278;
  undefined7 uStack_277;
  undefined local_270;
  undefined7 uStack_26f;
  undefined local_268 [2];
  undefined uStack_266;
  undefined uStack_265;
  undefined uStack_264;
  undefined4 uStack_263;
  undefined7 uStack_25f;
  undefined uStack_258;
  undefined4 uStack_257;
  undefined uStack_253;
  undefined2 uStack_252;
  undefined local_250 [7];
  undefined2 uStack_249;
  undefined6 uStack_247;
  undefined local_241;
  char *local_240;
  undefined local_238 [2];
  undefined uStack_236;
  undefined uStack_235;
  undefined uStack_234;
  undefined4 uStack_233;
  undefined5 uStack_22f;
  undefined2 uStack_22a;
  undefined uStack_228;
  undefined5 uStack_227;
  undefined uStack_222;
  undefined uStack_221;
  undefined8 local_220;
  undefined uStack_218;
  undefined7 uStack_217;
  undefined local_210;
  undefined7 uStack_20f;
  undefined local_208 [2];
  undefined uStack_206;
  undefined uStack_205;
  undefined uStack_204;
  undefined4 uStack_203;
  undefined7 uStack_1ff;
  undefined uStack_1f8;
  undefined uStack_1f7;
  undefined6 uStack_1f6;
  undefined local_1f0 [2];
  undefined uStack_1ee;
  undefined uStack_1ed;
  undefined uStack_1ec;
  undefined4 uStack_1eb;
  undefined2 local_1e7;
  char *local_1e0;
  undefined local_1d8 [2];
  undefined uStack_1d6;
  undefined uStack_1d5;
  undefined uStack_1d4;
  undefined4 uStack_1d3;
  undefined7 uStack_1cf;
  undefined uStack_1c8;
  undefined2 uStack_1c7;
  undefined5 uStack_1c5;
  undefined local_1c0 [2];
  undefined uStack_1be;
  undefined uStack_1bd;
  undefined uStack_1bc;
  undefined4 uStack_1bb;
  undefined7 uStack_1b7;
  undefined uStack_1b0;
  undefined2 uStack_1af;
  undefined uStack_1ad;
  undefined4 uStack_1ac;
  undefined local_1a8 [6];
  undefined3 uStack_1a2;
  undefined5 uStack_19f;
  undefined local_19a;
  char *local_198;
  undefined local_190 [2];
  undefined uStack_18e;
  undefined uStack_18d;
  undefined uStack_18c;
  undefined4 uStack_18b;
  undefined7 uStack_187;
  undefined uStack_180;
  undefined2 uStack_17f;
  undefined uStack_17d;
  undefined4 uStack_17c;
  undefined local_178 [2];
  undefined uStack_176;
  undefined uStack_175;
  undefined uStack_174;
  undefined4 uStack_173;
  undefined7 uStack_16f;
  undefined uStack_168;
  undefined2 uStack_167;
  undefined uStack_165;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined uStack_158;
  undefined7 uStack_157;
  undefined local_150;
  undefined7 uStack_14f;
  undefined local_148 [2];
  undefined uStack_146;
  undefined uStack_145;
  undefined uStack_144;
  undefined4 uStack_143;
  undefined7 uStack_13f;
  undefined uStack_138;
  undefined2 uStack_137;
  undefined uStack_135;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined uStack_128;
  undefined7 uStack_127;
  undefined local_120;
  undefined7 uStack_11f;
  undefined auStack_118 [8];
  ulonglong local_110;
  ulonglong local_108;
  undefined auStack_100 [8];
  ulonglong local_f8;
  ulonglong local_f0;
  undefined local_e8 [2];
  undefined uStack_e6;
  undefined uStack_e5;
  undefined uStack_e4;
  undefined4 uStack_e3;
  undefined2 local_df;
  char *local_d8;
  undefined local_d0 [5];
  undefined local_cb;
  char *local_c0;
  undefined local_b8 [5];
  undefined2 local_b3;
  char *local_a8;
  byte local_a0 [16];
  char *local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  if (s_pJsonObject == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 0075c5b4 to 0075c5bf has its CatchHandler @ 0075c5f0 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: profiler export init missing\n");
  }
  else {
    lVar4 = EngineManager::getInstance();
    lVar4 = *(long *)(lVar4 + 0xb8);
    if (lVar4 != 0) {
      pplVar5 = (long **)Renderer::getSharedRenderArgs();
      plVar11 = *pplVar5;
      if (plVar11 != (long *)0x0) {
        this = (GpuProfilerManager *)GpuProfilerManager::getInstance();
        this_00 = (ProfilerManager *)ProfilerManager::getInstance();
        puVar6 = s_pJsonSampleObject;
        if (s_pJsonSampleObject != (undefined8 *)0x0) {
          JSONUtil::Object::~Object((Object *)s_pJsonSampleObject);
          operator_delete(puVar6);
        }
        puVar6 = (undefined8 *)operator_new(0x28);
        *(undefined4 *)(puVar6 + 4) = 0x3f800000;
        s_pJsonSampleObject = puVar6;
        puVar6[1] = 0;
        *puVar6 = 0;
        puVar6[3] = 0;
        puVar6[2] = 0;
        std::__ndk1::to_string(s_samplingIndex);
        local_b8[0] = 10;
        pcVar9 = (char *)((ulong)local_a0 | 1);
        if ((local_a0[0] & 1) != 0) {
          pcVar9 = local_90;
        }
        local_b8._1_4_ = 0x65646e69;
        local_b3 = 0x78;
                    /* try { // try from 0075b210 to 0075b217 has its CatchHandler @ 0075c97c */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)local_b8,pcVar9);
        if ((local_b8[0] & 1) != 0) {
          operator_delete(local_a8);
        }
                    /* try { // try from 0075b228 to 0075b237 has its CatchHandler @ 0075c9ac */
        lVar7 = EnvUtil::getTime();
        std::__ndk1::to_string(lVar7);
        local_d0[0] = 8;
        pcVar9 = (char *)((ulong)local_b8 | 1);
        if ((local_b8[0] & 1) != 0) {
          pcVar9 = local_a8;
        }
        local_d0._1_4_ = 0x656d6974;
        local_cb = 0;
                    /* try { // try from 0075b26c to 0075b273 has its CatchHandler @ 0075c96c */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)local_d0,pcVar9);
        if ((local_d0[0] & 1) != 0) {
          operator_delete(local_c0);
        }
                    /* try { // try from 0075b284 to 0075b28f has its CatchHandler @ 0075c964 */
        lVar8 = ProfilerManager::getSection(this_00,0);
                    /* try { // try from 0075b2a4 to 0075b2a7 has its CatchHandler @ 0075c95c */
        dVar13 = (double)Watch::convertTicksToMs
                                   (*(ulonglong *)
                                     (lVar8 + (ulong)(*(int *)(lVar8 + 0x128) - 1U & 0xf) * 8 + 0xa8
                                     ));
                    /* try { // try from 0075b2a8 to 0075b2b3 has its CatchHandler @ 0075c954 */
        std::__ndk1::to_string(dVar13);
        local_e8[0] = 0x12;
        pcVar9 = (char *)((ulong)local_d0 | 1);
        if ((local_d0[0] & 1) != 0) {
          pcVar9 = local_c0;
        }
        local_df = 0x65;
        local_e8[1] = 'f';
        uStack_e6 = 'r';
        uStack_e5 = 'a';
        uStack_e4 = 'm';
        uStack_e3._0_1_ = 'e';
        uStack_e3._1_1_ = 'T';
        uStack_e3._2_1_ = 'i';
        uStack_e3._3_1_ = 'm';
                    /* try { // try from 0075b2ec to 0075b2f3 has its CatchHandler @ 0075c944 */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)local_e8,pcVar9);
        if ((local_e8[0] & 1) != 0) {
          operator_delete(local_d8);
        }
                    /* try { // try from 0075b30c to 0075b32b has its CatchHandler @ 0075c93c */
        (**(code **)(*plVar11 + 0x58))
                  (plVar11,&local_f0,&local_f8,auStack_100,&local_108,&local_110,auStack_118);
                    /* try { // try from 0075b330 to 0075b33b has its CatchHandler @ 0075c934 */
        std::__ndk1::to_string(local_f0);
        local_120 = 0;
        local_130._0_1_ = 0x1e;
        pcVar9 = (char *)((ulong)local_e8 | 1);
        if ((local_e8[0] & 1) != 0) {
          pcVar9 = local_d8;
        }
        local_130._1_7_ = 0x5679726f6d656d;
        uStack_128 = 0x72;
        uStack_127 = 0x65676173556d61;
                    /* try { // try from 0075b378 to 0075b37f has its CatchHandler @ 0075c924 */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)&local_130,pcVar9);
        if (((byte)local_130 & 1) != 0) {
          operator_delete((void *)CONCAT71(uStack_11f,local_120));
        }
                    /* try { // try from 0075b394 to 0075b39f has its CatchHandler @ 0075c91c */
        std::__ndk1::to_string(local_f8);
        local_148[0] = 0x24;
        uStack_137 = 0x6465;
        pcVar9 = (char *)((ulong)&local_130 | 1);
        if (((byte)local_130 & 1) != 0) {
          pcVar9 = (char *)CONCAT71(uStack_11f,local_120);
        }
        uStack_135 = 0;
        uStack_13f = 0x72657365526d61;
        uStack_138 = 0x76;
        local_148[1] = 'm';
        uStack_146 = 'e';
        uStack_145 = 'm';
        uStack_144 = 'o';
        uStack_143._0_1_ = 'r';
        uStack_143._1_1_ = 'y';
        uStack_143._2_1_ = 'V';
        uStack_143._3_1_ = 'r';
                    /* try { // try from 0075b3dc to 0075b3e3 has its CatchHandler @ 0075c90c */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)local_148,pcVar9);
        if ((local_148[0] & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_134,
                                           CONCAT13(uStack_135,CONCAT21(uStack_137,uStack_138))));
        }
                    /* try { // try from 0075b3f8 to 0075b403 has its CatchHandler @ 0075c904 */
        std::__ndk1::to_string(local_108);
        local_150 = 0;
        local_160._0_1_ = 0x1e;
        pcVar9 = (char *)((ulong)local_148 | 1);
        if ((local_148[0] & 1) != 0) {
          pcVar9 = (char *)CONCAT44(uStack_134,CONCAT13(uStack_135,CONCAT21(uStack_137,uStack_138)))
          ;
        }
        local_160._1_7_ = 0x4d79726f6d656d;
        uStack_158 = 0x61;
        uStack_157 = 0x65676173556e69;
                    /* try { // try from 0075b440 to 0075b447 has its CatchHandler @ 0075c8f4 */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)&local_160,pcVar9);
        if (((byte)local_160 & 1) != 0) {
          operator_delete((void *)CONCAT71(uStack_14f,local_150));
        }
                    /* try { // try from 0075b45c to 0075b467 has its CatchHandler @ 0075c8ec */
        std::__ndk1::to_string(local_110);
        local_178[0] = 0x24;
        uStack_167 = 0x6465;
        pcVar9 = (char *)((ulong)&local_160 | 1);
        if (((byte)local_160 & 1) != 0) {
          pcVar9 = (char *)CONCAT71(uStack_14f,local_150);
        }
        uStack_165 = 0;
        uStack_16f = 0x72657365526e69;
        uStack_168 = 0x76;
        local_178[1] = 'm';
        uStack_176 = 'e';
        uStack_175 = 'm';
        uStack_174 = 'o';
        uStack_173._0_1_ = 'r';
        uStack_173._1_1_ = 'y';
        uStack_173._2_1_ = 'M';
        uStack_173._3_1_ = 'a';
                    /* try { // try from 0075b4a4 to 0075b4ab has its CatchHandler @ 0075c8dc */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)local_178,pcVar9);
        if ((local_178[0] & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_164,
                                           CONCAT13(uStack_165,CONCAT21(uStack_167,uStack_168))));
        }
                    /* try { // try from 0075b4c4 to 0075b4d7 has its CatchHandler @ 0075c9a4 */
        uVar2 = (**(code **)(*plVar11 + 0x38))(plVar11);
        std::__ndk1::to_string(uVar2);
        local_190[0] = 0x24;
        uStack_17f = 0x7465;
        pcVar9 = (char *)((ulong)local_178 | 1);
        if ((local_178[0] & 1) != 0) {
          pcVar9 = (char *)CONCAT44(uStack_164,CONCAT13(uStack_165,CONCAT21(uStack_167,uStack_168)))
          ;
        }
        uStack_17d = 0;
        uStack_187 = 0x7261547265646e;
        uStack_180 = 0x67;
        local_190[1] = 'm';
        uStack_18e = 'e';
        uStack_18d = 'm';
        uStack_18c = 'o';
        uStack_18b._0_1_ = 'r';
        uStack_18b._1_1_ = 'y';
        uStack_18b._2_1_ = 'R';
        uStack_18b._3_1_ = 'e';
                    /* try { // try from 0075b514 to 0075b51b has its CatchHandler @ 0075c8cc */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)local_190,pcVar9);
        if ((local_190[0] & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_17c,
                                           CONCAT13(uStack_17d,CONCAT21(uStack_17f,uStack_180))));
        }
                    /* try { // try from 0075b534 to 0075b547 has its CatchHandler @ 0075c99c */
        uVar2 = (**(code **)(*plVar11 + 0x40))(plVar11);
        std::__ndk1::to_string(uVar2);
        local_19a = 0;
        local_1a8[0] = 0x1a;
        pcVar9 = (char *)((ulong)local_190 | 1);
        if ((local_190[0] & 1) != 0) {
          pcVar9 = (char *)CONCAT44(uStack_17c,CONCAT13(uStack_17d,CONCAT21(uStack_17f,uStack_180)))
          ;
        }
        local_1a8._1_5_ = 0x726f6d656d;
        uStack_1a2 = 0x655479;
        uStack_19f = 0x6572757478;
                    /* try { // try from 0075b584 to 0075b58b has its CatchHandler @ 0075c8bc */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)local_1a8,pcVar9);
        if ((local_1a8[0] & 1) != 0) {
          operator_delete(local_198);
        }
                    /* try { // try from 0075b5a4 to 0075b5b7 has its CatchHandler @ 0075c994 */
        uVar2 = (**(code **)(*plVar11 + 0x48))(plVar11);
        std::__ndk1::to_string(uVar2);
        local_1c0[0] = 0x24;
        uStack_1af = 0x7265;
        pcVar9 = (char *)((ulong)local_1a8 | 1);
        if ((local_1a8[0] & 1) != 0) {
          pcVar9 = local_198;
        }
        uStack_1ad = 0;
        uStack_1b7 = 0x66754278657472;
        uStack_1b0 = 0x66;
        local_1c0[1] = 'm';
        uStack_1be = 'e';
        uStack_1bd = 'm';
        uStack_1bc = 'o';
        uStack_1bb._0_1_ = 'r';
        uStack_1bb._1_1_ = 'y';
        uStack_1bb._2_1_ = 'V';
        uStack_1bb._3_1_ = 'e';
                    /* try { // try from 0075b5f4 to 0075b5fb has its CatchHandler @ 0075c8ac */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)local_1c0,pcVar9);
        if ((local_1c0[0] & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_1ac,
                                           CONCAT13(uStack_1ad,CONCAT21(uStack_1af,uStack_1b0))));
        }
                    /* try { // try from 0075b614 to 0075b627 has its CatchHandler @ 0075c98c */
        uVar2 = (**(code **)(*plVar11 + 0x50))(plVar11);
        std::__ndk1::to_string(uVar2);
        local_1d8[0] = 0x22;
        pcVar9 = (char *)((ulong)local_1c0 | 1);
        if ((local_1c0[0] & 1) != 0) {
          pcVar9 = (char *)CONCAT44(uStack_1ac,CONCAT13(uStack_1ad,CONCAT21(uStack_1af,uStack_1b0)))
          ;
        }
        uStack_1cf = 0x66667542786564;
        uStack_1c8 = 0x65;
        local_1d8[1] = 'm';
        uStack_1d6 = 'e';
        uStack_1d5 = 'm';
        uStack_1d4 = 'o';
        uStack_1d3._0_1_ = 'r';
        uStack_1d3._1_1_ = 'y';
        uStack_1d3._2_1_ = 'I';
        uStack_1d3._3_1_ = 'n';
        uStack_1c7 = 0x72;
                    /* try { // try from 0075b664 to 0075b66b has its CatchHandler @ 0075c89c */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)local_1d8,pcVar9);
        if ((local_1d8[0] & 1) != 0) {
          operator_delete((void *)CONCAT53(uStack_1c5,CONCAT21(uStack_1c7,uStack_1c8)));
        }
                    /* try { // try from 0075b680 to 0075b68b has its CatchHandler @ 0075c894 */
        std::__ndk1::to_string(*(uint *)(lVar4 + 0x1a88));
        local_1f0[0] = 0x12;
        pcVar9 = (char *)((ulong)local_1d8 | 1);
        if ((local_1d8[0] & 1) != 0) {
          pcVar9 = (char *)CONCAT53(uStack_1c5,CONCAT21(uStack_1c7,uStack_1c8));
        }
        local_1e7 = 0x74;
        local_1f0[1] = 'o';
        uStack_1ee = 'b';
        uStack_1ed = 'j';
        uStack_1ec = 's';
        uStack_1eb._0_1_ = 'C';
        uStack_1eb._1_1_ = 'o';
        uStack_1eb._2_1_ = 'u';
        uStack_1eb._3_1_ = 'n';
                    /* try { // try from 0075b6c4 to 0075b6cb has its CatchHandler @ 0075c884 */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)local_1f0,pcVar9);
        if ((local_1f0[0] & 1) != 0) {
          operator_delete(local_1e0);
        }
                    /* try { // try from 0075b6e0 to 0075b6eb has its CatchHandler @ 0075c87c */
        std::__ndk1::to_string(*(uint *)(lVar4 + 0x1a8c));
        uStack_1f7 = 0;
        local_208[0] = 0x20;
        pcVar9 = (char *)((ulong)local_1f0 | 1);
        if ((local_1f0[0] & 1) != 0) {
          pcVar9 = local_1e0;
        }
        uStack_1ff = 0x6e756f43737468;
        uStack_1f8 = 0x74;
        local_208[1] = 'p';
        uStack_206 = 'o';
        uStack_205 = 'i';
        uStack_204 = 'n';
        uStack_203._0_1_ = 't';
        uStack_203._1_1_ = 'L';
        uStack_203._2_1_ = 'i';
        uStack_203._3_1_ = 'g';
                    /* try { // try from 0075b720 to 0075b727 has its CatchHandler @ 0075c86c */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)local_208,pcVar9);
        if ((local_208[0] & 1) != 0) {
          operator_delete((void *)CONCAT62(uStack_1f6,CONCAT11(uStack_1f7,uStack_1f8)));
        }
                    /* try { // try from 0075b73c to 0075b747 has its CatchHandler @ 0075c864 */
        std::__ndk1::to_string(*(uint *)(lVar4 + 0x1a90));
        local_210 = 0;
        local_220._0_1_ = 0x1e;
        pcVar9 = (char *)((ulong)local_208 | 1);
        if ((local_208[0] & 1) != 0) {
          pcVar9 = (char *)CONCAT62(uStack_1f6,CONCAT11(uStack_1f7,uStack_1f8));
        }
        local_220._1_7_ = 0x67694c746f7073;
        uStack_218 = 0x68;
        uStack_217 = 0x746e756f437374;
                    /* try { // try from 0075b784 to 0075b78b has its CatchHandler @ 0075c854 */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)&local_220,pcVar9);
        if (((byte)local_220 & 1) != 0) {
          operator_delete((void *)CONCAT71(uStack_20f,local_210));
        }
                    /* try { // try from 0075b7a0 to 0075b7ab has its CatchHandler @ 0075c84c */
        std::__ndk1::to_string(*(uint *)(lVar4 + 0x1a94));
        uStack_222 = 0;
        local_238[0] = 0x2a;
        pcVar9 = (char *)((ulong)&local_220 | 1);
        if (((byte)local_220 & 1) != 0) {
          pcVar9 = (char *)CONCAT71(uStack_20f,local_210);
        }
        uStack_22f = 0x67694c746f;
        local_238[1] = 's';
        uStack_236 = 'h';
        uStack_235 = 'a';
        uStack_234 = 'd';
        uStack_233._0_1_ = 'o';
        uStack_233._1_1_ = 'w';
        uStack_233._2_1_ = 'S';
        uStack_233._3_1_ = 'p';
        uStack_22a = 0x7468;
        uStack_228 = 0x73;
        uStack_227 = 0x746e756f43;
                    /* try { // try from 0075b7e8 to 0075b7ef has its CatchHandler @ 0075c83c */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)local_238,pcVar9);
        if ((local_238[0] & 1) != 0) {
          operator_delete((void *)CONCAT17(uStack_221,
                                           CONCAT16(uStack_222,CONCAT51(uStack_227,uStack_228))));
        }
                    /* try { // try from 0075b804 to 0075b80f has its CatchHandler @ 0075c834 */
        std::__ndk1::to_string(*(uint *)(lVar4 + 0x1a98));
        local_241 = 0;
        local_250[0] = 0x1c;
        pcVar9 = (char *)((ulong)local_238 | 1);
        if ((local_238[0] & 1) != 0) {
          pcVar9 = (char *)CONCAT17(uStack_221,CONCAT16(uStack_222,CONCAT51(uStack_227,uStack_228)))
          ;
        }
        local_250._1_6_ = 0x67694c726964;
        uStack_249 = 0x7468;
        uStack_247 = 0x746e756f4373;
                    /* try { // try from 0075b84c to 0075b853 has its CatchHandler @ 0075c824 */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)local_250,pcVar9);
        if ((local_250[0] & 1) != 0) {
          operator_delete(local_240);
        }
                    /* try { // try from 0075b868 to 0075b873 has its CatchHandler @ 0075c81c */
        std::__ndk1::to_string(*(uint *)(lVar4 + 0x1a9c));
        local_268[0] = 0x28;
        uStack_257 = 0x746e756f;
        pcVar9 = (char *)((ulong)local_250 | 1);
        if ((local_250[0] & 1) != 0) {
          pcVar9 = local_240;
        }
        uStack_25f = 0x73746867694c72;
        uStack_258 = 0x43;
        local_268[1] = 's';
        uStack_266 = 'h';
        uStack_265 = 'a';
        uStack_264 = 'd';
        uStack_263._0_1_ = 'o';
        uStack_263._1_1_ = 'w';
        uStack_263._2_1_ = 'D';
        uStack_263._3_1_ = 'i';
        uStack_253 = 0;
                    /* try { // try from 0075b8b4 to 0075b8bb has its CatchHandler @ 0075c80c */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)local_268,pcVar9);
        if ((local_268[0] & 1) != 0) {
          operator_delete((void *)CONCAT26(uStack_252,
                                           CONCAT15(uStack_253,CONCAT41(uStack_257,uStack_258))));
        }
                    /* try { // try from 0075b8d0 to 0075b8db has its CatchHandler @ 0075c804 */
        std::__ndk1::to_string(*(uint *)(lVar4 + 0x1aa0));
        local_270 = 0;
        local_280._0_1_ = 0x1e;
        pcVar9 = (char *)((ulong)local_268 | 1);
        if ((local_268[0] & 1) != 0) {
          pcVar9 = (char *)CONCAT26(uStack_252,CONCAT15(uStack_253,CONCAT41(uStack_257,uStack_258)))
          ;
        }
        local_280._1_7_ = 0x7247746867696c;
        uStack_278 = 0x69;
        uStack_277 = 0x746e756f437364;
                    /* try { // try from 0075b918 to 0075b91f has its CatchHandler @ 0075c7f4 */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)&local_280,pcVar9);
        if (((byte)local_280 & 1) != 0) {
          operator_delete((void *)CONCAT71(uStack_26f,local_270));
        }
                    /* try { // try from 0075b934 to 0075b93f has its CatchHandler @ 0075c7ec */
        std::__ndk1::to_string(*(uint *)(lVar4 + 0x1aa4));
        local_298[0] = 0x22;
        pcVar9 = (char *)((ulong)&local_280 | 1);
        if (((byte)local_280 & 1) != 0) {
          pcVar9 = (char *)CONCAT71(uStack_26f,local_270);
        }
        uStack_28f = 0x756f4374656772;
        uStack_288 = 0x6e;
        local_298[1] = 'r';
        uStack_296 = 'e';
        uStack_295 = 'n';
        uStack_294 = 'd';
        uStack_293._0_1_ = 'e';
        uStack_293._1_1_ = 'r';
        uStack_293._2_1_ = 'T';
        uStack_293._3_1_ = 'a';
        uStack_287 = 0x74;
                    /* try { // try from 0075b978 to 0075b97f has its CatchHandler @ 0075c7dc */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)local_298,pcVar9);
        if ((local_298[0] & 1) != 0) {
          operator_delete((void *)CONCAT53(uStack_285,CONCAT21(uStack_287,uStack_288)));
        }
                    /* try { // try from 0075b994 to 0075b99f has its CatchHandler @ 0075c7d4 */
        std::__ndk1::to_string(*(uint *)(lVar4 + 0x1aa8));
        uStack_29f = 0;
        local_2b0[0] = 0x20;
        pcVar9 = (char *)((ulong)local_298 | 1);
        if ((local_298[0] & 1) != 0) {
          pcVar9 = (char *)CONCAT53(uStack_285,CONCAT21(uStack_287,uStack_288));
        }
        uStack_2a7 = 0x6e756f43657565;
        uStack_2a0 = 0x74;
        local_2b0[1] = 'r';
        uStack_2ae = 'e';
        uStack_2ad = 'n';
        uStack_2ac = 'd';
        uStack_2ab._0_1_ = 'e';
        uStack_2ab._1_1_ = 'r';
        uStack_2ab._2_1_ = 'Q';
        uStack_2ab._3_1_ = 'u';
                    /* try { // try from 0075b9d4 to 0075b9db has its CatchHandler @ 0075c7c4 */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)local_2b0,pcVar9);
        if ((local_2b0[0] & 1) != 0) {
          operator_delete((void *)CONCAT62(uStack_29e,CONCAT11(uStack_29f,uStack_2a0)));
        }
                    /* try { // try from 0075b9f0 to 0075b9fb has its CatchHandler @ 0075c7bc */
        std::__ndk1::to_string(*(uint *)(lVar4 + 0x1aac));
        local_2b8 = 0;
        local_2c8._0_1_ = 0x1e;
        local_2c8._1_7_ = 0x507265646e6572;
        pcVar9 = (char *)((ulong)local_2b0 | 1);
        if ((local_2b0[0] & 1) != 0) {
          pcVar9 = (char *)CONCAT62(uStack_29e,CONCAT11(uStack_29f,uStack_2a0));
        }
        uStack_2c0 = 0x61;
        uStack_2bf = 0x746e756f437373;
                    /* try { // try from 0075ba3c to 0075ba43 has its CatchHandler @ 0075c7ac */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)&local_2c8,pcVar9);
        if (((byte)local_2c8 & 1) != 0) {
          operator_delete((void *)CONCAT71(uStack_2b7,local_2b8));
        }
                    /* try { // try from 0075ba58 to 0075ba63 has its CatchHandler @ 0075c7a4 */
        std::__ndk1::to_string(*(uint *)(lVar4 + 0x1ab0));
        local_2e0[0] = 0x24;
        uStack_2cf = 0x746e;
        pcVar9 = (char *)((ulong)&local_2c8 | 1);
        if (((byte)local_2c8 & 1) != 0) {
          pcVar9 = (char *)CONCAT71(uStack_2b7,local_2b8);
        }
        uStack_2cd = 0;
        uStack_2d7 = 0x6f437372656666;
        uStack_2d0 = 0x75;
        local_2e0[1] = 'v';
        uStack_2de = 'e';
        uStack_2dd = 'r';
        uStack_2dc = 't';
        uStack_2db._0_1_ = 'e';
        uStack_2db._1_1_ = 'x';
        uStack_2db._2_1_ = 'B';
        uStack_2db._3_1_ = 'u';
                    /* try { // try from 0075baa0 to 0075baa7 has its CatchHandler @ 0075c794 */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)local_2e0,pcVar9);
        if ((local_2e0[0] & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_2cc,
                                           CONCAT13(uStack_2cd,CONCAT21(uStack_2cf,uStack_2d0))));
        }
                    /* try { // try from 0075babc to 0075bac7 has its CatchHandler @ 0075c78c */
        std::__ndk1::to_string(*(uint *)(lVar4 + 0x1ab4));
        local_2e9 = 0;
        local_2f8[0] = 0x1c;
        pcVar9 = (char *)((ulong)local_2e0 | 1);
        if ((local_2e0[0] & 1) != 0) {
          pcVar9 = (char *)CONCAT44(uStack_2cc,CONCAT13(uStack_2cd,CONCAT21(uStack_2cf,uStack_2d0)))
          ;
        }
        local_2f8._1_6_ = 0x614377617264;
        uStack_2f1 = 0x6c6c;
        uStack_2ef = 0x746e756f4373;
                    /* try { // try from 0075bb04 to 0075bb0b has its CatchHandler @ 0075c77c */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)local_2f8,pcVar9);
        if ((local_2f8[0] & 1) != 0) {
          operator_delete(local_2e8);
        }
                    /* try { // try from 0075bb20 to 0075bb2b has its CatchHandler @ 0075c774 */
        std::__ndk1::to_string(*(uint *)(lVar4 + 0x1ab8));
        local_301 = 0;
        local_310[0] = 0x1c;
        pcVar9 = (char *)((ulong)local_2f8 | 1);
        if ((local_2f8[0] & 1) != 0) {
          pcVar9 = local_2e8;
        }
        local_310._1_6_ = 0x6e6174736e69;
        uStack_309 = 0x6563;
        uStack_307 = 0x746e756f4373;
                    /* try { // try from 0075bb68 to 0075bb6f has its CatchHandler @ 0075c764 */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)local_310,pcVar9);
        if ((local_310[0] & 1) != 0) {
          operator_delete(local_300);
        }
                    /* try { // try from 0075bb84 to 0075bb8f has its CatchHandler @ 0075c75c */
        std::__ndk1::to_string(*(uint *)(lVar4 + 0x1abc));
        local_328[0] = 0x24;
        uStack_317 = 0x746e;
        pcVar9 = (char *)((ulong)local_310 | 1);
        if ((local_310[0] & 1) != 0) {
          pcVar9 = local_300;
        }
        uStack_315 = 0;
        uStack_31f = 0x6f437365636e61;
        uStack_318 = 0x75;
        local_328[1] = 's';
        uStack_326 = 'o';
        uStack_325 = 'f';
        uStack_324 = 't';
        uStack_323._0_1_ = 'I';
        uStack_323._1_1_ = 'n';
        uStack_323._2_1_ = 's';
        uStack_323._3_1_ = 't';
                    /* try { // try from 0075bbcc to 0075bbd3 has its CatchHandler @ 0075c74c */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)local_328,pcVar9);
        if ((local_328[0] & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_314,
                                           CONCAT13(uStack_315,CONCAT21(uStack_317,uStack_318))));
        }
                    /* try { // try from 0075bbe8 to 0075bbf3 has its CatchHandler @ 0075c744 */
        std::__ndk1::to_string(*(uint *)(lVar4 + 0x1ac0));
        local_332 = 0;
        local_340[0] = 0x1a;
        pcVar9 = (char *)((ulong)local_328 | 1);
        if ((local_328[0] & 1) != 0) {
          pcVar9 = (char *)CONCAT44(uStack_314,CONCAT13(uStack_315,CONCAT21(uStack_317,uStack_318)))
          ;
        }
        local_340._1_5_ = 0x6170736964;
        uStack_33a = 0x686374;
        uStack_337 = 0x746e756f43;
                    /* try { // try from 0075bc30 to 0075bc37 has its CatchHandler @ 0075c734 */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)local_340,pcVar9);
        if ((local_340[0] & 1) != 0) {
          operator_delete(local_330);
        }
                    /* try { // try from 0075bc4c to 0075bc57 has its CatchHandler @ 0075c72c */
        std::__ndk1::to_string(*(uint *)(lVar4 + 0x1ac4));
        local_349 = 0;
        local_358[0] = 0x1c;
        pcVar9 = (char *)((ulong)local_340 | 1);
        if ((local_340[0] & 1) != 0) {
          pcVar9 = local_330;
        }
        local_358._1_6_ = 0x676e61697274;
        uStack_351 = 0x656c;
        uStack_34f = 0x746e756f4373;
                    /* try { // try from 0075bc94 to 0075bc9b has its CatchHandler @ 0075c71c */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)local_358,pcVar9);
        if ((local_358[0] & 1) != 0) {
          operator_delete(local_348);
        }
                    /* try { // try from 0075bcb0 to 0075bcbb has its CatchHandler @ 0075c714 */
        std::__ndk1::to_string(*(uint *)(lVar4 + 0x1ac8));
        local_362 = 0;
        local_370[0] = 0x1a;
        pcVar9 = (char *)((ulong)local_358 | 1);
        if ((local_358[0] & 1) != 0) {
          pcVar9 = local_348;
        }
        local_370._1_5_ = 0x6974726576;
        uStack_36a = 0x736563;
        uStack_367 = 0x746e756f43;
                    /* try { // try from 0075bcf8 to 0075bcff has its CatchHandler @ 0075c704 */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)local_370,pcVar9);
        if ((local_370[0] & 1) != 0) {
          operator_delete(local_360);
        }
                    /* try { // try from 0075bd14 to 0075bd1f has its CatchHandler @ 0075c6fc */
        std::__ndk1::to_string(*(uint *)(lVar4 + 0x1acc));
        uStack_371 = 0;
        local_388[0] = 0x2c;
        pcVar9 = (char *)((ulong)local_370 | 1);
        if ((local_370[0] & 1) != 0) {
          pcVar9 = local_360;
        }
        uStack_37f = 0x746544646564;
        local_388[1] = 'n';
        uStack_386 = 'u';
        uStack_385 = 'm';
        uStack_384 = 'U';
        uStack_383._0_1_ = 'p';
        uStack_383._1_1_ = 'l';
        uStack_383._2_1_ = 'o';
        uStack_383._3_1_ = 'a';
        uStack_379 = 0x61;
        uStack_378 = 0x69;
        uStack_377 = 0x736c6c65436c;
                    /* try { // try from 0075bd5c to 0075bd63 has its CatchHandler @ 0075c6ec */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)local_388,pcVar9);
        if ((local_388[0] & 1) != 0) {
          operator_delete((void *)CONCAT17(uStack_371,CONCAT61(uStack_377,uStack_378)));
        }
                    /* try { // try from 0075bd78 to 0075bd7f has its CatchHandler @ 0075c6e4 */
        std::__ndk1::to_string(*(uint *)(lVar4 + 0x1ad0));
        puVar6 = s_pJsonSampleObject;
                    /* try { // try from 0075bd84 to 0075bd8b has its CatchHandler @ 0075c6dc */
        local_390 = (undefined8 *)operator_new(0x20);
        *(undefined *)((long)local_390 + 0x17) = 0;
        uStack_398 = 0x17;
        local_3a0 = 0x21;
        local_390[1] = 0x61696c6f46646564;
        *local_390 = 0x616f6c70556d756e;
        pcVar9 = (char *)((ulong)local_388 | 1);
        if ((local_388[0] & 1) != 0) {
          pcVar9 = (char *)CONCAT17(uStack_371,CONCAT61(uStack_377,uStack_378));
        }
        *(undefined8 *)((long)local_390 + 0xf) = 0x736c6c6543656761;
                    /* try { // try from 0075bdd0 to 0075bddb has its CatchHandler @ 0075c6cc */
        JSONUtil::Object::addAtom((Object *)puVar6,(basic_string *)&local_3a0,pcVar9);
        if ((local_3a0 & 1) != 0) {
          operator_delete(local_390);
        }
                    /* try { // try from 0075bdf0 to 0075bdfb has its CatchHandler @ 0075c6c4 */
        std::__ndk1::to_string(*(uint *)(lVar4 + 0x1ad4));
        local_3b8[0] = 0x18;
        local_3af = 0x73726564;
        puVar6 = (undefined8 *)((ulong)&local_3a0 | 1);
        if ((local_3a0 & 1) != 0) {
          puVar6 = local_390;
        }
        local_3b8[1] = 'n';
        uStack_3b6 = 'u';
        uStack_3b5 = 'm';
        uStack_3b4 = 'O';
        uStack_3b3._0_1_ = 'c';
        uStack_3b3._1_1_ = 'c';
        uStack_3b3._2_1_ = 'l';
        uStack_3b3._3_1_ = 'u';
        local_3ab = 0;
                    /* try { // try from 0075be3c to 0075be43 has its CatchHandler @ 0075c6b4 */
        JSONUtil::Object::addAtom
                  ((Object *)s_pJsonSampleObject,(basic_string *)local_3b8,(char *)puVar6);
        if ((local_3b8[0] & 1) != 0) {
          operator_delete(local_3a8);
        }
                    /* try { // try from 0075be58 to 0075be5f has its CatchHandler @ 0075c6ac */
        std::__ndk1::to_string(*(uint *)(lVar4 + 0x1ad8));
        puVar6 = s_pJsonSampleObject;
                    /* try { // try from 0075be64 to 0075be6b has its CatchHandler @ 0075c6a4 */
        local_3c0 = (undefined8 *)operator_new(0x20);
        *(undefined *)(local_3c0 + 3) = 0;
        uStack_3c8 = 0x18;
        local_3d0 = 0x21;
        local_3c0[1] = 0x6c6c75436e6f6973;
        *local_3c0 = 0x756c63634f6d756e;
        pcVar9 = (char *)((ulong)local_3b8 | 1);
        if ((local_3b8[0] & 1) != 0) {
          pcVar9 = local_3a8;
        }
        local_3c0[2] = 0x7365706168536465;
                    /* try { // try from 0075beb0 to 0075bebb has its CatchHandler @ 0075c694 */
        JSONUtil::Object::addAtom((Object *)puVar6,(basic_string *)&local_3d0,pcVar9);
        if ((local_3d0 & 1) != 0) {
          operator_delete(local_3c0);
        }
                    /* try { // try from 0075bed0 to 0075bedb has its CatchHandler @ 0075c68c */
        std::__ndk1::to_string(*(uint *)(lVar4 + 0x1adc));
        local_3e8[0] = 0x28;
        uStack_3d7 = 0x73656c67;
        puVar6 = (undefined8 *)((ulong)&local_3d0 | 1);
        if ((local_3d0 & 1) != 0) {
          puVar6 = local_3c0;
        }
        uStack_3df = 0x61697254726564;
        uStack_3d8 = 0x6e;
        local_3e8[1] = 'n';
        uStack_3e6 = 'u';
        uStack_3e5 = 'm';
        uStack_3e4 = 'O';
        uStack_3e3._0_1_ = 'c';
        uStack_3e3._1_1_ = 'c';
        uStack_3e3._2_1_ = 'l';
        uStack_3e3._3_1_ = 'u';
        uStack_3d3 = 0;
                    /* try { // try from 0075bf1c to 0075bf23 has its CatchHandler @ 0075c67c */
        JSONUtil::Object::addAtom
                  ((Object *)s_pJsonSampleObject,(basic_string *)local_3e8,(char *)puVar6);
        if ((local_3e8[0] & 1) != 0) {
          operator_delete((void *)CONCAT26(uStack_3d2,
                                           CONCAT15(uStack_3d3,CONCAT41(uStack_3d7,uStack_3d8))));
        }
                    /* try { // try from 0075bf38 to 0075bf43 has its CatchHandler @ 0075c674 */
        std::__ndk1::to_string(*(uint *)(lVar4 + 0x1ae0));
        local_400[0] = 0x26;
        pcVar9 = (char *)((ulong)local_3e8 | 1);
        if ((local_3e8[0] & 1) != 0) {
          pcVar9 = (char *)CONCAT26(uStack_3d2,CONCAT15(uStack_3d3,CONCAT41(uStack_3d7,uStack_3d8)))
          ;
        }
        uStack_3f7 = 0x6174736e497466;
        uStack_3f0 = 0x7365636e;
        local_400[1] = 'm';
        uStack_3fe = 'a';
        uStack_3fd = 'x';
        uStack_3fc = 'N';
        uStack_3fb._0_1_ = 'u';
        uStack_3fb._1_1_ = 'm';
        uStack_3fb._2_1_ = 'S';
        uStack_3fb._3_1_ = 'o';
        uStack_3ec = uStack_3ec & 0xffffff00;
                    /* try { // try from 0075bf84 to 0075bf8b has its CatchHandler @ 0075c664 */
        JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)local_400,pcVar9);
        if ((local_400[0] & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_3ec,uStack_3f0));
        }
        PVar10 = 0;
        do {
                    /* try { // try from 0075bfc4 to 0075bfcf has its CatchHandler @ 0075c9b8 */
          pcVar9 = (char *)GpuProfilerManager::getSectionName(this,PVar10);
                    /* try { // try from 0075bfd4 to 0075bfdf has its CatchHandler @ 0075c9bc */
          uVar2 = GpuProfilerManager::getSectionTime(this,PVar10);
                    /* try { // try from 0075bfe0 to 0075bfe7 has its CatchHandler @ 0075c9c0 */
          std::__ndk1::to_string(uVar2);
          puVar6 = s_pJsonSampleObject;
          __n = strlen(pcVar9);
          if (0xffffffffffffffef < __n) {
                    /* try { // try from 0075c59c to 0075c5a3 has its CatchHandler @ 0075c9e0 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (__n < 0x17) {
            local_418 = CONCAT71(local_418._1_7_,(char)((int)__n << 1));
            __dest = (char *)((ulong)&local_418 | 1);
            if (__n != 0) goto LAB_0075c04c;
          }
          else {
            uVar12 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0075c02c to 0075c033 has its CatchHandler @ 0075c9b4 */
            __dest = (char *)operator_new(uVar12);
            local_418 = uVar12 | 1;
            local_410 = __n;
            local_408 = __dest;
LAB_0075c04c:
            memcpy(__dest,pcVar9,__n);
          }
          __dest[__n] = '\0';
          pcVar9 = (char *)((ulong)local_400 | 1);
          if ((local_400[0] & 1) != 0) {
            pcVar9 = (char *)CONCAT44(uStack_3ec,uStack_3f0);
          }
                    /* try { // try from 0075c070 to 0075c07b has its CatchHandler @ 0075c9c8 */
          JSONUtil::Object::addAtom((Object *)puVar6,(basic_string *)&local_418,pcVar9);
          if ((local_418 & 1) != 0) {
            operator_delete(local_408);
          }
          if ((local_400[0] & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_3ec,uStack_3f0));
          }
          PVar10 = PVar10 + 1;
        } while (PVar10 != 0x28);
                    /* try { // try from 0075c0c8 to 0075c0cf has its CatchHandler @ 0075c660 */
        lVar4 = Renderer::getCamera();
        if (lVar4 != 0) {
                    /* try { // try from 0075c0d8 to 0075c0df has its CatchHandler @ 0075c65c */
          RawTransformGroup::updateWorldTransformation();
          fVar15 = *(float *)(lVar4 + 0xec);
          fVar14 = *(float *)(lVar4 + 0xf0);
                    /* try { // try from 0075c0e8 to 0075c0f3 has its CatchHandler @ 0075c658 */
          std::__ndk1::to_string(*(float *)(lVar4 + 0xe8));
          pcVar9 = (char *)((ulong)local_400 | 1);
          if ((local_400[0] & 1) != 0) {
            pcVar9 = (char *)CONCAT44(uStack_3ec,uStack_3f0);
          }
          local_418 = CONCAT26(local_418._6_2_,0x586d616308);
                    /* try { // try from 0075c124 to 0075c12b has its CatchHandler @ 0075c654 */
          JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)&local_418,pcVar9)
          ;
          if ((local_418 & 1) != 0) {
            operator_delete(local_408);
          }
                    /* try { // try from 0075c13c to 0075c14b has its CatchHandler @ 0075c650 */
          std::__ndk1::to_string(fVar15);
          local_430[0] = 8;
          pcVar9 = (char *)((ulong)&local_418 | 1);
          if ((local_418 & 1) != 0) {
            pcVar9 = local_408;
          }
          local_430._1_4_ = 0x596d6163;
          local_42b = 0;
                    /* try { // try from 0075c17c to 0075c183 has its CatchHandler @ 0075c630 */
          JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)local_430,pcVar9);
          if ((local_430[0] & 1) != 0) {
            operator_delete(local_420);
          }
                    /* try { // try from 0075c194 to 0075c1a3 has its CatchHandler @ 0075c628 */
          std::__ndk1::to_string(fVar14);
          local_448 = 8;
          pcVar9 = (char *)((ulong)local_430 | 1);
          if ((local_430[0] & 1) != 0) {
            pcVar9 = local_420;
          }
          local_447 = 0x5a6d6163;
          local_443 = 0;
                    /* try { // try from 0075c1d4 to 0075c1db has its CatchHandler @ 0075c608 */
          JSONUtil::Object::addAtom((Object *)s_pJsonSampleObject,(basic_string *)&local_448,pcVar9)
          ;
          if ((local_448 & 1) != 0) {
            operator_delete(local_438);
          }
          if ((local_430[0] & 1) != 0) {
            operator_delete(local_420);
          }
          if ((local_418 & 1) != 0) {
            operator_delete(local_408);
          }
          if ((local_400[0] & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_3ec,uStack_3f0));
          }
        }
        if ((local_3e8[0] & 1) != 0) {
          operator_delete((void *)CONCAT26(uStack_3d2,
                                           CONCAT15(uStack_3d3,CONCAT41(uStack_3d7,uStack_3d8))));
        }
        if ((local_3d0 & 1) != 0) {
          operator_delete(local_3c0);
        }
        if ((local_3b8[0] & 1) != 0) {
          operator_delete(local_3a8);
        }
        if ((local_3a0 & 1) != 0) {
          operator_delete(local_390);
        }
        if ((local_388[0] & 1) != 0) {
          operator_delete((void *)CONCAT17(uStack_371,CONCAT61(uStack_377,uStack_378)));
        }
        if ((local_370[0] & 1) != 0) {
          operator_delete(local_360);
        }
        if ((local_358[0] & 1) != 0) {
          operator_delete(local_348);
        }
        if ((local_340[0] & 1) != 0) {
          operator_delete(local_330);
        }
        if ((local_328[0] & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_314,
                                           CONCAT13(uStack_315,CONCAT21(uStack_317,uStack_318))));
        }
        if ((local_310[0] & 1) != 0) {
          operator_delete(local_300);
        }
        if ((local_2f8[0] & 1) != 0) {
          operator_delete(local_2e8);
        }
        if ((local_2e0[0] & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_2cc,
                                           CONCAT13(uStack_2cd,CONCAT21(uStack_2cf,uStack_2d0))));
        }
        if (((byte)local_2c8 & 1) != 0) {
          operator_delete((void *)CONCAT71(uStack_2b7,local_2b8));
        }
        if ((local_2b0[0] & 1) != 0) {
          operator_delete((void *)CONCAT62(uStack_29e,CONCAT11(uStack_29f,uStack_2a0)));
        }
        if ((local_298[0] & 1) != 0) {
          operator_delete((void *)CONCAT53(uStack_285,CONCAT21(uStack_287,uStack_288)));
        }
        if (((byte)local_280 & 1) != 0) {
          operator_delete((void *)CONCAT71(uStack_26f,local_270));
        }
        if ((local_268[0] & 1) != 0) {
          operator_delete((void *)CONCAT26(uStack_252,
                                           CONCAT15(uStack_253,CONCAT41(uStack_257,uStack_258))));
        }
        if ((local_250[0] & 1) != 0) {
          operator_delete(local_240);
        }
        if ((local_238[0] & 1) != 0) {
          operator_delete((void *)CONCAT17(uStack_221,
                                           CONCAT16(uStack_222,CONCAT51(uStack_227,uStack_228))));
        }
        if (((byte)local_220 & 1) != 0) {
          operator_delete((void *)CONCAT71(uStack_20f,local_210));
        }
        if ((local_208[0] & 1) != 0) {
          operator_delete((void *)CONCAT62(uStack_1f6,CONCAT11(uStack_1f7,uStack_1f8)));
        }
        if ((local_1f0[0] & 1) != 0) {
          operator_delete(local_1e0);
        }
        if ((local_1d8[0] & 1) != 0) {
          operator_delete((void *)CONCAT53(uStack_1c5,CONCAT21(uStack_1c7,uStack_1c8)));
        }
        if ((local_1c0[0] & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_1ac,
                                           CONCAT13(uStack_1ad,CONCAT21(uStack_1af,uStack_1b0))));
        }
        if ((local_1a8[0] & 1) != 0) {
          operator_delete(local_198);
        }
        if ((local_190[0] & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_17c,
                                           CONCAT13(uStack_17d,CONCAT21(uStack_17f,uStack_180))));
        }
        if ((local_178[0] & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_164,
                                           CONCAT13(uStack_165,CONCAT21(uStack_167,uStack_168))));
        }
        if (((byte)local_160 & 1) != 0) {
          operator_delete((void *)CONCAT71(uStack_14f,local_150));
        }
        if ((local_148[0] & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_134,
                                           CONCAT13(uStack_135,CONCAT21(uStack_137,uStack_138))));
        }
        if (((byte)local_130 & 1) != 0) {
          operator_delete((void *)CONCAT71(uStack_11f,local_120));
        }
        if ((local_e8[0] & 1) != 0) {
          operator_delete(local_d8);
        }
        if ((local_d0[0] & 1) != 0) {
          operator_delete(local_c0);
        }
        if ((local_b8[0] & 1) != 0) {
          operator_delete(local_a8);
        }
        if ((local_a0[0] & 1) != 0) {
          operator_delete(local_90);
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


