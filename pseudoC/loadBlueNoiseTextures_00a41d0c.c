// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadBlueNoiseTextures
// Entry Point: 00a41d0c
// Size: 212 bytes
// Signature: undefined loadBlueNoiseTextures(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ShadowBufferRenderController::loadBlueNoiseTextures() */

void ShadowBufferRenderController::loadBlueNoiseTextures(void)

{
  long lVar1;
  long in_x0;
  undefined8 uVar2;
  bool abStack_15c [4];
  char *local_158;
  undefined *local_150;
  char acStack_148 [128];
  undefined auStack_c8 [128];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00a41de0(acStack_148,0x100,"shared/blueNoise/hdr_r_64x64_%u.png",0);
  local_158 = acStack_148;
  FUN_00a41de0(auStack_c8,0x80,"shared/blueNoise/hdr_r_64x64_%u.png",1);
  local_150 = auStack_c8;
  uVar2 = TextureUtil::createTextureArray
                    (&local_158,2,1,2,true,false,"blue noise single channel texture array",
                     *(IRenderDevice **)(in_x0 + 0x28),false,7,abStack_15c);
  *(undefined8 *)(in_x0 + 0x21d8) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


