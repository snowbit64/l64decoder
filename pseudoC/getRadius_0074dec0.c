// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRadius
// Entry Point: 0074dec0
// Size: 280 bytes
// Signature: undefined __thiscall getRadius(DebugMarkerManager * this, TransformGroup * param_1, uchar param_2, float param_3)


/* DebugMarkerManager::getRadius(TransformGroup*, unsigned char, float) */

void __thiscall
DebugMarkerManager::getRadius
          (DebugMarkerManager *this,TransformGroup *param_1,uchar param_2,float param_3)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float local_68;
  float fStack_64;
  float local_60;
  undefined8 local_58;
  float local_50;
  undefined4 local_48 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 - 2 < 2) {
    fVar2 = param_3 * 0.5;
  }
  else {
    fVar2 = 0.0;
    if (param_2 == 1) {
      RawTransformGroup::updateWorldTransformation();
      local_58 = *(undefined8 *)(param_1 + 0xe8);
      local_50 = *(float *)(param_1 + 0xf0);
      Renderer::projectClipCoords(*(Renderer **)(this + 8),(Vector3 *)&local_58,(Vector3 *)local_48)
      ;
      uVar3 = FontOverlayRenderer::getTextWidth
                        (*(FontOverlayRenderer **)(this + 0x10),param_3,false,0,
                         *(char **)(param_1 + 8));
      local_48[0] = NEON_fmadd(uVar3,0x3f333333,local_48[0]);
      Renderer::unProjectClipCoords
                (*(Renderer **)(this + 8),(Vector3 *)local_48,(Vector3 *)&local_68);
      uVar3 = NEON_fmadd(local_58._4_4_ - fStack_64,local_58._4_4_ - fStack_64,
                         ((float)local_58 - local_68) * ((float)local_58 - local_68));
      fVar2 = (float)NEON_fmadd(local_50 - local_60,local_50 - local_60,uVar3);
      fVar2 = SQRT(fVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar2);
}


