// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createMaterials
// Entry Point: 00a76a58
// Size: 1256 bytes
// Signature: undefined __thiscall createMaterials(TerrainTransformGroup * this, IRenderDevice * param_1)


/* TerrainTransformGroup::createMaterials(IRenderDevice*) */

void __thiscall
TerrainTransformGroup::createMaterials(TerrainTransformGroup *this,IRenderDevice *param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong *puVar8;
  GsMaterial *pGVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  byte local_3c8 [16];
  void *local_3b8;
  ulong local_3b0;
  ulong uStack_3a8;
  void *local_3a0;
  ulong local_390;
  ulong uStack_388;
  char *local_380;
  undefined **local_290;
  char *local_288;
  undefined local_280;
  undefined4 local_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined8 uStack_264;
  undefined8 local_25c;
  undefined8 local_254;
  undefined8 local_24c;
  undefined8 uStack_244;
  undefined local_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined2 local_22c;
  undefined local_22a;
  CustomShader *local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_210 [4];
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
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar7 = EngineManager::getInstance();
  local_280 = 1;
  local_25c = 0;
  local_254 = 0xffffffffffffffff;
  local_290 = &PTR__MaterialDesc_00fd99f8;
  uStack_274 = 0;
  uStack_270 = 0;
  local_27c = 0;
  uStack_278 = 0;
  *(undefined4 *)(this + 0x448) = *(undefined4 *)(lVar7 + 0x210);
  uStack_264 = 0;
  uStack_26c = 0;
  uStack_268 = 0;
  local_23c = 0;
  local_22c = 1;
  local_288 = "UnnamedMaterial";
  local_22a = 0;
  local_228 = (CustomShader *)0x0;
  local_220 = 0;
  local_210[1] = 0;
  local_210[0] = 0;
  local_210[3] = 0;
  local_210[2] = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_244 = 0x3f0000003fc00000;
  local_24c = 0x3f0000003f000000;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  local_238 = 0x3f0000003f800000;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  local_230 = 0x3d0f5c29;
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
  local_218 = 0;
  local_50 = 0;
  GsMaterial::saveToDesc(*(GsMaterial **)(this + 0x4c8),(MaterialDesc *)&local_290);
  if (local_228 != (CustomShader *)0x0) {
                    /* try { // try from 00a76b58 to 00a76b5f has its CatchHandler @ 00a76f6c */
    std::__ndk1::to_string(*(uint *)(this + 0x448));
                    /* try { // try from 00a76b60 to 00a76b73 has its CatchHandler @ 00a76f58 */
    puVar8 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::insert((ulong)local_3c8,(char *)0x0);
    local_3a0 = (void *)puVar8[2];
    uStack_3a8 = puVar8[1];
    local_3b0 = *puVar8;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
                    /* try { // try from 00a76b8c to 00a76b9b has its CatchHandler @ 00a76f40 */
    puVar8 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_3b0);
    local_380 = (char *)puVar8[2];
    uStack_388 = puVar8[1];
    local_390 = *puVar8;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    if ((local_3b0 & 1) == 0) {
      if ((local_3c8[0] & 1) != 0) goto LAB_00a76c04;
LAB_00a76bc4:
      if ((uint)local_220 == 0) goto LAB_00a76c14;
LAB_00a76bcc:
                    /* try { // try from 00a76be4 to 00a76c4b has its CatchHandler @ 00a76f84 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)&local_390);
      uVar5 = (uint)local_220;
    }
    else {
      operator_delete(local_3a0);
      if ((local_3c8[0] & 1) == 0) goto LAB_00a76bc4;
LAB_00a76c04:
      operator_delete(local_3b8);
      if ((uint)local_220 != 0) goto LAB_00a76bcc;
LAB_00a76c14:
      uVar5 = 0;
    }
    pcVar1 = (char *)((ulong)&local_390 | 1);
    if ((local_390 & 1) != 0) {
      pcVar1 = local_380;
    }
    uVar5 = CustomShader::addVariationCopy(local_228,uVar5,pcVar1);
    local_220 = CONCAT44(local_220._4_4_,uVar5);
    updateMaterialParameterIndexes(this,local_228,uVar5);
    if ((local_390 & 1) != 0) {
      operator_delete(local_380);
    }
  }
  FUN_00a77228(&local_390);
  uVar5 = *(uint *)(this + 0x448);
  local_288 = (char *)&local_390;
  if (uVar5 == 0) {
    uVar10 = 0;
    uStack_278 = (undefined4)*(undefined8 *)(this + 0x2a0);
    uStack_274 = (undefined4)((ulong)*(undefined8 *)(this + 0x2a0) >> 0x20);
    goto LAB_00a76cf4;
  }
  if (*(long *)(this + 0x2a8) == 0) {
                    /* try { // try from 00a76ca0 to 00a76db3 has its CatchHandler @ 00a76fa0 */
    BaseTerrain::createNormalMapTextureArray((BaseTerrain *)(this + 0x170),param_1);
    uVar5 = *(uint *)(this + 0x448);
    if (1 < uVar5) goto LAB_00a76cb8;
LAB_00a76cdc:
    uStack_278 = (undefined4)*(undefined8 *)(this + 0x2a0);
    uStack_274 = (undefined4)((ulong)*(undefined8 *)(this + 0x2a0) >> 0x20);
    if (uVar5 == 0) {
      uVar10 = 0;
      goto LAB_00a76cf4;
    }
  }
  else {
    if (uVar5 < 2) goto LAB_00a76cdc;
LAB_00a76cb8:
    if (*(long *)(this + 0x2b0) == 0) {
      BaseTerrain::createHeightMapTextureArray((BaseTerrain *)(this + 0x170),param_1);
      uVar5 = *(uint *)(this + 0x448);
      goto LAB_00a76cdc;
    }
    uStack_278 = (undefined4)*(undefined8 *)(this + 0x2a0);
    uStack_274 = (undefined4)((ulong)*(undefined8 *)(this + 0x2a0) >> 0x20);
  }
  uVar10 = *(undefined8 *)(this + 0x2a8);
LAB_00a76cf4:
  uStack_270 = (undefined4)uVar10;
  uStack_26c = (undefined4)((ulong)uVar10 >> 0x20);
  uVar10 = BaseTerrain::getLodTextureArray();
  uVar5 = *(uint *)(this + 0x524);
  uVar11 = *(undefined8 *)(this + 0x280);
  local_210[*(uint *)(this + 0x520)] = uVar10;
  local_210[uVar5] = uVar11;
  uVar10 = BaseTerrain::getLodTextureTypeMapping();
  uVar5 = *(uint *)(this + 0x52c);
  uVar11 = *(undefined8 *)(this + 0x270);
  uVar2 = *(uint *)(this + 0x530);
  local_210[*(uint *)(this + 0x528)] = uVar10;
  uVar10 = *(undefined8 *)(this + 0x268);
  local_210[uVar5] = uVar11;
  uVar5 = *(uint *)(this + 0x534);
  uVar3 = *(uint *)(this + 0x53c);
  local_210[uVar2] = uVar10;
  uVar2 = *(uint *)(this + 0x538);
  uVar10 = *(undefined8 *)(this + 0x2b0);
  uVar11 = *(undefined8 *)(this + 600);
  local_210[uVar5] = *(undefined8 *)(this + 0x2b8);
  local_210[uVar3] = uVar10;
  local_210[uVar2] = uVar11;
  iVar6 = BaseTerrain::getHeightMapSize();
  *(float *)(&local_190 + (ulong)*(uint *)(this + 0x508) * 2) = (float)(ulong)(iVar6 - 1);
  iVar6 = BaseTerrain::getHeightMapSize();
  *(float *)((long)&local_190 + (ulong)*(uint *)(this + 0x508) * 0x10 + 4) =
       1.0 / (float)(ulong)(iVar6 - 1);
  uVar14 = BaseTerrain::getUnitsPerPixel();
  uVar5 = *(uint *)(this + 0x508);
  uVar15 = *(undefined4 *)(this + 0x214);
  uVar2 = *(uint *)(this + 0x308);
  *(undefined4 *)(&uStack_188 + (ulong)uVar5 * 2) = uVar14;
  *(undefined4 *)((long)&uStack_188 + (ulong)uVar5 * 0x10 + 4) = uVar15;
                    /* try { // try from 00a76dd0 to 00a76e47 has its CatchHandler @ 00a76fa4 */
  iVar6 = BaseTerrain::getHeightMapSize();
  uVar12 = (ulong)*(uint *)(this + 0x50c);
  *(undefined4 *)((long)&local_190 + uVar12 * 0x10 + 4) = 0;
  *(float *)(&uStack_188 + uVar12 * 2) = (float)(ulong)(iVar6 - 2);
  *(float *)(&local_190 + uVar12 * 2) = (float)(ulong)((1 << (ulong)(uVar2 & 0x1f)) + 1);
  uVar12 = BaseTerrain::getLodTextureSize();
  uVar5 = *(uint *)(this + 0x500);
  uVar2 = *(uint *)(this + 0x504);
  local_280 = 0;
  *(float *)((long)&uStack_188 + (ulong)*(uint *)(this + 0x50c) * 0x10 + 4) =
       (float)(uVar12 & 0xffffffff);
  (&local_190)[(ulong)uVar5 * 2] = 0;
  (&uStack_188)[(ulong)uVar5 * 2] = 0;
  (&local_190)[(ulong)uVar2 * 2] = 0;
  (&uStack_188)[(ulong)uVar2 * 2] = 0;
  pGVar9 = (GsMaterial *)operator_new(0x178);
                    /* try { // try from 00a76e4c to 00a76e53 has its CatchHandler @ 00a76f78 */
  GsMaterial::GsMaterial(pGVar9,(MaterialDesc *)&local_290);
  *(GsMaterial **)(this + 0x4d0) = pGVar9;
                    /* try { // try from 00a76e58 to 00a76e77 has its CatchHandler @ 00a76fa4 */
  GsMaterial::initMaterialAttributes();
  GsMaterial::validateTextures(*(GsMaterial **)(this + 0x4d0),1);
  GsMaterial::setShaderPassHandler
            (*(GsMaterial **)(this + 0x4d0),(ShaderPassHandler *)(this + 0x4e0));
  FUN_00f276d0(1,*(long *)(this + 0x4d0) + 0x28);
                    /* try { // try from 00a76e88 to 00a76e8f has its CatchHandler @ 00a76fa4 */
  pGVar9 = (GsMaterial *)operator_new(0x178);
                    /* try { // try from 00a76e94 to 00a76e9b has its CatchHandler @ 00a76f74 */
  GsMaterial::GsMaterial(pGVar9,(MaterialDesc *)&local_290);
  *(GsMaterial **)(this + 0x4d8) = pGVar9;
                    /* try { // try from 00a76ea0 to 00a76eb3 has its CatchHandler @ 00a76fa4 */
  GsMaterial::initMaterialAttributes();
  GsMaterial::validateTextures(*(GsMaterial **)(this + 0x4d8),1);
  FUN_00f276d0(1,*(long *)(this + 0x4d8) + 0x28);
  lVar7 = *(long *)(this + 0x28);
  uVar12 = *(long *)(this + 0x30) - lVar7;
  if ((int)(uVar12 >> 3) != 0) {
    lVar13 = 0;
    while( true ) {
      if (((byte)(*(GsShape **)(lVar7 + lVar13))[0x11] >> 4 & 1) != 0) {
                    /* try { // try from 00a76ef4 to 00a76ef7 has its CatchHandler @ 00a76fa8 */
        GsShape::addMaterial(*(GsShape **)(lVar7 + lVar13),*(GsMaterial **)(this + 0x4d0));
      }
      if ((uVar12 >> 3 & 0xffffffff) * 8 + -8 == lVar13) break;
      lVar7 = *(long *)(this + 0x28);
      lVar13 = lVar13 + 8;
    }
  }
                    /* try { // try from 00a76f0c to 00a76f13 has its CatchHandler @ 00a76f70 */
  updateTerrainDetailTexture();
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


