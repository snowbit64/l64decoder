// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateLodDistances
// Entry Point: 00a617f4
// Size: 348 bytes
// Signature: undefined updateLodDistances(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FoliageLayerGraphics::updateLodDistances() */

void FoliageLayerGraphics::updateLodDistances(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  CustomShader *this;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  uint local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = EngineManager::getInstance();
  lVar4 = *(long *)(in_x0 + 0x50);
  fVar6 = *(float *)(lVar2 + 0x1cc);
  if (*(long *)(in_x0 + 0x58) != lVar4) {
    uVar5 = 0;
    do {
      lVar4 = lVar4 + uVar5 * 0x98;
      *(ulong *)(lVar4 + 0x30) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0x18) >> 0x20) * fVar6,
                    (float)*(undefined8 *)(lVar4 + 0x18) * fVar6);
      *(undefined8 *)(lVar4 + 0x28) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0x10) >> 0x20) * fVar6,
                    (float)*(undefined8 *)(lVar4 + 0x10) * fVar6);
      *(ulong *)(lVar4 + 0x38) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0x20) >> 0x20) * fVar6 * fVar6,
                    (float)*(undefined8 *)(lVar4 + 0x20) * fVar6 * fVar6);
      this = (CustomShader *)GsMaterial::getCustomShader();
      if ((this != (CustomShader *)0x0) &&
         (uVar3 = CustomShader::getParameterIndex
                            (this,*(uint *)(*(GsMaterial **)(lVar4 + 8) + 0x88),"fadeInOutStartEnd",
                             &local_5c), (uVar3 & 1) != 0)) {
        GsMaterial::setCustomParameter
                  (*(GsMaterial **)(lVar4 + 8),local_5c,(float *)(undefined8 *)(lVar4 + 0x28));
      }
      lVar4 = *(long *)(in_x0 + 0x50);
      uVar5 = (ulong)((int)uVar5 + 1);
      uVar3 = (*(long *)(in_x0 + 0x58) - lVar4 >> 3) * -0x79435e50d79435e5;
    } while (uVar5 <= uVar3 && uVar3 - uVar5 != 0);
  }
  lVar4 = *(long *)(in_x0 + 8);
  lVar2 = *(long *)(in_x0 + 0x10) - lVar4;
  if (lVar2 != 0) {
    uVar5 = 0;
    uVar3 = (lVar2 >> 3) * 0x2e8ba2e8ba2e8ba3;
    do {
      lVar2 = lVar4 + uVar5 * 0x58;
      uVar5 = (ulong)((int)uVar5 + 1);
      *(float *)(lVar2 + 0x54) = fVar6 * *(float *)(lVar2 + 0x50);
    } while (uVar5 <= uVar3 && uVar3 - uVar5 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


