// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDefaultMaterial
// Entry Point: 0094fd50
// Size: 528 bytes
// Signature: undefined __thiscall getDefaultMaterial(MaterialManager * this, STREAM_QUEUE param_1)


/* MaterialManager::getDefaultMaterial(StreamManager::STREAM_QUEUE) */

void __thiscall MaterialManager::getDefaultMaterial(MaterialManager *this,STREAM_QUEUE param_1)

{
  long lVar1;
  undefined8 uVar2;
  GsMaterial *this_00;
  ResourceManager *this_01;
  long lVar3;
  undefined **local_2a8;
  char *pcStack_2a0;
  undefined local_298;
  undefined4 local_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined8 local_284;
  undefined8 uStack_27c;
  undefined8 local_274;
  undefined8 local_26c;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined local_254;
  undefined8 local_250;
  undefined4 local_248;
  undefined2 local_244;
  undefined local_242;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
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
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Mutex::enterCriticalSection();
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    local_26c = 0xffffffffffffffff;
    local_2a8 = &PTR__MaterialDesc_00fd99f8;
    local_298 = 1;
    uStack_25c = 0x3f0000003fc00000;
    local_264 = 0x3f0000003f000000;
    pcStack_2a0 = "UnnamedMaterial";
    uStack_28c = 0;
    uStack_288 = 0;
    local_294 = 0;
    uStack_290 = 0;
    uStack_27c = 0;
    local_284 = 0;
    local_274 = 0;
    local_254 = 0;
    local_250 = 0x3f0000003f800000;
    local_248 = 0x3d0f5c29;
    local_244 = 1;
    local_242 = 0;
    uStack_1a0 = 0;
    local_1a8 = 0;
    local_240 = 0;
    uStack_238 = 0;
    local_230 = 0;
    uStack_190 = 0;
    local_198 = 0;
    uStack_220 = 0;
    local_228 = 0;
    uStack_210 = 0;
    local_218 = 0;
    uStack_180 = 0;
    local_188 = 0;
    uStack_200 = 0;
    local_208 = 0;
    uStack_1f0 = 0;
    local_1f8 = 0;
    uStack_170 = 0;
    local_178 = 0;
    uStack_1e0 = 0;
    local_1e8 = 0;
    uStack_1d0 = 0;
    local_1d8 = 0;
    uStack_160 = 0;
    local_168 = 0;
    uStack_1c0 = 0;
    local_1c8 = 0;
    uStack_1b0 = 0;
    local_1b8 = 0;
    uStack_150 = 0;
    local_158 = 0;
    local_68 = 0;
    uStack_140 = 0;
    local_148 = 0;
    uStack_130 = 0;
    local_138 = 0;
    uStack_120 = 0;
    local_128 = 0;
    uStack_110 = 0;
    local_118 = 0;
    uStack_100 = 0;
    local_108 = 0;
    uStack_f0 = 0;
    local_f8 = 0;
    uStack_e0 = 0;
    local_e8 = 0;
    uStack_d0 = 0;
    local_d8 = 0;
    uStack_c0 = 0;
    local_c8 = 0;
    uStack_b0 = 0;
    local_b8 = 0;
    uStack_a0 = 0;
    local_a8 = 0;
    uStack_90 = 0;
    local_98 = 0;
    uStack_80 = 0;
    local_88 = 0;
    uStack_58 = 0x3f8000003f800000;
    local_60 = 0x3f8000003f800000;
    uStack_70 = 0;
    local_78 = 0;
    uVar2 = getSingleColorTexture(this,(float *)&local_60,0,param_1);
    uStack_290 = (undefined4)uVar2;
    uStack_28c = (undefined4)((ulong)uVar2 >> 0x20);
    this_00 = (GsMaterial *)operator_new(0x178);
                    /* try { // try from 0094fef8 to 0094feff has its CatchHandler @ 0094ff60 */
    GsMaterial::GsMaterial(this_00,(MaterialDesc *)&local_2a8);
    *(GsMaterial **)this = this_00;
    GsMaterial::initMaterialAttributes();
    this_01 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::release(this_01,(Resource *)CONCAT44(uStack_28c,uStack_290));
    lVar3 = *(long *)this;
  }
  FUN_00f276d0(1,lVar3 + 0x28);
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)this);
}


