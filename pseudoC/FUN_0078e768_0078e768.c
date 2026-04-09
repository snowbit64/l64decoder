// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078e768
// Entry Point: 0078e768
// Size: 132 bytes
// Signature: undefined FUN_0078e768(void)


void FUN_0078e768(float *param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = 0.0;
  lVar2 = EngineManager::getInstance();
  fVar3 = (float)FontOverlayRenderer::getTextHeight
                           (*(FontOverlayRenderer **)(lVar2 + 0xf8),*param_1,false,0,
                            *(char **)(param_1 + 4),(uint *)&local_2c);
  param_1[0x40] = fVar3;
  param_1[0x42] = 5.605194e-45;
  param_1[0x44] = local_2c;
  param_1[0x46] = 1.401298e-45;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


