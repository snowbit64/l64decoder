// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078fb84
// Entry Point: 0078fb84
// Size: 356 bytes
// Signature: undefined FUN_0078fb84(void)


void FUN_0078fb84(float *param_1)

{
  long lVar1;
  bool bVar2;
  DeferredDebugRenderer *this;
  long lVar3;
  float local_70;
  float fStack_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float local_54;
  float fStack_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float fStack_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  bVar2 = true;
  local_44 = *param_1;
  local_48 = 0x3f800000;
  fStack_40 = param_1[4];
  local_64 = 0x3f800000;
  local_3c = param_1[8];
  local_54 = param_1[0xc];
  fStack_50 = param_1[0x10];
  local_4c = param_1[0x14];
  local_60 = param_1[0x18];
  fStack_5c = param_1[0x1c];
  local_58 = param_1[0x20];
  local_70 = param_1[0x24];
  fStack_6c = param_1[0x28];
  local_68 = param_1[0x2c];
  switch(param_1[0x32]) {
  case 1.401298e-45:
  case 2.802597e-45:
    bVar2 = param_1[0x30] == 0.0;
    break;
  case 4.203895e-45:
    bVar2 = *(char *)(param_1 + 0x30) == '\0';
    break;
  case 5.605194e-45:
    bVar2 = param_1[0x30] == 0.0;
    break;
  case 7.006492e-45:
    bVar2 = *(double *)(param_1 + 0x30) == 0.0;
    break;
  default:
    goto switchD_0078fc28_caseD_6;
  case 9.809089e-45:
  case 1.121039e-44:
    lVar3 = *(long *)(param_1 + 0x30);
    goto LAB_0078fc58;
  case 1.821688e-44:
    if (*(long **)(param_1 + 0x30) == (long *)0x0) {
      bVar2 = false;
      goto switchD_0078fc28_caseD_6;
    }
    lVar3 = **(long **)(param_1 + 0x30);
LAB_0078fc58:
    bVar2 = lVar3 == 0;
  }
  bVar2 = !bVar2;
switchD_0078fc28_caseD_6:
  EngineManager::getInstance();
  this = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
  DeferredDebugRenderer::setNoDepthMode(this,(bool)(bVar2 ^ 1));
  DeferredDebugRenderer::addLine(this,&local_44,&local_54,&local_60,&local_70,0x7ff);
  DeferredDebugRenderer::setNoDepthMode(this,false);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


