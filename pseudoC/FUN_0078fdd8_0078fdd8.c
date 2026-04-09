// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078fdd8
// Entry Point: 0078fdd8
// Size: 420 bytes
// Signature: undefined FUN_0078fdd8(void)


void FUN_0078fdd8(undefined4 *param_1)

{
  long lVar1;
  bool bVar2;
  DeferredDebugRenderer *this;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  float local_58;
  float fStack_54;
  float local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  EngineManager::getInstance();
  this = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
  local_48 = *param_1;
  uStack_44 = param_1[4];
  local_40 = param_1[8];
  local_60 = param_1[0x20];
  local_6c = 0x3f800000;
  local_68 = param_1[0x18];
  uStack_64 = param_1[0x1c];
  local_58 = (float)param_1[0xc];
  plVar3 = (long *)0x1;
  fStack_54 = (float)param_1[0x10];
  local_78 = (float)param_1[0x24];
  uStack_74 = param_1[0x28];
  local_70 = param_1[0x2c];
  local_50 = (float)param_1[0x14];
  switch(param_1[0x32]) {
  case 1:
  case 2:
    bVar2 = param_1[0x30] == 0;
    break;
  case 3:
    bVar2 = *(char *)(param_1 + 0x30) == '\0';
    break;
  case 4:
    bVar2 = (float)param_1[0x30] == 0.0;
    break;
  case 5:
    bVar2 = *(double *)(param_1 + 0x30) == 0.0;
    break;
  default:
    goto switchD_0078fe88_caseD_6;
  case 7:
  case 8:
    lVar4 = *(long *)(param_1 + 0x30);
    goto LAB_0078feb8;
  case 0xd:
    plVar3 = *(long **)(param_1 + 0x30);
    if (plVar3 == (long *)0x0) goto switchD_0078fe88_caseD_6;
    lVar4 = *plVar3;
LAB_0078feb8:
    bVar2 = lVar4 == 0;
  }
  plVar3 = (long *)(ulong)!bVar2;
switchD_0078fe88_caseD_6:
  uVar5 = NEON_fmadd(local_58,local_58,fStack_54 * fStack_54);
  fVar6 = (float)NEON_fmadd(local_50,local_50,uVar5);
  fVar7 = 1.0 / SQRT(fVar6);
  if (fVar6 <= 1e-06) {
    fVar7 = 1.0;
  }
  local_58 = local_58 * fVar7;
  fStack_54 = fStack_54 * fVar7;
  local_50 = local_50 * fVar7;
  DeferredDebugRenderer::setNoDepthMode(this,(bool)((byte)plVar3 ^ 1));
  DeferredDebugRenderer::addSimpleArrow
            (this,(Vector3 *)&local_48,(Vector3 *)&local_58,(Vector3 *)&local_68,SQRT(fVar6),
             &local_78,0x7ff);
  DeferredDebugRenderer::setNoDepthMode(this,false);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


