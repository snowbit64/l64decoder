// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Renderer
// Entry Point: 00a1206c
// Size: 648 bytes
// Signature: undefined __thiscall ~Renderer(Renderer * this)


/* Renderer::~Renderer() */

void __thiscall Renderer::~Renderer(Renderer *this)

{
  int iVar1;
  ResourceManager *this_00;
  void *pvVar2;
  Upscaler *this_01;
  AtmosphereRenderControllerShared *this_02;
  
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar1 != 0)) {
                    /* try { // try from 00a12274 to 00a1227f has its CatchHandler @ 00a122f8 */
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
  if (*(long **)(this + 0x1ba0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1ba0) + 8))();
  }
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar1 != 0)) {
                    /* try { // try from 00a122bc to 00a122c7 has its CatchHandler @ 00a122f4 */
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
                    /* try { // try from 00a120a8 to 00a120b3 has its CatchHandler @ 00a1230c */
  this_00 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(this_00,*(Resource **)(this + 0x28));
  if (*(long **)(this + 0x1ba8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1ba8) + 8))();
  }
  if (*(long **)(this + 0x1cd0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1cd0) + 8))();
  }
  if (*(long **)(this + 0x1bb0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1bb0) + 8))();
  }
  if (*(long **)(this + 0x1bb8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1bb8) + 8))();
  }
  if (*(long **)(this + 0x1bc0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1bc0) + 8))();
  }
  if (*(long **)(this + 0xe8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xe8) + 8))();
  }
  if (*(long **)(this + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf0) + 8))();
  }
  if (*(long **)(this + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf8) + 8))();
  }
  if (*(long **)(this + 0x100) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x100) + 8))();
  }
  if (*(long **)(this + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x108) + 8))();
  }
  if (*(long **)(this + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xd8) + 8))();
  }
  if (*(long **)(this + 0xe0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xe0) + 8))();
  }
                    /* try { // try from 00a121a4 to 00a121ab has its CatchHandler @ 00a1230c */
  deletePlaneRenderInfos();
  this_01 = *(Upscaler **)(this + 0x2040);
  if (this_01 != (Upscaler *)0x0) {
    Upscaler::~Upscaler(this_01);
    operator_delete(this_01);
  }
  this_02 = *(AtmosphereRenderControllerShared **)(this + 0x2030);
  if (this_02 != (AtmosphereRenderControllerShared *)0x0) {
    AtmosphereRenderControllerShared::~AtmosphereRenderControllerShared(this_02);
    operator_delete(this_02);
  }
  IndirectLightRenderController::~IndirectLightRenderController
            ((IndirectLightRenderController *)(this + 0x1df8));
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0x1cd8));
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0x1bd0));
  pvVar2 = *(void **)(this + 0x1b80);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x1b88) = pvVar2;
    operator_delete(pvVar2);
  }
  AudioSourceQueue::~AudioSourceQueue((AudioSourceQueue *)(this + 0x1a50));
  PersistentShadowMap::~PersistentShadowMap((PersistentShadowMap *)(this + 0x1a00));
  RenderController::~RenderController((RenderController *)(this + 0xf20));
  if (((byte)this[0xed8] & 1) != 0) {
    operator_delete(*(void **)(this + 0xee8));
  }
  std::__ndk1::
  __tree<GsShape_const*,std::__ndk1::less<GsShape_const*>,std::__ndk1::allocator<GsShape_const*>>::
  destroy((__tree<GsShape_const*,std::__ndk1::less<GsShape_const*>,std::__ndk1::allocator<GsShape_const*>>
           *)(this + 0x928),*(__tree_node **)(this + 0x930));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<SharedRenderArgs::ShadowRasterizerStateDesc,std::__ndk1::pair<IRasterizerState*,unsigned_long_long>>,std::__ndk1::__map_value_compare<SharedRenderArgs::ShadowRasterizerStateDesc,std::__ndk1::__value_type<SharedRenderArgs::ShadowRasterizerStateDesc,std::__ndk1::pair<IRasterizerState*,unsigned_long_long>>,std::__ndk1::less<SharedRenderArgs::ShadowRasterizerStateDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SharedRenderArgs::ShadowRasterizerStateDesc,std::__ndk1::pair<IRasterizerState*,unsigned_long_long>>>>
  ::destroy((__tree<std::__ndk1::__value_type<SharedRenderArgs::ShadowRasterizerStateDesc,std::__ndk1::pair<IRasterizerState*,unsigned_long_long>>,std::__ndk1::__map_value_compare<SharedRenderArgs::ShadowRasterizerStateDesc,std::__ndk1::__value_type<SharedRenderArgs::ShadowRasterizerStateDesc,std::__ndk1::pair<IRasterizerState*,unsigned_long_long>>,std::__ndk1::less<SharedRenderArgs::ShadowRasterizerStateDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SharedRenderArgs::ShadowRasterizerStateDesc,std::__ndk1::pair<IRasterizerState*,unsigned_long_long>>>>
             *)(this + 0x180),*(__tree_node **)(this + 0x188));
  return;
}


