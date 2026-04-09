// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Renderer
// Entry Point: 00a117ac
// Size: 1828 bytes
// Signature: undefined __thiscall Renderer(Renderer * this, IRenderDevice * param_1, FontOverlayRenderer * param_2, PIXEL_FORMAT param_3, float param_4, float param_5)


/* Renderer::Renderer(IRenderDevice*, FontOverlayRenderer*, PixelFormat::PIXEL_FORMAT, float, float)
    */

void __thiscall
Renderer::Renderer(Renderer *this,IRenderDevice *param_1,FontOverlayRenderer *param_2,
                  PIXEL_FORMAT param_3,float param_4,float param_5)

{
  SharedRenderArgs *this_00;
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  StatsOverlayManager *this_01;
  undefined8 *puVar7;
  RenderPathManager *this_02;
  Upscaler *this_03;
  AtmosphereRenderControllerShared *this_04;
  long *plVar8;
  __tree_node **local_308;
  __tree_node *local_300;
  undefined8 local_2f8;
  undefined local_2f0 [4];
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined4 local_2e0 [2];
  undefined8 local_2d8;
  undefined4 local_2d0;
  ShaderStructLayout local_2c8 [16];
  void *local_2b8;
  byte *local_2a8;
  byte *local_2a0;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined4 local_270;
  undefined local_26c;
  undefined4 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined local_244;
  undefined4 local_240;
  undefined8 *local_238;
  undefined2 local_230;
  undefined8 local_22c;
  undefined8 local_224;
  undefined8 local_21c;
  undefined4 local_214;
  undefined8 local_210;
  undefined local_208;
  undefined8 local_204;
  undefined8 local_1fc;
  undefined8 uStack_1f4;
  undefined4 local_1ec;
  char *local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined8 local_124;
  undefined8 uStack_11c;
  undefined8 local_114;
  undefined8 uStack_10c;
  undefined8 local_104;
  undefined8 uStack_fc;
  undefined8 local_f4;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  this_00 = (SharedRenderArgs *)(this + 0x38);
  local_88 = *(long *)(lVar1 + 0x28);
  SharedRenderArgs::SharedRenderArgs(this_00,param_1,param_2,(DeferredDebugRenderer *)0x0);
                    /* try { // try from 00a11804 to 00a11807 has its CatchHandler @ 00a11f5c */
  Frustum::Frustum((Frustum *)(this + 0x380));
                    /* try { // try from 00a1180c to 00a11817 has its CatchHandler @ 00a11f54 */
  CullingArgs::CullingArgs((CullingArgs *)(this + 0x560),this_00);
                    /* try { // try from 00a1181c to 00a11827 has its CatchHandler @ 00a11f4c */
  RenderArgs::RenderArgs((RenderArgs *)(this + 0x960),this_00);
                    /* try { // try from 00a11834 to 00a11847 has its CatchHandler @ 00a11f44 */
  RenderController::RenderController
            ((RenderController *)(this + 0xf20),param_1,this_00,
             (IndirectLightRenderController *)(this + 0x1df8));
                    /* try { // try from 00a11850 to 00a1185b has its CatchHandler @ 00a11f3c */
  PersistentShadowMap::PersistentShadowMap((PersistentShadowMap *)(this + 0x1a00));
                    /* try { // try from 00a11864 to 00a11873 has its CatchHandler @ 00a11f34 */
  AudioSourceQueue::AudioSourceQueue((AudioSourceQueue *)(this + 0x1a50),this_00);
  *(undefined8 *)(this + 0x1b80) = 0;
  *(undefined8 *)(this + 0x1b90) = 0;
  *(undefined8 *)(this + 0x1b88) = 0;
  *(undefined8 *)(this + 0x1afc) = 0;
  *(undefined8 *)(this + 0x1af4) = 0;
  *(undefined8 *)(this + 0x1ae0) = 0;
  *(undefined8 *)(this + 0x1ad8) = 0;
  *(undefined8 *)(this + 0x1af0) = 0;
  *(undefined8 *)(this + 0x1ae8) = 0;
  *(undefined8 *)(this + 0x1ac0) = 0;
  *(undefined8 *)(this + 0x1ab8) = 0;
  *(undefined8 *)(this + 0x1ad0) = 0;
  *(undefined8 *)(this + 0x1ac8) = 0;
  *(undefined8 *)(this + 0x1aa0) = 0;
  *(undefined8 *)(this + 0x1a98) = 0;
  *(undefined8 *)(this + 0x1ab0) = 0;
  *(undefined8 *)(this + 0x1aa8) = 0;
  *(undefined8 *)(this + 0x1a90) = 0;
  *(undefined8 *)(this + 0x1a88) = 0;
  *(undefined8 *)(this + 0x1b78) = 0;
  *(undefined8 *)(this + 0x1b70) = 0;
  *(undefined8 *)(this + 0x1b0c) = 0;
  *(undefined8 *)(this + 0x1b04) = 0;
  *(undefined8 *)(this + 0x1b1c) = 0;
  *(undefined8 *)(this + 0x1b14) = 0;
  *(undefined8 *)(this + 0x1b2c) = 0;
  *(undefined8 *)(this + 0x1b24) = 0;
  *(undefined8 *)(this + 0x1b3c) = 0;
  *(undefined8 *)(this + 0x1b34) = 0;
  *(undefined8 *)(this + 0x1b4c) = 0;
  *(undefined8 *)(this + 0x1b44) = 0;
  *(undefined8 *)(this + 0x1b5c) = 0;
  *(undefined8 *)(this + 0x1b54) = 0;
  *(undefined8 *)(this + 0x1b6c) = 0;
  *(undefined8 *)(this + 0x1b64) = 0;
                    /* try { // try from 00a118c8 to 00a118cf has its CatchHandler @ 00a11f2c */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x1bd0));
                    /* try { // try from 00a118d8 to 00a118df has its CatchHandler @ 00a11f24 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x1cd8));
                    /* try { // try from 00a118e0 to 00a118eb has its CatchHandler @ 00a11f1c */
  IndirectLightRenderController::IndirectLightRenderController
            ((IndirectLightRenderController *)(this + 0x1df8),param_1);
  *(undefined8 *)(this + 0x28) = 0;
  *(IRenderDevice **)(this + 0x30) = param_1;
  *(undefined2 *)this = 0x101;
  *(undefined4 *)(this + 0xf00) = 0;
  *(Renderer **)(this + 0xb8) = this + 0x1758;
  *(undefined8 *)(this + 0x1dec) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x1de4) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  this[0xf04] = (Renderer)0x1;
                    /* try { // try from 00a11930 to 00a11987 has its CatchHandler @ 00a11f80 */
  lVar5 = EngineManager::getInstance();
  iVar4 = *(int *)(lVar5 + 0x24c);
  this[0xf06] = (Renderer)0x0;
  *(undefined8 *)(this + 0xf10) = 0xff0000000000ff;
  *(undefined8 *)(this + 0xf08) = 5;
  this[0xf05] = (Renderer)(iVar4 != 0);
  TransformArgs::init((TransformArgs *)(this + 0x1a0),false);
  CullingArgs::init((CullingArgs *)(this + 0x560),(CullingArgs *)0x0,0,*(uint *)(this + 0xf10),
                    *(uint *)(this + 0xf14),0,0);
  local_2e8 = 0;
                    /* try { // try from 00a1198c to 00a119a7 has its CatchHandler @ 00a11f14 */
  RenderArgs::init((uint)(RenderArgs *)(this + 0x960),(float *)0x0,(INFO_RENDERING)&local_2e8,
                   (char *)0x0);
  *(undefined8 *)(this + 0xf18) = 0;
  *(undefined8 *)(this + 0x1b98) = 0;
  *(undefined8 *)(this + 0x1ba8) = 0;
  *(undefined8 *)(this + 0x1ba0) = 0;
  *(undefined8 *)(this + 0x548) = 0x100000001;
  *(undefined8 *)(this + 0x540) = 0;
  local_248 = 0x1000101;
  local_250 = 0;
  *(undefined8 *)(this + 0x558) = 0x3f8000003f800000;
  *(undefined8 *)(this + 0x550) = 0;
  local_260 = 0x100000000;
  uStack_258 = 0;
  local_244 = 0;
  local_240 = 0;
                    /* try { // try from 00a119f8 to 00a11a03 has its CatchHandler @ 00a11f0c */
  uVar6 = (**(code **)(*(long *)param_1 + 0xe8))(param_1,&local_260);
  *(undefined8 *)(this + 0x1bb0) = uVar6;
  local_2f0[0] = 0;
  local_2ec = 1;
                    /* try { // try from 00a11a1c to 00a11a47 has its CatchHandler @ 00a11f74 */
  uVar6 = (**(code **)(*(long *)param_1 + 0xe0))(param_1,local_2f0);
  *(undefined8 *)(this + 0x1bb8) = uVar6;
  local_2f0[0] = 1;
  local_2ec = 1;
  uVar6 = (**(code **)(*(long *)param_1 + 0xe0))(param_1,local_2f0);
  *(undefined8 *)(this + 0xe8) = uVar6;
  local_cc = 0x100000000;
  local_d4 = 0;
  local_a8 = 0x100000001;
  local_c0 = 0x100000001;
  uStack_b8 = 0;
  local_a0 = 0x100000001;
  local_b0 = 0;
  local_c4 = 1;
  local_d8 = 0;
  uStack_90 = 0x101010001010100;
  local_98 = 0x101010001010100;
                    /* try { // try from 00a11a94 to 00a11a9f has its CatchHandler @ 00a11f04 */
  uVar6 = (**(code **)(*(long *)param_1 + 0xf0))(param_1,&local_d8);
  *(undefined8 *)(this + 0xf0) = uVar6;
  local_280 = 0;
  uStack_278 = 0;
  local_26c = 0;
  local_270 = 0x1000101;
  local_288 = 1;
  local_268 = 0;
                    /* try { // try from 00a11acc to 00a11ad7 has its CatchHandler @ 00a11efc */
  uVar6 = (**(code **)(*(long *)param_1 + 0xe8))(param_1,&local_288);
  *(undefined8 *)(this + 0xf8) = uVar6;
  local_148 = 1;
  uStack_12c = 0;
  uStack_13c = 0;
  local_144 = 0;
  uStack_11c = 0;
  local_124 = 0;
  uStack_10c = 0;
  local_114 = 0;
  uStack_fc = 0;
  local_104 = 0;
  uStack_ec = 0;
  local_f4 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  local_134 = 0x300000000;
                    /* try { // try from 00a11b10 to 00a11b1b has its CatchHandler @ 00a11ef4 */
  uVar6 = (**(code **)(*(long *)param_1 + 0x128))(param_1,&local_148);
  *(undefined8 *)(this + 0x100) = uVar6;
  local_308 = &local_300;
  local_2f8 = 0;
  local_300 = (__tree_node *)0x0;
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar4 != 0)) {
                    /* try { // try from 00a11e94 to 00a11e9f has its CatchHandler @ 00a11ed0 */
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
                    /* try { // try from 00a11b44 to 00a11b5b has its CatchHandler @ 00a11ef0 */
  ShaderManager::createProgramFromFile
            ((ShaderManager *)&ShaderManager::getInstance()::instance,"zstencil.cg",
             (map *)&local_308,(IProgramObject **)(this + 0x108));
  local_198 = 0;
  uStack_190 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0x100000001;
  uStack_180 = 0x100000001;
  local_168 = 0x100000001;
  uStack_160 = 0x100000001;
  uStack_150 = 0x101010101010101;
  local_158 = 0x101010101010101;
                    /* try { // try from 00a11b84 to 00a11b8f has its CatchHandler @ 00a11eec */
  uVar6 = (**(code **)(*(long *)param_1 + 0xf0))(param_1,&local_198);
  local_238 = &local_1e0;
  *(undefined8 *)(this + 0x1bc0) = uVar6;
  local_230 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  local_22c = 0xffffffff00000000;
  local_21c = 0x100000001;
  uStack_1f4 = 0x3f80000000000000;
  local_1fc = 0;
  local_210 = 0x500000000;
  local_214 = 0;
  local_1ec = 0;
  local_204 = 0x100000001;
  local_224 = 0x400000004;
  local_208 = 0;
  local_1e8 = "BlackTexture";
                    /* try { // try from 00a11c04 to 00a11c7b has its CatchHandler @ 00a11f98 */
  uVar6 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
  uVar6 = (**(code **)(*(long *)param_1 + 0x100))(param_1,uVar6,&local_238);
  *(undefined8 *)(this + 0xd8) = uVar6;
  *(PIXEL_FORMAT *)(this + 0x84) = param_3;
  uStack_1d8 = 0x8080808080808080;
  local_1e0 = 0x8080808080808080;
  uStack_1c8 = 0x8080808080808080;
  local_1d0 = 0x8080808080808080;
  uStack_1b8 = 0x8080808080808080;
  local_1c0 = 0x8080808080808080;
  uStack_1a8 = 0x8080808080808080;
  local_1b0 = 0x8080808080808080;
  uVar6 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
  uVar6 = (**(code **)(*(long *)param_1 + 0x100))(param_1,uVar6,&local_238);
  *(undefined8 *)(this + 0xe0) = uVar6;
  this_01 = (StatsOverlayManager *)StatsOverlayManager::getInstance();
  puVar7 = (undefined8 *)operator_new(0x2a0);
  *(undefined2 *)(puVar7 + 1) = 0;
  puVar7[2] = this + 0x1a88;
  puVar7[3] = this + 0x1b04;
  *puVar7 = &PTR__StatsOverlay_00fe3058;
  memset(puVar7 + 4,0,0x272);
  puVar7[0x53] = this_00;
                    /* try { // try from 00a11cac to 00a11ccb has its CatchHandler @ 00a11f98 */
  StatsOverlayManager::addStatsOverlay(this_01,(StatsOverlay *)puVar7,0);
  this_02 = (RenderPathManager *)RenderPathManager::getInstance();
  RenderPathManager::init(this_02,*(IRenderDevice **)(this + 0x30),this_00);
  *(undefined4 *)(this + 0x1dd8) = 0;
  *(float *)(this + 0x1ddc) = param_4;
  *(float *)(this + 0x1de0) = param_5;
                    /* try { // try from 00a11cd8 to 00a11ceb has its CatchHandler @ 00a11ee8 */
  ShaderStructLayout::ShaderStructLayout(local_2c8,"ExpandParams",0);
                    /* try { // try from 00a11cec to 00a11d57 has its CatchHandler @ 00a11f7c */
  ShaderStructLayout::addField(local_2c8,"numRanges",2,0,0,false,0);
  ShaderStructLayout::addField(local_2c8,"numInstances",2,0,0,false,0);
  AdhocShader::load((AdhocShader *)(this + 0x1cd8),*(IRenderDevice **)(this + 0x30),
                    "expandInstances_cs.cg",(char *)0x0,0,local_2c8,1);
  plVar8 = *(long **)(this + 0x30);
  local_2d8 = 0;
  local_2e0[0] = 8;
  local_2d0 = 8;
                    /* try { // try from 00a11d74 to 00a11d9f has its CatchHandler @ 00a11f88 */
  uVar6 = (**(code **)(*plVar8 + 0x138))(plVar8);
  uVar6 = (**(code **)(*plVar8 + 0x118))(plVar8,uVar6,local_2e0);
  *(undefined8 *)(this + 0x1cd0) = uVar6;
  this_03 = (Upscaler *)operator_new(0x170);
                    /* try { // try from 00a11da4 to 00a11db7 has its CatchHandler @ 00a11f64 */
  lVar5 = EngineManager::getInstance();
  Upscaler::Upscaler(this_03,(HardwareScalability *)(lVar5 + 0x198),param_1);
  *(Upscaler **)(this + 0x2040) = this_03;
  *(Upscaler **)(this + 0x14f0) = this_03;
  *(undefined4 *)(this + 0x1bc8) = 0;
  *(undefined8 *)(this + 0x2038) = 0;
                    /* try { // try from 00a11dc8 to 00a11dcf has its CatchHandler @ 00a11f88 */
  this_04 = (AtmosphereRenderControllerShared *)operator_new(0x2c8);
                    /* try { // try from 00a11dd4 to 00a11dd7 has its CatchHandler @ 00a11ee4 */
  AtmosphereRenderControllerShared::AtmosphereRenderControllerShared(this_04);
  pbVar3 = local_2a8;
  *(AtmosphereRenderControllerShared **)(this + 0x2030) = this_04;
  *(undefined4 *)(this + 0x2048) = 0x3f800000;
  if (local_2a8 != (byte *)0x0) {
    while (pbVar2 = local_2a0, pbVar2 != pbVar3) {
      local_2a0 = pbVar2 + -0x20;
      if ((*local_2a0 & 1) != 0) {
        operator_delete(*(void **)(pbVar2 + -0x10));
      }
    }
    local_2a0 = pbVar3;
    operator_delete(local_2a8);
  }
  if (((byte)local_2c8[0] & 1) != 0) {
    operator_delete(local_2b8);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
             *)&local_308,local_300);
  if (*(long *)(lVar1 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


