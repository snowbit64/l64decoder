// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createLayer
// Entry Point: 00a64424
// Size: 920 bytes
// Signature: undefined __thiscall createLayer(MultiLayer * this, uint param_1, char * param_2, bool param_3)


/* FoliageSystemDesc::MultiLayer::createLayer(unsigned int, char const*, bool) */

ulong __thiscall
FoliageSystemDesc::MultiLayer::createLayer(MultiLayer *this,uint param_1,char *param_2,bool param_3)

{
  long lVar1;
  Layer *this_00;
  long lVar2;
  State *pSVar3;
  State *pSVar4;
  int iVar5;
  ulong uVar6;
  size_t __n;
  long lVar7;
  void *__dest;
  undefined8 local_d8;
  size_t local_d0;
  void *local_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  void *local_98;
  uint local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  State *local_80;
  State *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (*(long **)this == (long *)0x0) {
    if (param_3) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0))
      {
                    /* try { // try from 00a646e8 to 00a646f3 has its CatchHandler @ 00a647c4 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: FoliageSystemDesc: density map must be set before creating layers.\n"
                        );
    }
  }
  else {
    iVar5 = (**(code **)(**(long **)this + 0x60))();
    if (iVar5 == 0) {
      if (param_1 == 0xffffffff) goto LAB_00a6458c;
      if (param_3) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0
           )) {
                    /* try { // try from 00a64780 to 00a6478b has its CatchHandler @ 00a647bc */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        lVar7 = *(long *)this;
        lVar1 = lVar7 + 0x31;
        if ((*(byte *)(lVar7 + 0x30) & 1) != 0) {
          lVar1 = *(long *)(lVar7 + 0x40);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: FoliageSystemDesc: only type index NO_TYPE_INDEX is valid for MultiLayer \'%s\'.\n"
                           ,lVar1);
      }
    }
    else {
      if ((param_1 != 0) &&
         (uVar6 = (**(code **)(**(long **)this + 0x60))(), param_1 >> (uVar6 & 0x3f) == 0)) {
LAB_00a6458c:
        lVar1 = *(long *)(this + 8);
        lVar7 = *(long *)(this + 0x10);
        __n = strlen(param_2);
        if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (__n < 0x17) {
          __dest = (void *)((ulong)&local_d8 | 1);
          local_d8 = CONCAT71(local_d8._1_7_,(char)((int)__n << 1));
          if (__n != 0) goto LAB_00a645e8;
        }
        else {
          uVar6 = __n + 0x10 & 0xfffffffffffffff0;
          __dest = operator_new(uVar6);
          local_d8 = uVar6 | 1;
          local_d0 = __n;
          local_c8 = __dest;
LAB_00a645e8:
          memcpy(__dest,param_2,__n);
        }
        *(undefined *)((long)__dest + __n) = 0;
        this_00 = *(Layer **)(this + 0x10);
        local_78 = (State *)0x0;
        uStack_70 = 0;
        local_80 = (State *)0x0;
        local_8c = 0;
        uStack_88 = 0;
        local_b0 = (void *)0x0;
        local_98 = (void *)0x0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        local_c0 = 0;
        uStack_a8 = 0;
        local_90 = param_1;
        if (this_00 < *(Layer **)(this + 0x18)) {
                    /* try { // try from 00a64628 to 00a64633 has its CatchHandler @ 00a647e4 */
          Layer::Layer(this_00,(Layer *)&local_d8);
          *(Layer **)(this + 0x10) = this_00 + 0x70;
        }
        else {
                    /* try { // try from 00a64640 to 00a6464b has its CatchHandler @ 00a647dc */
          std::__ndk1::
          vector<FoliageSystemDesc::Layer,std::__ndk1::allocator<FoliageSystemDesc::Layer>>::
          __push_back_slow_path<FoliageSystemDesc::Layer>
                    ((vector<FoliageSystemDesc::Layer,std::__ndk1::allocator<FoliageSystemDesc::Layer>>
                      *)(this + 8),(Layer *)&local_d8);
        }
        pSVar4 = local_80;
        pSVar3 = local_78;
        if (local_80 != (State *)0x0) {
          while (pSVar3 != pSVar4) {
            State::~State(pSVar3 + -0x68);
            pSVar3 = pSVar3 + -0x68;
          }
          local_78 = pSVar4;
          operator_delete(local_80);
        }
        if ((uStack_a8 & 1) != 0) {
          operator_delete(local_98);
        }
        uVar6 = (lVar7 - lVar1 >> 4) * 0xb6db6db7;
        if ((local_c0 & 1) != 0) {
          operator_delete(local_b0);
        }
        if ((local_d8 & 1) != 0) {
          operator_delete(local_c8);
        }
        goto LAB_00a64558;
      }
      if (param_3) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0
           )) {
                    /* try { // try from 00a64738 to 00a64743 has its CatchHandler @ 00a647c0 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        lVar7 = *(long *)this;
        lVar1 = lVar7 + 0x31;
        if ((*(byte *)(lVar7 + 0x30) & 1) != 0) {
          lVar1 = *(long *)(lVar7 + 0x40);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: FoliageSystemDesc: type index %u is not valid for MultiLayer \'%s\'.\n"
                           ,(ulong)param_1,lVar1);
      }
    }
  }
  uVar6 = 0xffffffff;
LAB_00a64558:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6 & 0xffffffff;
}


