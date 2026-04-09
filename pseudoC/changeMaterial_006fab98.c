// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: changeMaterial
// Entry Point: 006fab98
// Size: 724 bytes
// Signature: undefined __thiscall changeMaterial(BillboardShape * this, GsShape * param_1)


/* BillboardShape::changeMaterial(GsShape*) */

void __thiscall BillboardShape::changeMaterial(BillboardShape *this,GsShape *param_1)

{
  char *pcVar1;
  Texture **ppTVar2;
  long lVar3;
  int iVar4;
  Texture *this_00;
  ResourceManager *pRVar5;
  ulong uVar6;
  StreamManager *this_01;
  MaterialManager *pMVar7;
  GsMaterial *this_02;
  byte local_2c0;
  undefined8 local_2bf;
  undefined4 local_2b7;
  undefined local_2b3;
  char *local_2b0;
  undefined **local_2a8;
  undefined local_2a0;
  undefined4 local_29c;
  undefined2 local_298;
  undefined **local_290;
  char *pcStack_288;
  undefined local_280;
  undefined local_27c [8];
  undefined8 uStack_274;
  undefined8 local_26c;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined8 local_254;
  undefined8 local_24c;
  undefined8 uStack_244;
  undefined local_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined2 local_22c;
  undefined local_22a;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_2a0 = 1;
  local_2a8 = &PTR__ResourceDesc_00fd99b0;
  local_2c0 = 0x18;
  local_29c = 0;
  local_298 = 0;
  local_2b7 = 0x64412064;
  local_2b3 = 0;
  local_2bf._0_1_ = 'B';
  local_2bf._1_1_ = 'i';
  local_2bf._2_1_ = 'l';
  local_2bf._3_1_ = 'l';
  local_2bf._4_1_ = 'b';
  local_2bf._5_1_ = 'o';
  local_2bf._6_1_ = 'a';
  local_2bf._7_1_ = 'r';
                    /* try { // try from 006fac10 to 006fac1f has its CatchHandler @ 006fae94 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_2c0);
                    /* try { // try from 006fac20 to 006fac27 has its CatchHandler @ 006faea0 */
  this_00 = (Texture *)operator_new(0x78);
  pcVar1 = (char *)((ulong)&local_2c0 | 1);
  if ((local_2c0 & 1) != 0) {
    pcVar1 = local_2b0;
  }
                    /* try { // try from 006fac40 to 006fac4b has its CatchHandler @ 006fae84 */
  Texture::Texture(this_00,pcVar1,2,(TextureDesc *)&local_2a8);
  FUN_00f276d0(1,this_00 + 8);
                    /* try { // try from 006fac58 to 006fac7f has its CatchHandler @ 006faea0 */
  pRVar5 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::add(pRVar5,(Resource *)this_00,(ResourceDesc *)0x0,false);
  uVar6 = Texture::load(this_00,*(uchar **)(*(long *)(this + 0x28) + 0x20),
                        *(uint *)(*(long *)(this + 0x28) + 0x28));
  if ((uVar6 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 006fae30 to 006fae3b has its CatchHandler @ 006fae6c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 006fadc8 to 006fade7 has its CatchHandler @ 006faea0 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "[gads] Error: Texture not loaded for ad billboard \'%s\' placement %u.\n",
                       *(undefined8 *)(param_1 + 8),(ulong)*(uint *)(this + 0x20));
  }
  else {
                    /* try { // try from 006fac84 to 006fac9f has its CatchHandler @ 006fae98 */
    RenderDeviceManager::getInstance();
    RenderDeviceManager::getCurrentRenderDevice();
    this_01 = (StreamManager *)StreamManager::getInstance();
    StreamManager::addStreamable(this_01,(Streamable *)(this_00 + 0x10),1);
    local_280 = 1;
    local_254 = 0xffffffffffffffff;
    local_290 = &PTR__MaterialDesc_00fd99f8;
    uStack_25c = 0;
    uStack_258 = 0;
    local_23c = 0;
    uStack_244 = 0x3f0000003fc00000;
    local_24c = 0x3f0000003f000000;
    pcStack_288 = "UnnamedMaterial";
    uStack_274 = 0;
    local_27c = (undefined  [8])0x0;
    uStack_264 = 0;
    uStack_260 = 0;
    local_26c = 0;
    local_22c = 1;
    local_22a = 0;
    local_238 = 0x3f0000003f800000;
    local_230 = 0x3d0f5c29;
    local_228 = 0;
    uStack_220 = 0;
    local_218 = 0;
    uStack_208 = 0;
    local_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    local_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    local_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    local_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    local_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    local_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    local_50 = 0;
                    /* try { // try from 006fad4c to 006fad57 has its CatchHandler @ 006fae80 */
    GsMaterial::saveToDesc(*(GsMaterial **)(this + 0x30),(MaterialDesc *)&local_290);
    ppTVar2 = (Texture **)(local_27c + 4);
    if (CONCAT44(uStack_25c,uStack_260) != 0) {
      ppTVar2 = (Texture **)&uStack_260;
    }
    *ppTVar2 = this_00;
                    /* try { // try from 006fad70 to 006fadab has its CatchHandler @ 006fae9c */
    pMVar7 = (MaterialManager *)MaterialManager::getInstance();
    this_02 = (GsMaterial *)MaterialManager::getMaterial(pMVar7,(MaterialDesc *)&local_290);
    GsMaterial::initMaterialAttributes();
    GsMaterial::validateTextures(this_02,1);
    GsShape::setMaterialAt(param_1,this_02,0);
    pMVar7 = (MaterialManager *)MaterialManager::getInstance();
    MaterialManager::releaseMaterial(pMVar7,this_02);
  }
  pRVar5 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar5,(Resource *)this_00);
  if ((local_2c0 & 1) != 0) {
    operator_delete(local_2b0);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


