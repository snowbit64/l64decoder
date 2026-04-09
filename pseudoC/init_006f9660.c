// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 006f9660
// Size: 596 bytes
// Signature: undefined init(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BillboardShape::init() */

void BillboardShape::init(void)

{
  char *pcVar1;
  long lVar2;
  Logger *this;
  uint uVar3;
  int iVar4;
  BillboardShape *in_x0;
  EntityRegistryManager *this_00;
  GsShape *pGVar5;
  long lVar6;
  ulong uVar7;
  GiantsAdsProvider *this_01;
  GiantsAdPlacement *this_02;
  undefined8 *puVar8;
  ulong local_50;
  ulong local_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  in_x0[8] = (BillboardShape)0x1;
  this_00 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pGVar5 = (GsShape *)EntityRegistryManager::getEntityById(this_00,*(uint *)(in_x0 + 0xc));
  if ((pGVar5 == (GsShape *)0x0) || (((byte)pGVar5[0x11] >> 3 & 1) == 0)) goto LAB_006f9760;
  local_50 = 0;
  local_48 = 0;
  local_40 = (char *)0x0;
                    /* try { // try from 006f96b0 to 006f9713 has its CatchHandler @ 006f98cc */
  AdsProviderManager::getInstance();
  lVar6 = AdsProviderManager::getAdsProvider();
  if (lVar6 == 0) {
LAB_006f974c:
    in_x0[8] = (BillboardShape)0x0;
  }
  else {
    uVar7 = initGeometry(in_x0,pGVar5,(basic_string *)&local_50);
    if ((uVar7 & 1) != 0) {
      AdsProviderManager::getInstance();
      this_01 = (GiantsAdsProvider *)AdsProviderManager::getAdsProvider();
      this_02 = (GiantsAdPlacement *)
                GiantsAdsProvider::createAdPlacement
                          (this_01,(uchar *)(in_x0 + 0x10),*(uint *)(in_x0 + 0x20),
                           *(ASPECT_RATIO *)(in_x0 + 0x24));
      *(GiantsAdPlacement **)(in_x0 + 0x28) = this_02;
      if (this_02 != (GiantsAdPlacement *)0x0) {
        puVar8 = (undefined8 *)operator_new(0x10);
        *puVar8 = &PTR_onContentChanged_00fd9910;
        puVar8[1] = in_x0;
        GiantsAdPlacement::setContentChangedCallback(this_02,(ContentChangedCallback *)puVar8);
        if (*(short *)(pGVar5 + 0x196) == 1) {
          lVar6 = *(long *)(pGVar5 + 0x178);
          *(long *)(in_x0 + 0x30) = lVar6;
          FUN_00f276d0(1,lVar6 + 0x28);
          if (*(char *)(*(long *)(in_x0 + 0x28) + 0x3c) != '\0') {
                    /* try { // try from 006f9740 to 006f981b has its CatchHandler @ 006f98cc */
            changeMaterial(in_x0,pGVar5);
          }
          goto LAB_006f974c;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_50);
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0
           )) {
                    /* try { // try from 006f9830 to 006f983b has its CatchHandler @ 006f98b8 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "[gads] Warning: Invalid shape properties for ad billboard \'%s\' placement %u.\n"
                          ,*(undefined8 *)(pGVar5 + 8),(ulong)*(uint *)(in_x0 + 0x20));
        uVar7 = local_50 >> 1 & 0x7f;
        if ((local_50 & 1) != 0) {
          uVar7 = local_48;
        }
        if (uVar7 != 0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar4 != 0)) {
                    /* try { // try from 006f9878 to 006f9883 has its CatchHandler @ 006f98b4 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          this = LogManager::getInstance()::singletonLogManager;
          pcVar1 = (char *)((ulong)&local_50 | 1);
          if ((local_50 & 1) != 0) {
            pcVar1 = local_40;
          }
          uVar3 = __strlen_chk(pcVar1,0xffffffffffffffff);
          Logger::infoMessage(this,pcVar1,uVar3);
        }
      }
    }
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_006f9760:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


