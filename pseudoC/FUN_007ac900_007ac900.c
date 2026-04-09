// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ac900
// Entry Point: 007ac900
// Size: 1132 bytes
// Signature: undefined FUN_007ac900(void)


void FUN_007ac900(GsMaterial *param_1,char **param_2)

{
  GsMaterial **ppGVar1;
  GsMaterial **ppGVar2;
  long lVar3;
  void *__src;
  bool bVar4;
  CustomShader *this;
  ulong uVar5;
  Texture *pTVar6;
  MaterialManager *pMVar7;
  void *__dest;
  ResourceManager *this_00;
  char **ppcVar8;
  char *pcVar9;
  GsMaterial **ppGVar10;
  ulong __n;
  uint local_2bc;
  undefined **local_2b8;
  char *pcStack_2b0;
  undefined local_2a8;
  undefined8 local_2a4;
  undefined8 uStack_29c;
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
  Texture *local_238 [4];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  this = (CustomShader *)GsMaterial::getCustomShader();
  if ((this == (CustomShader *)0x0) ||
     (uVar5 = CustomShader::getTextureIndex(this,*(uint *)(param_1 + 0x88),*param_2,&local_2bc),
     (uVar5 & 1) == 0)) goto LAB_007acd08;
  ppcVar8 = (char **)param_2[6];
  if ((*(int *)(param_2 + 7) == 0) && (ppcVar8 == (char **)0x0)) {
    bVar4 = *(char *)(*(long *)(*(long *)(*(long *)(this + 0x110) +
                                          (ulong)*(uint *)(param_1 + 0x88) * 0xe0 + 0x58) +
                               (ulong)local_2bc * 8) + 0x30) == '\0';
    goto LAB_007ac9ec;
  }
  bVar4 = true;
  switch(*(int *)(param_2 + 7)) {
  case 1:
  case 2:
    bVar4 = SUB84(ppcVar8,0) == 0.0;
    break;
  case 3:
    bVar4 = ((ulong)ppcVar8 & 0xff) == 0;
    break;
  case 4:
    bVar4 = SUB84(ppcVar8,0) == 0.0;
    break;
  case 5:
    bVar4 = (double)ppcVar8 == 0.0;
    break;
  default:
    goto switchD_007ac9b4_caseD_6;
  case 7:
  case 8:
switchD_007ac9b4_caseD_7:
    bVar4 = ppcVar8 == (char **)0x0;
    break;
  case 0xd:
    if (ppcVar8 != (char **)0x0) {
      ppcVar8 = (char **)*ppcVar8;
      goto switchD_007ac9b4_caseD_7;
    }
    bVar4 = false;
    goto switchD_007ac9b4_caseD_6;
  }
LAB_007ac9ec:
  bVar4 = !bVar4;
switchD_007ac9b4_caseD_6:
  pTVar6 = (Texture *)TextureUtil::loadMaterialTexture(param_2[2],bVar4,1);
  switch(*(undefined4 *)(param_2 + 9)) {
  case 1:
  case 2:
    if (*(int *)(param_2 + 8) != 0) break;
    goto LAB_007acb70;
  case 3:
    if (*(char *)(param_2 + 8) == '\0') goto LAB_007acb70;
    break;
  case 4:
    if (*(float *)(param_2 + 8) == 0.0) goto LAB_007acb70;
    break;
  case 5:
    if ((double)param_2[8] == 0.0) goto LAB_007acb70;
    break;
  case 7:
  case 8:
    pcVar9 = param_2[8];
    goto joined_r0x007aca80;
  case 0xd:
    if ((char **)param_2[8] == (char **)0x0) goto LAB_007acb70;
    pcVar9 = *(char **)param_2[8];
joined_r0x007aca80:
    if (pcVar9 != (char *)0x0) break;
LAB_007acb70:
    local_27c = 0xffffffffffffffff;
    local_2b8 = &PTR__MaterialDesc_00fd99f8;
    local_2a8 = 1;
    local_284 = 0;
    uStack_26c = 0x3f0000003fc00000;
    local_274 = 0x3f0000003f000000;
    pcStack_2b0 = "UnnamedMaterial";
    uStack_29c = 0;
    local_2a4 = 0;
    uStack_28c = 0;
    local_294 = 0;
    local_264 = 0;
    local_254 = 1;
    local_260 = 0x3f0000003f800000;
    local_258 = 0x3d0f5c29;
    local_252 = 0;
    local_250 = 0;
    uStack_248 = 0;
    local_238[1] = (Texture *)0x0;
    local_238[0] = (Texture *)0x0;
    local_238[3] = (Texture *)0x0;
    local_238[2] = (Texture *)0x0;
    uStack_210 = 0;
    local_218 = 0;
    uStack_200 = 0;
    uStack_208 = 0;
    uStack_1f0 = 0;
    local_1f8 = 0;
    uStack_1e0 = 0;
    uStack_1e8 = 0;
    uStack_1d0 = 0;
    local_1d8 = 0;
    uStack_1c0 = 0;
    uStack_1c8 = 0;
    uStack_1b0 = 0;
    local_1b8 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_190 = 0;
    local_198 = 0;
    uStack_180 = 0;
    uStack_188 = 0;
    uStack_170 = 0;
    local_178 = 0;
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_150 = 0;
    local_158 = 0;
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_130 = 0;
    local_138 = 0;
    uStack_120 = 0;
    uStack_128 = 0;
    uStack_110 = 0;
    local_118 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_f0 = 0;
    local_f8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_d0 = 0;
    local_d8 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    local_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    local_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    local_240 = 0;
    local_78 = 0;
    GsMaterial::saveToDesc(param_1,(MaterialDesc *)&local_2b8);
    local_238[local_2bc] = pTVar6;
    pMVar7 = (MaterialManager *)MaterialManager::getInstance();
    param_1 = (GsMaterial *)MaterialManager::getMaterial(pMVar7,(MaterialDesc *)&local_2b8);
    goto LAB_007acc48;
  }
  GsMaterial::setCustomTexture(param_1,local_2bc,pTVar6);
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
  local_2a4 = 0;
  uStack_28c = 0;
  local_294 = 0;
  local_254 = 1;
  local_252 = 0;
  local_260 = 0x3f0000003f800000;
  local_258 = 0x3d0f5c29;
  local_250 = 0;
  uStack_248 = 0;
  local_238[1] = (Texture *)0x0;
  local_238[0] = (Texture *)0x0;
  local_238[3] = (Texture *)0x0;
  local_238[2] = (Texture *)0x0;
  uStack_210 = 0;
  local_218 = 0;
  uStack_200 = 0;
  uStack_208 = 0;
  uStack_1f0 = 0;
  local_1f8 = 0;
  uStack_1e0 = 0;
  uStack_1e8 = 0;
  uStack_1d0 = 0;
  local_1d8 = 0;
  uStack_1c0 = 0;
  uStack_1c8 = 0;
  uStack_1b0 = 0;
  local_1b8 = 0;
  uStack_1a0 = 0;
  uStack_1a8 = 0;
  uStack_190 = 0;
  local_198 = 0;
  uStack_180 = 0;
  uStack_188 = 0;
  uStack_170 = 0;
  local_178 = 0;
  uStack_160 = 0;
  uStack_168 = 0;
  uStack_150 = 0;
  local_158 = 0;
  uStack_140 = 0;
  uStack_148 = 0;
  uStack_130 = 0;
  local_138 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_110 = 0;
  local_118 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  uStack_f0 = 0;
  local_f8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d0 = 0;
  local_d8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b0 = 0;
  local_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  local_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  local_240 = 0;
  local_78 = 0;
  GsMaterial::saveToDesc(param_1,(MaterialDesc *)&local_2b8);
  pMVar7 = (MaterialManager *)MaterialManager::getInstance();
  MaterialManager::changeMaterial(pMVar7,param_1,(MaterialDesc *)&local_2b8,3,(GsMaterial **)0x0);
LAB_007acc48:
  __src = EngineScriptBinding::s_tempMaterials;
  if (DAT_010531e0 == DAT_010531e8) {
    __n = (long)DAT_010531e0 - (long)EngineScriptBinding::s_tempMaterials;
    uVar5 = ((long)__n >> 3) + 1;
    if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar5 <= (ulong)((long)__n >> 2)) {
      uVar5 = (long)__n >> 2;
    }
    if (0x7ffffffffffffff7 < __n) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar5 << 3);
    }
    ppGVar1 = (GsMaterial **)((long)__dest + ((long)__n >> 3) * 8);
    ppGVar2 = (GsMaterial **)((long)__dest + uVar5 * 8);
    ppGVar10 = ppGVar1 + 1;
    *ppGVar1 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    EngineScriptBinding::s_tempMaterials = __dest;
    DAT_010531e0 = ppGVar10;
    DAT_010531e8 = ppGVar2;
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *DAT_010531e0 = param_1;
    DAT_010531e0 = DAT_010531e0 + 1;
  }
  this_00 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(this_00,(Resource *)pTVar6);
LAB_007acd08:
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_2 + 0x21) = 1;
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


