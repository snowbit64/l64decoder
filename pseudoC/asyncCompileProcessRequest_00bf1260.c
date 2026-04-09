// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: asyncCompileProcessRequest
// Entry Point: 00bf1260
// Size: 1600 bytes
// Signature: undefined __cdecl asyncCompileProcessRequest(AsyncCompileRequest * param_1)


/* WARNING: Type propagation algorithm not settling */
/* ShaderManager::asyncCompileProcessRequest(ShaderManager::AsyncCompileRequest*) */

void ShaderManager::asyncCompileProcessRequest(AsyncCompileRequest *param_1)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  long lVar4;
  bool bVar5;
  ShaderManager *this;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uchar *puVar9;
  uchar *puVar10;
  uchar *puVar11;
  ShaderManager *pSVar12;
  undefined8 *in_x1;
  uint in_w2;
  undefined8 *puVar13;
  ulong *puVar14;
  uint uVar15;
  ulong *puVar16;
  uint local_388;
  uint local_384;
  uint local_380;
  uint uStack_37c;
  ulonglong local_378;
  ulong local_370;
  undefined8 local_368;
  uchar *local_360;
  byte local_358;
  void *local_348;
  ulong local_340;
  ulong local_338;
  char *local_330;
  ulong local_328;
  ulong local_320;
  uchar *local_318;
  ulong local_310;
  undefined8 local_308;
  uchar *local_300;
  byte local_2f8;
  void *local_2e8;
  uchar *local_2e0;
  uint local_2d4;
  ShaderHash aSStack_2d0 [16];
  ShaderHash aSStack_2c0 [16];
  ShaderHash aSStack_2b0 [16];
  undefined8 local_2a0;
  undefined8 uStack_298;
  void *local_290;
  ShaderStructLayout *local_288;
  long lStack_280;
  undefined8 local_278;
  ulong local_270;
  ulong local_268;
  char *local_260;
  char acStack_258 [512];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_2d4 = 0;
  local_2e0 = (uchar *)0x0;
  pSVar12 = (ShaderManager *)((long)in_x1 + 0x21);
  uVar15 = (uint)(*(byte *)(in_x1 + 4) >> 1);
  if ((*(byte *)(in_x1 + 4) & 1) != 0) {
    pSVar12 = (ShaderManager *)in_x1[6];
    uVar15 = *(uint *)(in_x1 + 5);
  }
  getMD5asBase64(pSVar12,(uchar *)(ulong)uVar15,in_w2);
  if (*(long *)(param_1 + 8) != 0) {
                    /* try { // try from 00bf12dc to 00bf1357 has its CatchHandler @ 00bf1994 */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
    FUN_00bf09e0(acStack_258);
    this = (ShaderManager *)
           KeyValueCacheClient::getValue
                     (*(KeyValueCacheClient **)(param_1 + 8),KeyValueCacheClient::APP_SHADER_PROGRAM
                      ,acStack_258,&local_2d4,&local_2e0);
    if (((ulong)this & 1) != 0) {
      local_370 = 0;
      local_368 = 0;
      local_360 = (uchar *)0x0;
      local_310 = 0;
      local_308 = 0;
      local_300 = (uchar *)0x0;
      local_328 = 0;
      local_320 = 0;
      local_318 = (uchar *)0x0;
      local_340 = 0;
      local_338 = 0;
      local_330 = (char *)0x0;
                    /* try { // try from 00bf1380 to 00bf144b has its CatchHandler @ 00bf1944 */
      deserializeShaderPrg
                (this,local_2e0,(ShaderHash *)&local_270,(basic_string *)&local_370,
                 (ShaderHash *)&local_288,(basic_string *)&local_310,(ShaderHash *)&local_2a0,
                 (basic_string *)&local_328,(vector *)&local_340);
      if (local_2e0 != (uchar *)0x0) {
        operator_delete__(local_2e0);
      }
      puVar9 = (uchar *)((ulong)&local_370 | 1);
      uVar15 = (uint)((byte)local_370 >> 1);
      if ((local_370 & 1) != 0) {
        puVar9 = local_360;
        uVar15 = (uint)local_368;
      }
      bVar5 = (local_310 & 1) != 0;
      uVar1 = (uint)((byte)local_310 >> 1);
      if (bVar5) {
        uVar1 = (uint)local_308;
      }
      puVar10 = (uchar *)((ulong)&local_310 | 1);
      if (bVar5) {
        puVar10 = local_300;
      }
      bVar5 = (local_328 & 1) != 0;
      uVar2 = (uint)((byte)local_328 >> 1);
      if (bVar5) {
        uVar2 = (uint)local_320;
      }
      puVar11 = (uchar *)((ulong)&local_328 | 1);
      if (bVar5) {
        puVar11 = local_318;
      }
      addCompiledProgramThreadSafe
                ((ShaderManager *)param_1,(__map_iterator)*in_x1,(ShaderHash *)&local_270,uVar15,
                 puVar9,(__map_iterator)in_x1[1],(ShaderHash *)&local_288,uVar1,puVar10,
                 (__map_iterator)in_x1[2],(ShaderHash *)&local_2a0,uVar2,puVar11,
                 (__map_iterator)in_x1[3],(vector *)&local_340);
      std::__ndk1::__vector_base<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
      ~__vector_base((__vector_base<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *
                     )&local_340);
      if ((local_328 & 1) != 0) {
        operator_delete(local_318);
      }
      puVar9 = local_360;
      uVar7 = local_370;
      if ((local_310 & 1) != 0) {
        operator_delete(local_300);
        puVar9 = local_360;
        uVar7 = local_370;
      }
      goto joined_r0x00bf1610;
    }
  }
  local_310 = 0;
  local_308 = 0;
  local_300 = (uchar *)0x0;
                    /* try { // try from 00bf1478 to 00bf1493 has its CatchHandler @ 00bf199c */
  lVar6 = Watch::getCurrentTicks();
  uVar7 = preprocessShaderString(uVar15,(char *)pSVar12,(basic_string *)&local_310,false);
  if ((uVar7 & 1) == 0) {
    param_1[0x90] = (AsyncCompileRequest)0x1;
    puVar9 = local_300;
    uVar7 = local_310;
    goto joined_r0x00bf1610;
  }
                    /* try { // try from 00bf1498 to 00bf149b has its CatchHandler @ 00bf1940 */
  lVar8 = Watch::getCurrentTicks();
  FUN_00f27730(lVar8 - lVar6,param_1 + 0x178);
  FUN_00f27700(1,param_1 + 0x180);
  local_328 = 0;
  local_320 = 0;
  local_318 = (uchar *)0x0;
  local_340 = 0;
  local_338 = 0;
  local_330 = (char *)0x0;
  local_270 = 0;
  local_268 = 0;
  local_260 = (char *)0x0;
  local_288 = (ShaderStructLayout *)0x0;
  lStack_280 = 0;
  local_278 = 0;
                    /* try { // try from 00bf14d4 to 00bf14db has its CatchHandler @ 00bf1938 */
  CodeStringStream::CodeStringStream((CodeStringStream *)&local_370);
                    /* try { // try from 00bf14dc to 00bf14df has its CatchHandler @ 00bf18cc */
  lVar6 = Watch::getCurrentTicks();
  puVar9 = (uchar *)((ulong)&local_310 | 1);
  if ((local_310 & 1) != 0) {
    puVar9 = local_300;
  }
  puVar13 = in_x1 + 7;
  pcVar3 = (char *)((long)in_x1 + 0x61);
  if ((*(byte *)(in_x1 + 0xc) & 1) != 0) {
    pcVar3 = (char *)in_x1[0xe];
  }
  local_2a0 = CONCAT44(local_2a0._4_4_,**(undefined4 **)(param_1 + 0x18));
                    /* try { // try from 00bf1524 to 00bf154f has its CatchHandler @ 00bf18c8 */
  puVar14 = &local_340;
  puVar16 = &local_270;
  uVar7 = ShaderConverter::convertFromGISL
                    (*(ShaderConverter **)(param_1 + 0x88),(char *)puVar9,
                     (ShaderLanguage *)&local_2a0,(map *)puVar13,(basic_string *)&local_328,
                     (basic_string *)puVar14,(basic_string *)puVar16,(vector *)&local_288,
                     &uStack_37c,(CodeStringStream *)&local_370,&local_378,pcVar3);
  uVar15 = (uint)puVar16;
  if ((uVar7 & 1) == 0) {
    param_1[0x90] = (AsyncCompileRequest)0x1;
  }
  else {
                    /* try { // try from 00bf1554 to 00bf1557 has its CatchHandler @ 00bf18ac */
    lVar8 = Watch::getCurrentTicks();
    FUN_00f27730(local_378,param_1 + 0x188);
    FUN_00f27700(1,param_1 + 400);
    FUN_00f27730(lVar8 - (lVar6 + local_378),param_1 + 0x198);
    FUN_00f27700(1,param_1 + 0x1a0);
    local_2a0 = 0;
    uStack_298 = 0;
    local_290 = (void *)0x0;
                    /* try { // try from 00bf159c to 00bf15a7 has its CatchHandler @ 00bf18a8 */
    StringStream::resolve((StringStream *)&local_370,(basic_string *)&local_2a0);
    local_380 = 0;
    uVar7 = local_328 >> 1 & 0x7f;
    if ((local_328 & 1) != 0) {
      uVar7 = local_320;
    }
    if (uVar7 == 0) {
      puVar9 = (uchar *)0x0;
      bVar5 = true;
    }
    else {
      puVar9 = (uchar *)((ulong)&local_328 | 1);
      if ((local_328 & 1) != 0) {
        puVar9 = local_318;
      }
                    /* try { // try from 00bf15dc to 00bf15f3 has its CatchHandler @ 00bf18a4 */
      puVar9 = (uchar *)doCompileShaderAsync
                                  ((ShaderManager *)param_1,(char *)puVar9,0,(basic_string *)puVar13
                                   ,(__map_iterator)*in_x1,(uchar *)puVar14,uVar15,&local_380,
                                   aSStack_2b0);
      bVar5 = puVar9 != (uchar *)0x0;
    }
    local_384 = 0;
    uVar7 = local_340 >> 1 & 0x7f;
    if ((local_340 & 1) != 0) {
      uVar7 = local_338;
    }
    if (uVar7 == 0) {
      puVar10 = (uchar *)0x0;
    }
    else {
      pcVar3 = (char *)((ulong)&local_340 | 1);
      if ((local_340 & 1) != 0) {
        pcVar3 = local_330;
      }
                    /* try { // try from 00bf1688 to 00bf169f has its CatchHandler @ 00bf18a0 */
      puVar10 = (uchar *)doCompileShaderAsync
                                   ((ShaderManager *)param_1,pcVar3,1,(basic_string *)puVar13,
                                    (__map_iterator)in_x1[1],(uchar *)puVar14,uVar15,&local_384,
                                    aSStack_2c0);
      bVar5 = (bool)(bVar5 & puVar10 != (uchar *)0x0);
    }
    local_388 = 0;
    uVar7 = local_270 >> 1 & 0x7f;
    if ((local_270 & 1) != 0) {
      uVar7 = local_268;
    }
    if (uVar7 == 0) {
      puVar11 = (uchar *)0x0;
      if (bVar5) goto LAB_00bf1724;
    }
    else {
      pcVar3 = (char *)((ulong)&local_270 | 1);
      if ((local_270 & 1) != 0) {
        pcVar3 = local_260;
      }
                    /* try { // try from 00bf16ec to 00bf17a3 has its CatchHandler @ 00bf18b0 */
      puVar11 = (uchar *)doCompileShaderAsync
                                   ((ShaderManager *)param_1,pcVar3,2,(basic_string *)puVar13,
                                    (__map_iterator)in_x1[2],(uchar *)puVar14,uVar15,&local_388,
                                    aSStack_2d0);
      if ((bool)(bVar5 & puVar11 != (uchar *)0x0)) {
LAB_00bf1724:
        pSVar12 = (ShaderManager *)
                  CompiledShaderArchive::compileProgramThreadSafe
                            (*(CompiledShaderArchive **)param_1,(__map_iterator)in_x1[3],
                             (__map_iterator)*in_x1,(__map_iterator)in_x1[1],
                             (__map_iterator)in_x1[2],
                             (uint)((ulong)(lStack_280 - (long)local_288) >> 6),local_288);
        if (*(long *)(param_1 + 8) != 0) {
          local_2d4 = 0;
          local_2e0 = (uchar *)0x0;
          serializeShaderPrg(pSVar12,&local_2e0,&local_2d4,aSStack_2b0,local_380,puVar9,aSStack_2c0,
                             local_384,puVar10,aSStack_2d0,local_388,puVar11,(vector *)&local_288);
          KeyValueCacheClient::setValue
                    (*(KeyValueCacheClient **)(param_1 + 8),KeyValueCacheClient::APP_SHADER_PROGRAM,
                     acStack_258,local_2d4,local_2e0);
          if (local_2e0 != (uchar *)0x0) {
            operator_delete__(local_2e0);
          }
        }
      }
    }
    if (puVar9 != (uchar *)0x0) {
      operator_delete__(puVar9);
    }
    if (puVar10 != (uchar *)0x0) {
      operator_delete__(puVar10);
    }
    if (puVar11 != (uchar *)0x0) {
      operator_delete__(puVar11);
    }
    if ((local_2a0 & 1) != 0) {
      operator_delete(local_290);
    }
  }
  if ((local_358 & 1) != 0) {
    operator_delete(local_348);
  }
  StringStream::~StringStream((StringStream *)&local_370);
  std::__ndk1::__vector_base<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
  ~__vector_base((__vector_base<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)
                 &local_288);
  if ((local_270 & 1) != 0) {
    operator_delete(local_260);
  }
  if ((local_340 & 1) != 0) {
    operator_delete(local_330);
  }
  puVar9 = local_300;
  uVar7 = local_310;
  if ((local_328 & 1) != 0) {
    operator_delete(local_318);
    puVar9 = local_300;
    uVar7 = local_310;
  }
joined_r0x00bf1610:
  if ((uVar7 & 1) != 0) {
    operator_delete(puVar9);
  }
  if ((local_2f8 & 1) != 0) {
    operator_delete(local_2e8);
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


