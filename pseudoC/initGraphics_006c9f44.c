// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initGraphics
// Entry Point: 006c9f44
// Size: 1124 bytes
// Signature: undefined __thiscall initGraphics(Application * this, bool param_1, char * param_2, char * param_3, int param_4, int param_5, bool param_6, FULLSCREEN_MODE param_7)


/* WARNING: Type propagation algorithm not settling */
/* Application::initGraphics(bool, char const*, char const*, int, int, bool,
   RenderWindowDesc::FULLSCREEN_MODE) */

void __thiscall
Application::initGraphics
          (Application *this,bool param_1,char *param_2,char *param_3,int param_4,int param_5,
          bool param_6,FULLSCREEN_MODE param_7)

{
  char *pcVar1;
  char *pcVar2;
  POST_PROCESS_ANTI_ALIASING PVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  DLSS_QUALITY DVar7;
  XESS_QUALITY XVar8;
  FIDELITY_FX_SR_20 FVar9;
  long lVar10;
  bool bVar11;
  byte bVar12;
  VALAR_SHADING_RATE_QUALITY VVar13;
  int iVar14;
  undefined4 uVar15;
  char *pcVar16;
  long lVar17;
  long *plVar18;
  IShaderCompiler *pIVar19;
  IShaderCreator *pIVar20;
  ulong uVar21;
  basic_string local_c8 [4];
  char *local_b8;
  byte local_b0;
  void *local_a0;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  long local_68;
  
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  createRenderWindow(this,param_4,param_5,param_6,param_7);
  EngineManager::getInstance();
  pcVar16 = (char *)EngineManager::getUserProfileAppPath();
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (char *)0x0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = (void *)0x0;
                    /* try { // try from 006c9fbc to 006c9fdf has its CatchHandler @ 006ca3dc */
  lVar17 = (**(code **)(**(long **)(this + 0x170) + 0x28))();
  if (*(char *)(lVar17 + 0x97) == '\0') {
    bVar11 = false;
  }
  else {
    lVar17 = (**(code **)(**(long **)(this + 0x170) + 0x28))();
    bVar11 = *(char *)(lVar17 + 0x99) != '\0';
  }
                    /* try { // try from 006c9ff4 to 006c9fff has its CatchHandler @ 006ca3d8 */
  lVar17 = EngineManager::getInstance();
  PVar3 = *(POST_PROCESS_ANTI_ALIASING *)(lVar17 + 0x218);
  uVar4 = *(uint *)(lVar17 + 0x1f8);
  uVar5 = *(uint *)(lVar17 + 0x1f0);
  uVar6 = *(uint *)(lVar17 + 0x210);
  DVar7 = *(DLSS_QUALITY *)(lVar17 + 0x21c);
  XVar8 = *(XESS_QUALITY *)(lVar17 + 0x228);
  FVar9 = *(FIDELITY_FX_SR_20 *)(lVar17 + 0x224);
                    /* try { // try from 006ca020 to 006ca06f has its CatchHandler @ 006ca3e0 */
  VVar13 = HardwareScalability::getValarQuality();
  if (!bVar11) {
    PVar3 = 0;
  }
  bVar12 = RenderQueueUtil::getNeedsMotionVectors(PVar3,DVar7,XVar8,FVar9,VVar13);
  iVar14 = HardwareScalability::getValarQuality();
  MaterialShaderManager::getShaderCacheExtraId(uVar4,uVar5,uVar6,(bool)(bVar12 & 1),iVar14 != 0);
                    /* try { // try from 006ca070 to 006ca07b has its CatchHandler @ 006ca3c8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_c8);
                    /* try { // try from 006ca088 to 006ca1f3 has its CatchHandler @ 006ca40c */
  plVar18 = (long *)(**(code **)(**(long **)(this + 0x170) + 0x88))();
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x10))();
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)local_c8);
  }
  RenderDeviceManager::getInstance();
  iVar14 = RenderDeviceManager::getCurrentRenderDeviceType();
  if (iVar14 == 5) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)&local_80);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)&local_80);
  }
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar14 != 0)) {
                    /* try { // try from 006ca28c to 006ca297 has its CatchHandler @ 006ca3b4 */
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
  pIVar19 = (IShaderCompiler *)(**(code **)(**(long **)(this + 0x170) + 0x88))();
  pIVar20 = (IShaderCreator *)(**(code **)(**(long **)(this + 0x170) + 0x90))();
  uVar21 = ShaderManager::init((ShaderManager *)&ShaderManager::getInstance()::instance,false,
                               pIVar19,pIVar20,(char *)0x0,param_2,param_3);
  if ((uVar21 & 1) == 0) {
                    /* try { // try from 006ca2c4 to 006ca2cb has its CatchHandler @ 006ca40c */
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar14 != 0)) {
                    /* try { // try from 006ca2dc to 006ca2e7 has its CatchHandler @ 006ca3b0 */
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
  pcVar1 = (char *)((ulong)local_c8 | 1);
  if (((byte)local_c8[0] & 1) != 0) {
    pcVar1 = local_b8;
  }
  pcVar2 = (char *)((ulong)&local_80 | 1);
  if ((local_80 & 1) != 0) {
    pcVar2 = local_70;
  }
  ShaderManager::initCache(true,(IRenderDevice *)0x0,*(char **)(this + 0x170),pcVar16,pcVar1,pcVar2)
  ;
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar14 != 0)) {
                    /* try { // try from 006ca324 to 006ca32f has its CatchHandler @ 006ca3ac */
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
  plVar18 = *(long **)(this + 0x170);
  DAT_01048f94 = param_1;
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar14 != 0)) {
                    /* try { // try from 006ca36c to 006ca377 has its CatchHandler @ 006ca3a8 */
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
  uVar15 = ShaderManager::getScratchMemBytesRequired();
  (**(code **)(*plVar18 + 0x18))(plVar18,uVar15);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar10 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


