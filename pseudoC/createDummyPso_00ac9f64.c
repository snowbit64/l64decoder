// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createDummyPso
// Entry Point: 00ac9f64
// Size: 1100 bytes
// Signature: undefined createDummyPso(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanCommandBuffer::createDummyPso() */

void VulkanCommandBuffer::createDummyPso(void)

{
  long lVar1;
  long in_x0;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long *plVar4;
  VulkanShaderObject *pVVar5;
  VulkanShaderObject *pVVar6;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  long *local_4e8;
  long local_4e0;
  undefined8 *puStack_4d8;
  undefined8 local_4d0;
  undefined4 *puStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *local_4b8;
  undefined8 *local_4b0;
  undefined8 *puStack_4a8;
  undefined8 *puStack_4a0;
  long local_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  VulkanShaderCreator aVStack_470 [16];
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined4 uStack_420;
  undefined4 local_41c;
  undefined4 uStack_418;
  undefined4 local_414;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined4 *puStack_3a8;
  undefined4 local_3a0 [2];
  undefined8 local_398;
  undefined8 local_390;
  undefined8 *local_388;
  undefined4 local_380;
  undefined8 *local_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined4 uStack_330;
  undefined4 local_32c;
  undefined4 uStack_328;
  undefined4 local_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined4 local_2e0 [2];
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 *local_2c8;
  undefined4 local_2c0;
  undefined8 *local_2b8;
  undefined4 local_2b0;
  undefined8 *local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined8 *local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 local_210;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined *local_1e0;
  undefined8 local_1d8;
  undefined local_1d0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined4 local_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(in_x0 + 0xb58) == 0) && (*(long *)(in_x0 + 0xb60) == 0)) {
    local_260 = &local_238;
    local_2b8 = &local_280;
    local_210 = 2;
    uStack_228 = 0x200000001;
    local_230 = 0x2500000000;
    uStack_218 = 1;
    uStack_220 = 0x200000000;
    local_238 = 0x200000000;
    uStack_298 = 0x40000000400;
    local_2a0 = 0xffffffff;
    local_280 = 0;
    local_2e0[0] = 0x26;
    local_2c8 = &local_230;
    local_278 = 0;
    local_268 = 1;
    local_2a8 = &local_2a0;
    local_240 = 0;
    local_250 = 0;
    local_258 = 0;
    local_248 = 0;
    local_290 = 0x10000000000;
    local_288 = 0;
    local_2c0 = 1;
    local_2b0 = 1;
    local_270 = 0;
    local_2d8 = 0;
    local_2d0 = 0x100000000;
    (*vkCreateRenderPass)(*(undefined8 *)(*(long *)(in_x0 + 0x98) + 0x18),local_2e0,0,in_x0 + 0xb60)
    ;
    local_8c = 0;
    uStack_2f8 = 0;
    uStack_2e8 = 0;
    local_300 = 0x14;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_314 = 0;
    uStack_310 = 0;
    local_340 = 0x17;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    local_7c = 0xf;
    local_308 = 0x3f800000;
    local_b0 = &local_98;
    uStack_2f0 = 0x300000000;
    local_d0 = 0x1a;
    local_378 = &local_370;
    local_32c = 0;
    uStack_328 = 0;
    local_324 = 0;
    uStack_320 = 0;
    uStack_31c = 0;
    uStack_318 = 0;
    local_94 = 0;
    local_84 = 0;
    local_3a0[0] = 0x16;
    local_388 = &uStack_360;
    local_98 = 0;
    uStack_b8 = 0x100000000;
    local_a0 = 0;
    local_350 = 0x447a00003dcccccd;
    uStack_368 = 0x100000001;
    local_370 = 0;
    uStack_358 = 0x3f8000003f800000;
    uStack_360 = 0;
    local_398 = 0;
    local_390 = 0x100000000;
    local_380 = 1;
    puVar2 = (undefined4 *)operator_new(4);
    *puVar2 = 0;
                    /* try { // try from 00aca158 to 00aca15f has its CatchHandler @ 00aca3ec */
    puVar3 = (undefined4 *)operator_new(8);
    *puVar3 = *puVar2;
    puVar3[1] = 1;
    operator_delete(puVar2);
    uStack_3b8 = 0;
    local_3d0 = 0;
    local_3c0 = 0x1b;
    uStack_3e8 = 0;
    uStack_3e4 = 0;
    uStack_3d8 = 0;
    uStack_3dc = 0;
    uStack_3ec = 0;
    local_3e0 = 7;
    uStack_428 = 0;
    uStack_420 = 0;
    local_41c = 1;
    uStack_418 = 1;
    uStack_408 = 0;
    local_410 = 0;
    local_430 = 0x19;
    uStack_400 = 0;
    local_3b0 = 0x200000000;
    local_414 = 3;
    uStack_3f4 = 0;
    local_3f0 = 0;
    uStack_3fc = 7;
    uStack_3f8 = 0;
    uStack_458 = 0;
    uStack_448 = 0;
    uStack_438 = 0;
    local_440 = 0;
    local_460 = 0x18;
    uStack_450 = 0x100000000;
    puStack_3a8 = puVar3;
                    /* try { // try from 00aca1fc to 00aca1ff has its CatchHandler @ 00aca3e4 */
    plVar4 = (long *)(**(code **)(**(long **)(in_x0 + 0x98) + 0x88))();
    local_1d0 = 0;
    local_d4 = 0;
    local_1f0 = 0;
    local_1e0 = s_blitShaderVs;
    local_1d8 = 0x6e69616d00000006;
    local_1e8 = 0;
                    /* try { // try from 00aca23c to 00aca247 has its CatchHandler @ 00aca3dc */
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_1e0,&local_1f0);
    local_200 = 0;
    local_d4 = 1;
    local_1f8 = 0;
    local_1e0 = s_blitShaderFs;
                    /* try { // try from 00aca270 to 00aca27f has its CatchHandler @ 00aca3d4 */
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_1e0,&local_200);
                    /* try { // try from 00aca284 to 00aca28b has its CatchHandler @ 00aca3cc */
    VulkanShaderCreator::VulkanShaderCreator(aVStack_470,*(VulkanRenderDevice **)(in_x0 + 0x98));
                    /* try { // try from 00aca28c to 00aca297 has its CatchHandler @ 00aca3bc */
    pVVar5 = (VulkanShaderObject *)
             VulkanShaderCreator::createShaderObject
                       (aVStack_470,(CompiledShaderObjectDesc *)&local_1f0);
                    /* try { // try from 00aca29c to 00aca2a7 has its CatchHandler @ 00aca3b8 */
    pVVar6 = (VulkanShaderObject *)
             VulkanShaderCreator::createShaderObject
                       (aVStack_470,(CompiledShaderObjectDesc *)&local_200);
                    /* try { // try from 00aca2b0 to 00aca2b7 has its CatchHandler @ 00aca3b4 */
    plVar4 = (long *)VulkanRenderDevice::createProgramObject
                               (*(VulkanRenderDevice **)(in_x0 + 0x98),pVVar5,pVVar6);
    local_4e8 = plVar4 + 0x10;
    puStack_4c0 = &local_340;
    puStack_4c8 = local_3a0;
    uStack_4f8 = 0;
    uStack_488 = 0;
    uStack_478 = 0;
    uStack_480 = 0;
    local_4d0 = 0;
    uStack_4f0 = 0x200000000;
    puStack_4d8 = &local_300;
    puStack_4a8 = &local_d0;
    puStack_4a0 = &local_3c0;
    local_4e0 = *(long *)(*(long *)(in_x0 + 0xa8) + 8) + 8;
    local_4b8 = &local_460;
    local_4b0 = &local_430;
    local_490 = *(undefined8 *)(in_x0 + 0xb60);
    local_500 = 0x1c;
    local_498 = plVar4[0x3c];
                    /* try { // try from 00aca348 to 00aca357 has its CatchHandler @ 00aca3b0 */
    (*vkCreateGraphicsPipelines)
              (*(undefined8 *)(*(long *)(in_x0 + 0x98) + 0x18),*(undefined8 *)(in_x0 + 0x90),1,
               &local_500,0,in_x0 + 0xb58);
    (**(code **)(*plVar4 + 8))(plVar4);
    VulkanShaderCreator::~VulkanShaderCreator(aVStack_470);
    operator_delete(puVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


