// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e6fc0
// Entry Point: 006e6fc0
// Size: 2252 bytes
// Signature: undefined FUN_006e6fc0(void)


/* WARNING: Type propagation algorithm not settling */

void FUN_006e6fc0(void)

{
  undefined **ppuVar1;
  long lVar2;
  int iVar3;
  EntityRegistryManager *this;
  ulong uVar4;
  void *pvVar5;
  long *plVar6;
  void *pvVar7;
  ulong __n;
  long lVar8;
  size_t __n_00;
  long lVar9;
  long **pplVar10;
  undefined *puVar11;
  ulong uVar12;
  long **pplVar13;
  void *local_828 [3];
  ulong local_810;
  long *local_808 [243];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_810 = 1;
  local_808[0] = (long *)0x0;
  local_808[1] = (long *)0x0;
  local_808[2] = (long *)0x0;
  local_808[3] = (long *)0x2;
  local_808[4] = (long *)0x0;
  local_808[5] = (long *)0x0;
  local_808[6] = (long *)0x0;
  local_808[9] = (long *)0x0;
  local_808[10] = (long *)0x0;
  local_808[7] = (long *)0x4;
  local_808[8] = (long *)0x0;
  local_808[13] = (long *)0x0;
  local_808[14] = (long *)0x0;
  local_808[17] = (long *)0x0;
  local_808[18] = (long *)0x0;
  local_808[11] = (long *)0x8;
  local_808[12] = (long *)0x0;
  local_808[21] = (long *)0x0;
  local_808[22] = (long *)0x0;
  local_808[25] = (long *)0x0;
  local_808[26] = (long *)0x0;
  local_808[15] = (long *)0x10;
  local_808[16] = (long *)0x0;
  local_808[29] = (long *)0x0;
  local_808[30] = (long *)0x0;
  local_808[33] = (long *)0x0;
  local_808[34] = (long *)0x0;
  local_808[19] = (long *)0x20;
  local_808[20] = (long *)0x0;
  local_808[37] = (long *)0x0;
  local_808[38] = (long *)0x0;
  local_808[41] = (long *)0x0;
  local_808[42] = (long *)0x0;
  local_808[23] = (long *)0x40;
  local_808[24] = (long *)0x0;
  local_808[45] = (long *)0x0;
  local_808[46] = (long *)0x0;
  local_808[49] = (long *)0x0;
  local_808[50] = (long *)0x0;
  local_808[27] = (long *)0x80;
  local_808[28] = (long *)0x0;
  local_808[53] = (long *)0x0;
  local_808[54] = (long *)0x0;
  local_808[57] = (long *)0x0;
  local_808[58] = (long *)0x0;
  local_808[31] = (long *)0x100;
  local_808[32] = (long *)0x0;
  local_808[60] = (long *)0x0;
  local_808[61] = (long *)0x0;
  local_808[35] = (long *)0x200;
  local_808[36] = (long *)0x0;
  local_808[62] = (long *)0x0;
  local_808[65] = (long *)0x0;
  local_808[39] = (long *)0x400;
  local_808[40] = (long *)0x0;
  local_808[64] = (long *)0x0;
  local_808[66] = (long *)0x0;
  local_808[43] = (long *)0x800;
  local_808[44] = (long *)0x0;
  local_808[69] = (long *)0x0;
  local_808[68] = (long *)0x0;
  local_808[47] = (long *)0x1000;
  local_808[48] = (long *)0x0;
  local_808[70] = (long *)0x0;
  local_808[73] = (long *)0x0;
  local_808[51] = (long *)0x2000;
  local_808[52] = (long *)0x0;
  local_808[72] = (long *)0x0;
  local_808[74] = (long *)0x0;
  local_808[55] = (long *)0x4000;
  local_808[56] = (long *)0x0;
  local_808[77] = (long *)0x0;
  local_808[76] = (long *)0x0;
  local_808[59] = (long *)0x8000;
  local_808[78] = (long *)0x0;
  local_808[81] = (long *)0x0;
  local_808[63] = (long *)0x10000;
  local_808[80] = (long *)0x0;
  local_808[82] = (long *)0x0;
  local_808[67] = (long *)0x20000;
  local_808[85] = (long *)0x0;
  local_808[84] = (long *)0x0;
  local_808[71] = (long *)0x40000;
  local_808[86] = (long *)0x0;
  local_808[89] = (long *)0x0;
  local_808[75] = (long *)0x80000;
  local_808[88] = (long *)0x0;
  local_808[90] = (long *)0x0;
  local_808[79] = (long *)0x100000;
  local_808[93] = (long *)0x0;
  local_808[92] = (long *)0x0;
  local_808[83] = (long *)0x200000;
  local_808[94] = (long *)0x0;
  local_808[97] = (long *)0x0;
  local_808[87] = (long *)0x400000;
  local_808[96] = (long *)0x0;
  local_808[98] = (long *)0x0;
  local_808[91] = (long *)0x800000;
  local_808[101] = (long *)0x0;
  local_808[100] = (long *)0x0;
  local_808[95] = (long *)0x1000000;
  local_808[102] = (long *)0x0;
  local_808[105] = (long *)0x0;
  local_808[99] = (long *)0x2000000;
  local_808[104] = (long *)0x0;
  local_808[106] = (long *)0x0;
  local_808[103] = (long *)0x4000000;
  local_808[109] = (long *)0x0;
  local_808[108] = (long *)0x0;
  local_808[107] = (long *)0x8000000;
  local_808[110] = (long *)0x0;
  local_808[113] = (long *)0x0;
  local_808[111] = (long *)0x10000000;
  local_808[112] = (long *)0x0;
  local_808[114] = (long *)0x0;
  local_808[115] = (long *)0x20000000;
  local_808[117] = (long *)0x0;
  local_808[116] = (long *)0x0;
  local_808[119] = (long *)0x40000000;
  local_808[118] = (long *)0x0;
  local_808[121] = (long *)0x0;
  local_808[123] = (long *)0x80000000;
  local_808[120] = (long *)0x0;
  local_808[122] = (long *)0x0;
  local_808[127] = (long *)0x100000000;
  local_808[125] = (long *)0x0;
  local_808[124] = (long *)0x0;
  local_808[131] = (long *)0x200000000;
  local_808[126] = (long *)0x0;
  local_808[129] = (long *)0x0;
  local_808[135] = (long *)0x400000000;
  local_808[128] = (long *)0x0;
  local_808[130] = (long *)0x0;
  local_808[139] = (long *)0x800000000;
  local_808[133] = (long *)0x0;
  local_808[132] = (long *)0x0;
  local_808[143] = (long *)0x1000000000;
  local_808[134] = (long *)0x0;
  local_808[137] = (long *)0x0;
  local_808[147] = (long *)0x2000000000;
  local_808[136] = (long *)0x0;
  local_808[138] = (long *)0x0;
  local_808[151] = (long *)0x4000000000;
  local_808[141] = (long *)0x0;
  local_808[140] = (long *)0x0;
  local_808[155] = (long *)0x8000000000;
  local_808[142] = (long *)0x0;
  local_808[145] = (long *)0x0;
  local_808[159] = (long *)0x10000000000;
  local_808[144] = (long *)0x0;
  local_808[146] = (long *)0x0;
  local_808[163] = (long *)0x20000000000;
  local_808[149] = (long *)0x0;
  local_808[148] = (long *)0x0;
  local_808[167] = (long *)0x40000000000;
  local_808[150] = (long *)0x0;
  local_808[153] = (long *)0x0;
  local_808[171] = (long *)0x80000000000;
  local_808[152] = (long *)0x0;
  local_808[154] = (long *)0x0;
  local_808[175] = (long *)0x100000000000;
  local_808[157] = (long *)0x0;
  local_808[156] = (long *)0x0;
  local_808[179] = (long *)0x200000000000;
  local_808[158] = (long *)0x0;
  local_808[161] = (long *)0x0;
  local_808[183] = (long *)0x400000000000;
  local_808[160] = (long *)0x0;
  local_808[162] = (long *)0x0;
  local_808[187] = (long *)0x800000000000;
  local_808[165] = (long *)0x0;
  local_808[164] = (long *)0x0;
  local_808[191] = (long *)0x1000000000000;
  local_808[166] = (long *)0x0;
  local_808[169] = (long *)0x0;
  local_808[195] = (long *)0x2000000000000;
  local_808[168] = (long *)0x0;
  local_808[170] = (long *)0x0;
  local_808[199] = (long *)0x4000000000000;
  local_808[173] = (long *)0x0;
  local_808[172] = (long *)0x0;
  local_808[203] = (long *)0x8000000000000;
  local_808[174] = (long *)0x0;
  local_808[177] = (long *)0x0;
  local_808[207] = (long *)0x10000000000000;
  local_808[176] = (long *)0x0;
  local_808[178] = (long *)0x0;
  local_808[211] = (long *)0x20000000000000;
  local_808[181] = (long *)0x0;
  local_808[180] = (long *)0x0;
  local_808[215] = (long *)0x40000000000000;
  local_808[182] = (long *)0x0;
  local_808[185] = (long *)0x0;
  local_808[219] = (long *)0x80000000000000;
  local_808[184] = (long *)0x0;
  local_808[186] = (long *)0x0;
  local_808[223] = (long *)0x100000000000000;
  local_808[189] = (long *)0x0;
  local_808[188] = (long *)0x0;
  local_808[227] = (long *)0x200000000000000;
  local_808[190] = (long *)0x0;
  local_808[193] = (long *)0x0;
  local_808[231] = (long *)0x400000000000000;
  local_808[192] = (long *)0x0;
  local_808[194] = (long *)0x0;
  local_808[235] = (long *)0x800000000000000;
  local_808[197] = (long *)0x0;
  local_808[196] = (long *)0x0;
  local_808[198] = (long *)0x0;
  local_808[201] = (long *)0x0;
  local_808[200] = (long *)0x0;
  local_808[202] = (long *)0x0;
  local_808[205] = (long *)0x0;
  local_808[204] = (long *)0x0;
  local_808[206] = (long *)0x0;
  local_808[209] = (long *)0x0;
  local_808[208] = (long *)0x0;
  local_808[210] = (long *)0x0;
  local_808[213] = (long *)0x0;
  local_808[212] = (long *)0x0;
  local_808[214] = (long *)0x0;
  local_808[217] = (long *)0x0;
  local_808[216] = (long *)0x0;
  local_808[218] = (long *)0x0;
  local_808[221] = (long *)0x0;
  local_808[220] = (long *)0x0;
  local_808[222] = (long *)0x0;
  local_808[225] = (long *)0x0;
  local_808[224] = (long *)0x0;
  local_808[226] = (long *)0x0;
  local_808[229] = (long *)0x0;
  local_808[228] = (long *)0x0;
  local_808[230] = (long *)0x0;
  local_808[233] = (long *)0x0;
  local_808[232] = (long *)0x0;
  local_808[234] = (long *)0x0;
  local_808[237] = (long *)0x0;
  local_808[236] = (long *)0x0;
  local_808[238] = (long *)0x0;
  local_808[239] = (long *)0x1000000000000000;
  local_808[241] = (long *)0x0;
  local_808[240] = (long *)0x0;
  local_808[242] = (long *)0x0;
  local_828[0] = (void *)0x0;
  local_828[1] = (void *)0x0;
  local_828[2] = (void *)0x0;
                    /* try { // try from 006e7444 to 006e744f has its CatchHandler @ 006e78ac */
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  EntityRegistryManager::getEntities(this,(vector *)local_828);
  lVar9 = 0;
  do {
    pvVar7 = *(void **)((long)local_808 + lVar9);
    uVar4 = (long)local_828[1] - (long)local_828[0];
    if ((ulong)(*(long *)((long)local_808 + lVar9 + 0x10) - (long)pvVar7 >> 3) <
        (ulong)((long)uVar4 >> 3)) {
      if ((long)uVar4 < 0) {
                    /* try { // try from 006e7834 to 006e783f has its CatchHandler @ 006e78b4 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      lVar8 = *(long *)((long)local_808 + lVar9 + 8);
                    /* try { // try from 006e7494 to 006e7497 has its CatchHandler @ 006e78b0 */
      pvVar5 = operator_new(uVar4);
      __n_00 = lVar8 - (long)pvVar7;
      if (0 < (long)__n_00) {
        memcpy(pvVar5,pvVar7,__n_00);
      }
      *(void **)((long)local_808 + lVar9) = pvVar5;
      *(size_t *)((long)local_808 + lVar9 + 8) = (long)pvVar5 + __n_00;
      *(void **)((long)local_808 + lVar9 + 0x10) = (void *)((long)pvVar5 + ((long)uVar4 >> 3) * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
      }
    }
    lVar9 = lVar9 + 0x20;
  } while (lVar9 != 0x7a0);
  if (local_828[1] != local_828[0]) {
    uVar4 = 0;
    do {
      lVar8 = *(long *)((long)local_828[0] + uVar4 * 8);
      lVar9 = 0;
      do {
        if ((*(ulong *)(lVar8 + 0x10) & *(ulong *)((long)&local_810 + lVar9)) != 0) {
          plVar6 = *(long **)((long)local_808 + lVar9 + 8);
          if (plVar6 == *(long **)((long)local_808 + lVar9 + 0x10)) {
            pvVar7 = *(void **)((long)local_808 + lVar9);
            __n = (long)plVar6 - (long)pvVar7;
            uVar12 = ((long)__n >> 3) + 1;
            if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006e7824 to 006e7833 has its CatchHandler @ 006e78c0 */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar12 <= (ulong)((long)__n >> 2)) {
              uVar12 = (long)__n >> 2;
            }
            if (0x7ffffffffffffff7 < __n) {
              uVar12 = 0x1fffffffffffffff;
            }
            if (uVar12 == 0) {
              pvVar5 = (void *)0x0;
            }
            else {
              if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 006e758c to 006e758f has its CatchHandler @ 006e78bc */
              pvVar5 = operator_new(uVar12 << 3);
            }
            plVar6 = (long *)((long)pvVar5 + ((long)__n >> 3) * 8);
            *plVar6 = lVar8;
            if (0 < (long)__n) {
              memcpy(pvVar5,pvVar7,__n);
            }
            *(void **)((long)local_808 + lVar9) = pvVar5;
            *(long **)((long)local_808 + lVar9 + 8) = plVar6 + 1;
            *(void **)((long)local_808 + lVar9 + 0x10) = (void *)((long)pvVar5 + uVar12 * 8);
            if (pvVar7 != (void *)0x0) {
              operator_delete(pvVar7);
            }
          }
          else {
            *plVar6 = lVar8;
            *(long **)((long)local_808 + lVar9 + 8) = plVar6 + 1;
          }
        }
        lVar9 = lVar9 + 0x20;
      } while (lVar9 != 0x7a0);
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 < (ulong)((long)local_828[1] - (long)local_828[0] >> 3));
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 006e7850 to 006e785b has its CatchHandler @ 006e788c */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
                    /* try { // try from 006e75e8 to 006e75fb has its CatchHandler @ 006e78ac */
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "Registered Entity List\n-----\n");
  uVar4 = 0;
  do {
    pplVar10 = local_808 + uVar4 * 4;
    pplVar13 = local_808 + uVar4 * 4 + 1;
    if (*pplVar10 != *pplVar13) {
      ppuVar1 = &BaseEntityType::s_baseIdNames + uVar4;
      if (1 < uVar4) {
        ppuVar1 = (undefined **)(EngineEntityType::s_engineIdNames + (ulong)((int)uVar4 - 2) * 8);
      }
      puVar11 = *ppuVar1;
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 006e7744 to 006e774b has its CatchHandler @ 006e7894 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
                    /* try { // try from 006e7684 to 006e7697 has its CatchHandler @ 006e78b8 */
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                        "%u Entitie(s) of Type: %s\n",
                        (ulong)((long)*pplVar13 - (long)*pplVar10) >> 3,puVar11);
      plVar6 = *pplVar10;
      if (*pplVar13 != plVar6) {
        uVar12 = 0;
        do {
          lVar9 = plVar6[uVar12];
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar3 != 0)) {
                    /* try { // try from 006e76f4 to 006e76fb has its CatchHandler @ 006e7898 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
                    /* try { // try from 006e76c0 to 006e76cb has its CatchHandler @ 006e78c4 */
          LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager," %s (id=%u)\n",
                            *(undefined8 *)(lVar9 + 8),(ulong)*(uint *)(lVar9 + 0x18));
          uVar12 = (ulong)((int)uVar12 + 1);
          plVar6 = *pplVar10;
        } while (uVar12 < (ulong)((long)*pplVar13 - (long)plVar6 >> 3));
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 006e777c to 006e7783 has its CatchHandler @ 006e7890 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
                    /* try { // try from 006e7728 to 006e7733 has its CatchHandler @ 006e78b8 */
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"-----\n");
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0x3d);
  if (local_828[0] != (void *)0x0) {
    local_828[1] = local_828[0];
    operator_delete(local_828[0]);
  }
  lVar9 = 0x7a0;
  do {
    pvVar7 = *(void **)((long)local_828 + lVar9);
    if (pvVar7 != (void *)0x0) {
      *(void **)((long)local_828 + lVar9 + 8) = pvVar7;
      operator_delete(pvVar7);
    }
    lVar9 = lVar9 + -0x20;
  } while (lVar9 != 0);
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


