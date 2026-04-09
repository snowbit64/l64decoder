// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TextureOverlayRenderer
// Entry Point: 006f5b84
// Size: 2000 bytes
// Signature: undefined __thiscall TextureOverlayRenderer(TextureOverlayRenderer * this, IRenderDevice * param_1)


/* TextureOverlayRenderer::TextureOverlayRenderer(IRenderDevice*) */

void __thiscall
TextureOverlayRenderer::TextureOverlayRenderer(TextureOverlayRenderer *this,IRenderDevice *param_1)

{
  long **pplVar1;
  undefined2 uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  TextureOverlayRenderer *this_00;
  char *pcVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  long lVar11;
  void *pvVar12;
  long lVar13;
  undefined2 *puVar14;
  uint uVar15;
  ulong uVar16;
  TextureOverlayRenderer *pTVar17;
  undefined8 local_310;
  int local_308;
  undefined4 uStack_304;
  char *local_300;
  undefined2 *local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  char *local_2e0;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined8 local_2cc;
  undefined8 local_2c4;
  undefined4 local_2bc;
  undefined local_2b8;
  undefined8 local_2b0;
  undefined local_2a8 [4];
  undefined4 local_2a4;
  __tree_node **local_2a0;
  __tree_node *local_298;
  undefined8 local_290;
  undefined4 local_288 [2];
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined local_254;
  undefined4 local_250;
  undefined4 local_248;
  undefined8 local_244;
  undefined8 uStack_23c;
  undefined8 local_234;
  undefined8 uStack_22c;
  undefined8 local_224;
  undefined8 uStack_21c;
  undefined8 local_214;
  undefined8 uStack_20c;
  undefined8 local_204;
  undefined8 uStack_1fc;
  undefined8 local_1f4;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  uint local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined8 uStack_1bc;
  undefined8 local_1b4;
  undefined8 uStack_1ac;
  undefined8 local_1a4;
  undefined8 uStack_19c;
  undefined8 local_194;
  undefined8 uStack_18c;
  undefined8 local_184;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined4 *local_168;
  undefined2 local_160;
  undefined8 local_15c;
  undefined8 local_154;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined4 local_13c;
  undefined local_138;
  undefined8 local_134;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  char *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar16 = 0;
  pTVar17 = this + 0x38;
  *(undefined8 *)(this + 0x508) = 0;
  *(undefined8 *)(this + 0x500) = 0;
  *(undefined8 *)(this + 0x4f8) = 0;
  this[0x47c] = (TextureOverlayRenderer)0x0;
  this_00 = this;
  do {
    local_1d8 = 0;
    uStack_1d4 = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0;
    uStack_1c8 = 0;
    uStack_1c4 = 0;
    uVar15 = (uint)uVar16;
    if ((uVar16 & 1) != 0) {
                    /* try { // try from 006f5c30 to 006f5c9b has its CatchHandler @ 006f63c8 */
      this_00 = (TextureOverlayRenderer *)
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                append((char *)&local_1d8);
    }
    if ((uVar15 >> 1 & 1) != 0) {
      this_00 = (TextureOverlayRenderer *)
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                append((char *)&local_1d8);
    }
    if ((uVar15 >> 2 & 1) != 0) {
      this_00 = (TextureOverlayRenderer *)
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                append((char *)&local_1d8);
    }
    if ((uVar15 >> 3 & 1) != 0) {
      this_00 = (TextureOverlayRenderer *)
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                append((char *)&local_1d8);
    }
    if ((uVar15 >> 4 & 1) != 0) {
      this_00 = (TextureOverlayRenderer *)
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                append((char *)&local_1d8);
    }
    pcVar8 = (char *)((ulong)&local_1d8 | 1);
    if ((local_1d8 & 1) != 0) {
      pcVar8 = (char *)CONCAT44(uStack_1c4,uStack_1c8);
    }
    this_00 = (TextureOverlayRenderer *)
              loadOverlayShader(this_00,"overlay.cg",pcVar8,uVar15,(OverlayShader *)pTVar17);
    if ((local_1d8 & 1) != 0) {
      this_00 = (TextureOverlayRenderer *)CONCAT44(uStack_1c4,uStack_1c8);
      operator_delete(this_00);
    }
    uVar16 = uVar16 + 1;
    pTVar17 = (TextureOverlayRenderer *)((OverlayShader *)pTVar17 + 0x20);
  } while (uVar16 != 0x20);
  local_2a0 = &local_298;
  local_290 = 0;
  local_298 = (__tree_node *)0x0;
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar7 != 0)) {
                    /* try { // try from 006f6318 to 006f6323 has its CatchHandler @ 006f6354 */
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
  pplVar1 = (long **)(this + 0x438);
                    /* try { // try from 006f5cd4 to 006f5cef has its CatchHandler @ 006f6384 */
  ShaderManager::createProgramFromFile
            ((ShaderManager *)&ShaderManager::getInstance()::instance,"overlayVideo.cg",
             (map *)&local_2a0,(IProgramObject **)pplVar1);
  uVar15 = 0;
  *(undefined8 *)(this + 0x448) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x440) = 0xffffffffffffffff;
                    /* try { // try from 006f5d38 to 006f5d3b has its CatchHandler @ 006f63b0 */
  while (uVar5 = (**(code **)(**pplVar1 + 0x20))(), uVar15 < uVar5) {
                    /* try { // try from 006f5d50 to 006f5d57 has its CatchHandler @ 006f63a8 */
    pcVar8 = (char *)(**(code **)(**pplVar1 + 0x18))(*pplVar1,uVar15);
                    /* try { // try from 006f5d68 to 006f5d73 has its CatchHandler @ 006f63a4 */
    uVar6 = (**(code **)(**pplVar1 + 0x10))(*pplVar1,uVar15,1);
    iVar7 = strcmp(pcVar8,"Y_Tex");
    if (iVar7 == 0) {
      *(undefined4 *)(this + 0x440) = uVar6;
      uVar15 = uVar15 + 1;
    }
    else {
      iVar7 = strcmp(pcVar8,"Cb_Tex");
      if (iVar7 == 0) {
        *(undefined4 *)(this + 0x444) = uVar6;
        uVar15 = uVar15 + 1;
      }
      else {
        iVar7 = strcmp(pcVar8,"Cr_Tex");
        if (iVar7 == 0) {
          *(undefined4 *)(this + 0x448) = uVar6;
        }
        uVar15 = uVar15 + 1;
      }
    }
  }
                    /* try { // try from 006f5de0 to 006f5de3 has its CatchHandler @ 006f63ac */
  for (uVar15 = 0; uVar5 = (**(code **)(**pplVar1 + 0x38))(), uVar15 < uVar5; uVar15 = uVar15 + 1) {
                    /* try { // try from 006f5df8 to 006f5dff has its CatchHandler @ 006f63a0 */
    pcVar8 = (char *)(**(code **)(**pplVar1 + 0x30))(*pplVar1,uVar15);
                    /* try { // try from 006f5e10 to 006f5e1b has its CatchHandler @ 006f639c */
    uVar6 = (**(code **)(**pplVar1 + 0x28))(*pplVar1,uVar15,1);
    iVar7 = strcmp(pcVar8,"YCbCr_Smp");
    if (iVar7 == 0) {
      *(undefined4 *)(this + 0x44c) = uVar6;
    }
  }
  local_2a8[0] = 0;
  local_2a4 = 1;
                    /* try { // try from 006f5e50 to 006f5e5b has its CatchHandler @ 006f6380 */
  uVar9 = (**(code **)(*(long *)param_1 + 0xe0))(param_1,local_2a8);
  *(undefined8 *)this = uVar9;
  local_8c = 1;
  local_b4 = 0x900000000;
  local_94 = 0x900000000;
  local_bc = 0;
  local_ac = 0x100000001;
  local_9c = 0;
  local_88 = 0x100000001;
  local_a4 = 0x100000001;
  uStack_78 = 0x101010101010101;
  local_80 = 0x101010101010101;
  local_c0 = 7;
                    /* try { // try from 006f5ea4 to 006f5eaf has its CatchHandler @ 006f637c */
  uVar9 = (**(code **)(*(long *)param_1 + 0xf0))(param_1,&local_c0);
  *(undefined8 *)(this + 8) = uVar9;
  local_110 = 0;
  uStack_108 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0x100000001;
  uStack_f8 = 0x100000001;
  local_e0 = 0x100000001;
  uStack_d8 = 0x100000001;
  uStack_c8 = 0x101010101010101;
  local_d0 = 0x101010101010101;
                    /* try { // try from 006f5ed4 to 006f5edf has its CatchHandler @ 006f6378 */
  uVar9 = (**(code **)(*(long *)param_1 + 0xf0))(param_1,&local_110);
  *(undefined8 *)(this + 0x10) = uVar9;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0x101;
  local_254 = 0;
  local_270 = 0x100000001;
  local_250 = 0;
                    /* try { // try from 006f5f08 to 006f5f13 has its CatchHandler @ 006f6374 */
  uVar9 = (**(code **)(*(long *)param_1 + 0xe8))(param_1,&local_270);
  *(undefined8 *)(this + 0x18) = uVar9;
  local_2c4 = 0x200000002;
  local_2b8 = 0;
  local_2b0 = 0;
  local_2cc = 0x200000002;
  local_2bc = 0xbf000000;
  local_2d0 = 1;
                    /* try { // try from 006f5f48 to 006f5f6f has its CatchHandler @ 006f6390 */
  uVar9 = (**(code **)(*(long *)param_1 + 0xf8))(param_1,&local_2d0);
  *(undefined8 *)(this + 0x468) = uVar9;
  local_2d0 = 0;
  uVar9 = (**(code **)(*(long *)param_1 + 0xf8))(param_1,&local_2d0);
  *(undefined8 *)(this + 0x470) = uVar9;
  local_160 = 0;
  local_15c = 0xffffffff00000000;
  local_138 = 0;
  uStack_144 = 0;
  local_14c = 0x100000001;
  local_2d4 = 0xff000000;
  local_134 = 0x100000001;
  uStack_124 = 0x3f80000000000000;
  local_12c = 0;
  local_13c = 5;
  local_168 = &local_2d4;
  local_154 = 0x100000001;
  local_11c = 0;
  local_118 = "TextureOverlayRenderer 1x1 black texture";
                    /* try { // try from 006f5fdc to 006f5ffb has its CatchHandler @ 006f638c */
  uVar9 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
  uVar9 = (**(code **)(*(long *)param_1 + 0x100))(param_1,uVar9,&local_168);
  *(undefined8 *)(this + 0x20) = uVar9;
  uStack_19c = 0;
  local_1a4 = 0;
  uStack_18c = 0;
  local_194 = 0;
  uStack_17c = 0;
  local_184 = 0;
  uStack_170 = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  local_1b4 = 10;
  uStack_1bc = 0;
  uStack_1c4 = 0;
  uStack_1ac = 4;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  local_1d8 = 1;
  uStack_1c0 = 2;
                    /* try { // try from 006f6048 to 006f6053 has its CatchHandler @ 006f6370 */
  uVar9 = (**(code **)(*(long *)param_1 + 0x128))(param_1,&local_1d8);
  *(undefined8 *)(this + 0x28) = uVar9;
  local_248 = 1;
  uStack_22c = 0;
  local_224 = 0;
  uStack_23c = 0;
  local_244 = 0;
  uStack_20c = 0;
  local_214 = 0;
  uStack_1fc = 0;
  local_204 = 0;
  uStack_1ec = 0;
  local_1f4 = 0;
  uStack_1e0 = 0;
  uStack_1e8 = 0;
  uStack_1e4 = 0;
  local_234 = 0x200000000;
  uStack_21c = 2;
                    /* try { // try from 006f608c to 006f6097 has its CatchHandler @ 006f636c */
  uVar9 = (**(code **)(*(long *)param_1 + 0x128))(param_1,&local_248);
  *(undefined8 *)(this + 0x30) = uVar9;
                    /* try { // try from 006f609c to 006f60a3 has its CatchHandler @ 006f6368 */
  puVar10 = (undefined2 *)operator_new__(0x600);
  lVar13 = 0;
  puVar14 = puVar10;
  do {
    iVar7 = (int)lVar13;
    lVar13 = lVar13 + 1;
    uVar2 = (undefined2)(iVar7 << 2);
    *puVar14 = uVar2;
    puVar14[5] = (ushort)(iVar7 << 2) | 3;
    uVar16 = CONCAT26(uVar2,CONCAT24(uVar2,CONCAT22(uVar2,uVar2))) | 0x1000100020002;
    uVar9 = NEON_ext(uVar16,uVar16,2,1);
    *(undefined8 *)(puVar14 + 1) = uVar9;
    puVar14 = puVar14 + 6;
  } while (lVar13 != 0x80);
  local_2e8 = 0;
  local_2f0 = 0x100000600;
  local_2e0 = "TextureOverlayRenderer index buffer";
  local_2f8 = puVar10;
                    /* try { // try from 006f611c to 006f613b has its CatchHandler @ 006f6388 */
  uVar9 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
  uVar9 = (**(code **)(*(long *)param_1 + 0x110))(param_1,uVar9,&local_2f8);
  *(undefined8 *)(this + 0x450) = uVar9;
  operator_delete__(puVar10);
  local_310 = 0;
                    /* try { // try from 006f6158 to 006f619f has its CatchHandler @ 006f6394 */
  local_308 = (**(code **)(**(long **)(this + 0x28) + 0x10))(*(long **)(this + 0x28),0);
  local_308 = local_308 << 9;
  uStack_304 = 8;
  local_300 = "TextureOverlayRenderer vertex buffer";
  uVar9 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
  uVar9 = (**(code **)(*(long *)param_1 + 0x108))(param_1,uVar9,&local_310);
  *(undefined8 *)(this + 0x458) = uVar9;
  local_280 = 0;
  local_288[0] = 0x1c;
  local_278 = 8;
                    /* try { // try from 006f61c0 to 006f62c7 has its CatchHandler @ 006f6398 */
  uVar9 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
  lVar11 = (**(code **)(*(long *)param_1 + 0x118))(param_1,uVar9,local_288);
  lVar13 = 0;
  *(long *)(this + 0x460) = lVar11;
  do {
    if (*(long *)(this + lVar13 + 0x38) == 0) {
      bVar4 = true;
      if (lVar11 == 0) goto LAB_006f6258;
      goto LAB_006f621c;
    }
    lVar13 = lVar13 + 0x20;
  } while (lVar13 != 0x400);
  bVar4 = *pplVar1 == (long *)0x0;
  if (lVar11 != 0) {
LAB_006f621c:
    if ((((!bVar4) && (*(long *)this != 0)) && (*(long *)(this + 8) != 0)) &&
       (((*(long *)(this + 0x18) != 0 && (*(long *)(this + 0x28) != 0)) &&
        ((*(long *)(this + 0x450) != 0 && (*(long *)(this + 0x458) != 0)))))) {
      this[0x47c] = (TextureOverlayRenderer)0x1;
    }
  }
LAB_006f6258:
  pvVar12 = operator_new__(0x3800);
  *(void **)(this + 0x4f0) = pvVar12;
  *(undefined4 *)(this + 0x480) = 0;
  *(undefined4 *)(this + 0x478) = 0x688;
  this[0x4b0] = (TextureOverlayRenderer)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  *(undefined8 *)(this + 0x488) = 0;
  *(undefined8 *)(this + 0x4a8) = 0;
  *(undefined8 *)(this + 0x4a0) = 0;
  *(undefined8 *)(this + 0x4bc) = 0;
  *(undefined8 *)(this + 0x4b4) = 0;
  *(undefined8 *)(this + 0x498) = 0x68800000688;
  this[0x4d8] = (TextureOverlayRenderer)0x0;
  *(undefined8 *)(this + 0x4d0) = 0;
  *(undefined8 *)(this + 0x4c8) = 0;
  *(undefined8 *)(this + 0x4e4) = 0;
  *(undefined8 *)(this + 0x4dc) = 0;
  RenderDeviceUtil::makeOrthoProjectionMatrix(0.0,1.0,0.0,1.0,-1.0,1.0,(float *)(this + 0x510));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
             *)&local_2a0,local_298);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


