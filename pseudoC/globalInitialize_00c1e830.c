// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: globalInitialize
// Entry Point: 00c1e830
// Size: 568 bytes
// Signature: undefined __cdecl globalInitialize(Context * param_1, char * param_2, char * param_3, char * param_4)


/* HlslParser::globalInitialize(HlslParser::Context&, char const*, char const*, char const*) */

undefined8 HlslParser::globalInitialize(Context *param_1,char *param_2,char *param_3,char *param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  SHC_PoolAllocator *this;
  undefined8 *this_00;
  GsTSymbolTableLevel *pGVar4;
  void *pvVar5;
  SHC_PoolAllocator aSStack_d8 [72];
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  ulong uStack_78;
  undefined8 uStack_70;
  void *local_68;
  void *local_58;
  void *local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_3 != (char *)0x0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(param_1 + 0xdf8));
  }
  if (param_4 != (char *)0x0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(param_1 + 0xde0));
  }
  uStack_78 = 0;
  local_80 = (void *)0x0;
  local_68 = (void *)0x0;
  uStack_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
                    /* try { // try from 00c1e88c to 00c1e897 has its CatchHandler @ 00c1ea8c */
  SHC_PoolAllocator::SHC_PoolAllocator(aSStack_d8,(IR_TypeSet *)(param_1 + 0x10));
  local_58 = (void *)0x0;
  local_50 = (void *)0x0;
  local_40 = 0;
  local_48 = 0;
                    /* try { // try from 00c1e8a4 to 00c1e8ff has its CatchHandler @ 00c1ea94 */
  uVar3 = initializeGlobalSymbolTable
                    (param_1,(GsTInfoSink *)&local_90,(GsTSymbolTable *)&local_58,aSStack_d8,param_2
                     ,false);
  if ((uVar3 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00c1ea2c to 00c1ea37 has its CatchHandler @ 00c1ea68 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pvVar5 = (void *)((ulong)&local_90 | 1);
    if ((local_90 & 1) != 0) {
      pvVar5 = local_80;
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Failed to initialize GiSL global symbol table.\n%s\n",pvVar5);
  }
                    /* try { // try from 00c1e900 to 00c1e907 has its CatchHandler @ 00c1ea98 */
  this = (SHC_PoolAllocator *)operator_new(0x48);
                    /* try { // try from 00c1e90c to 00c1e913 has its CatchHandler @ 00c1ea7c */
  SHC_PoolAllocator::SHC_PoolAllocator(this,(IR_TypeSet *)(param_1 + 0x10));
                    /* try { // try from 00c1e914 to 00c1e96f has its CatchHandler @ 00c1ea98 */
  this_00 = (undefined8 *)operator_new(0x20);
  *this_00 = 0;
  this_00[1] = 0;
  *(undefined4 *)(this_00 + 3) = 0;
  this_00[2] = 0;
  *(undefined8 **)(param_1 + 8) = this_00;
  GsTSymbolTable::copyTable((GsTSymbolTable *)this_00,(GsTSymbolTable *)&local_58,this);
  *(SHC_PoolAllocator **)param_1 = this;
  pGVar4 = *(GsTSymbolTableLevel **)
            ((long)local_58 +
            (((long)local_50 - (long)local_58) * 0x20000000 + -0x100000000 >> 0x20) * 8);
  if (pGVar4 != (GsTSymbolTableLevel *)0x0) {
    GsTSymbolTableLevel::~GsTSymbolTableLevel(pGVar4);
  }
  local_50 = (void *)((long)local_50 + -8);
  SHC_PoolAllocator::clear();
  uVar3 = (long)local_50 - (long)local_58;
  pvVar5 = local_58;
  while (8 < uVar3) {
    pGVar4 = *(GsTSymbolTableLevel **)
              ((long)pvVar5 +
              (((long)local_50 - (long)pvVar5) * 0x20000000 + -0x100000000 >> 0x20) * 8);
    if (pGVar4 != (GsTSymbolTableLevel *)0x0) {
      GsTSymbolTableLevel::~GsTSymbolTableLevel(pGVar4);
      pvVar5 = local_58;
    }
    local_50 = (void *)((long)local_50 + -8);
    uVar3 = (long)local_50 - (long)pvVar5;
  }
  if (pvVar5 != (void *)0x0) {
    local_50 = pvVar5;
    operator_delete(pvVar5);
  }
  SHC_PoolAllocator::~SHC_PoolAllocator(aSStack_d8);
  if ((uStack_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


