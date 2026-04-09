// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init3
// Entry Point: 0074f920
// Size: 1052 bytes
// Signature: undefined __thiscall init3(EngineManager * this, IRenderWindow * param_1, float param_2, float param_3)


/* WARNING: Type propagation algorithm not settling */
/* EngineManager::init3(IRenderWindow*, float, float) */

undefined8 __thiscall
EngineManager::init3(EngineManager *this,IRenderWindow *param_1,float param_2,float param_3)

{
  char cVar1;
  long lVar2;
  LANGUAGE_TYPE LVar3;
  ulong *puVar4;
  void **ppvVar5;
  ulong uVar6;
  FontOverlayRenderer *this_00;
  TextureOverlayRenderer *this_01;
  Renderer *this_02;
  TransformGroup *this_03;
  Bt2ScenegraphPhysicsContext *this_04;
  DeferredDebugRenderer *pDVar7;
  void *pvVar8;
  char *pcVar9;
  PIXEL_FORMAT PVar10;
  long lVar11;
  EngineManager *pEVar12;
  float fVar13;
  byte local_e8 [16];
  void *local_d8;
  void *local_d0;
  void *pvStack_c8;
  void *local_c0;
  ulong local_b0;
  ulong uStack_a8;
  char *local_a0;
  ulong local_90;
  ulong uStack_88;
  char *local_80;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  pEVar12 = this + 0x108;
  local_48 = *(long *)(lVar2 + 0x28);
  *(IRenderWindow **)(this + 200) = param_1;
  FUN_006cadd8(local_60,pEVar12,&DAT_004c96d3);
                    /* try { // try from 0074f96c to 0074f97f has its CatchHandler @ 0074fdcc */
  FUN_006cadd8(local_78,pEVar12,".font");
                    /* try { // try from 0074f980 to 0074f987 has its CatchHandler @ 0074fde4 */
  LVar3 = LanguageUtil::getLanguage();
  LanguageUtil::getCodeStr(LVar3);
                    /* try { // try from 0074f98c to 0074f99f has its CatchHandler @ 0074fdc4 */
  FUN_006cadd8(&local_d0,pEVar12,&DAT_004d12a6);
                    /* try { // try from 0074f9a0 to 0074f9ab has its CatchHandler @ 0074fdb0 */
  puVar4 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_d0);
  local_a0 = (char *)puVar4[2];
  uStack_a8 = puVar4[1];
  local_b0 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
                    /* try { // try from 0074f9c4 to 0074f9d3 has its CatchHandler @ 0074fd98 */
  puVar4 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_b0);
  local_80 = (char *)puVar4[2];
  uStack_88 = puVar4[1];
  local_90 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (((byte)local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
                    /* try { // try from 0074fa0c to 0074fa1f has its CatchHandler @ 0074fd90 */
  FUN_006cadd8(local_e8,pEVar12,&DAT_004d12a6);
                    /* try { // try from 0074fa20 to 0074fa2b has its CatchHandler @ 0074fd7c */
  ppvVar5 = (void **)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append((char *)local_e8);
  local_c0 = ppvVar5[2];
  pvStack_c8 = ppvVar5[1];
  local_d0 = *ppvVar5;
  ppvVar5[1] = (void *)0x0;
  ppvVar5[2] = (void *)0x0;
  *ppvVar5 = (void *)0x0;
                    /* try { // try from 0074fa44 to 0074fa53 has its CatchHandler @ 0074fd64 */
  puVar4 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_d0);
  local_a0 = (char *)puVar4[2];
  uStack_a8 = puVar4[1];
  local_b0 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if (((ulong)local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  pcVar9 = (char *)((ulong)&local_90 | 1);
  if ((local_90 & 1) != 0) {
    pcVar9 = local_80;
  }
                    /* try { // try from 0074faa4 to 0074faeb has its CatchHandler @ 0074fde0 */
  uVar6 = TextureUtil::imageExists(pcVar9);
  if ((uVar6 & 1) != 0) {
    pcVar9 = (char *)((ulong)&local_b0 | 1);
    if ((local_b0 & 1) != 0) {
      pcVar9 = local_a0;
    }
    uVar6 = FileManager::exist((FileManager *)FileManager::s_singletonFileManager,pcVar9);
    if ((uVar6 & 1) != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=(local_60,(basic_string *)&local_90);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=(local_78,(basic_string *)&local_b0);
    }
  }
  local_d0 = (void *)((ulong)local_60 | 1);
  if (((byte)local_60[0] & 1) != 0) {
    local_d0 = local_50;
  }
  pvStack_c8 = (void *)((ulong)local_78 | 1);
  if (((byte)local_78[0] & 1) != 0) {
    pvStack_c8 = local_68;
  }
                    /* try { // try from 0074fb20 to 0074fb27 has its CatchHandler @ 0074fdf0 */
  this_00 = (FontOverlayRenderer *)operator_new(0x460);
                    /* try { // try from 0074fb30 to 0074fb37 has its CatchHandler @ 0074fd54 */
  FontOverlayRenderer::FontOverlayRenderer
            (this_00,(TextureFontDesc *)&local_d0,*(IRenderDevice **)(this + 0xc0));
  lVar11 = *(long *)(this_00 + 0x80);
  *(FontOverlayRenderer **)(this + 0xf0) = this_00;
  *(FontOverlayRenderer **)(this + 0xf8) = this_00;
  if (lVar11 == 0) {
                    /* try { // try from 0074fd14 to 0074fd37 has its CatchHandler @ 0074fdf0 */
    pcVar9 = (char *)LogManager::getInstance();
    pEVar12 = *(EngineManager **)(this + 0x118);
    if (((byte)this[0x108] & 1) == 0) {
      pEVar12 = this + 0x109;
    }
    LogManager::errorf(pcVar9,"Error: Texture font loading failed \'%s\'.\n",pEVar12);
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* try { // try from 0074fb44 to 0074fb5b has its CatchHandler @ 0074fdf0 */
  fVar13 = (float)getScreenAspectRatio();
  FontOverlayRenderer::setScreenAspectRatio(this_00,fVar13);
  this_01 = (TextureOverlayRenderer *)operator_new(0x550);
                    /* try { // try from 0074fb64 to 0074fb67 has its CatchHandler @ 0074fd44 */
  TextureOverlayRenderer::TextureOverlayRenderer(this_01,*(IRenderDevice **)(this + 0xc0));
  *(TextureOverlayRenderer **)(this + 0x100) = this_01;
                    /* try { // try from 0074fb7c to 0074fb7f has its CatchHandler @ 0074fdf0 */
  (**(code **)(**(long **)(this + 200) + 0xa0))(*(long **)(this + 200),this + 0x20);
                    /* try { // try from 0074fb8c to 0074fb9b has its CatchHandler @ 0074fddc */
  lVar11 = (**(code **)(**(long **)(this + 0xc0) + 0x28))();
  cVar1 = *(char *)(lVar11 + 0x95);
  this_02 = (Renderer *)operator_new(0x2050);
  PVar10 = 0x1d;
  if (cVar1 != '\0') {
    PVar10 = 0x1e;
  }
                    /* try { // try from 0074fbb4 to 0074fbbf has its CatchHandler @ 0074fd40 */
  Renderer::Renderer(this_02,*(IRenderDevice **)(this + 0xc0),*(FontOverlayRenderer **)(this + 0xf8)
                     ,PVar10,param_2,param_3);
  *(Renderer **)(this + 0xb8) = this_02;
                    /* try { // try from 0074fbc4 to 0074fbcb has its CatchHandler @ 0074fdec */
  this_03 = (TransformGroup *)operator_new(0x158);
                    /* try { // try from 0074fbd0 to 0074fbdb has its CatchHandler @ 0074fd3c */
  TransformGroup::TransformGroup(this_03,"RootNode");
                    /* try { // try from 0074fbe0 to 0074fc1b has its CatchHandler @ 0074fdec */
  Renderer::setRootNode(*(Renderer **)(this + 0xb8),this_03);
  Renderer::setEnvMaps
            (*(Renderer **)(this + 0xb8),"shared/default_env.dds","shared/default_env.dds",
             "shared/default_env.dds","shared/default_env.dds",1.0,0.0,0.0,0.0,true,false);
                    /* try { // try from 0074fc1c to 0074fc7b has its CatchHandler @ 0074fdf4 */
  ScenegraphPhysicsContextManager::getInstance();
  this_04 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::addTriggerReport(this_04,(ITriggerReport *)this);
  Bt2ScenegraphPhysicsContext::addWakeUpReport(this_04,(IWakeUpReport *)(this + 8));
  Bt2ScenegraphPhysicsContext::addContactReport(this_04,(IContactReport *)(this + 0x10));
  Bt2ScenegraphPhysicsContext::addJointBreakReport(this_04,(IJointBreakReport *)(this + 0x18));
  pDVar7 = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
  Bt2ScenegraphPhysicsContext::setDeferredDebugRenderer(this_04,pDVar7);
  pvVar8 = (void *)ThreadUtil::getCurrentThreadHandle();
  ThreadUtil::setThreadAffinityMask(pvVar8,*(uint *)(this + 0x314));
  HardwareScalability::logSettings();
  AndroidSysUtil::s_pAppRunStateListener = this + 0x38;
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


