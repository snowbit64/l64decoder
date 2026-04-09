// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078c0a0
// Entry Point: 0078c0a0
// Size: 1060 bytes
// Signature: undefined FUN_0078c0a0(void)


void FUN_0078c0a0(uint *param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  byte bVar7;
  size_t __n;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  ITextureObject *pIVar12;
  char *__dest;
  uint uVar13;
  undefined8 local_178;
  uchar *local_170;
  uint local_164;
  undefined8 local_160;
  size_t local_158;
  char *local_150;
  float afStack_148 [4];
  float afStack_138 [4];
  float afStack_128 [4];
  uchar *local_118;
  ulong local_110;
  float local_108;
  undefined8 local_104;
  undefined8 local_fc;
  undefined4 local_f4;
  uchar *local_f0;
  uint local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 local_cc;
  ulong local_c8;
  uchar *local_c0;
  void *pvStack_b8;
  void *local_b0;
  void *pvStack_a8;
  void *local_a0;
  void *pvStack_98;
  long local_88;
  
  lVar6 = tpidr_el0;
  local_88 = *(long *)(lVar6 + 0x28);
  *(undefined *)(param_1 + 0x40) = 0;
  uVar2 = *param_1;
  param_1[0x42] = 3;
  uVar3 = param_1[4];
  uVar4 = param_1[8];
  pcVar1 = "";
  if (*(char **)(param_1 + 0x14) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 0x14);
  }
  uVar5 = param_1[0xc];
  uVar13 = param_1[0x10];
  __n = strlen(pcVar1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (char *)((ulong)&local_160 | 1);
    local_160 = CONCAT71(local_160._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_0078c170;
  }
  else {
    uVar9 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (char *)operator_new(uVar9);
    local_160 = uVar9 | 1;
    local_158 = __n;
    local_150 = __dest;
  }
  memcpy(__dest,pcVar1,__n);
LAB_0078c170:
  __dest[__n] = '\0';
                    /* try { // try from 0078c174 to 0078c183 has its CatchHandler @ 0078c4d4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_160);
  if (uVar5 == 0) {
                    /* try { // try from 0078c188 to 0078c1c7 has its CatchHandler @ 0078c4c4 */
    SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)&local_118);
    SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)&local_108);
    SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(float *)((long)&local_fc + 4));
    lVar8 = EngineManager::getInstance();
    Renderer::setForcedIndirectDiffuseSH
              (*(Renderer **)(lVar8 + 0xb8),(float *)&local_118,&local_108,
               (float *)((long)&local_fc + 4));
  }
  if (uVar13 != 0) {
    do {
      local_164 = 0;
      pvStack_98 = (void *)0x0;
      local_a0 = (void *)0x0;
      pvStack_a8 = (void *)0x0;
      local_b0 = (void *)0x0;
      pvStack_b8 = (void *)0x0;
      local_c0 = (uchar *)0x0;
                    /* try { // try from 0078c228 to 0078c273 has its CatchHandler @ 0078c4e4 */
      lVar8 = EngineManager::getInstance();
      uVar9 = RenderQueueUtil::render360ScreenShot
                        (*(Renderer **)(lVar8 + 0xb8),uVar2,true,true,true,0,0,false,uVar4,uVar5,
                         false,false,0.5,&local_c0,&local_164);
      if ((uVar9 & 1) == 0) break;
      local_178 = 0;
      local_170 = (uchar *)0x0;
                    /* try { // try from 0078c280 to 0078c29f has its CatchHandler @ 0078c4dc */
      EnvMapFilterUtil::renderFilteredEnvMap
                (&local_c0,local_164,uVar2,4,uVar3,(uint *)&local_178,&local_170,
                 (uint *)((long)&local_178 + 4));
      if (local_c0 != (uchar *)0x0) {
        operator_delete__(local_c0);
      }
      if (pvStack_b8 != (void *)0x0) {
        operator_delete__(pvStack_b8);
      }
      if (local_b0 != (void *)0x0) {
        operator_delete__(local_b0);
      }
      if (pvStack_a8 != (void *)0x0) {
        operator_delete__(pvStack_a8);
      }
      if (local_a0 != (void *)0x0) {
        operator_delete__(local_a0);
      }
      if (pvStack_98 != (void *)0x0) {
        operator_delete__(pvStack_98);
      }
      if (local_170 == (uchar *)0x0) break;
      if (uVar13 == 1) {
        local_110 = 0x100000001;
        uStack_d0 = 0;
        local_cc = 0;
        local_c8 = local_c8 & 0xffffffffffff0000;
        local_108 = (float)((int)local_178 + -1);
        local_e8 = 0;
        uStack_e4 = 0;
        uStack_e0 = 0;
        local_dc = 0;
        local_118 = (uchar *)CONCAT44(uVar3,uVar3);
        local_104 = 0x600000004;
        local_fc = CONCAT44(local_178._4_4_,1);
        local_f0 = local_170;
        pcVar1 = (char *)((ulong)&local_160 | 1);
        if ((local_160 & 1) != 0) {
          pcVar1 = local_150;
        }
        uStack_d8 = 5;
        uStack_d4 = 0;
                    /* try { // try from 0078c348 to 0078c34f has its CatchHandler @ 0078c4cc */
        bVar7 = DDSUtil::saveImage(pcVar1,(ImageDesc *)&local_118);
        *(byte *)(param_1 + 0x40) = bVar7 & 1;
        param_1[0x42] = 3;
      }
      else {
        local_fc = 0x100000001;
        local_f4 = 0;
        local_cc = 0;
        uStack_d4 = 0;
        uStack_d0 = 0;
        uStack_ce = 0x3f80;
        local_dc = 0;
        uStack_d8 = 0;
        local_c8 = 0;
        local_110 = CONCAT44((int)local_178 + -1,(undefined4)local_110);
        local_108 = -NAN;
        local_104 = CONCAT44(uVar3,uVar3);
        local_110 = local_110 & 0xffffffffffff0000;
        local_e8 = local_e8 & 0xffffff00;
        local_f0 = (uchar *)0x1500000002;
        local_118 = local_170;
        uStack_e4 = 1;
        uStack_e0 = 1;
                    /* try { // try from 0078c3ac to 0078c3b3 has its CatchHandler @ 0078c4d8 */
        RenderDeviceManager::getInstance();
        plVar10 = (long *)RenderDeviceManager::getCurrentRenderDevice();
                    /* try { // try from 0078c3c0 to 0078c3c7 has its CatchHandler @ 0078c4c8 */
        uVar11 = (**(code **)(*plVar10 + 0x138))();
                    /* try { // try from 0078c3d0 to 0078c3ef has its CatchHandler @ 0078c4e0 */
        pIVar12 = (ITextureObject *)(**(code **)(*plVar10 + 0x100))(plVar10,uVar11,&local_118);
        lVar8 = EngineManager::getInstance();
        Renderer::setForcedEnvMap(*(Renderer **)(lVar8 + 0xb8),pIVar12);
        if (uVar5 == 0) {
                    /* try { // try from 0078c400 to 0078c433 has its CatchHandler @ 0078c4d0 */
          SphericalHarmonicsUtil::computeSHB2FromCubeMap
                    ((SHB2 *)afStack_148,(int)local_178 - 1U,local_170,5,6,uVar3,uVar3,4,
                     (int)local_178 - 1U);
          lVar8 = EngineManager::getInstance();
          Renderer::setForcedIndirectDiffuseSH
                    (*(Renderer **)(lVar8 + 0xb8),afStack_148,afStack_138,afStack_128);
        }
      }
      if (local_170 != (uchar *)0x0) {
        operator_delete__(local_170);
      }
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
                    /* try { // try from 0078c444 to 0078c46f has its CatchHandler @ 0078c4d4 */
  lVar8 = EngineManager::getInstance();
  Renderer::setForcedEnvMap(*(Renderer **)(lVar8 + 0xb8),(ITextureObject *)0x0);
  if (uVar5 == 0) {
    lVar8 = EngineManager::getInstance();
    Renderer::setForcedIndirectDiffuseSH
              (*(Renderer **)(lVar8 + 0xb8),(float *)0x0,(float *)0x0,(float *)0x0);
  }
  if ((local_160 & 1) != 0) {
    operator_delete(local_150);
  }
  if (*(long *)(lVar6 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


