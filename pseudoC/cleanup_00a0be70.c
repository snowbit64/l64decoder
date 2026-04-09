// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cleanup
// Entry Point: 00a0be70
// Size: 552 bytes
// Signature: undefined cleanup(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IndirectLightRenderController::cleanup() */

void IndirectLightRenderController::cleanup(void)

{
  long in_x0;
  long **pplVar1;
  ScreenSpaceProcessor *this;
  RenderTextureController *this_00;
  AtmosphereRenderController *this_01;
  long **pplVar2;
  
  if (*(long **)(in_x0 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x20) + 8))();
    *(undefined8 *)(in_x0 + 0x20) = 0;
  }
  if (*(long **)(in_x0 + 0x180) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x180) + 8))();
  }
  if (*(long **)(in_x0 + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x188) + 8))();
  }
  if (*(long **)(in_x0 + 400) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 400) + 8))();
  }
  if (*(long **)(in_x0 + 0x218) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x218) + 8))();
  }
  if (*(long **)(in_x0 + 0x208) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x208) + 8))();
  }
  this = *(ScreenSpaceProcessor **)(in_x0 + 0x30);
  *(undefined8 *)(in_x0 + 0x218) = 0;
  *(undefined8 *)(in_x0 + 0x208) = 0;
  *(undefined8 *)(in_x0 + 0x188) = 0;
  *(undefined8 *)(in_x0 + 400) = 0;
  *(undefined8 *)(in_x0 + 0x180) = 0;
  if (this != (ScreenSpaceProcessor *)0x0) {
    ScreenSpaceProcessor::~ScreenSpaceProcessor(this);
    operator_delete(this);
  }
  this_00 = *(RenderTextureController **)(in_x0 + 0x28);
  if (this_00 != (RenderTextureController *)0x0) {
    RenderTextureController::~RenderTextureController(this_00);
    operator_delete(this_00);
  }
  this_01 = *(AtmosphereRenderController **)(in_x0 + 0x38);
  if (this_01 != (AtmosphereRenderController *)0x0) {
    AtmosphereRenderController::~AtmosphereRenderController(this_01);
    operator_delete(this_01);
  }
  pplVar2 = *(long ***)(in_x0 + 0x1f0);
  *(RenderTextureController **)(in_x0 + 0x28) = (RenderTextureController *)0x0;
  *(undefined8 *)(in_x0 + 0x30) = 0;
  *(undefined8 *)(in_x0 + 0x38) = 0;
  if (pplVar2 != *(long ***)(in_x0 + 0x1f8)) {
    do {
      if (*pplVar2 != (long *)0x0) {
        (**(code **)(**pplVar2 + 8))();
      }
      if (pplVar2[1] != (long *)0x0) {
        (**(code **)(*pplVar2[1] + 8))();
      }
      pplVar2 = pplVar2 + 2;
    } while (pplVar2 != *(long ***)(in_x0 + 0x1f8));
    pplVar2 = *(long ***)(in_x0 + 0x1f0);
  }
  pplVar1 = *(long ***)(in_x0 + 0x1d8);
  *(long ***)(in_x0 + 0x1f8) = pplVar2;
  if (pplVar1 != *(long ***)(in_x0 + 0x1e0)) {
    do {
      if (*pplVar1 != (long *)0x0) {
        (**(code **)(**pplVar1 + 8))();
      }
      if (pplVar1[1] != (long *)0x0) {
        (**(code **)(*pplVar1[1] + 8))();
      }
      pplVar1 = pplVar1 + 2;
    } while (pplVar1 != *(long ***)(in_x0 + 0x1e0));
    pplVar1 = *(long ***)(in_x0 + 0x1d8);
  }
  *(long ***)(in_x0 + 0x1e0) = pplVar1;
  SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(in_x0 + 0x1a0));
  SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(in_x0 + 0x1b0));
  SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(in_x0 + 0x1c0));
  pplVar2 = *(long ***)(in_x0 + 0x220);
  *(undefined *)(in_x0 + 0x1d0) = 0;
  pplVar1 = *(long ***)(in_x0 + 0x228);
  if (pplVar2 != pplVar1) {
    do {
      if (*pplVar2 != (long *)0x0) {
        (**(code **)(**pplVar2 + 8))();
        pplVar1 = *(long ***)(in_x0 + 0x228);
      }
      pplVar2 = pplVar2 + 1;
    } while (pplVar2 != pplVar1);
    pplVar2 = *(long ***)(in_x0 + 0x220);
  }
  *(long ***)(in_x0 + 0x228) = pplVar2;
  if (*(long **)(in_x0 + 0x140) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x140) + 8))();
  }
  *(undefined8 *)(in_x0 + 0x140) = 0;
  return;
}


