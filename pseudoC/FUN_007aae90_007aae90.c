// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aae90
// Entry Point: 007aae90
// Size: 1108 bytes
// Signature: undefined FUN_007aae90(void)


void FUN_007aae90(GsMaterial *param_1,char **param_2)

{
  ulong uVar1;
  GsMaterial **ppGVar2;
  GsMaterial **ppGVar3;
  long lVar4;
  void *__src;
  Resource *pRVar5;
  undefined8 uVar6;
  MaterialManager *pMVar7;
  void *__dest;
  ResourceManager *this;
  ulong __n;
  GsMaterial **ppGVar8;
  undefined **local_2b8;
  char *pcStack_2b0;
  undefined local_2a8;
  undefined4 local_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined8 local_294;
  undefined8 uStack_28c;
  undefined8 local_284;
  undefined8 local_27c;
  undefined8 local_274;
  undefined8 uStack_26c;
  undefined local_264;
  undefined8 local_260;
  undefined4 local_258;
  undefined2 local_254;
  undefined local_252;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
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
  undefined4 local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  pRVar5 = (Resource *)TextureUtil::loadMaterialTexture(*param_2,*(bool *)(param_2 + 4),1);
  uVar6 = GsMaterial::getAlbedoMap();
  FUN_007aacb0(param_1,uVar6,pRVar5,"albedo map",1);
  if (*(char *)(param_2 + 6) == '\0') {
    local_2a8 = 1;
    local_27c = 0xffffffffffffffff;
    local_2b8 = &PTR__MaterialDesc_00fd99f8;
    local_284 = 0;
    local_264 = 0;
    uStack_26c = 0x3f0000003fc00000;
    local_274 = 0x3f0000003f000000;
    pcStack_2b0 = "UnnamedMaterial";
    uStack_29c = 0;
    uStack_298 = 0;
    local_2a4 = 0;
    uStack_2a0 = 0;
    uStack_28c = 0;
    local_294 = 0;
    local_254 = 1;
    local_252 = 0;
    local_260 = 0x3f0000003f800000;
    local_258 = 0x3d0f5c29;
    local_250 = 0;
    uStack_248 = 0;
    local_240 = 0;
    uStack_1b0 = 0;
    local_1b8 = 0;
    uStack_230 = 0;
    local_238 = 0;
    uStack_220 = 0;
    local_228 = 0;
    uStack_1a0 = 0;
    local_1a8 = 0;
    uStack_210 = 0;
    local_218 = 0;
    uStack_200 = 0;
    local_208 = 0;
    uStack_190 = 0;
    local_198 = 0;
    uStack_1f0 = 0;
    local_1f8 = 0;
    uStack_1e0 = 0;
    local_1e8 = 0;
    uStack_180 = 0;
    local_188 = 0;
    uStack_1d0 = 0;
    local_1d8 = 0;
    uStack_1c0 = 0;
    local_1c8 = 0;
    uStack_170 = 0;
    local_178 = 0;
    local_78 = 0;
    uStack_160 = 0;
    local_168 = 0;
    uStack_150 = 0;
    local_158 = 0;
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
    GsMaterial::saveToDesc(param_1,(MaterialDesc *)&local_2b8);
    uStack_2a0 = SUB84(pRVar5,0);
    uStack_29c = (undefined4)((ulong)pRVar5 >> 0x20);
    pMVar7 = (MaterialManager *)MaterialManager::getInstance();
    param_1 = (GsMaterial *)MaterialManager::getMaterial(pMVar7,(MaterialDesc *)&local_2b8);
  }
  else {
    GsMaterial::setAlbedoMap(param_1,(Texture *)pRVar5);
    FUN_00f276d0(1,param_1 + 0x28);
    local_2a8 = 1;
    local_27c = 0xffffffffffffffff;
    local_2b8 = &PTR__MaterialDesc_00fd99f8;
    local_284 = 0;
    local_264 = 0;
    uStack_26c = 0x3f0000003fc00000;
    local_274 = 0x3f0000003f000000;
    pcStack_2b0 = "UnnamedMaterial";
    uStack_29c = 0;
    uStack_298 = 0;
    local_2a4 = 0;
    uStack_2a0 = 0;
    uStack_28c = 0;
    local_294 = 0;
    local_254 = 1;
    local_252 = 0;
    local_260 = 0x3f0000003f800000;
    local_258 = 0x3d0f5c29;
    local_250 = 0;
    uStack_248 = 0;
    local_240 = 0;
    uStack_1b0 = 0;
    local_1b8 = 0;
    uStack_230 = 0;
    local_238 = 0;
    uStack_220 = 0;
    local_228 = 0;
    uStack_1a0 = 0;
    local_1a8 = 0;
    uStack_210 = 0;
    local_218 = 0;
    uStack_200 = 0;
    local_208 = 0;
    uStack_190 = 0;
    local_198 = 0;
    uStack_1f0 = 0;
    local_1f8 = 0;
    uStack_1e0 = 0;
    local_1e8 = 0;
    uStack_180 = 0;
    local_188 = 0;
    uStack_1d0 = 0;
    local_1d8 = 0;
    uStack_1c0 = 0;
    local_1c8 = 0;
    uStack_170 = 0;
    local_178 = 0;
    local_78 = 0;
    uStack_160 = 0;
    local_168 = 0;
    uStack_150 = 0;
    local_158 = 0;
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
    GsMaterial::saveToDesc(param_1,(MaterialDesc *)&local_2b8);
    pMVar7 = (MaterialManager *)MaterialManager::getInstance();
    MaterialManager::changeMaterial(pMVar7,param_1,(MaterialDesc *)&local_2b8,3,(GsMaterial **)0x0);
  }
  __src = EngineScriptBinding::s_tempMaterials;
  if (DAT_010531e0 == DAT_010531e8) {
    __n = (long)DAT_010531e0 - (long)EngineScriptBinding::s_tempMaterials;
    uVar1 = ((long)__n >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)__n >> 2)) {
      uVar1 = (long)__n >> 2;
    }
    if (0x7ffffffffffffff7 < __n) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar1 << 3);
    }
    ppGVar2 = (GsMaterial **)((long)__dest + ((long)__n >> 3) * 8);
    ppGVar3 = (GsMaterial **)((long)__dest + uVar1 * 8);
    ppGVar8 = ppGVar2 + 1;
    *ppGVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    EngineScriptBinding::s_tempMaterials = __dest;
    DAT_010531e0 = ppGVar8;
    DAT_010531e8 = ppGVar3;
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *DAT_010531e0 = param_1;
    DAT_010531e0 = DAT_010531e0 + 1;
  }
  this = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(this,pRVar5);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_2 + 0x21) = 1;
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


